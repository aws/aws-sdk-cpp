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

        static constexpr uint32_t MINUTES_HASH = ConstExprHashingUtils::HashString("MINUTES");
        static constexpr uint32_t HOURS_HASH = ConstExprHashingUtils::HashString("HOURS");
        static constexpr uint32_t DAYS_HASH = ConstExprHashingUtils::HashString("DAYS");
        static constexpr uint32_t MONTHS_HASH = ConstExprHashingUtils::HashString("MONTHS");
        static constexpr uint32_t YEARS_HASH = ConstExprHashingUtils::HashString("YEARS");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        AutocommitPeriodType GetAutocommitPeriodTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
