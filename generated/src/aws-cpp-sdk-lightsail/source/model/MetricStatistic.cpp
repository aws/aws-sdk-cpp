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

        static const int Minimum_HASH = HashingUtils::HashString("Minimum");
        static const int Maximum_HASH = HashingUtils::HashString("Maximum");
        static const int Sum_HASH = HashingUtils::HashString("Sum");
        static const int Average_HASH = HashingUtils::HashString("Average");
        static const int SampleCount_HASH = HashingUtils::HashString("SampleCount");


        MetricStatistic GetMetricStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
