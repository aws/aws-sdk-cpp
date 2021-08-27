/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/PredictiveScalingMaxCapacityBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScalingPlans
  {
    namespace Model
    {
      namespace PredictiveScalingMaxCapacityBehaviorMapper
      {

        static const int SetForecastCapacityToMaxCapacity_HASH = HashingUtils::HashString("SetForecastCapacityToMaxCapacity");
        static const int SetMaxCapacityToForecastCapacity_HASH = HashingUtils::HashString("SetMaxCapacityToForecastCapacity");
        static const int SetMaxCapacityAboveForecastCapacity_HASH = HashingUtils::HashString("SetMaxCapacityAboveForecastCapacity");


        PredictiveScalingMaxCapacityBehavior GetPredictiveScalingMaxCapacityBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SetForecastCapacityToMaxCapacity_HASH)
          {
            return PredictiveScalingMaxCapacityBehavior::SetForecastCapacityToMaxCapacity;
          }
          else if (hashCode == SetMaxCapacityToForecastCapacity_HASH)
          {
            return PredictiveScalingMaxCapacityBehavior::SetMaxCapacityToForecastCapacity;
          }
          else if (hashCode == SetMaxCapacityAboveForecastCapacity_HASH)
          {
            return PredictiveScalingMaxCapacityBehavior::SetMaxCapacityAboveForecastCapacity;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PredictiveScalingMaxCapacityBehavior>(hashCode);
          }

          return PredictiveScalingMaxCapacityBehavior::NOT_SET;
        }

        Aws::String GetNameForPredictiveScalingMaxCapacityBehavior(PredictiveScalingMaxCapacityBehavior enumValue)
        {
          switch(enumValue)
          {
          case PredictiveScalingMaxCapacityBehavior::SetForecastCapacityToMaxCapacity:
            return "SetForecastCapacityToMaxCapacity";
          case PredictiveScalingMaxCapacityBehavior::SetMaxCapacityToForecastCapacity:
            return "SetMaxCapacityToForecastCapacity";
          case PredictiveScalingMaxCapacityBehavior::SetMaxCapacityAboveForecastCapacity:
            return "SetMaxCapacityAboveForecastCapacity";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PredictiveScalingMaxCapacityBehaviorMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
