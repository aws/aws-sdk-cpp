/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/EventCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace EventCategoryMapper
      {

        static const int insight_HASH = HashingUtils::HashString("insight");


        EventCategory GetEventCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == insight_HASH)
          {
            return EventCategory::insight;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventCategory>(hashCode);
          }

          return EventCategory::NOT_SET;
        }

        Aws::String GetNameForEventCategory(EventCategory enumValue)
        {
          switch(enumValue)
          {
          case EventCategory::insight:
            return "insight";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventCategoryMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
