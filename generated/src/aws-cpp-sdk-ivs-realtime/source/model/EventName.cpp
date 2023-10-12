/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/EventName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace EventNameMapper
      {

        static constexpr uint32_t JOINED_HASH = ConstExprHashingUtils::HashString("JOINED");
        static constexpr uint32_t LEFT_HASH = ConstExprHashingUtils::HashString("LEFT");
        static constexpr uint32_t PUBLISH_STARTED_HASH = ConstExprHashingUtils::HashString("PUBLISH_STARTED");
        static constexpr uint32_t PUBLISH_STOPPED_HASH = ConstExprHashingUtils::HashString("PUBLISH_STOPPED");
        static constexpr uint32_t SUBSCRIBE_STARTED_HASH = ConstExprHashingUtils::HashString("SUBSCRIBE_STARTED");
        static constexpr uint32_t SUBSCRIBE_STOPPED_HASH = ConstExprHashingUtils::HashString("SUBSCRIBE_STOPPED");
        static constexpr uint32_t PUBLISH_ERROR_HASH = ConstExprHashingUtils::HashString("PUBLISH_ERROR");
        static constexpr uint32_t SUBSCRIBE_ERROR_HASH = ConstExprHashingUtils::HashString("SUBSCRIBE_ERROR");
        static constexpr uint32_t JOIN_ERROR_HASH = ConstExprHashingUtils::HashString("JOIN_ERROR");


        EventName GetEventNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JOINED_HASH)
          {
            return EventName::JOINED;
          }
          else if (hashCode == LEFT_HASH)
          {
            return EventName::LEFT;
          }
          else if (hashCode == PUBLISH_STARTED_HASH)
          {
            return EventName::PUBLISH_STARTED;
          }
          else if (hashCode == PUBLISH_STOPPED_HASH)
          {
            return EventName::PUBLISH_STOPPED;
          }
          else if (hashCode == SUBSCRIBE_STARTED_HASH)
          {
            return EventName::SUBSCRIBE_STARTED;
          }
          else if (hashCode == SUBSCRIBE_STOPPED_HASH)
          {
            return EventName::SUBSCRIBE_STOPPED;
          }
          else if (hashCode == PUBLISH_ERROR_HASH)
          {
            return EventName::PUBLISH_ERROR;
          }
          else if (hashCode == SUBSCRIBE_ERROR_HASH)
          {
            return EventName::SUBSCRIBE_ERROR;
          }
          else if (hashCode == JOIN_ERROR_HASH)
          {
            return EventName::JOIN_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventName>(hashCode);
          }

          return EventName::NOT_SET;
        }

        Aws::String GetNameForEventName(EventName enumValue)
        {
          switch(enumValue)
          {
          case EventName::NOT_SET:
            return {};
          case EventName::JOINED:
            return "JOINED";
          case EventName::LEFT:
            return "LEFT";
          case EventName::PUBLISH_STARTED:
            return "PUBLISH_STARTED";
          case EventName::PUBLISH_STOPPED:
            return "PUBLISH_STOPPED";
          case EventName::SUBSCRIBE_STARTED:
            return "SUBSCRIBE_STARTED";
          case EventName::SUBSCRIBE_STOPPED:
            return "SUBSCRIBE_STOPPED";
          case EventName::PUBLISH_ERROR:
            return "PUBLISH_ERROR";
          case EventName::SUBSCRIBE_ERROR:
            return "SUBSCRIBE_ERROR";
          case EventName::JOIN_ERROR:
            return "JOIN_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventNameMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
