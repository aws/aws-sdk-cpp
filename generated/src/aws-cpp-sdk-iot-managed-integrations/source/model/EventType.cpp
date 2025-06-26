/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static const int DEVICE_COMMAND_HASH = HashingUtils::HashString("DEVICE_COMMAND");
        static const int DEVICE_COMMAND_REQUEST_HASH = HashingUtils::HashString("DEVICE_COMMAND_REQUEST");
        static const int DEVICE_DISCOVERY_STATUS_HASH = HashingUtils::HashString("DEVICE_DISCOVERY_STATUS");
        static const int DEVICE_EVENT_HASH = HashingUtils::HashString("DEVICE_EVENT");
        static const int DEVICE_LIFE_CYCLE_HASH = HashingUtils::HashString("DEVICE_LIFE_CYCLE");
        static const int DEVICE_STATE_HASH = HashingUtils::HashString("DEVICE_STATE");
        static const int DEVICE_OTA_HASH = HashingUtils::HashString("DEVICE_OTA");
        static const int CONNECTOR_ASSOCIATION_HASH = HashingUtils::HashString("CONNECTOR_ASSOCIATION");
        static const int ACCOUNT_ASSOCIATION_HASH = HashingUtils::HashString("ACCOUNT_ASSOCIATION");
        static const int CONNECTOR_ERROR_REPORT_HASH = HashingUtils::HashString("CONNECTOR_ERROR_REPORT");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVICE_COMMAND_HASH)
          {
            return EventType::DEVICE_COMMAND;
          }
          else if (hashCode == DEVICE_COMMAND_REQUEST_HASH)
          {
            return EventType::DEVICE_COMMAND_REQUEST;
          }
          else if (hashCode == DEVICE_DISCOVERY_STATUS_HASH)
          {
            return EventType::DEVICE_DISCOVERY_STATUS;
          }
          else if (hashCode == DEVICE_EVENT_HASH)
          {
            return EventType::DEVICE_EVENT;
          }
          else if (hashCode == DEVICE_LIFE_CYCLE_HASH)
          {
            return EventType::DEVICE_LIFE_CYCLE;
          }
          else if (hashCode == DEVICE_STATE_HASH)
          {
            return EventType::DEVICE_STATE;
          }
          else if (hashCode == DEVICE_OTA_HASH)
          {
            return EventType::DEVICE_OTA;
          }
          else if (hashCode == CONNECTOR_ASSOCIATION_HASH)
          {
            return EventType::CONNECTOR_ASSOCIATION;
          }
          else if (hashCode == ACCOUNT_ASSOCIATION_HASH)
          {
            return EventType::ACCOUNT_ASSOCIATION;
          }
          else if (hashCode == CONNECTOR_ERROR_REPORT_HASH)
          {
            return EventType::CONNECTOR_ERROR_REPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::NOT_SET:
            return {};
          case EventType::DEVICE_COMMAND:
            return "DEVICE_COMMAND";
          case EventType::DEVICE_COMMAND_REQUEST:
            return "DEVICE_COMMAND_REQUEST";
          case EventType::DEVICE_DISCOVERY_STATUS:
            return "DEVICE_DISCOVERY_STATUS";
          case EventType::DEVICE_EVENT:
            return "DEVICE_EVENT";
          case EventType::DEVICE_LIFE_CYCLE:
            return "DEVICE_LIFE_CYCLE";
          case EventType::DEVICE_STATE:
            return "DEVICE_STATE";
          case EventType::DEVICE_OTA:
            return "DEVICE_OTA";
          case EventType::CONNECTOR_ASSOCIATION:
            return "CONNECTOR_ASSOCIATION";
          case EventType::ACCOUNT_ASSOCIATION:
            return "ACCOUNT_ASSOCIATION";
          case EventType::CONNECTOR_ERROR_REPORT:
            return "CONNECTOR_ERROR_REPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
