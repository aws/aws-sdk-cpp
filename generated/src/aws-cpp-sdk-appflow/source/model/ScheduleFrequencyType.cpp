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

        static constexpr uint32_t BYMINUTE_HASH = ConstExprHashingUtils::HashString("BYMINUTE");
        static constexpr uint32_t HOURLY_HASH = ConstExprHashingUtils::HashString("HOURLY");
        static constexpr uint32_t DAILY_HASH = ConstExprHashingUtils::HashString("DAILY");
        static constexpr uint32_t WEEKLY_HASH = ConstExprHashingUtils::HashString("WEEKLY");
        static constexpr uint32_t MONTHLY_HASH = ConstExprHashingUtils::HashString("MONTHLY");
        static constexpr uint32_t ONCE_HASH = ConstExprHashingUtils::HashString("ONCE");


        ScheduleFrequencyType GetScheduleFrequencyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ScheduleFrequencyType::NOT_SET:
            return {};
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
