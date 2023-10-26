/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/EventNotificationTopicStatus.h>
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
      namespace EventNotificationTopicStatusMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        EventNotificationTopicStatus GetEventNotificationTopicStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return EventNotificationTopicStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return EventNotificationTopicStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventNotificationTopicStatus>(hashCode);
          }

          return EventNotificationTopicStatus::NOT_SET;
        }

        Aws::String GetNameForEventNotificationTopicStatus(EventNotificationTopicStatus enumValue)
        {
          switch(enumValue)
          {
          case EventNotificationTopicStatus::NOT_SET:
            return {};
          case EventNotificationTopicStatus::Enabled:
            return "Enabled";
          case EventNotificationTopicStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventNotificationTopicStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
