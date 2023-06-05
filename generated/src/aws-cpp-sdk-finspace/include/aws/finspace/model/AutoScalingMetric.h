/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class AutoScalingMetric
  {
    NOT_SET,
    CPU_UTILIZATION_PERCENTAGE
  };

namespace AutoScalingMetricMapper
{
AWS_FINSPACE_API AutoScalingMetric GetAutoScalingMetricForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForAutoScalingMetric(AutoScalingMetric value);
} // namespace AutoScalingMetricMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
