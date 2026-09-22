/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/CapacityReservationModificationQuoteState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace CapacityReservationModificationQuoteStateMapper {

static const int active_HASH = HashingUtils::HashString("active");
static const int expired_HASH = HashingUtils::HashString("expired");

CapacityReservationModificationQuoteState GetCapacityReservationModificationQuoteStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == active_HASH) {
    return CapacityReservationModificationQuoteState::active;
  } else if (hashCode == expired_HASH) {
    return CapacityReservationModificationQuoteState::expired;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationModificationQuoteState>(hashCode);
  }

  return CapacityReservationModificationQuoteState::NOT_SET;
}

Aws::String GetNameForCapacityReservationModificationQuoteState(CapacityReservationModificationQuoteState enumValue) {
  switch (enumValue) {
    case CapacityReservationModificationQuoteState::NOT_SET:
      return {};
    case CapacityReservationModificationQuoteState::active:
      return "active";
    case CapacityReservationModificationQuoteState::expired:
      return "expired";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationModificationQuoteStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
