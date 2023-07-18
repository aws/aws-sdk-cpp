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
  enum class SpotAllocationStrategy
  {
    NOT_SET,
    lowest_price,
    diversified,
    capacity_optimized,
    capacity_optimized_prioritized
  };

namespace SpotAllocationStrategyMapper
{
AWS_EC2_API SpotAllocationStrategy GetSpotAllocationStrategyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSpotAllocationStrategy(SpotAllocationStrategy value);
} // namespace SpotAllocationStrategyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
