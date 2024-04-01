/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/Period.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace PeriodMapper
      {

        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");


        Period GetPeriodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURLY_HASH)
          {
            return Period::HOURLY;
          }
          else if (hashCode == DAILY_HASH)
          {
            return Period::DAILY;
          }
          else if (hashCode == WEEKLY_HASH)
          {
            return Period::WEEKLY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return Period::MONTHLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Period>(hashCode);
          }

          return Period::NOT_SET;
        }

        Aws::String GetNameForPeriod(Period enumValue)
        {
          switch(enumValue)
          {
          case Period::NOT_SET:
            return {};
          case Period::HOURLY:
            return "HOURLY";
          case Period::DAILY:
            return "DAILY";
          case Period::WEEKLY:
            return "WEEKLY";
          case Period::MONTHLY:
            return "MONTHLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeriodMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
