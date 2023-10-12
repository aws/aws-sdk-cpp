/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DayOfWeek.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace DayOfWeekMapper
      {

        static constexpr uint32_t MONDAY_HASH = ConstExprHashingUtils::HashString("MONDAY");
        static constexpr uint32_t TUESDAY_HASH = ConstExprHashingUtils::HashString("TUESDAY");
        static constexpr uint32_t WEDNESDAY_HASH = ConstExprHashingUtils::HashString("WEDNESDAY");
        static constexpr uint32_t THURSDAY_HASH = ConstExprHashingUtils::HashString("THURSDAY");
        static constexpr uint32_t FRIDAY_HASH = ConstExprHashingUtils::HashString("FRIDAY");
        static constexpr uint32_t SATURDAY_HASH = ConstExprHashingUtils::HashString("SATURDAY");
        static constexpr uint32_t SUNDAY_HASH = ConstExprHashingUtils::HashString("SUNDAY");


        DayOfWeek GetDayOfWeekForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONDAY_HASH)
          {
            return DayOfWeek::MONDAY;
          }
          else if (hashCode == TUESDAY_HASH)
          {
            return DayOfWeek::TUESDAY;
          }
          else if (hashCode == WEDNESDAY_HASH)
          {
            return DayOfWeek::WEDNESDAY;
          }
          else if (hashCode == THURSDAY_HASH)
          {
            return DayOfWeek::THURSDAY;
          }
          else if (hashCode == FRIDAY_HASH)
          {
            return DayOfWeek::FRIDAY;
          }
          else if (hashCode == SATURDAY_HASH)
          {
            return DayOfWeek::SATURDAY;
          }
          else if (hashCode == SUNDAY_HASH)
          {
            return DayOfWeek::SUNDAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DayOfWeek>(hashCode);
          }

          return DayOfWeek::NOT_SET;
        }

        Aws::String GetNameForDayOfWeek(DayOfWeek enumValue)
        {
          switch(enumValue)
          {
          case DayOfWeek::NOT_SET:
            return {};
          case DayOfWeek::MONDAY:
            return "MONDAY";
          case DayOfWeek::TUESDAY:
            return "TUESDAY";
          case DayOfWeek::WEDNESDAY:
            return "WEDNESDAY";
          case DayOfWeek::THURSDAY:
            return "THURSDAY";
          case DayOfWeek::FRIDAY:
            return "FRIDAY";
          case DayOfWeek::SATURDAY:
            return "SATURDAY";
          case DayOfWeek::SUNDAY:
            return "SUNDAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DayOfWeekMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
