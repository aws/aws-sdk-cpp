/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{
  enum class PredictiveScalingMode
  {
    NOT_SET,
    ForecastOnly,
    ForecastAndScale
  };

namespace PredictiveScalingModeMapper
{
AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMode GetPredictiveScalingModeForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForPredictiveScalingMode(PredictiveScalingMode value);
} // namespace PredictiveScalingModeMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
