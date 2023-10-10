/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PredefinedScalingMetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace PredefinedScalingMetricTypeMapper
      {

        static const int ASGAverageCPUUtilization_HASH = HashingUtils::HashString("ASGAverageCPUUtilization");
        static const int ASGAverageNetworkIn_HASH = HashingUtils::HashString("ASGAverageNetworkIn");
        static const int ASGAverageNetworkOut_HASH = HashingUtils::HashString("ASGAverageNetworkOut");
        static const int ALBRequestCountPerTarget_HASH = HashingUtils::HashString("ALBRequestCountPerTarget");


        PredefinedScalingMetricType GetPredefinedScalingMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASGAverageCPUUtilization_HASH)
          {
            return PredefinedScalingMetricType::ASGAverageCPUUtilization;
          }
          else if (hashCode == ASGAverageNetworkIn_HASH)
          {
            return PredefinedScalingMetricType::ASGAverageNetworkIn;
          }
          else if (hashCode == ASGAverageNetworkOut_HASH)
          {
            return PredefinedScalingMetricType::ASGAverageNetworkOut;
          }
          else if (hashCode == ALBRequestCountPerTarget_HASH)
          {
            return PredefinedScalingMetricType::ALBRequestCountPerTarget;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PredefinedScalingMetricType>(hashCode);
          }

          return PredefinedScalingMetricType::NOT_SET;
        }

        Aws::String GetNameForPredefinedScalingMetricType(PredefinedScalingMetricType enumValue)
        {
          switch(enumValue)
          {
          case PredefinedScalingMetricType::NOT_SET:
            return {};
          case PredefinedScalingMetricType::ASGAverageCPUUtilization:
            return "ASGAverageCPUUtilization";
          case PredefinedScalingMetricType::ASGAverageNetworkIn:
            return "ASGAverageNetworkIn";
          case PredefinedScalingMetricType::ASGAverageNetworkOut:
            return "ASGAverageNetworkOut";
          case PredefinedScalingMetricType::ALBRequestCountPerTarget:
            return "ALBRequestCountPerTarget";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PredefinedScalingMetricTypeMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
