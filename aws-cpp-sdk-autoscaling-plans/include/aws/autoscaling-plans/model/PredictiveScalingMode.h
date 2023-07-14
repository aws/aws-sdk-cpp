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
  enum class PredictiveScalingMode
  {
    NOT_SET,
    ForecastAndScale,
    ForecastOnly
  };

namespace PredictiveScalingModeMapper
{
AWS_AUTOSCALINGPLANS_API PredictiveScalingMode GetPredictiveScalingModeForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForPredictiveScalingMode(PredictiveScalingMode value);
} // namespace PredictiveScalingModeMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
