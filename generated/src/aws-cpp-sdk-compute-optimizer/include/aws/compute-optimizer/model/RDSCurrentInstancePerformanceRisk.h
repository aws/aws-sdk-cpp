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
  enum class RDSCurrentInstancePerformanceRisk
  {
    NOT_SET,
    VeryLow,
    Low,
    Medium,
    High
  };

namespace RDSCurrentInstancePerformanceRiskMapper
{
AWS_COMPUTEOPTIMIZER_API RDSCurrentInstancePerformanceRisk GetRDSCurrentInstancePerformanceRiskForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRDSCurrentInstancePerformanceRisk(RDSCurrentInstancePerformanceRisk value);
} // namespace RDSCurrentInstancePerformanceRiskMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
