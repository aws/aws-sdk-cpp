/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ScheduleFrequencyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace ScheduleFrequencyTypeMapper
      {

        static const int BYMINUTE_HASH = HashingUtils::HashString("BYMINUTE");
        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
        static const int ONCE_HASH = HashingUtils::HashString("ONCE");


        ScheduleFrequencyType GetScheduleFrequencyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BYMINUTE_HASH)
          {
            return ScheduleFrequencyType::BYMINUTE;
          }
          else if (hashCode == HOURLY_HASH)
          {
            return ScheduleFrequencyType::HOURLY;
          }
          else if (hashCode == DAILY_HASH)
          {
            return ScheduleFrequencyType::DAILY;
          }
          else if (hashCode == WEEKLY_HASH)
          {
            return ScheduleFrequencyType::WEEKLY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return ScheduleFrequencyType::MONTHLY;
          }
          else if (hashCode == ONCE_HASH)
          {
            return ScheduleFrequencyType::ONCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleFrequencyType>(hashCode);
          }

          return ScheduleFrequencyType::NOT_SET;
        }

        Aws::String GetNameForScheduleFrequencyType(ScheduleFrequencyType enumValue)
        {
          switch(enumValue)
          {
          case ScheduleFrequencyType::BYMINUTE:
            return "BYMINUTE";
          case ScheduleFrequencyType::HOURLY:
            return "HOURLY";
          case ScheduleFrequencyType::DAILY:
            return "DAILY";
          case ScheduleFrequencyType::WEEKLY:
            return "WEEKLY";
          case ScheduleFrequencyType::MONTHLY:
            return "MONTHLY";
          case ScheduleFrequencyType::ONCE:
            return "ONCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleFrequencyTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
