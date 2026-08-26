/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ReservedCapacityAllocationStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ReservedCapacityAllocationStrategyMapper {

static const int prioritized_HASH = HashingUtils::HashString("prioritized");

ReservedCapacityAllocationStrategy GetReservedCapacityAllocationStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == prioritized_HASH) {
    return ReservedCapacityAllocationStrategy::prioritized;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReservedCapacityAllocationStrategy>(hashCode);
  }

  return ReservedCapacityAllocationStrategy::NOT_SET;
}

Aws::String GetNameForReservedCapacityAllocationStrategy(ReservedCapacityAllocationStrategy enumValue) {
  switch (enumValue) {
    case ReservedCapacityAllocationStrategy::NOT_SET:
      return {};
    case ReservedCapacityAllocationStrategy::prioritized:
      return "prioritized";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReservedCapacityAllocationStrategyMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
