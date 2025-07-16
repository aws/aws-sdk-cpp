/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/EventNotificationResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace EventNotificationResourceTypeMapper
      {

        static const int SidewalkAccount_HASH = HashingUtils::HashString("SidewalkAccount");
        static const int WirelessDevice_HASH = HashingUtils::HashString("WirelessDevice");
        static const int WirelessGateway_HASH = HashingUtils::HashString("WirelessGateway");


        EventNotificationResourceType GetEventNotificationResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SidewalkAccount_HASH)
          {
            return EventNotificationResourceType::SidewalkAccount;
          }
          else if (hashCode == WirelessDevice_HASH)
          {
            return EventNotificationResourceType::WirelessDevice;
          }
          else if (hashCode == WirelessGateway_HASH)
          {
            return EventNotificationResourceType::WirelessGateway;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventNotificationResourceType>(hashCode);
          }

          return EventNotificationResourceType::NOT_SET;
        }

        Aws::String GetNameForEventNotificationResourceType(EventNotificationResourceType enumValue)
        {
          switch(enumValue)
          {
          case EventNotificationResourceType::NOT_SET:
            return {};
          case EventNotificationResourceType::SidewalkAccount:
            return "SidewalkAccount";
          case EventNotificationResourceType::WirelessDevice:
            return "WirelessDevice";
          case EventNotificationResourceType::WirelessGateway:
            return "WirelessGateway";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventNotificationResourceTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
