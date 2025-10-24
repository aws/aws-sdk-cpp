﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticmapreduce/model/SpotProvisioningAllocationStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {
namespace SpotProvisioningAllocationStrategyMapper {

static const int capacity_optimized_HASH = HashingUtils::HashString("capacity-optimized");
static const int price_capacity_optimized_HASH = HashingUtils::HashString("price-capacity-optimized");
static const int lowest_price_HASH = HashingUtils::HashString("lowest-price");
static const int diversified_HASH = HashingUtils::HashString("diversified");
static const int capacity_optimized_prioritized_HASH = HashingUtils::HashString("capacity-optimized-prioritized");

SpotProvisioningAllocationStrategy GetSpotProvisioningAllocationStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == capacity_optimized_HASH) {
    return SpotProvisioningAllocationStrategy::capacity_optimized;
  } else if (hashCode == price_capacity_optimized_HASH) {
    return SpotProvisioningAllocationStrategy::price_capacity_optimized;
  } else if (hashCode == lowest_price_HASH) {
    return SpotProvisioningAllocationStrategy::lowest_price;
  } else if (hashCode == diversified_HASH) {
    return SpotProvisioningAllocationStrategy::diversified;
  } else if (hashCode == capacity_optimized_prioritized_HASH) {
    return SpotProvisioningAllocationStrategy::capacity_optimized_prioritized;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpotProvisioningAllocationStrategy>(hashCode);
  }

  return SpotProvisioningAllocationStrategy::NOT_SET;
}

Aws::String GetNameForSpotProvisioningAllocationStrategy(SpotProvisioningAllocationStrategy enumValue) {
  switch (enumValue) {
    case SpotProvisioningAllocationStrategy::NOT_SET:
      return {};
    case SpotProvisioningAllocationStrategy::capacity_optimized:
      return "capacity-optimized";
    case SpotProvisioningAllocationStrategy::price_capacity_optimized:
      return "price-capacity-optimized";
    case SpotProvisioningAllocationStrategy::lowest_price:
      return "lowest-price";
    case SpotProvisioningAllocationStrategy::diversified:
      return "diversified";
    case SpotProvisioningAllocationStrategy::capacity_optimized_prioritized:
      return "capacity-optimized-prioritized";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpotProvisioningAllocationStrategyMapper
}  // namespace Model
}  // namespace EMR
}  // namespace Aws
