/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/TimeUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace TimeUnitMapper
      {

        static constexpr uint32_t DAILY_HASH = ConstExprHashingUtils::HashString("DAILY");
        static constexpr uint32_t MONTHLY_HASH = ConstExprHashingUtils::HashString("MONTHLY");
        static constexpr uint32_t QUARTERLY_HASH = ConstExprHashingUtils::HashString("QUARTERLY");
        static constexpr uint32_t ANNUALLY_HASH = ConstExprHashingUtils::HashString("ANNUALLY");


        TimeUnit GetTimeUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAILY_HASH)
          {
            return TimeUnit::DAILY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return TimeUnit::MONTHLY;
          }
          else if (hashCode == QUARTERLY_HASH)
          {
            return TimeUnit::QUARTERLY;
          }
          else if (hashCode == ANNUALLY_HASH)
          {
            return TimeUnit::ANNUALLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeUnit>(hashCode);
          }

          return TimeUnit::NOT_SET;
        }

        Aws::String GetNameForTimeUnit(TimeUnit enumValue)
        {
          switch(enumValue)
          {
          case TimeUnit::NOT_SET:
            return {};
          case TimeUnit::DAILY:
            return "DAILY";
          case TimeUnit::MONTHLY:
            return "MONTHLY";
          case TimeUnit::QUARTERLY:
            return "QUARTERLY";
          case TimeUnit::ANNUALLY:
            return "ANNUALLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeUnitMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
