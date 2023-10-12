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

        static constexpr uint32_t BUILTIN_FUZZ_HASH = ConstExprHashingUtils::HashString("BUILTIN_FUZZ");
        static constexpr uint32_t BUILTIN_EXPLORER_HASH = ConstExprHashingUtils::HashString("BUILTIN_EXPLORER");
        static constexpr uint32_t WEB_PERFORMANCE_PROFILE_HASH = ConstExprHashingUtils::HashString("WEB_PERFORMANCE_PROFILE");
        static constexpr uint32_t APPIUM_JAVA_JUNIT_HASH = ConstExprHashingUtils::HashString("APPIUM_JAVA_JUNIT");
        static constexpr uint32_t APPIUM_JAVA_TESTNG_HASH = ConstExprHashingUtils::HashString("APPIUM_JAVA_TESTNG");
        static constexpr uint32_t APPIUM_PYTHON_HASH = ConstExprHashingUtils::HashString("APPIUM_PYTHON");
        static constexpr uint32_t APPIUM_NODE_HASH = ConstExprHashingUtils::HashString("APPIUM_NODE");
        static constexpr uint32_t APPIUM_RUBY_HASH = ConstExprHashingUtils::HashString("APPIUM_RUBY");
        static constexpr uint32_t APPIUM_WEB_JAVA_JUNIT_HASH = ConstExprHashingUtils::HashString("APPIUM_WEB_JAVA_JUNIT");
        static constexpr uint32_t APPIUM_WEB_JAVA_TESTNG_HASH = ConstExprHashingUtils::HashString("APPIUM_WEB_JAVA_TESTNG");
        static constexpr uint32_t APPIUM_WEB_PYTHON_HASH = ConstExprHashingUtils::HashString("APPIUM_WEB_PYTHON");
        static constexpr uint32_t APPIUM_WEB_NODE_HASH = ConstExprHashingUtils::HashString("APPIUM_WEB_NODE");
        static constexpr uint32_t APPIUM_WEB_RUBY_HASH = ConstExprHashingUtils::HashString("APPIUM_WEB_RUBY");
        static constexpr uint32_t CALABASH_HASH = ConstExprHashingUtils::HashString("CALABASH");
        static constexpr uint32_t INSTRUMENTATION_HASH = ConstExprHashingUtils::HashString("INSTRUMENTATION");
        static constexpr uint32_t UIAUTOMATION_HASH = ConstExprHashingUtils::HashString("UIAUTOMATION");
        static constexpr uint32_t UIAUTOMATOR_HASH = ConstExprHashingUtils::HashString("UIAUTOMATOR");
        static constexpr uint32_t XCTEST_HASH = ConstExprHashingUtils::HashString("XCTEST");
        static constexpr uint32_t XCTEST_UI_HASH = ConstExprHashingUtils::HashString("XCTEST_UI");
        static constexpr uint32_t REMOTE_ACCESS_RECORD_HASH = ConstExprHashingUtils::HashString("REMOTE_ACCESS_RECORD");
        static constexpr uint32_t REMOTE_ACCESS_REPLAY_HASH = ConstExprHashingUtils::HashString("REMOTE_ACCESS_REPLAY");


        TestType GetTestTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILTIN_FUZZ_HASH)
          {
            return TestType::BUILTIN_FUZZ;
          }
          else if (hashCode == BUILTIN_EXPLORER_HASH)
          {
            return TestType::BUILTIN_EXPLORER;
          }
          else if (hashCode == WEB_PERFORMANCE_PROFILE_HASH)
          {
            return TestType::WEB_PERFORMANCE_PROFILE;
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
          else if (hashCode == REMOTE_ACCESS_RECORD_HASH)
          {
            return TestType::REMOTE_ACCESS_RECORD;
          }
          else if (hashCode == REMOTE_ACCESS_REPLAY_HASH)
          {
            return TestType::REMOTE_ACCESS_REPLAY;
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
          case TestType::BUILTIN_EXPLORER:
            return "BUILTIN_EXPLORER";
          case TestType::WEB_PERFORMANCE_PROFILE:
            return "WEB_PERFORMANCE_PROFILE";
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
          case TestType::REMOTE_ACCESS_RECORD:
            return "REMOTE_ACCESS_RECORD";
          case TestType::REMOTE_ACCESS_REPLAY:
            return "REMOTE_ACCESS_REPLAY";
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
