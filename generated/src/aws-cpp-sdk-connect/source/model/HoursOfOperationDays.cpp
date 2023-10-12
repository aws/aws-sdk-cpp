/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HoursOfOperationDays.h>
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
      namespace HoursOfOperationDaysMapper
      {

        static constexpr uint32_t SUNDAY_HASH = ConstExprHashingUtils::HashString("SUNDAY");
        static constexpr uint32_t MONDAY_HASH = ConstExprHashingUtils::HashString("MONDAY");
        static constexpr uint32_t TUESDAY_HASH = ConstExprHashingUtils::HashString("TUESDAY");
        static constexpr uint32_t WEDNESDAY_HASH = ConstExprHashingUtils::HashString("WEDNESDAY");
        static constexpr uint32_t THURSDAY_HASH = ConstExprHashingUtils::HashString("THURSDAY");
        static constexpr uint32_t FRIDAY_HASH = ConstExprHashingUtils::HashString("FRIDAY");
        static constexpr uint32_t SATURDAY_HASH = ConstExprHashingUtils::HashString("SATURDAY");


        HoursOfOperationDays GetHoursOfOperationDaysForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUNDAY_HASH)
          {
            return HoursOfOperationDays::SUNDAY;
          }
          else if (hashCode == MONDAY_HASH)
          {
            return HoursOfOperationDays::MONDAY;
          }
          else if (hashCode == TUESDAY_HASH)
          {
            return HoursOfOperationDays::TUESDAY;
          }
          else if (hashCode == WEDNESDAY_HASH)
          {
            return HoursOfOperationDays::WEDNESDAY;
          }
          else if (hashCode == THURSDAY_HASH)
          {
            return HoursOfOperationDays::THURSDAY;
          }
          else if (hashCode == FRIDAY_HASH)
          {
            return HoursOfOperationDays::FRIDAY;
          }
          else if (hashCode == SATURDAY_HASH)
          {
            return HoursOfOperationDays::SATURDAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HoursOfOperationDays>(hashCode);
          }

          return HoursOfOperationDays::NOT_SET;
        }

        Aws::String GetNameForHoursOfOperationDays(HoursOfOperationDays enumValue)
        {
          switch(enumValue)
          {
          case HoursOfOperationDays::NOT_SET:
            return {};
          case HoursOfOperationDays::SUNDAY:
            return "SUNDAY";
          case HoursOfOperationDays::MONDAY:
            return "MONDAY";
          case HoursOfOperationDays::TUESDAY:
            return "TUESDAY";
          case HoursOfOperationDays::WEDNESDAY:
            return "WEDNESDAY";
          case HoursOfOperationDays::THURSDAY:
            return "THURSDAY";
          case HoursOfOperationDays::FRIDAY:
            return "FRIDAY";
          case HoursOfOperationDays::SATURDAY:
            return "SATURDAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HoursOfOperationDaysMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
