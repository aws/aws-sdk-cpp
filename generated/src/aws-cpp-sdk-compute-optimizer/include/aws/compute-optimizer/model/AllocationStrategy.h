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
  enum class AllocationStrategy
  {
    NOT_SET,
    Prioritized,
    LowestPrice
  };

namespace AllocationStrategyMapper
{
AWS_COMPUTEOPTIMIZER_API AllocationStrategy GetAllocationStrategyForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForAllocationStrategy(AllocationStrategy value);
} // namespace AllocationStrategyMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
