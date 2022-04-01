/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class PredictiveScalingMaxCapacityBreachBehavior
  {
    NOT_SET,
    HonorMaxCapacity,
    IncreaseMaxCapacity
  };

namespace PredictiveScalingMaxCapacityBreachBehaviorMapper
{
AWS_AUTOSCALING_API PredictiveScalingMaxCapacityBreachBehavior GetPredictiveScalingMaxCapacityBreachBehaviorForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForPredictiveScalingMaxCapacityBreachBehavior(PredictiveScalingMaxCapacityBreachBehavior value);
} // namespace PredictiveScalingMaxCapacityBreachBehaviorMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
