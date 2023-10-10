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

        static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");
        static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
        static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
        static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
        static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
        static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
        static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");


        HoursOfOperationDays GetHoursOfOperationDaysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
