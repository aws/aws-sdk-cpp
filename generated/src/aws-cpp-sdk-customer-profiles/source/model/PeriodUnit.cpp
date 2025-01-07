/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/PeriodUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace PeriodUnitMapper
      {

        static const int HOURS_HASH = HashingUtils::HashString("HOURS");
        static const int DAYS_HASH = HashingUtils::HashString("DAYS");
        static const int WEEKS_HASH = HashingUtils::HashString("WEEKS");
        static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");


        PeriodUnit GetPeriodUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURS_HASH)
          {
            return PeriodUnit::HOURS;
          }
          else if (hashCode == DAYS_HASH)
          {
            return PeriodUnit::DAYS;
          }
          else if (hashCode == WEEKS_HASH)
          {
            return PeriodUnit::WEEKS;
          }
          else if (hashCode == MONTHS_HASH)
          {
            return PeriodUnit::MONTHS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PeriodUnit>(hashCode);
          }

          return PeriodUnit::NOT_SET;
        }

        Aws::String GetNameForPeriodUnit(PeriodUnit enumValue)
        {
          switch(enumValue)
          {
          case PeriodUnit::NOT_SET:
            return {};
          case PeriodUnit::HOURS:
            return "HOURS";
          case PeriodUnit::DAYS:
            return "DAYS";
          case PeriodUnit::WEEKS:
            return "WEEKS";
          case PeriodUnit::MONTHS:
            return "MONTHS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeriodUnitMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
