/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int APPIUM_JAVA_JUNIT_HASH = HashingUtils::HashString("APPIUM_JAVA_JUNIT");
        static const int APPIUM_JAVA_TESTNG_HASH = HashingUtils::HashString("APPIUM_JAVA_TESTNG");
        static const int APPIUM_PYTHON_HASH = HashingUtils::HashString("APPIUM_PYTHON");
        static const int APPIUM_NODE_HASH = HashingUtils::HashString("APPIUM_NODE");
        static const int APPIUM_RUBY_HASH = HashingUtils::HashString("APPIUM_RUBY");
        static const int APPIUM_WEB_JAVA_JUNIT_HASH = HashingUtils::HashString("APPIUM_WEB_JAVA_JUNIT");
        static const int APPIUM_WEB_JAVA_TESTNG_HASH = HashingUtils::HashString("APPIUM_WEB_JAVA_TESTNG");
        static const int APPIUM_WEB_PYTHON_HASH = HashingUtils::HashString("APPIUM_WEB_PYTHON");
        static const int APPIUM_WEB_NODE_HASH = HashingUtils::HashString("APPIUM_WEB_NODE");
        static const int APPIUM_WEB_RUBY_HASH = HashingUtils::HashString("APPIUM_WEB_RUBY");
        static const int INSTRUMENTATION_HASH = HashingUtils::HashString("INSTRUMENTATION");
        static const int XCTEST_HASH = HashingUtils::HashString("XCTEST");
        static const int XCTEST_UI_HASH = HashingUtils::HashString("XCTEST_UI");


        TestType GetTestTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILTIN_FUZZ_HASH)
          {
            return TestType::BUILTIN_FUZZ;
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
          else if (hashCode == APPIUM_NODE_HASH)
          {
            return TestType::APPIUM_NODE;
          }
          else if (hashCode == APPIUM_RUBY_HASH)
          {
            return TestType::APPIUM_RUBY;
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
          else if (hashCode == APPIUM_WEB_NODE_HASH)
          {
            return TestType::APPIUM_WEB_NODE;
          }
          else if (hashCode == APPIUM_WEB_RUBY_HASH)
          {
            return TestType::APPIUM_WEB_RUBY;
          }
          else if (hashCode == INSTRUMENTATION_HASH)
          {
            return TestType::INSTRUMENTATION;
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
          case TestType::NOT_SET:
            return {};
          case TestType::BUILTIN_FUZZ:
            return "BUILTIN_FUZZ";
          case TestType::APPIUM_JAVA_JUNIT:
            return "APPIUM_JAVA_JUNIT";
          case TestType::APPIUM_JAVA_TESTNG:
            return "APPIUM_JAVA_TESTNG";
          case TestType::APPIUM_PYTHON:
            return "APPIUM_PYTHON";
          case TestType::APPIUM_NODE:
            return "APPIUM_NODE";
          case TestType::APPIUM_RUBY:
            return "APPIUM_RUBY";
          case TestType::APPIUM_WEB_JAVA_JUNIT:
            return "APPIUM_WEB_JAVA_JUNIT";
          case TestType::APPIUM_WEB_JAVA_TESTNG:
            return "APPIUM_WEB_JAVA_TESTNG";
          case TestType::APPIUM_WEB_PYTHON:
            return "APPIUM_WEB_PYTHON";
          case TestType::APPIUM_WEB_NODE:
            return "APPIUM_WEB_NODE";
          case TestType::APPIUM_WEB_RUBY:
            return "APPIUM_WEB_RUBY";
          case TestType::INSTRUMENTATION:
            return "INSTRUMENTATION";
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

            return {};
          }
        }

      } // namespace TestTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
