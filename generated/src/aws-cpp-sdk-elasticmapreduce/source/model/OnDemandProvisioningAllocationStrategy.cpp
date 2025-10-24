﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticmapreduce/model/OnDemandProvisioningAllocationStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {
namespace OnDemandProvisioningAllocationStrategyMapper {

static const int lowest_price_HASH = HashingUtils::HashString("lowest-price");
static const int prioritized_HASH = HashingUtils::HashString("prioritized");

OnDemandProvisioningAllocationStrategy GetOnDemandProvisioningAllocationStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == lowest_price_HASH) {
    return OnDemandProvisioningAllocationStrategy::lowest_price;
  } else if (hashCode == prioritized_HASH) {
    return OnDemandProvisioningAllocationStrategy::prioritized;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnDemandProvisioningAllocationStrategy>(hashCode);
  }

  return OnDemandProvisioningAllocationStrategy::NOT_SET;
}

Aws::String GetNameForOnDemandProvisioningAllocationStrategy(OnDemandProvisioningAllocationStrategy enumValue) {
  switch (enumValue) {
    case OnDemandProvisioningAllocationStrategy::NOT_SET:
      return {};
    case OnDemandProvisioningAllocationStrategy::lowest_price:
      return "lowest-price";
    case OnDemandProvisioningAllocationStrategy::prioritized:
      return "prioritized";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnDemandProvisioningAllocationStrategyMapper
}  // namespace Model
}  // namespace EMR
}  // namespace Aws
