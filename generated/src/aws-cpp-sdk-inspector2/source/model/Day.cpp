/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Day.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace DayMapper
      {

        static const int SUN_HASH = HashingUtils::HashString("SUN");
        static const int MON_HASH = HashingUtils::HashString("MON");
        static const int TUE_HASH = HashingUtils::HashString("TUE");
        static const int WED_HASH = HashingUtils::HashString("WED");
        static const int THU_HASH = HashingUtils::HashString("THU");
        static const int FRI_HASH = HashingUtils::HashString("FRI");
        static const int SAT_HASH = HashingUtils::HashString("SAT");


        Day GetDayForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUN_HASH)
          {
            return Day::SUN;
          }
          else if (hashCode == MON_HASH)
          {
            return Day::MON;
          }
          else if (hashCode == TUE_HASH)
          {
            return Day::TUE;
          }
          else if (hashCode == WED_HASH)
          {
            return Day::WED;
          }
          else if (hashCode == THU_HASH)
          {
            return Day::THU;
          }
          else if (hashCode == FRI_HASH)
          {
            return Day::FRI;
          }
          else if (hashCode == SAT_HASH)
          {
            return Day::SAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Day>(hashCode);
          }

          return Day::NOT_SET;
        }

        Aws::String GetNameForDay(Day enumValue)
        {
          switch(enumValue)
          {
          case Day::NOT_SET:
            return {};
          case Day::SUN:
            return "SUN";
          case Day::MON:
            return "MON";
          case Day::TUE:
            return "TUE";
          case Day::WED:
            return "WED";
          case Day::THU:
            return "THU";
          case Day::FRI:
            return "FRI";
          case Day::SAT:
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

      } // namespace DayMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
