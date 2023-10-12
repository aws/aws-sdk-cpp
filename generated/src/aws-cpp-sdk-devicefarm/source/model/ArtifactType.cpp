/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ArtifactType.h>
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
      namespace ArtifactTypeMapper
      {

        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t SCREENSHOT_HASH = ConstExprHashingUtils::HashString("SCREENSHOT");
        static constexpr uint32_t DEVICE_LOG_HASH = ConstExprHashingUtils::HashString("DEVICE_LOG");
        static constexpr uint32_t MESSAGE_LOG_HASH = ConstExprHashingUtils::HashString("MESSAGE_LOG");
        static constexpr uint32_t VIDEO_LOG_HASH = ConstExprHashingUtils::HashString("VIDEO_LOG");
        static constexpr uint32_t RESULT_LOG_HASH = ConstExprHashingUtils::HashString("RESULT_LOG");
        static constexpr uint32_t SERVICE_LOG_HASH = ConstExprHashingUtils::HashString("SERVICE_LOG");
        static constexpr uint32_t WEBKIT_LOG_HASH = ConstExprHashingUtils::HashString("WEBKIT_LOG");
        static constexpr uint32_t INSTRUMENTATION_OUTPUT_HASH = ConstExprHashingUtils::HashString("INSTRUMENTATION_OUTPUT");
        static constexpr uint32_t EXERCISER_MONKEY_OUTPUT_HASH = ConstExprHashingUtils::HashString("EXERCISER_MONKEY_OUTPUT");
        static constexpr uint32_t CALABASH_JSON_OUTPUT_HASH = ConstExprHashingUtils::HashString("CALABASH_JSON_OUTPUT");
        static constexpr uint32_t CALABASH_PRETTY_OUTPUT_HASH = ConstExprHashingUtils::HashString("CALABASH_PRETTY_OUTPUT");
        static constexpr uint32_t CALABASH_STANDARD_OUTPUT_HASH = ConstExprHashingUtils::HashString("CALABASH_STANDARD_OUTPUT");
        static constexpr uint32_t CALABASH_JAVA_XML_OUTPUT_HASH = ConstExprHashingUtils::HashString("CALABASH_JAVA_XML_OUTPUT");
        static constexpr uint32_t AUTOMATION_OUTPUT_HASH = ConstExprHashingUtils::HashString("AUTOMATION_OUTPUT");
        static constexpr uint32_t APPIUM_SERVER_OUTPUT_HASH = ConstExprHashingUtils::HashString("APPIUM_SERVER_OUTPUT");
        static constexpr uint32_t APPIUM_JAVA_OUTPUT_HASH = ConstExprHashingUtils::HashString("APPIUM_JAVA_OUTPUT");
        static constexpr uint32_t APPIUM_JAVA_XML_OUTPUT_HASH = ConstExprHashingUtils::HashString("APPIUM_JAVA_XML_OUTPUT");
        static constexpr uint32_t APPIUM_PYTHON_OUTPUT_HASH = ConstExprHashingUtils::HashString("APPIUM_PYTHON_OUTPUT");
        static constexpr uint32_t APPIUM_PYTHON_XML_OUTPUT_HASH = ConstExprHashingUtils::HashString("APPIUM_PYTHON_XML_OUTPUT");
        static constexpr uint32_t EXPLORER_EVENT_LOG_HASH = ConstExprHashingUtils::HashString("EXPLORER_EVENT_LOG");
        static constexpr uint32_t EXPLORER_SUMMARY_LOG_HASH = ConstExprHashingUtils::HashString("EXPLORER_SUMMARY_LOG");
        static constexpr uint32_t APPLICATION_CRASH_REPORT_HASH = ConstExprHashingUtils::HashString("APPLICATION_CRASH_REPORT");
        static constexpr uint32_t XCTEST_LOG_HASH = ConstExprHashingUtils::HashString("XCTEST_LOG");
        static constexpr uint32_t VIDEO_HASH = ConstExprHashingUtils::HashString("VIDEO");
        static constexpr uint32_t CUSTOMER_ARTIFACT_HASH = ConstExprHashingUtils::HashString("CUSTOMER_ARTIFACT");
        static constexpr uint32_t CUSTOMER_ARTIFACT_LOG_HASH = ConstExprHashingUtils::HashString("CUSTOMER_ARTIFACT_LOG");
        static constexpr uint32_t TESTSPEC_OUTPUT_HASH = ConstExprHashingUtils::HashString("TESTSPEC_OUTPUT");


        ArtifactType GetArtifactTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return ArtifactType::UNKNOWN;
          }
          else if (hashCode == SCREENSHOT_HASH)
          {
            return ArtifactType::SCREENSHOT;
          }
          else if (hashCode == DEVICE_LOG_HASH)
          {
            return ArtifactType::DEVICE_LOG;
          }
          else if (hashCode == MESSAGE_LOG_HASH)
          {
            return ArtifactType::MESSAGE_LOG;
          }
          else if (hashCode == VIDEO_LOG_HASH)
          {
            return ArtifactType::VIDEO_LOG;
          }
          else if (hashCode == RESULT_LOG_HASH)
          {
            return ArtifactType::RESULT_LOG;
          }
          else if (hashCode == SERVICE_LOG_HASH)
          {
            return ArtifactType::SERVICE_LOG;
          }
          else if (hashCode == WEBKIT_LOG_HASH)
          {
            return ArtifactType::WEBKIT_LOG;
          }
          else if (hashCode == INSTRUMENTATION_OUTPUT_HASH)
          {
            return ArtifactType::INSTRUMENTATION_OUTPUT;
          }
          else if (hashCode == EXERCISER_MONKEY_OUTPUT_HASH)
          {
            return ArtifactType::EXERCISER_MONKEY_OUTPUT;
          }
          else if (hashCode == CALABASH_JSON_OUTPUT_HASH)
          {
            return ArtifactType::CALABASH_JSON_OUTPUT;
          }
          else if (hashCode == CALABASH_PRETTY_OUTPUT_HASH)
          {
            return ArtifactType::CALABASH_PRETTY_OUTPUT;
          }
          else if (hashCode == CALABASH_STANDARD_OUTPUT_HASH)
          {
            return ArtifactType::CALABASH_STANDARD_OUTPUT;
          }
          else if (hashCode == CALABASH_JAVA_XML_OUTPUT_HASH)
          {
            return ArtifactType::CALABASH_JAVA_XML_OUTPUT;
          }
          else if (hashCode == AUTOMATION_OUTPUT_HASH)
          {
            return ArtifactType::AUTOMATION_OUTPUT;
          }
          else if (hashCode == APPIUM_SERVER_OUTPUT_HASH)
          {
            return ArtifactType::APPIUM_SERVER_OUTPUT;
          }
          else if (hashCode == APPIUM_JAVA_OUTPUT_HASH)
          {
            return ArtifactType::APPIUM_JAVA_OUTPUT;
          }
          else if (hashCode == APPIUM_JAVA_XML_OUTPUT_HASH)
          {
            return ArtifactType::APPIUM_JAVA_XML_OUTPUT;
          }
          else if (hashCode == APPIUM_PYTHON_OUTPUT_HASH)
          {
            return ArtifactType::APPIUM_PYTHON_OUTPUT;
          }
          else if (hashCode == APPIUM_PYTHON_XML_OUTPUT_HASH)
          {
            return ArtifactType::APPIUM_PYTHON_XML_OUTPUT;
          }
          else if (hashCode == EXPLORER_EVENT_LOG_HASH)
          {
            return ArtifactType::EXPLORER_EVENT_LOG;
          }
          else if (hashCode == EXPLORER_SUMMARY_LOG_HASH)
          {
            return ArtifactType::EXPLORER_SUMMARY_LOG;
          }
          else if (hashCode == APPLICATION_CRASH_REPORT_HASH)
          {
            return ArtifactType::APPLICATION_CRASH_REPORT;
          }
          else if (hashCode == XCTEST_LOG_HASH)
          {
            return ArtifactType::XCTEST_LOG;
          }
          else if (hashCode == VIDEO_HASH)
          {
            return ArtifactType::VIDEO;
          }
          else if (hashCode == CUSTOMER_ARTIFACT_HASH)
          {
            return ArtifactType::CUSTOMER_ARTIFACT;
          }
          else if (hashCode == CUSTOMER_ARTIFACT_LOG_HASH)
          {
            return ArtifactType::CUSTOMER_ARTIFACT_LOG;
          }
          else if (hashCode == TESTSPEC_OUTPUT_HASH)
          {
            return ArtifactType::TESTSPEC_OUTPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactType>(hashCode);
          }

          return ArtifactType::NOT_SET;
        }

        Aws::String GetNameForArtifactType(ArtifactType enumValue)
        {
          switch(enumValue)
          {
          case ArtifactType::NOT_SET:
            return {};
          case ArtifactType::UNKNOWN:
            return "UNKNOWN";
          case ArtifactType::SCREENSHOT:
            return "SCREENSHOT";
          case ArtifactType::DEVICE_LOG:
            return "DEVICE_LOG";
          case ArtifactType::MESSAGE_LOG:
            return "MESSAGE_LOG";
          case ArtifactType::VIDEO_LOG:
            return "VIDEO_LOG";
          case ArtifactType::RESULT_LOG:
            return "RESULT_LOG";
          case ArtifactType::SERVICE_LOG:
            return "SERVICE_LOG";
          case ArtifactType::WEBKIT_LOG:
            return "WEBKIT_LOG";
          case ArtifactType::INSTRUMENTATION_OUTPUT:
            return "INSTRUMENTATION_OUTPUT";
          case ArtifactType::EXERCISER_MONKEY_OUTPUT:
            return "EXERCISER_MONKEY_OUTPUT";
          case ArtifactType::CALABASH_JSON_OUTPUT:
            return "CALABASH_JSON_OUTPUT";
          case ArtifactType::CALABASH_PRETTY_OUTPUT:
            return "CALABASH_PRETTY_OUTPUT";
          case ArtifactType::CALABASH_STANDARD_OUTPUT:
            return "CALABASH_STANDARD_OUTPUT";
          case ArtifactType::CALABASH_JAVA_XML_OUTPUT:
            return "CALABASH_JAVA_XML_OUTPUT";
          case ArtifactType::AUTOMATION_OUTPUT:
            return "AUTOMATION_OUTPUT";
          case ArtifactType::APPIUM_SERVER_OUTPUT:
            return "APPIUM_SERVER_OUTPUT";
          case ArtifactType::APPIUM_JAVA_OUTPUT:
            return "APPIUM_JAVA_OUTPUT";
          case ArtifactType::APPIUM_JAVA_XML_OUTPUT:
            return "APPIUM_JAVA_XML_OUTPUT";
          case ArtifactType::APPIUM_PYTHON_OUTPUT:
            return "APPIUM_PYTHON_OUTPUT";
          case ArtifactType::APPIUM_PYTHON_XML_OUTPUT:
            return "APPIUM_PYTHON_XML_OUTPUT";
          case ArtifactType::EXPLORER_EVENT_LOG:
            return "EXPLORER_EVENT_LOG";
          case ArtifactType::EXPLORER_SUMMARY_LOG:
            return "EXPLORER_SUMMARY_LOG";
          case ArtifactType::APPLICATION_CRASH_REPORT:
            return "APPLICATION_CRASH_REPORT";
          case ArtifactType::XCTEST_LOG:
            return "XCTEST_LOG";
          case ArtifactType::VIDEO:
            return "VIDEO";
          case ArtifactType::CUSTOMER_ARTIFACT:
            return "CUSTOMER_ARTIFACT";
          case ArtifactType::CUSTOMER_ARTIFACT_LOG:
            return "CUSTOMER_ARTIFACT_LOG";
          case ArtifactType::TESTSPEC_OUTPUT:
            return "TESTSPEC_OUTPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArtifactTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
