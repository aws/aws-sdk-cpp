/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/CapacityReservationLaunchStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace CapacityReservationLaunchStatusMapper {

static const int launchable_HASH = HashingUtils::HashString("launchable");
static const int unlaunchable_HASH = HashingUtils::HashString("unlaunchable");

CapacityReservationLaunchStatus GetCapacityReservationLaunchStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == launchable_HASH) {
    return CapacityReservationLaunchStatus::launchable;
  } else if (hashCode == unlaunchable_HASH) {
    return CapacityReservationLaunchStatus::unlaunchable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationLaunchStatus>(hashCode);
  }

  return CapacityReservationLaunchStatus::NOT_SET;
}

Aws::String GetNameForCapacityReservationLaunchStatus(CapacityReservationLaunchStatus enumValue) {
  switch (enumValue) {
    case CapacityReservationLaunchStatus::NOT_SET:
      return {};
    case CapacityReservationLaunchStatus::launchable:
      return "launchable";
    case CapacityReservationLaunchStatus::unlaunchable:
      return "unlaunchable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationLaunchStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
