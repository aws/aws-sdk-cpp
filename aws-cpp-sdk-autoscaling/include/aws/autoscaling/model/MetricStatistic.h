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
  enum class MetricStatistic
  {
    NOT_SET,
    Average,
    Minimum,
    Maximum,
    SampleCount,
    Sum
  };

namespace MetricStatisticMapper
{
AWS_AUTOSCALING_API MetricStatistic GetMetricStatisticForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForMetricStatistic(MetricStatistic value);
} // namespace MetricStatisticMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
