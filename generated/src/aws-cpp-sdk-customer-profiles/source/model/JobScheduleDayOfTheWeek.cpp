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

        static constexpr uint32_t SUNDAY_HASH = ConstExprHashingUtils::HashString("SUNDAY");
        static constexpr uint32_t MONDAY_HASH = ConstExprHashingUtils::HashString("MONDAY");
        static constexpr uint32_t TUESDAY_HASH = ConstExprHashingUtils::HashString("TUESDAY");
        static constexpr uint32_t WEDNESDAY_HASH = ConstExprHashingUtils::HashString("WEDNESDAY");
        static constexpr uint32_t THURSDAY_HASH = ConstExprHashingUtils::HashString("THURSDAY");
        static constexpr uint32_t FRIDAY_HASH = ConstExprHashingUtils::HashString("FRIDAY");
        static constexpr uint32_t SATURDAY_HASH = ConstExprHashingUtils::HashString("SATURDAY");


        JobScheduleDayOfTheWeek GetJobScheduleDayOfTheWeekForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
