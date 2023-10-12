/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static constexpr uint32_t send_HASH = ConstExprHashingUtils::HashString("send");
        static constexpr uint32_t reject_HASH = ConstExprHashingUtils::HashString("reject");
        static constexpr uint32_t bounce_HASH = ConstExprHashingUtils::HashString("bounce");
        static constexpr uint32_t complaint_HASH = ConstExprHashingUtils::HashString("complaint");
        static constexpr uint32_t delivery_HASH = ConstExprHashingUtils::HashString("delivery");
        static constexpr uint32_t open_HASH = ConstExprHashingUtils::HashString("open");
        static constexpr uint32_t click_HASH = ConstExprHashingUtils::HashString("click");
        static constexpr uint32_t renderingFailure_HASH = ConstExprHashingUtils::HashString("renderingFailure");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == send_HASH)
          {
            return EventType::send;
          }
          else if (hashCode == reject_HASH)
          {
            return EventType::reject;
          }
          else if (hashCode == bounce_HASH)
          {
            return EventType::bounce;
          }
          else if (hashCode == complaint_HASH)
          {
            return EventType::complaint;
          }
          else if (hashCode == delivery_HASH)
          {
            return EventType::delivery;
          }
          else if (hashCode == open_HASH)
          {
            return EventType::open;
          }
          else if (hashCode == click_HASH)
          {
            return EventType::click;
          }
          else if (hashCode == renderingFailure_HASH)
          {
            return EventType::renderingFailure;
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
          case EventType::send:
            return "send";
          case EventType::reject:
            return "reject";
          case EventType::bounce:
            return "bounce";
          case EventType::complaint:
            return "complaint";
          case EventType::delivery:
            return "delivery";
          case EventType::open:
            return "open";
          case EventType::click:
            return "click";
          case EventType::renderingFailure:
            return "renderingFailure";
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
  } // namespace SES
} // namespace Aws
