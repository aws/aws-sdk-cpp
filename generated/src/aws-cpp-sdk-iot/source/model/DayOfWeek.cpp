/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DayOfWeek.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace DayOfWeekMapper
      {

        static constexpr uint32_t SUN_HASH = ConstExprHashingUtils::HashString("SUN");
        static constexpr uint32_t MON_HASH = ConstExprHashingUtils::HashString("MON");
        static constexpr uint32_t TUE_HASH = ConstExprHashingUtils::HashString("TUE");
        static constexpr uint32_t WED_HASH = ConstExprHashingUtils::HashString("WED");
        static constexpr uint32_t THU_HASH = ConstExprHashingUtils::HashString("THU");
        static constexpr uint32_t FRI_HASH = ConstExprHashingUtils::HashString("FRI");
        static constexpr uint32_t SAT_HASH = ConstExprHashingUtils::HashString("SAT");


        DayOfWeek GetDayOfWeekForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUN_HASH)
          {
            return DayOfWeek::SUN;
          }
          else if (hashCode == MON_HASH)
          {
            return DayOfWeek::MON;
          }
          else if (hashCode == TUE_HASH)
          {
            return DayOfWeek::TUE;
          }
          else if (hashCode == WED_HASH)
          {
            return DayOfWeek::WED;
          }
          else if (hashCode == THU_HASH)
          {
            return DayOfWeek::THU;
          }
          else if (hashCode == FRI_HASH)
          {
            return DayOfWeek::FRI;
          }
          else if (hashCode == SAT_HASH)
          {
            return DayOfWeek::SAT;
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
          case DayOfWeek::SUN:
            return "SUN";
          case DayOfWeek::MON:
            return "MON";
          case DayOfWeek::TUE:
            return "TUE";
          case DayOfWeek::WED:
            return "WED";
          case DayOfWeek::THU:
            return "THU";
          case DayOfWeek::FRI:
            return "FRI";
          case DayOfWeek::SAT:
            return "SAT";
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
  } // namespace IoT
} // namespace Aws
