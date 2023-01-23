/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UsageReportSchedule.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace UsageReportScheduleMapper
      {

        static const int DAILY_HASH = HashingUtils::HashString("DAILY");


        UsageReportSchedule GetUsageReportScheduleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAILY_HASH)
          {
            return UsageReportSchedule::DAILY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageReportSchedule>(hashCode);
          }

          return UsageReportSchedule::NOT_SET;
        }

        Aws::String GetNameForUsageReportSchedule(UsageReportSchedule enumValue)
        {
          switch(enumValue)
          {
          case UsageReportSchedule::DAILY:
            return "DAILY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageReportScheduleMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
