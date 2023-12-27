/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PredictiveScalingMaxCapacityBreachBehavior.h>
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
      namespace PredictiveScalingMaxCapacityBreachBehaviorMapper
      {

        static const int HonorMaxCapacity_HASH = HashingUtils::HashString("HonorMaxCapacity");
        static const int IncreaseMaxCapacity_HASH = HashingUtils::HashString("IncreaseMaxCapacity");


        PredictiveScalingMaxCapacityBreachBehavior GetPredictiveScalingMaxCapacityBreachBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HonorMaxCapacity_HASH)
          {
            return PredictiveScalingMaxCapacityBreachBehavior::HonorMaxCapacity;
          }
          else if (hashCode == IncreaseMaxCapacity_HASH)
          {
            return PredictiveScalingMaxCapacityBreachBehavior::IncreaseMaxCapacity;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PredictiveScalingMaxCapacityBreachBehavior>(hashCode);
          }

          return PredictiveScalingMaxCapacityBreachBehavior::NOT_SET;
        }

        Aws::String GetNameForPredictiveScalingMaxCapacityBreachBehavior(PredictiveScalingMaxCapacityBreachBehavior enumValue)
        {
          switch(enumValue)
          {
          case PredictiveScalingMaxCapacityBreachBehavior::NOT_SET:
            return {};
          case PredictiveScalingMaxCapacityBreachBehavior::HonorMaxCapacity:
            return "HonorMaxCapacity";
          case PredictiveScalingMaxCapacityBreachBehavior::IncreaseMaxCapacity:
            return "IncreaseMaxCapacity";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PredictiveScalingMaxCapacityBreachBehaviorMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
