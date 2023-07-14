/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EventStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Health
  {
    namespace Model
    {
      namespace EventStatusCodeMapper
      {

        static const int open_HASH = HashingUtils::HashString("open");
        static const int closed_HASH = HashingUtils::HashString("closed");
        static const int upcoming_HASH = HashingUtils::HashString("upcoming");


        EventStatusCode GetEventStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == open_HASH)
          {
            return EventStatusCode::open;
          }
          else if (hashCode == closed_HASH)
          {
            return EventStatusCode::closed;
          }
          else if (hashCode == upcoming_HASH)
          {
            return EventStatusCode::upcoming;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventStatusCode>(hashCode);
          }

          return EventStatusCode::NOT_SET;
        }

        Aws::String GetNameForEventStatusCode(EventStatusCode enumValue)
        {
          switch(enumValue)
          {
          case EventStatusCode::open:
            return "open";
          case EventStatusCode::closed:
            return "closed";
          case EventStatusCode::upcoming:
            return "upcoming";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventStatusCodeMapper
    } // namespace Model
  } // namespace Health
} // namespace Aws
