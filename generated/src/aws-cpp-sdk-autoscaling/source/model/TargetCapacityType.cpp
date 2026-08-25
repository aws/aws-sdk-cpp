/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/TargetCapacityType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {
namespace TargetCapacityTypeMapper {

static const int on_demand_capacity_reservation_HASH = HashingUtils::HashString("on-demand-capacity-reservation");
static const int capacity_block_HASH = HashingUtils::HashString("capacity-block");
static const int interruptible_capacity_reservation_HASH = HashingUtils::HashString("interruptible-capacity-reservation");
static const int on_demand_HASH = HashingUtils::HashString("on-demand");

TargetCapacityType GetTargetCapacityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == on_demand_capacity_reservation_HASH) {
    return TargetCapacityType::on_demand_capacity_reservation;
  } else if (hashCode == capacity_block_HASH) {
    return TargetCapacityType::capacity_block;
  } else if (hashCode == interruptible_capacity_reservation_HASH) {
    return TargetCapacityType::interruptible_capacity_reservation;
  } else if (hashCode == on_demand_HASH) {
    return TargetCapacityType::on_demand;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetCapacityType>(hashCode);
  }

  return TargetCapacityType::NOT_SET;
}

Aws::String GetNameForTargetCapacityType(TargetCapacityType enumValue) {
  switch (enumValue) {
    case TargetCapacityType::NOT_SET:
      return {};
    case TargetCapacityType::on_demand_capacity_reservation:
      return "on-demand-capacity-reservation";
    case TargetCapacityType::capacity_block:
      return "capacity-block";
    case TargetCapacityType::interruptible_capacity_reservation:
      return "interruptible-capacity-reservation";
    case TargetCapacityType::on_demand:
      return "on-demand";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetCapacityTypeMapper
}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
