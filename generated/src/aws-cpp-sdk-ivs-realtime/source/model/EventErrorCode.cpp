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


        EventErrorCode GetEventErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSUFFICIENT_CAPABILITIES_HASH)
          {
            return EventErrorCode::INSUFFICIENT_CAPABILITIES;
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
          case EventErrorCode::INSUFFICIENT_CAPABILITIES:
            return "INSUFFICIENT_CAPABILITIES";
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
