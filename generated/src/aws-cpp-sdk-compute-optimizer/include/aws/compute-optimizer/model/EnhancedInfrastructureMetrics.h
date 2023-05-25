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
  enum class EnhancedInfrastructureMetrics
  {
    NOT_SET,
    Active,
    Inactive
  };

namespace EnhancedInfrastructureMetricsMapper
{
AWS_COMPUTEOPTIMIZER_API EnhancedInfrastructureMetrics GetEnhancedInfrastructureMetricsForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics value);
} // namespace EnhancedInfrastructureMetricsMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
