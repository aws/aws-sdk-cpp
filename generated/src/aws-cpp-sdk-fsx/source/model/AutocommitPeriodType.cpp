/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AutocommitPeriodType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace AutocommitPeriodTypeMapper
      {

        static const int MINUTES_HASH = HashingUtils::HashString("MINUTES");
        static const int HOURS_HASH = HashingUtils::HashString("HOURS");
        static const int DAYS_HASH = HashingUtils::HashString("DAYS");
        static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");
        static const int YEARS_HASH = HashingUtils::HashString("YEARS");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AutocommitPeriodType GetAutocommitPeriodTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MINUTES_HASH)
          {
            return AutocommitPeriodType::MINUTES;
          }
          else if (hashCode == HOURS_HASH)
          {
            return AutocommitPeriodType::HOURS;
          }
          else if (hashCode == DAYS_HASH)
          {
            return AutocommitPeriodType::DAYS;
          }
          else if (hashCode == MONTHS_HASH)
          {
            return AutocommitPeriodType::MONTHS;
          }
          else if (hashCode == YEARS_HASH)
          {
            return AutocommitPeriodType::YEARS;
          }
          else if (hashCode == NONE_HASH)
          {
            return AutocommitPeriodType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutocommitPeriodType>(hashCode);
          }

          return AutocommitPeriodType::NOT_SET;
        }

        Aws::String GetNameForAutocommitPeriodType(AutocommitPeriodType enumValue)
        {
          switch(enumValue)
          {
          case AutocommitPeriodType::NOT_SET:
            return {};
          case AutocommitPeriodType::MINUTES:
            return "MINUTES";
          case AutocommitPeriodType::HOURS:
            return "HOURS";
          case AutocommitPeriodType::DAYS:
            return "DAYS";
          case AutocommitPeriodType::MONTHS:
            return "MONTHS";
          case AutocommitPeriodType::YEARS:
            return "YEARS";
          case AutocommitPeriodType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutocommitPeriodTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
