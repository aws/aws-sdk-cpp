/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/devicefarm/model/TestType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace TestTypeMapper
      {

        static const int BUILTIN_FUZZ_HASH = HashingUtils::HashString("BUILTIN_FUZZ");
        static const int BUILTIN_EXPLORER_HASH = HashingUtils::HashString("BUILTIN_EXPLORER");
        static const int APPIUM_JAVA_JUNIT_HASH = HashingUtils::HashString("APPIUM_JAVA_JUNIT");
        static const int APPIUM_JAVA_TESTNG_HASH = HashingUtils::HashString("APPIUM_JAVA_TESTNG");
        static const int APPIUM_PYTHON_HASH = HashingUtils::HashString("APPIUM_PYTHON");
        static const int APPIUM_WEB_JAVA_JUNIT_HASH = HashingUtils::HashString("APPIUM_WEB_JAVA_JUNIT");
        static const int APPIUM_WEB_JAVA_TESTNG_HASH = HashingUtils::HashString("APPIUM_WEB_JAVA_TESTNG");
        static const int APPIUM_WEB_PYTHON_HASH = HashingUtils::HashString("APPIUM_WEB_PYTHON");
        static const int CALABASH_HASH = HashingUtils::HashString("CALABASH");
        static const int INSTRUMENTATION_HASH = HashingUtils::HashString("INSTRUMENTATION");
        static const int UIAUTOMATION_HASH = HashingUtils::HashString("UIAUTOMATION");
        static const int UIAUTOMATOR_HASH = HashingUtils::HashString("UIAUTOMATOR");
        static const int XCTEST_HASH = HashingUtils::HashString("XCTEST");
        static const int XCTEST_UI_HASH = HashingUtils::HashString("XCTEST_UI");


        TestType GetTestTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILTIN_FUZZ_HASH)
          {
            return TestType::BUILTIN_FUZZ;
          }
          else if (hashCode == BUILTIN_EXPLORER_HASH)
          {
            return TestType::BUILTIN_EXPLORER;
          }
          else if (hashCode == APPIUM_JAVA_JUNIT_HASH)
          {
            return TestType::APPIUM_JAVA_JUNIT;
          }
          else if (hashCode == APPIUM_JAVA_TESTNG_HASH)
          {
            return TestType::APPIUM_JAVA_TESTNG;
          }
          else if (hashCode == APPIUM_PYTHON_HASH)
          {
            return TestType::APPIUM_PYTHON;
          }
          else if (hashCode == APPIUM_WEB_JAVA_JUNIT_HASH)
          {
            return TestType::APPIUM_WEB_JAVA_JUNIT;
          }
          else if (hashCode == APPIUM_WEB_JAVA_TESTNG_HASH)
          {
            return TestType::APPIUM_WEB_JAVA_TESTNG;
          }
          else if (hashCode == APPIUM_WEB_PYTHON_HASH)
          {
            return TestType::APPIUM_WEB_PYTHON;
          }
          else if (hashCode == CALABASH_HASH)
          {
            return TestType::CALABASH;
          }
          else if (hashCode == INSTRUMENTATION_HASH)
          {
            return TestType::INSTRUMENTATION;
          }
          else if (hashCode == UIAUTOMATION_HASH)
          {
            return TestType::UIAUTOMATION;
          }
          else if (hashCode == UIAUTOMATOR_HASH)
          {
            return TestType::UIAUTOMATOR;
          }
          else if (hashCode == XCTEST_HASH)
          {
            return TestType::XCTEST;
          }
          else if (hashCode == XCTEST_UI_HASH)
          {
            return TestType::XCTEST_UI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestType>(hashCode);
          }

          return TestType::NOT_SET;
        }

        Aws::String GetNameForTestType(TestType enumValue)
        {
          switch(enumValue)
          {
          case TestType::BUILTIN_FUZZ:
            return "BUILTIN_FUZZ";
          case TestType::BUILTIN_EXPLORER:
            return "BUILTIN_EXPLORER";
          case TestType::APPIUM_JAVA_JUNIT:
            return "APPIUM_JAVA_JUNIT";
          case TestType::APPIUM_JAVA_TESTNG:
            return "APPIUM_JAVA_TESTNG";
          case TestType::APPIUM_PYTHON:
            return "APPIUM_PYTHON";
          case TestType::APPIUM_WEB_JAVA_JUNIT:
            return "APPIUM_WEB_JAVA_JUNIT";
          case TestType::APPIUM_WEB_JAVA_TESTNG:
            return "APPIUM_WEB_JAVA_TESTNG";
          case TestType::APPIUM_WEB_PYTHON:
            return "APPIUM_WEB_PYTHON";
          case TestType::CALABASH:
            return "CALABASH";
          case TestType::INSTRUMENTATION:
            return "INSTRUMENTATION";
          case TestType::UIAUTOMATION:
            return "UIAUTOMATION";
          case TestType::UIAUTOMATOR:
            return "UIAUTOMATOR";
          case TestType::XCTEST:
            return "XCTEST";
          case TestType::XCTEST_UI:
            return "XCTEST_UI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TestTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
