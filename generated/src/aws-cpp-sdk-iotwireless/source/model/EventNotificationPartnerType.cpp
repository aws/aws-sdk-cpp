/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/EventNotificationPartnerType.h>
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
      namespace EventNotificationPartnerTypeMapper
      {

        static const int Sidewalk_HASH = HashingUtils::HashString("Sidewalk");


        EventNotificationPartnerType GetEventNotificationPartnerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Sidewalk_HASH)
          {
            return EventNotificationPartnerType::Sidewalk;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventNotificationPartnerType>(hashCode);
          }

          return EventNotificationPartnerType::NOT_SET;
        }

        Aws::String GetNameForEventNotificationPartnerType(EventNotificationPartnerType enumValue)
        {
          switch(enumValue)
          {
          case EventNotificationPartnerType::NOT_SET:
            return {};
          case EventNotificationPartnerType::Sidewalk:
            return "Sidewalk";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventNotificationPartnerTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
