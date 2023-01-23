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
  enum class PredefinedScalingMetricType
  {
    NOT_SET,
    ASGAverageCPUUtilization,
    ASGAverageNetworkIn,
    ASGAverageNetworkOut,
    ALBRequestCountPerTarget
  };

namespace PredefinedScalingMetricTypeMapper
{
AWS_AUTOSCALING_API PredefinedScalingMetricType GetPredefinedScalingMetricTypeForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForPredefinedScalingMetricType(PredefinedScalingMetricType value);
} // namespace PredefinedScalingMetricTypeMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
