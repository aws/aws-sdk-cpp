/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{
  enum class PredictiveScalingMaxCapacityBehavior
  {
    NOT_SET,
    SetForecastCapacityToMaxCapacity,
    SetMaxCapacityToForecastCapacity,
    SetMaxCapacityAboveForecastCapacity
  };

namespace PredictiveScalingMaxCapacityBehaviorMapper
{
AWS_AUTOSCALINGPLANS_API PredictiveScalingMaxCapacityBehavior GetPredictiveScalingMaxCapacityBehaviorForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForPredictiveScalingMaxCapacityBehavior(PredictiveScalingMaxCapacityBehavior value);
} // namespace PredictiveScalingMaxCapacityBehaviorMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
