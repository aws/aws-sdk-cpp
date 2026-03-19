/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FleetReservationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FleetReservationTypeMapper {

static const int interruptible_capacity_reservation_HASH = HashingUtils::HashString("interruptible-capacity-reservation");

FleetReservationType GetFleetReservationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == interruptible_capacity_reservation_HASH) {
    return FleetReservationType::interruptible_capacity_reservation;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FleetReservationType>(hashCode);
  }

  return FleetReservationType::NOT_SET;
}

Aws::String GetNameForFleetReservationType(FleetReservationType enumValue) {
  switch (enumValue) {
    case FleetReservationType::NOT_SET:
      return {};
    case FleetReservationType::interruptible_capacity_reservation:
      return "interruptible-capacity-reservation";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FleetReservationTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
