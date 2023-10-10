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

        static const int INSUFFICIENT_CAPABILITIES_HASH = HashingUtils::HashString("INSUFFICIENT_CAPABILITIES");
        static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QUOTA_EXCEEDED");
        static const int PUBLISHER_NOT_FOUND_HASH = HashingUtils::HashString("PUBLISHER_NOT_FOUND");


        EventErrorCode GetEventErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
