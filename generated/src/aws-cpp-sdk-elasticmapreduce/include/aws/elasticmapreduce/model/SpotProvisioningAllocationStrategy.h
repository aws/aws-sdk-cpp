﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

namespace Aws {
namespace EMR {
namespace Model {
enum class SpotProvisioningAllocationStrategy {
  NOT_SET,
  capacity_optimized,
  price_capacity_optimized,
  lowest_price,
  diversified,
  capacity_optimized_prioritized
};

namespace SpotProvisioningAllocationStrategyMapper {
AWS_EMR_API SpotProvisioningAllocationStrategy GetSpotProvisioningAllocationStrategyForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForSpotProvisioningAllocationStrategy(SpotProvisioningAllocationStrategy value);
}  // namespace SpotProvisioningAllocationStrategyMapper
}  // namespace Model
}  // namespace EMR
}  // namespace Aws
