/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/MetricStatistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace MetricStatisticMapper
      {

        static const int Average_HASH = HashingUtils::HashString("Average");
        static const int Minimum_HASH = HashingUtils::HashString("Minimum");
        static const int Maximum_HASH = HashingUtils::HashString("Maximum");
        static const int SampleCount_HASH = HashingUtils::HashString("SampleCount");
        static const int Sum_HASH = HashingUtils::HashString("Sum");


        MetricStatistic GetMetricStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Average_HASH)
          {
            return MetricStatistic::Average;
          }
          else if (hashCode == Minimum_HASH)
          {
            return MetricStatistic::Minimum;
          }
          else if (hashCode == Maximum_HASH)
          {
            return MetricStatistic::Maximum;
          }
          else if (hashCode == SampleCount_HASH)
          {
            return MetricStatistic::SampleCount;
          }
          else if (hashCode == Sum_HASH)
          {
            return MetricStatistic::Sum;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricStatistic>(hashCode);
          }

          return MetricStatistic::NOT_SET;
        }

        Aws::String GetNameForMetricStatistic(MetricStatistic enumValue)
        {
          switch(enumValue)
          {
          case MetricStatistic::Average:
            return "Average";
          case MetricStatistic::Minimum:
            return "Minimum";
          case MetricStatistic::Maximum:
            return "Maximum";
          case MetricStatistic::SampleCount:
            return "SampleCount";
          case MetricStatistic::Sum:
            return "Sum";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricStatisticMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
