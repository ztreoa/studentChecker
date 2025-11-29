#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    int choice;
    string studentName = "";
    int studentAge = 0;
    int age;
    int studentGrade = 0;
    bool studentAdded = false;
    while (true) {
        cout << "--------------------------\n";
        cout << "[1] Add Student Info\n";
        cout << "[2] Show Student Info\n";
        cout << "[3] Grade Evaluator\n";
        cout << "[4] Age Check\n";
        cout << "[5] Exit\n";
        cout << "--------------------------\n";
        cout << "your choice: ";
        cin >> choice;
        if (choice == 3) {
            if (!studentAdded) {
                cout << "no student added yet. \n";
                Sleep(2000);
                system("cls");
                continue;
            }
            cout << "your grade (" << studentGrade << ") is: ";
            switch (studentGrade) {
            case 1:
                cout << "Excellent!";
                break;
            case 2:
                cout << "Very Good!";
                break;
            case 3:
                cout << "Good!";
                break;
            case 4:
                cout << "Poor!";
                break;
            case 5:
                cout << "Fail!";
                break;
            default:
                cout << "Invalid grade!";
                break;
            }
            cout << endl;
            Sleep(2000);
            system("cls");
            continue;
        }


        if (choice == 5) {
            cout << "goodbye!";
            Sleep(2500);
            break;
        }

        if (choice == 4) {
            cout << "your age: ";
            cin >> age;
            Sleep(1500);
            cout << "your age in 5 years: " << age + 5 << endl;
            Sleep(1500);
            if (age < 0) {
                cout << "Invalid age!";
                continue;
            }
            if (age == 18) {
                cout << "you are exactly 18!\n";
                Sleep(2000);
            }
            else if (age >= 18) {
                cout << "you are a Adult\n";
                Sleep(2000);
            }
            else if (age >= 14 && age <= 17) {
                cout << "you are a teenager\n";
                Sleep(2000);
            }
            if (age <= 13) {
                cout << "you are a Child\n";
                Sleep(1000);
            }
            system("pause");
            system("cls");
            cout << "\n";
            continue;
        }
        if (choice == 1) {
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, studentName);
            cout << "Enter age: ";
            cin >> studentAge;
            cout << "Enter grade (1-5): ";
            cin >> studentGrade;
            studentAdded = true;
            Sleep(1000);
            cout << "\n";
            cout << "saved!";
            Sleep(1500);
            system("cls");
            continue;
        }
        if (choice == 2) {
            if (studentAdded == false) {
                cout << "No student added yet.\n";
                Sleep(2000);
            }
            else {
                cout << "Student name: " << studentName << "\n";
                cout << "Student age: " << studentAge << "\n";
                cout << "Student grade: " << studentGrade << "\n";
                Sleep(2000);
            }
        }
        system("cls");
        continue;
        if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5) {
            cout << "unavailable choice.";
            Sleep(2000);
            system("cls");
            continue;
        }
        system("pause");
        system("cls");
    }
    return 0;
}