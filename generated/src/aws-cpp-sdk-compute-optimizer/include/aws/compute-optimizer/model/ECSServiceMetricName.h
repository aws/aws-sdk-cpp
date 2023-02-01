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
  enum class ECSServiceMetricName
  {
    NOT_SET,
    Cpu,
    Memory
  };

namespace ECSServiceMetricNameMapper
{
AWS_COMPUTEOPTIMIZER_API ECSServiceMetricName GetECSServiceMetricNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForECSServiceMetricName(ECSServiceMetricName value);
} // namespace ECSServiceMetricNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
