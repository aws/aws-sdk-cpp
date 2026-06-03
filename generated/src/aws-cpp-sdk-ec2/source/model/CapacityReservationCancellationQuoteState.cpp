/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/CapacityReservationCancellationQuoteState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace CapacityReservationCancellationQuoteStateMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int active_HASH = HashingUtils::HashString("active");
static const int expired_HASH = HashingUtils::HashString("expired");

CapacityReservationCancellationQuoteState GetCapacityReservationCancellationQuoteStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return CapacityReservationCancellationQuoteState::pending;
  } else if (hashCode == active_HASH) {
    return CapacityReservationCancellationQuoteState::active;
  } else if (hashCode == expired_HASH) {
    return CapacityReservationCancellationQuoteState::expired;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationCancellationQuoteState>(hashCode);
  }

  return CapacityReservationCancellationQuoteState::NOT_SET;
}

Aws::String GetNameForCapacityReservationCancellationQuoteState(CapacityReservationCancellationQuoteState enumValue) {
  switch (enumValue) {
    case CapacityReservationCancellationQuoteState::NOT_SET:
      return {};
    case CapacityReservationCancellationQuoteState::pending:
      return "pending";
    case CapacityReservationCancellationQuoteState::active:
      return "active";
    case CapacityReservationCancellationQuoteState::expired:
      return "expired";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationCancellationQuoteStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
