/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/UploadType.h>
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
      namespace UploadTypeMapper
      {

        static const int ANDROID_APP_HASH = HashingUtils::HashString("ANDROID_APP");
        static const int IOS_APP_HASH = HashingUtils::HashString("IOS_APP");
        static const int WEB_APP_HASH = HashingUtils::HashString("WEB_APP");
        static const int EXTERNAL_DATA_HASH = HashingUtils::HashString("EXTERNAL_DATA");
        static const int APPIUM_JAVA_JUNIT_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_JAVA_JUNIT_TEST_PACKAGE");
        static const int APPIUM_JAVA_TESTNG_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_JAVA_TESTNG_TEST_PACKAGE");
        static const int APPIUM_PYTHON_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_PYTHON_TEST_PACKAGE");
        static const int APPIUM_NODE_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_NODE_TEST_PACKAGE");
        static const int APPIUM_RUBY_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_RUBY_TEST_PACKAGE");
        static const int APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE");
        static const int APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE");
        static const int APPIUM_WEB_PYTHON_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_WEB_PYTHON_TEST_PACKAGE");
        static const int APPIUM_WEB_NODE_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_WEB_NODE_TEST_PACKAGE");
        static const int APPIUM_WEB_RUBY_TEST_PACKAGE_HASH = HashingUtils::HashString("APPIUM_WEB_RUBY_TEST_PACKAGE");
        static const int CALABASH_TEST_PACKAGE_HASH = HashingUtils::HashString("CALABASH_TEST_PACKAGE");
        static const int INSTRUMENTATION_TEST_PACKAGE_HASH = HashingUtils::HashString("INSTRUMENTATION_TEST_PACKAGE");
        static const int UIAUTOMATION_TEST_PACKAGE_HASH = HashingUtils::HashString("UIAUTOMATION_TEST_PACKAGE");
        static const int UIAUTOMATOR_TEST_PACKAGE_HASH = HashingUtils::HashString("UIAUTOMATOR_TEST_PACKAGE");
        static const int XCTEST_TEST_PACKAGE_HASH = HashingUtils::HashString("XCTEST_TEST_PACKAGE");
        static const int XCTEST_UI_TEST_PACKAGE_HASH = HashingUtils::HashString("XCTEST_UI_TEST_PACKAGE");
        static const int APPIUM_JAVA_JUNIT_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_JAVA_JUNIT_TEST_SPEC");
        static const int APPIUM_JAVA_TESTNG_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_JAVA_TESTNG_TEST_SPEC");
        static const int APPIUM_PYTHON_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_PYTHON_TEST_SPEC");
        static const int APPIUM_NODE_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_NODE_TEST_SPEC");
        static const int APPIUM_RUBY_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_RUBY_TEST_SPEC");
        static const int APPIUM_WEB_JAVA_JUNIT_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_WEB_JAVA_JUNIT_TEST_SPEC");
        static const int APPIUM_WEB_JAVA_TESTNG_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_WEB_JAVA_TESTNG_TEST_SPEC");
        static const int APPIUM_WEB_PYTHON_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_WEB_PYTHON_TEST_SPEC");
        static const int APPIUM_WEB_NODE_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_WEB_NODE_TEST_SPEC");
        static const int APPIUM_WEB_RUBY_TEST_SPEC_HASH = HashingUtils::HashString("APPIUM_WEB_RUBY_TEST_SPEC");
        static const int INSTRUMENTATION_TEST_SPEC_HASH = HashingUtils::HashString("INSTRUMENTATION_TEST_SPEC");
        static const int XCTEST_UI_TEST_SPEC_HASH = HashingUtils::HashString("XCTEST_UI_TEST_SPEC");


        UploadType GetUploadTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANDROID_APP_HASH)
          {
            return UploadType::ANDROID_APP;
          }
          else if (hashCode == IOS_APP_HASH)
          {
            return UploadType::IOS_APP;
          }
          else if (hashCode == WEB_APP_HASH)
          {
            return UploadType::WEB_APP;
          }
          else if (hashCode == EXTERNAL_DATA_HASH)
          {
            return UploadType::EXTERNAL_DATA;
          }
          else if (hashCode == APPIUM_JAVA_JUNIT_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_JAVA_JUNIT_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_JAVA_TESTNG_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_JAVA_TESTNG_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_PYTHON_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_PYTHON_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_NODE_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_NODE_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_RUBY_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_RUBY_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_WEB_PYTHON_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_WEB_PYTHON_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_WEB_NODE_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_WEB_NODE_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_WEB_RUBY_TEST_PACKAGE_HASH)
          {
            return UploadType::APPIUM_WEB_RUBY_TEST_PACKAGE;
          }
          else if (hashCode == CALABASH_TEST_PACKAGE_HASH)
          {
            return UploadType::CALABASH_TEST_PACKAGE;
          }
          else if (hashCode == INSTRUMENTATION_TEST_PACKAGE_HASH)
          {
            return UploadType::INSTRUMENTATION_TEST_PACKAGE;
          }
          else if (hashCode == UIAUTOMATION_TEST_PACKAGE_HASH)
          {
            return UploadType::UIAUTOMATION_TEST_PACKAGE;
          }
          else if (hashCode == UIAUTOMATOR_TEST_PACKAGE_HASH)
          {
            return UploadType::UIAUTOMATOR_TEST_PACKAGE;
          }
          else if (hashCode == XCTEST_TEST_PACKAGE_HASH)
          {
            return UploadType::XCTEST_TEST_PACKAGE;
          }
          else if (hashCode == XCTEST_UI_TEST_PACKAGE_HASH)
          {
            return UploadType::XCTEST_UI_TEST_PACKAGE;
          }
          else if (hashCode == APPIUM_JAVA_JUNIT_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_JAVA_JUNIT_TEST_SPEC;
          }
          else if (hashCode == APPIUM_JAVA_TESTNG_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_JAVA_TESTNG_TEST_SPEC;
          }
          else if (hashCode == APPIUM_PYTHON_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_PYTHON_TEST_SPEC;
          }
          else if (hashCode == APPIUM_NODE_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_NODE_TEST_SPEC;
          }
          else if (hashCode == APPIUM_RUBY_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_RUBY_TEST_SPEC;
          }
          else if (hashCode == APPIUM_WEB_JAVA_JUNIT_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_WEB_JAVA_JUNIT_TEST_SPEC;
          }
          else if (hashCode == APPIUM_WEB_JAVA_TESTNG_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_WEB_JAVA_TESTNG_TEST_SPEC;
          }
          else if (hashCode == APPIUM_WEB_PYTHON_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_WEB_PYTHON_TEST_SPEC;
          }
          else if (hashCode == APPIUM_WEB_NODE_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_WEB_NODE_TEST_SPEC;
          }
          else if (hashCode == APPIUM_WEB_RUBY_TEST_SPEC_HASH)
          {
            return UploadType::APPIUM_WEB_RUBY_TEST_SPEC;
          }
          else if (hashCode == INSTRUMENTATION_TEST_SPEC_HASH)
          {
            return UploadType::INSTRUMENTATION_TEST_SPEC;
          }
          else if (hashCode == XCTEST_UI_TEST_SPEC_HASH)
          {
            return UploadType::XCTEST_UI_TEST_SPEC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UploadType>(hashCode);
          }

          return UploadType::NOT_SET;
        }

        Aws::String GetNameForUploadType(UploadType enumValue)
        {
          switch(enumValue)
          {
          case UploadType::ANDROID_APP:
            return "ANDROID_APP";
          case UploadType::IOS_APP:
            return "IOS_APP";
          case UploadType::WEB_APP:
            return "WEB_APP";
          case UploadType::EXTERNAL_DATA:
            return "EXTERNAL_DATA";
          case UploadType::APPIUM_JAVA_JUNIT_TEST_PACKAGE:
            return "APPIUM_JAVA_JUNIT_TEST_PACKAGE";
          case UploadType::APPIUM_JAVA_TESTNG_TEST_PACKAGE:
            return "APPIUM_JAVA_TESTNG_TEST_PACKAGE";
          case UploadType::APPIUM_PYTHON_TEST_PACKAGE:
            return "APPIUM_PYTHON_TEST_PACKAGE";
          case UploadType::APPIUM_NODE_TEST_PACKAGE:
            return "APPIUM_NODE_TEST_PACKAGE";
          case UploadType::APPIUM_RUBY_TEST_PACKAGE:
            return "APPIUM_RUBY_TEST_PACKAGE";
          case UploadType::APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE:
            return "APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE";
          case UploadType::APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE:
            return "APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE";
          case UploadType::APPIUM_WEB_PYTHON_TEST_PACKAGE:
            return "APPIUM_WEB_PYTHON_TEST_PACKAGE";
          case UploadType::APPIUM_WEB_NODE_TEST_PACKAGE:
            return "APPIUM_WEB_NODE_TEST_PACKAGE";
          case UploadType::APPIUM_WEB_RUBY_TEST_PACKAGE:
            return "APPIUM_WEB_RUBY_TEST_PACKAGE";
          case UploadType::CALABASH_TEST_PACKAGE:
            return "CALABASH_TEST_PACKAGE";
          case UploadType::INSTRUMENTATION_TEST_PACKAGE:
            return "INSTRUMENTATION_TEST_PACKAGE";
          case UploadType::UIAUTOMATION_TEST_PACKAGE:
            return "UIAUTOMATION_TEST_PACKAGE";
          case UploadType::UIAUTOMATOR_TEST_PACKAGE:
            return "UIAUTOMATOR_TEST_PACKAGE";
          case UploadType::XCTEST_TEST_PACKAGE:
            return "XCTEST_TEST_PACKAGE";
          case UploadType::XCTEST_UI_TEST_PACKAGE:
            return "XCTEST_UI_TEST_PACKAGE";
          case UploadType::APPIUM_JAVA_JUNIT_TEST_SPEC:
            return "APPIUM_JAVA_JUNIT_TEST_SPEC";
          case UploadType::APPIUM_JAVA_TESTNG_TEST_SPEC:
            return "APPIUM_JAVA_TESTNG_TEST_SPEC";
          case UploadType::APPIUM_PYTHON_TEST_SPEC:
            return "APPIUM_PYTHON_TEST_SPEC";
          case UploadType::APPIUM_NODE_TEST_SPEC:
            return "APPIUM_NODE_TEST_SPEC";
          case UploadType::APPIUM_RUBY_TEST_SPEC:
            return "APPIUM_RUBY_TEST_SPEC";
          case UploadType::APPIUM_WEB_JAVA_JUNIT_TEST_SPEC:
            return "APPIUM_WEB_JAVA_JUNIT_TEST_SPEC";
          case UploadType::APPIUM_WEB_JAVA_TESTNG_TEST_SPEC:
            return "APPIUM_WEB_JAVA_TESTNG_TEST_SPEC";
          case UploadType::APPIUM_WEB_PYTHON_TEST_SPEC:
            return "APPIUM_WEB_PYTHON_TEST_SPEC";
          case UploadType::APPIUM_WEB_NODE_TEST_SPEC:
            return "APPIUM_WEB_NODE_TEST_SPEC";
          case UploadType::APPIUM_WEB_RUBY_TEST_SPEC:
            return "APPIUM_WEB_RUBY_TEST_SPEC";
          case UploadType::INSTRUMENTATION_TEST_SPEC:
            return "INSTRUMENTATION_TEST_SPEC";
          case UploadType::XCTEST_UI_TEST_SPEC:
            return "XCTEST_UI_TEST_SPEC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UploadTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
