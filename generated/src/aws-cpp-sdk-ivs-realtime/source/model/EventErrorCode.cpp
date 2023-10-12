/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/EventErrorCode.h>
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
      namespace EventErrorCodeMapper
      {

        static constexpr uint32_t INSUFFICIENT_CAPABILITIES_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_CAPABILITIES");
        static constexpr uint32_t QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("QUOTA_EXCEEDED");
        static constexpr uint32_t PUBLISHER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PUBLISHER_NOT_FOUND");


        EventErrorCode GetEventErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSUFFICIENT_CAPABILITIES_HASH)
          {
            return EventErrorCode::INSUFFICIENT_CAPABILITIES;
          }
          else if (hashCode == QUOTA_EXCEEDED_HASH)
          {
            return EventErrorCode::QUOTA_EXCEEDED;
          }
          else if (hashCode == PUBLISHER_NOT_FOUND_HASH)
          {
            return EventErrorCode::PUBLISHER_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventErrorCode>(hashCode);
          }

          return EventErrorCode::NOT_SET;
        }

        Aws::String GetNameForEventErrorCode(EventErrorCode enumValue)
        {
          switch(enumValue)
          {
          case EventErrorCode::NOT_SET:
            return {};
          case EventErrorCode::INSUFFICIENT_CAPABILITIES:
            return "INSUFFICIENT_CAPABILITIES";
          case EventErrorCode::QUOTA_EXCEEDED:
            return "QUOTA_EXCEEDED";
          case EventErrorCode::PUBLISHER_NOT_FOUND:
            return "PUBLISHER_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventErrorCodeMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
