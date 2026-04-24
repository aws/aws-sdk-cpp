/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ReservationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ReservationStateMapper {

static const int active_HASH = HashingUtils::HashString("active");
static const int expired_HASH = HashingUtils::HashString("expired");
static const int cancelled_HASH = HashingUtils::HashString("cancelled");
static const int scheduled_HASH = HashingUtils::HashString("scheduled");
static const int pending_HASH = HashingUtils::HashString("pending");
static const int failed_HASH = HashingUtils::HashString("failed");
static const int delayed_HASH = HashingUtils::HashString("delayed");
static const int unsupported_HASH = HashingUtils::HashString("unsupported");
static const int payment_pending_HASH = HashingUtils::HashString("payment-pending");
static const int payment_failed_HASH = HashingUtils::HashString("payment-failed");
static const int retired_HASH = HashingUtils::HashString("retired");

ReservationState GetReservationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == active_HASH) {
    return ReservationState::active;
  } else if (hashCode == expired_HASH) {
    return ReservationState::expired;
  } else if (hashCode == cancelled_HASH) {
    return ReservationState::cancelled;
  } else if (hashCode == scheduled_HASH) {
    return ReservationState::scheduled;
  } else if (hashCode == pending_HASH) {
    return ReservationState::pending;
  } else if (hashCode == failed_HASH) {
    return ReservationState::failed;
  } else if (hashCode == delayed_HASH) {
    return ReservationState::delayed;
  } else if (hashCode == unsupported_HASH) {
    return ReservationState::unsupported;
  } else if (hashCode == payment_pending_HASH) {
    return ReservationState::payment_pending;
  } else if (hashCode == payment_failed_HASH) {
    return ReservationState::payment_failed;
  } else if (hashCode == retired_HASH) {
    return ReservationState::retired;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReservationState>(hashCode);
  }

  return ReservationState::NOT_SET;
}

Aws::String GetNameForReservationState(ReservationState enumValue) {
  switch (enumValue) {
    case ReservationState::NOT_SET:
      return {};
    case ReservationState::active:
      return "active";
    case ReservationState::expired:
      return "expired";
    case ReservationState::cancelled:
      return "cancelled";
    case ReservationState::scheduled:
      return "scheduled";
    case ReservationState::pending:
      return "pending";
    case ReservationState::failed:
      return "failed";
    case ReservationState::delayed:
      return "delayed";
    case ReservationState::unsupported:
      return "unsupported";
    case ReservationState::payment_pending:
      return "payment-pending";
    case ReservationState::payment_failed:
      return "payment-failed";
    case ReservationState::retired:
      return "retired";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReservationStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
