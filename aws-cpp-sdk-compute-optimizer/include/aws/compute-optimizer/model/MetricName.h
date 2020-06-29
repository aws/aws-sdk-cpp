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
  enum class MetricName
  {
    NOT_SET,
    Cpu,
    Memory
  };

namespace MetricNameMapper
{
AWS_COMPUTEOPTIMIZER_API MetricName GetMetricNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForMetricName(MetricName value);
} // namespace MetricNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
