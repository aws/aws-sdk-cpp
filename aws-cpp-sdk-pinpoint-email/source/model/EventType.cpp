/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointEmail
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static const int SEND_HASH = HashingUtils::HashString("SEND");
        static const int REJECT_HASH = HashingUtils::HashString("REJECT");
        static const int BOUNCE_HASH = HashingUtils::HashString("BOUNCE");
        static const int COMPLAINT_HASH = HashingUtils::HashString("COMPLAINT");
        static const int DELIVERY_HASH = HashingUtils::HashString("DELIVERY");
        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int CLICK_HASH = HashingUtils::HashString("CLICK");
        static const int RENDERING_FAILURE_HASH = HashingUtils::HashString("RENDERING_FAILURE");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_HASH)
          {
            return EventType::SEND;
          }
          else if (hashCode == REJECT_HASH)
          {
            return EventType::REJECT;
          }
          else if (hashCode == BOUNCE_HASH)
          {
            return EventType::BOUNCE;
          }
          else if (hashCode == COMPLAINT_HASH)
          {
            return EventType::COMPLAINT;
          }
          else if (hashCode == DELIVERY_HASH)
          {
            return EventType::DELIVERY;
          }
          else if (hashCode == OPEN_HASH)
          {
            return EventType::OPEN;
          }
          else if (hashCode == CLICK_HASH)
          {
            return EventType::CLICK;
          }
          else if (hashCode == RENDERING_FAILURE_HASH)
          {
            return EventType::RENDERING_FAILURE;
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
          case EventType::SEND:
            return "SEND";
          case EventType::REJECT:
            return "REJECT";
          case EventType::BOUNCE:
            return "BOUNCE";
          case EventType::COMPLAINT:
            return "COMPLAINT";
          case EventType::DELIVERY:
            return "DELIVERY";
          case EventType::OPEN:
            return "OPEN";
          case EventType::CLICK:
            return "CLICK";
          case EventType::RENDERING_FAILURE:
            return "RENDERING_FAILURE";
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
  } // namespace PinpointEmail
} // namespace Aws
