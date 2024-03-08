/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Month.h>
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
      namespace MonthMapper
      {

        static const int JANUARY_HASH = HashingUtils::HashString("JANUARY");
        static const int FEBRUARY_HASH = HashingUtils::HashString("FEBRUARY");
        static const int MARCH_HASH = HashingUtils::HashString("MARCH");
        static const int APRIL_HASH = HashingUtils::HashString("APRIL");
        static const int MAY_HASH = HashingUtils::HashString("MAY");
        static const int JUNE_HASH = HashingUtils::HashString("JUNE");
        static const int JULY_HASH = HashingUtils::HashString("JULY");
        static const int AUGUST_HASH = HashingUtils::HashString("AUGUST");
        static const int SEPTEMBER_HASH = HashingUtils::HashString("SEPTEMBER");
        static const int OCTOBER_HASH = HashingUtils::HashString("OCTOBER");
        static const int NOVEMBER_HASH = HashingUtils::HashString("NOVEMBER");
        static const int DECEMBER_HASH = HashingUtils::HashString("DECEMBER");


        Month GetMonthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JANUARY_HASH)
          {
            return Month::JANUARY;
          }
          else if (hashCode == FEBRUARY_HASH)
          {
            return Month::FEBRUARY;
          }
          else if (hashCode == MARCH_HASH)
          {
            return Month::MARCH;
          }
          else if (hashCode == APRIL_HASH)
          {
            return Month::APRIL;
          }
          else if (hashCode == MAY_HASH)
          {
            return Month::MAY;
          }
          else if (hashCode == JUNE_HASH)
          {
            return Month::JUNE;
          }
          else if (hashCode == JULY_HASH)
          {
            return Month::JULY;
          }
          else if (hashCode == AUGUST_HASH)
          {
            return Month::AUGUST;
          }
          else if (hashCode == SEPTEMBER_HASH)
          {
            return Month::SEPTEMBER;
          }
          else if (hashCode == OCTOBER_HASH)
          {
            return Month::OCTOBER;
          }
          else if (hashCode == NOVEMBER_HASH)
          {
            return Month::NOVEMBER;
          }
          else if (hashCode == DECEMBER_HASH)
          {
            return Month::DECEMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Month>(hashCode);
          }

          return Month::NOT_SET;
        }

        Aws::String GetNameForMonth(Month enumValue)
        {
          switch(enumValue)
          {
          case Month::NOT_SET:
            return {};
          case Month::JANUARY:
            return "JANUARY";
          case Month::FEBRUARY:
            return "FEBRUARY";
          case Month::MARCH:
            return "MARCH";
          case Month::APRIL:
            return "APRIL";
          case Month::MAY:
            return "MAY";
          case Month::JUNE:
            return "JUNE";
          case Month::JULY:
            return "JULY";
          case Month::AUGUST:
            return "AUGUST";
          case Month::SEPTEMBER:
            return "SEPTEMBER";
          case Month::OCTOBER:
            return "OCTOBER";
          case Month::NOVEMBER:
            return "NOVEMBER";
          case Month::DECEMBER:
            return "DECEMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonthMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
