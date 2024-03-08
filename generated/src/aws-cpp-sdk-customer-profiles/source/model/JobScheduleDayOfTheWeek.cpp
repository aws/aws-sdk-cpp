/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/JobScheduleDayOfTheWeek.h>
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
      namespace JobScheduleDayOfTheWeekMapper
      {

        static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");
        static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
        static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
        static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
        static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
        static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
        static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");


        JobScheduleDayOfTheWeek GetJobScheduleDayOfTheWeekForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUNDAY_HASH)
          {
            return JobScheduleDayOfTheWeek::SUNDAY;
          }
          else if (hashCode == MONDAY_HASH)
          {
            return JobScheduleDayOfTheWeek::MONDAY;
          }
          else if (hashCode == TUESDAY_HASH)
          {
            return JobScheduleDayOfTheWeek::TUESDAY;
          }
          else if (hashCode == WEDNESDAY_HASH)
          {
            return JobScheduleDayOfTheWeek::WEDNESDAY;
          }
          else if (hashCode == THURSDAY_HASH)
          {
            return JobScheduleDayOfTheWeek::THURSDAY;
          }
          else if (hashCode == FRIDAY_HASH)
          {
            return JobScheduleDayOfTheWeek::FRIDAY;
          }
          else if (hashCode == SATURDAY_HASH)
          {
            return JobScheduleDayOfTheWeek::SATURDAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobScheduleDayOfTheWeek>(hashCode);
          }

          return JobScheduleDayOfTheWeek::NOT_SET;
        }

        Aws::String GetNameForJobScheduleDayOfTheWeek(JobScheduleDayOfTheWeek enumValue)
        {
          switch(enumValue)
          {
          case JobScheduleDayOfTheWeek::NOT_SET:
            return {};
          case JobScheduleDayOfTheWeek::SUNDAY:
            return "SUNDAY";
          case JobScheduleDayOfTheWeek::MONDAY:
            return "MONDAY";
          case JobScheduleDayOfTheWeek::TUESDAY:
            return "TUESDAY";
          case JobScheduleDayOfTheWeek::WEDNESDAY:
            return "WEDNESDAY";
          case JobScheduleDayOfTheWeek::THURSDAY:
            return "THURSDAY";
          case JobScheduleDayOfTheWeek::FRIDAY:
            return "FRIDAY";
          case JobScheduleDayOfTheWeek::SATURDAY:
            return "SATURDAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobScheduleDayOfTheWeekMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
