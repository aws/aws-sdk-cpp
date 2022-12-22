/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class AutoScalingConfiguration
  {
    NOT_SET,
    TargetTrackingScalingCpu,
    TargetTrackingScalingMemory
  };

namespace AutoScalingConfigurationMapper
{
AWS_COMPUTEOPTIMIZER_API AutoScalingConfiguration GetAutoScalingConfigurationForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForAutoScalingConfiguration(AutoScalingConfiguration value);
} // namespace AutoScalingConfigurationMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
