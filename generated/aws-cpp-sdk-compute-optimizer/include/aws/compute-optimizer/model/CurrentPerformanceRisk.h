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
  enum class CurrentPerformanceRisk
  {
    NOT_SET,
    VeryLow,
    Low,
    Medium,
    High
  };

namespace CurrentPerformanceRiskMapper
{
AWS_COMPUTEOPTIMIZER_API CurrentPerformanceRisk GetCurrentPerformanceRiskForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForCurrentPerformanceRisk(CurrentPerformanceRisk value);
} // namespace CurrentPerformanceRiskMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
