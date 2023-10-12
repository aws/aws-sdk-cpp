/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/CloudWatchMetricsStat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace CloudWatchMetricsStatMapper
      {

        static constexpr uint32_t Sum_HASH = ConstExprHashingUtils::HashString("Sum");
        static constexpr uint32_t Average_HASH = ConstExprHashingUtils::HashString("Average");
        static constexpr uint32_t SampleCount_HASH = ConstExprHashingUtils::HashString("SampleCount");
        static constexpr uint32_t Minimum_HASH = ConstExprHashingUtils::HashString("Minimum");
        static constexpr uint32_t Maximum_HASH = ConstExprHashingUtils::HashString("Maximum");
        static constexpr uint32_t p99_HASH = ConstExprHashingUtils::HashString("p99");
        static constexpr uint32_t p90_HASH = ConstExprHashingUtils::HashString("p90");
        static constexpr uint32_t p50_HASH = ConstExprHashingUtils::HashString("p50");


        CloudWatchMetricsStat GetCloudWatchMetricsStatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Sum_HASH)
          {
            return CloudWatchMetricsStat::Sum;
          }
          else if (hashCode == Average_HASH)
          {
            return CloudWatchMetricsStat::Average;
          }
          else if (hashCode == SampleCount_HASH)
          {
            return CloudWatchMetricsStat::SampleCount;
          }
          else if (hashCode == Minimum_HASH)
          {
            return CloudWatchMetricsStat::Minimum;
          }
          else if (hashCode == Maximum_HASH)
          {
            return CloudWatchMetricsStat::Maximum;
          }
          else if (hashCode == p99_HASH)
          {
            return CloudWatchMetricsStat::p99;
          }
          else if (hashCode == p90_HASH)
          {
            return CloudWatchMetricsStat::p90;
          }
          else if (hashCode == p50_HASH)
          {
            return CloudWatchMetricsStat::p50;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchMetricsStat>(hashCode);
          }

          return CloudWatchMetricsStat::NOT_SET;
        }

        Aws::String GetNameForCloudWatchMetricsStat(CloudWatchMetricsStat enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchMetricsStat::NOT_SET:
            return {};
          case CloudWatchMetricsStat::Sum:
            return "Sum";
          case CloudWatchMetricsStat::Average:
            return "Average";
          case CloudWatchMetricsStat::SampleCount:
            return "SampleCount";
          case CloudWatchMetricsStat::Minimum:
            return "Minimum";
          case CloudWatchMetricsStat::Maximum:
            return "Maximum";
          case CloudWatchMetricsStat::p99:
            return "p99";
          case CloudWatchMetricsStat::p90:
            return "p90";
          case CloudWatchMetricsStat::p50:
            return "p50";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchMetricsStatMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
