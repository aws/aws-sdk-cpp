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

        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
        static const int QUARTERLY_HASH = HashingUtils::HashString("QUARTERLY");
        static const int ANNUALLY_HASH = HashingUtils::HashString("ANNUALLY");


        TimeUnit GetTimeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
