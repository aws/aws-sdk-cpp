/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/CapacityReservationAdjustmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace CapacityReservationAdjustmentStatusMapper {

static const int requested_HASH = HashingUtils::HashString("requested");
static const int applied_HASH = HashingUtils::HashString("applied");
static const int rejected_HASH = HashingUtils::HashString("rejected");

CapacityReservationAdjustmentStatus GetCapacityReservationAdjustmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == requested_HASH) {
    return CapacityReservationAdjustmentStatus::requested;
  } else if (hashCode == applied_HASH) {
    return CapacityReservationAdjustmentStatus::applied;
  } else if (hashCode == rejected_HASH) {
    return CapacityReservationAdjustmentStatus::rejected;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationAdjustmentStatus>(hashCode);
  }

  return CapacityReservationAdjustmentStatus::NOT_SET;
}

Aws::String GetNameForCapacityReservationAdjustmentStatus(CapacityReservationAdjustmentStatus enumValue) {
  switch (enumValue) {
    case CapacityReservationAdjustmentStatus::NOT_SET:
      return {};
    case CapacityReservationAdjustmentStatus::requested:
      return "requested";
    case CapacityReservationAdjustmentStatus::applied:
      return "applied";
    case CapacityReservationAdjustmentStatus::rejected:
      return "rejected";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationAdjustmentStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
