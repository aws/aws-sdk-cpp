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
  enum class MetricType
  {
    NOT_SET,
    ASGAverageCPUUtilization,
    ASGAverageNetworkIn,
    ASGAverageNetworkOut,
    ALBRequestCountPerTarget
  };

namespace MetricTypeMapper
{
AWS_AUTOSCALING_API MetricType GetMetricTypeForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForMetricType(MetricType value);
} // namespace MetricTypeMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
