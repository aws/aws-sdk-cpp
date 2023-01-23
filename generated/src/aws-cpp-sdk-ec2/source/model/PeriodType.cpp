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

        static const int five_minutes_HASH = HashingUtils::HashString("five-minutes");
        static const int fifteen_minutes_HASH = HashingUtils::HashString("fifteen-minutes");
        static const int one_hour_HASH = HashingUtils::HashString("one-hour");
        static const int three_hours_HASH = HashingUtils::HashString("three-hours");
        static const int one_day_HASH = HashingUtils::HashString("one-day");
        static const int one_week_HASH = HashingUtils::HashString("one-week");


        PeriodType GetPeriodTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
