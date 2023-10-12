/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/ReportFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationCostProfiler
  {
    namespace Model
    {
      namespace ReportFrequencyMapper
      {

        static constexpr uint32_t MONTHLY_HASH = ConstExprHashingUtils::HashString("MONTHLY");
        static constexpr uint32_t DAILY_HASH = ConstExprHashingUtils::HashString("DAILY");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        ReportFrequency GetReportFrequencyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONTHLY_HASH)
          {
            return ReportFrequency::MONTHLY;
          }
          else if (hashCode == DAILY_HASH)
          {
            return ReportFrequency::DAILY;
          }
          else if (hashCode == ALL_HASH)
          {
            return ReportFrequency::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportFrequency>(hashCode);
          }

          return ReportFrequency::NOT_SET;
        }

        Aws::String GetNameForReportFrequency(ReportFrequency enumValue)
        {
          switch(enumValue)
          {
          case ReportFrequency::NOT_SET:
            return {};
          case ReportFrequency::MONTHLY:
            return "MONTHLY";
          case ReportFrequency::DAILY:
            return "DAILY";
          case ReportFrequency::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportFrequencyMapper
    } // namespace Model
  } // namespace ApplicationCostProfiler
} // namespace Aws
