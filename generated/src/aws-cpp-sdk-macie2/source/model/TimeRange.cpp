/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/TimeRange.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace TimeRangeMapper
      {

        static const int MONTH_TO_DATE_HASH = HashingUtils::HashString("MONTH_TO_DATE");
        static const int PAST_30_DAYS_HASH = HashingUtils::HashString("PAST_30_DAYS");


        TimeRange GetTimeRangeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONTH_TO_DATE_HASH)
          {
            return TimeRange::MONTH_TO_DATE;
          }
          else if (hashCode == PAST_30_DAYS_HASH)
          {
            return TimeRange::PAST_30_DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeRange>(hashCode);
          }

          return TimeRange::NOT_SET;
        }

        Aws::String GetNameForTimeRange(TimeRange enumValue)
        {
          switch(enumValue)
          {
          case TimeRange::NOT_SET:
            return {};
          case TimeRange::MONTH_TO_DATE:
            return "MONTH_TO_DATE";
          case TimeRange::PAST_30_DAYS:
            return "PAST_30_DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeRangeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
