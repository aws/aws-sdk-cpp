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

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int SCREENSHOT_HASH = HashingUtils::HashString("SCREENSHOT");
        static const int DEVICE_LOG_HASH = HashingUtils::HashString("DEVICE_LOG");
        static const int MESSAGE_LOG_HASH = HashingUtils::HashString("MESSAGE_LOG");
        static const int VIDEO_LOG_HASH = HashingUtils::HashString("VIDEO_LOG");
        static const int RESULT_LOG_HASH = HashingUtils::HashString("RESULT_LOG");
        static const int SERVICE_LOG_HASH = HashingUtils::HashString("SERVICE_LOG");
        static const int WEBKIT_LOG_HASH = HashingUtils::HashString("WEBKIT_LOG");
        static const int INSTRUMENTATION_OUTPUT_HASH = HashingUtils::HashString("INSTRUMENTATION_OUTPUT");
        static const int EXERCISER_MONKEY_OUTPUT_HASH = HashingUtils::HashString("EXERCISER_MONKEY_OUTPUT");
        static const int CALABASH_JSON_OUTPUT_HASH = HashingUtils::HashString("CALABASH_JSON_OUTPUT");
        static const int CALABASH_PRETTY_OUTPUT_HASH = HashingUtils::HashString("CALABASH_PRETTY_OUTPUT");
        static const int CALABASH_STANDARD_OUTPUT_HASH = HashingUtils::HashString("CALABASH_STANDARD_OUTPUT");
        static const int CALABASH_JAVA_XML_OUTPUT_HASH = HashingUtils::HashString("CALABASH_JAVA_XML_OUTPUT");
        static const int AUTOMATION_OUTPUT_HASH = HashingUtils::HashString("AUTOMATION_OUTPUT");
        static const int APPIUM_SERVER_OUTPUT_HASH = HashingUtils::HashString("APPIUM_SERVER_OUTPUT");
        static const int APPIUM_JAVA_OUTPUT_HASH = HashingUtils::HashString("APPIUM_JAVA_OUTPUT");
        static const int APPIUM_JAVA_XML_OUTPUT_HASH = HashingUtils::HashString("APPIUM_JAVA_XML_OUTPUT");
        static const int APPIUM_PYTHON_OUTPUT_HASH = HashingUtils::HashString("APPIUM_PYTHON_OUTPUT");
        static const int APPIUM_PYTHON_XML_OUTPUT_HASH = HashingUtils::HashString("APPIUM_PYTHON_XML_OUTPUT");
        static const int EXPLORER_EVENT_LOG_HASH = HashingUtils::HashString("EXPLORER_EVENT_LOG");
        static const int EXPLORER_SUMMARY_LOG_HASH = HashingUtils::HashString("EXPLORER_SUMMARY_LOG");
        static const int APPLICATION_CRASH_REPORT_HASH = HashingUtils::HashString("APPLICATION_CRASH_REPORT");
        static const int XCTEST_LOG_HASH = HashingUtils::HashString("XCTEST_LOG");
        static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");


        ArtifactType GetArtifactTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ArtifactTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
