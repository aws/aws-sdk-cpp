/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/AutoScalingMetric.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace AutoScalingMetricMapper
      {

        static const int CPU_UTILIZATION_PERCENTAGE_HASH = HashingUtils::HashString("CPU_UTILIZATION_PERCENTAGE");


        AutoScalingMetric GetAutoScalingMetricForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPU_UTILIZATION_PERCENTAGE_HASH)
          {
            return AutoScalingMetric::CPU_UTILIZATION_PERCENTAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoScalingMetric>(hashCode);
          }

          return AutoScalingMetric::NOT_SET;
        }

        Aws::String GetNameForAutoScalingMetric(AutoScalingMetric enumValue)
        {
          switch(enumValue)
          {
          case AutoScalingMetric::NOT_SET:
            return {};
          case AutoScalingMetric::CPU_UTILIZATION_PERCENTAGE:
            return "CPU_UTILIZATION_PERCENTAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoScalingMetricMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
