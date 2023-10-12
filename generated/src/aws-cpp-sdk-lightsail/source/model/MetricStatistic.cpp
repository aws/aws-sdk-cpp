/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/MetricStatistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace MetricStatisticMapper
      {

        static constexpr uint32_t Minimum_HASH = ConstExprHashingUtils::HashString("Minimum");
        static constexpr uint32_t Maximum_HASH = ConstExprHashingUtils::HashString("Maximum");
        static constexpr uint32_t Sum_HASH = ConstExprHashingUtils::HashString("Sum");
        static constexpr uint32_t Average_HASH = ConstExprHashingUtils::HashString("Average");
        static constexpr uint32_t SampleCount_HASH = ConstExprHashingUtils::HashString("SampleCount");


        MetricStatistic GetMetricStatisticForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Minimum_HASH)
          {
            return MetricStatistic::Minimum;
          }
          else if (hashCode == Maximum_HASH)
          {
            return MetricStatistic::Maximum;
          }
          else if (hashCode == Sum_HASH)
          {
            return MetricStatistic::Sum;
          }
          else if (hashCode == Average_HASH)
          {
            return MetricStatistic::Average;
          }
          else if (hashCode == SampleCount_HASH)
          {
            return MetricStatistic::SampleCount;
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
          case MetricStatistic::NOT_SET:
            return {};
          case MetricStatistic::Minimum:
            return "Minimum";
          case MetricStatistic::Maximum:
            return "Maximum";
          case MetricStatistic::Sum:
            return "Sum";
          case MetricStatistic::Average:
            return "Average";
          case MetricStatistic::SampleCount:
            return "SampleCount";
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
  } // namespace Lightsail
} // namespace Aws
