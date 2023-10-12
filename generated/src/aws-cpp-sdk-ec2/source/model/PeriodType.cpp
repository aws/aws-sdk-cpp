/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PeriodType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace PeriodTypeMapper
      {

        static constexpr uint32_t five_minutes_HASH = ConstExprHashingUtils::HashString("five-minutes");
        static constexpr uint32_t fifteen_minutes_HASH = ConstExprHashingUtils::HashString("fifteen-minutes");
        static constexpr uint32_t one_hour_HASH = ConstExprHashingUtils::HashString("one-hour");
        static constexpr uint32_t three_hours_HASH = ConstExprHashingUtils::HashString("three-hours");
        static constexpr uint32_t one_day_HASH = ConstExprHashingUtils::HashString("one-day");
        static constexpr uint32_t one_week_HASH = ConstExprHashingUtils::HashString("one-week");


        PeriodType GetPeriodTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == five_minutes_HASH)
          {
            return PeriodType::five_minutes;
          }
          else if (hashCode == fifteen_minutes_HASH)
          {
            return PeriodType::fifteen_minutes;
          }
          else if (hashCode == one_hour_HASH)
          {
            return PeriodType::one_hour;
          }
          else if (hashCode == three_hours_HASH)
          {
            return PeriodType::three_hours;
          }
          else if (hashCode == one_day_HASH)
          {
            return PeriodType::one_day;
          }
          else if (hashCode == one_week_HASH)
          {
            return PeriodType::one_week;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PeriodType>(hashCode);
          }

          return PeriodType::NOT_SET;
        }

        Aws::String GetNameForPeriodType(PeriodType enumValue)
        {
          switch(enumValue)
          {
          case PeriodType::NOT_SET:
            return {};
          case PeriodType::five_minutes:
            return "five-minutes";
          case PeriodType::fifteen_minutes:
            return "fifteen-minutes";
          case PeriodType::one_hour:
            return "one-hour";
          case PeriodType::three_hours:
            return "three-hours";
          case PeriodType::one_day:
            return "one-day";
          case PeriodType::one_week:
            return "one-week";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeriodTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
