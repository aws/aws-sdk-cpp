/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/DayOfWeek.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace DayOfWeekMapper
      {

        static const int Monday_HASH = HashingUtils::HashString("Monday");
        static const int Tuesday_HASH = HashingUtils::HashString("Tuesday");
        static const int Wednesday_HASH = HashingUtils::HashString("Wednesday");
        static const int Thursday_HASH = HashingUtils::HashString("Thursday");
        static const int Friday_HASH = HashingUtils::HashString("Friday");
        static const int Saturday_HASH = HashingUtils::HashString("Saturday");
        static const int Sunday_HASH = HashingUtils::HashString("Sunday");


        DayOfWeek GetDayOfWeekForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Monday_HASH)
          {
            return DayOfWeek::Monday;
          }
          else if (hashCode == Tuesday_HASH)
          {
            return DayOfWeek::Tuesday;
          }
          else if (hashCode == Wednesday_HASH)
          {
            return DayOfWeek::Wednesday;
          }
          else if (hashCode == Thursday_HASH)
          {
            return DayOfWeek::Thursday;
          }
          else if (hashCode == Friday_HASH)
          {
            return DayOfWeek::Friday;
          }
          else if (hashCode == Saturday_HASH)
          {
            return DayOfWeek::Saturday;
          }
          else if (hashCode == Sunday_HASH)
          {
            return DayOfWeek::Sunday;
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
          case DayOfWeek::Monday:
            return "Monday";
          case DayOfWeek::Tuesday:
            return "Tuesday";
          case DayOfWeek::Wednesday:
            return "Wednesday";
          case DayOfWeek::Thursday:
            return "Thursday";
          case DayOfWeek::Friday:
            return "Friday";
          case DayOfWeek::Saturday:
            return "Saturday";
          case DayOfWeek::Sunday:
            return "Sunday";
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
  } // namespace GeoRoutes
} // namespace Aws
