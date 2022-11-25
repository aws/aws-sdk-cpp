/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class AllocationStrategy
  {
    NOT_SET,
    lowestPrice,
    diversified,
    capacityOptimized,
    capacityOptimizedPrioritized,
    priceCapacityOptimized
  };

namespace AllocationStrategyMapper
{
AWS_EC2_API AllocationStrategy GetAllocationStrategyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAllocationStrategy(AllocationStrategy value);
} // namespace AllocationStrategyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
