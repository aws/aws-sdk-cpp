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

        static constexpr uint32_t FIFTEEN_MIN_HASH = ConstExprHashingUtils::HashString("FIFTEEN_MIN");
        static constexpr uint32_t THIRTY_MIN_HASH = ConstExprHashingUtils::HashString("THIRTY_MIN");
        static constexpr uint32_t HOUR_HASH = ConstExprHashingUtils::HashString("HOUR");
        static constexpr uint32_t DAY_HASH = ConstExprHashingUtils::HashString("DAY");
        static constexpr uint32_t WEEK_HASH = ConstExprHashingUtils::HashString("WEEK");
        static constexpr uint32_t TOTAL_HASH = ConstExprHashingUtils::HashString("TOTAL");


        IntervalPeriod GetIntervalPeriodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
