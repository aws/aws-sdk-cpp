/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/TimeUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostandUsageReportService
  {
    namespace Model
    {
      namespace TimeUnitMapper
      {

        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");


        TimeUnit GetTimeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURLY_HASH)
          {
            return TimeUnit::HOURLY;
          }
          else if (hashCode == DAILY_HASH)
          {
            return TimeUnit::DAILY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return TimeUnit::MONTHLY;
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
          case TimeUnit::HOURLY:
            return "HOURLY";
          case TimeUnit::DAILY:
            return "DAILY";
          case TimeUnit::MONTHLY:
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

      } // namespace TimeUnitMapper
    } // namespace Model
  } // namespace CostandUsageReportService
} // namespace Aws
