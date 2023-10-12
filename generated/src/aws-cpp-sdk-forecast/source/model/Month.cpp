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

        static constexpr uint32_t JANUARY_HASH = ConstExprHashingUtils::HashString("JANUARY");
        static constexpr uint32_t FEBRUARY_HASH = ConstExprHashingUtils::HashString("FEBRUARY");
        static constexpr uint32_t MARCH_HASH = ConstExprHashingUtils::HashString("MARCH");
        static constexpr uint32_t APRIL_HASH = ConstExprHashingUtils::HashString("APRIL");
        static constexpr uint32_t MAY_HASH = ConstExprHashingUtils::HashString("MAY");
        static constexpr uint32_t JUNE_HASH = ConstExprHashingUtils::HashString("JUNE");
        static constexpr uint32_t JULY_HASH = ConstExprHashingUtils::HashString("JULY");
        static constexpr uint32_t AUGUST_HASH = ConstExprHashingUtils::HashString("AUGUST");
        static constexpr uint32_t SEPTEMBER_HASH = ConstExprHashingUtils::HashString("SEPTEMBER");
        static constexpr uint32_t OCTOBER_HASH = ConstExprHashingUtils::HashString("OCTOBER");
        static constexpr uint32_t NOVEMBER_HASH = ConstExprHashingUtils::HashString("NOVEMBER");
        static constexpr uint32_t DECEMBER_HASH = ConstExprHashingUtils::HashString("DECEMBER");


        Month GetMonthForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
