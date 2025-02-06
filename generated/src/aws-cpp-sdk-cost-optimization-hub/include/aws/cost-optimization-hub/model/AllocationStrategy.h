/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostOptimizationHub
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
AWS_COSTOPTIMIZATIONHUB_API AllocationStrategy GetAllocationStrategyForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForAllocationStrategy(AllocationStrategy value);
} // namespace AllocationStrategyMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
