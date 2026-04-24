/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/InterruptibleCapacityReservationAllocationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace InterruptibleCapacityReservationAllocationStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int active_HASH = HashingUtils::HashString("active");
static const int updating_HASH = HashingUtils::HashString("updating");
static const int canceling_HASH = HashingUtils::HashString("canceling");
static const int canceled_HASH = HashingUtils::HashString("canceled");
static const int failed_HASH = HashingUtils::HashString("failed");

InterruptibleCapacityReservationAllocationStatus GetInterruptibleCapacityReservationAllocationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return InterruptibleCapacityReservationAllocationStatus::pending;
  } else if (hashCode == active_HASH) {
    return InterruptibleCapacityReservationAllocationStatus::active;
  } else if (hashCode == updating_HASH) {
    return InterruptibleCapacityReservationAllocationStatus::updating;
  } else if (hashCode == canceling_HASH) {
    return InterruptibleCapacityReservationAllocationStatus::canceling;
  } else if (hashCode == canceled_HASH) {
    return InterruptibleCapacityReservationAllocationStatus::canceled;
  } else if (hashCode == failed_HASH) {
    return InterruptibleCapacityReservationAllocationStatus::failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InterruptibleCapacityReservationAllocationStatus>(hashCode);
  }

  return InterruptibleCapacityReservationAllocationStatus::NOT_SET;
}

Aws::String GetNameForInterruptibleCapacityReservationAllocationStatus(InterruptibleCapacityReservationAllocationStatus enumValue) {
  switch (enumValue) {
    case InterruptibleCapacityReservationAllocationStatus::NOT_SET:
      return {};
    case InterruptibleCapacityReservationAllocationStatus::pending:
      return "pending";
    case InterruptibleCapacityReservationAllocationStatus::active:
      return "active";
    case InterruptibleCapacityReservationAllocationStatus::updating:
      return "updating";
    case InterruptibleCapacityReservationAllocationStatus::canceling:
      return "canceling";
    case InterruptibleCapacityReservationAllocationStatus::canceled:
      return "canceled";
    case InterruptibleCapacityReservationAllocationStatus::failed:
      return "failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InterruptibleCapacityReservationAllocationStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
