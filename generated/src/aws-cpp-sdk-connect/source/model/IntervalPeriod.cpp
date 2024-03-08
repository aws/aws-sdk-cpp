/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/IntervalPeriod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace IntervalPeriodMapper
      {

        static const int FIFTEEN_MIN_HASH = HashingUtils::HashString("FIFTEEN_MIN");
        static const int THIRTY_MIN_HASH = HashingUtils::HashString("THIRTY_MIN");
        static const int HOUR_HASH = HashingUtils::HashString("HOUR");
        static const int DAY_HASH = HashingUtils::HashString("DAY");
        static const int WEEK_HASH = HashingUtils::HashString("WEEK");
        static const int TOTAL_HASH = HashingUtils::HashString("TOTAL");


        IntervalPeriod GetIntervalPeriodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIFTEEN_MIN_HASH)
          {
            return IntervalPeriod::FIFTEEN_MIN;
          }
          else if (hashCode == THIRTY_MIN_HASH)
          {
            return IntervalPeriod::THIRTY_MIN;
          }
          else if (hashCode == HOUR_HASH)
          {
            return IntervalPeriod::HOUR;
          }
          else if (hashCode == DAY_HASH)
          {
            return IntervalPeriod::DAY;
          }
          else if (hashCode == WEEK_HASH)
          {
            return IntervalPeriod::WEEK;
          }
          else if (hashCode == TOTAL_HASH)
          {
            return IntervalPeriod::TOTAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntervalPeriod>(hashCode);
          }

          return IntervalPeriod::NOT_SET;
        }

        Aws::String GetNameForIntervalPeriod(IntervalPeriod enumValue)
        {
          switch(enumValue)
          {
          case IntervalPeriod::NOT_SET:
            return {};
          case IntervalPeriod::FIFTEEN_MIN:
            return "FIFTEEN_MIN";
          case IntervalPeriod::THIRTY_MIN:
            return "THIRTY_MIN";
          case IntervalPeriod::HOUR:
            return "HOUR";
          case IntervalPeriod::DAY:
            return "DAY";
          case IntervalPeriod::WEEK:
            return "WEEK";
          case IntervalPeriod::TOTAL:
            return "TOTAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntervalPeriodMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
