/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/RetentionPeriodType.h>
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
      namespace RetentionPeriodTypeMapper
      {

        static constexpr uint32_t SECONDS_HASH = ConstExprHashingUtils::HashString("SECONDS");
        static constexpr uint32_t MINUTES_HASH = ConstExprHashingUtils::HashString("MINUTES");
        static constexpr uint32_t HOURS_HASH = ConstExprHashingUtils::HashString("HOURS");
        static constexpr uint32_t DAYS_HASH = ConstExprHashingUtils::HashString("DAYS");
        static constexpr uint32_t MONTHS_HASH = ConstExprHashingUtils::HashString("MONTHS");
        static constexpr uint32_t YEARS_HASH = ConstExprHashingUtils::HashString("YEARS");
        static constexpr uint32_t INFINITE_HASH = ConstExprHashingUtils::HashString("INFINITE");
        static constexpr uint32_t UNSPECIFIED_HASH = ConstExprHashingUtils::HashString("UNSPECIFIED");


        RetentionPeriodType GetRetentionPeriodTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECONDS_HASH)
          {
            return RetentionPeriodType::SECONDS;
          }
          else if (hashCode == MINUTES_HASH)
          {
            return RetentionPeriodType::MINUTES;
          }
          else if (hashCode == HOURS_HASH)
          {
            return RetentionPeriodType::HOURS;
          }
          else if (hashCode == DAYS_HASH)
          {
            return RetentionPeriodType::DAYS;
          }
          else if (hashCode == MONTHS_HASH)
          {
            return RetentionPeriodType::MONTHS;
          }
          else if (hashCode == YEARS_HASH)
          {
            return RetentionPeriodType::YEARS;
          }
          else if (hashCode == INFINITE_HASH)
          {
            return RetentionPeriodType::INFINITE;
          }
          else if (hashCode == UNSPECIFIED_HASH)
          {
            return RetentionPeriodType::UNSPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetentionPeriodType>(hashCode);
          }

          return RetentionPeriodType::NOT_SET;
        }

        Aws::String GetNameForRetentionPeriodType(RetentionPeriodType enumValue)
        {
          switch(enumValue)
          {
          case RetentionPeriodType::NOT_SET:
            return {};
          case RetentionPeriodType::SECONDS:
            return "SECONDS";
          case RetentionPeriodType::MINUTES:
            return "MINUTES";
          case RetentionPeriodType::HOURS:
            return "HOURS";
          case RetentionPeriodType::DAYS:
            return "DAYS";
          case RetentionPeriodType::MONTHS:
            return "MONTHS";
          case RetentionPeriodType::YEARS:
            return "YEARS";
          case RetentionPeriodType::INFINITE:
            return "INFINITE";
          case RetentionPeriodType::UNSPECIFIED:
            return "UNSPECIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetentionPeriodTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
