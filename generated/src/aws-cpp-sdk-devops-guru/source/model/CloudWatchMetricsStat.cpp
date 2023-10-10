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

        static const int Sum_HASH = HashingUtils::HashString("Sum");
        static const int Average_HASH = HashingUtils::HashString("Average");
        static const int SampleCount_HASH = HashingUtils::HashString("SampleCount");
        static const int Minimum_HASH = HashingUtils::HashString("Minimum");
        static const int Maximum_HASH = HashingUtils::HashString("Maximum");
        static const int p99_HASH = HashingUtils::HashString("p99");
        static const int p90_HASH = HashingUtils::HashString("p90");
        static const int p50_HASH = HashingUtils::HashString("p50");


        CloudWatchMetricsStat GetCloudWatchMetricsStatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
