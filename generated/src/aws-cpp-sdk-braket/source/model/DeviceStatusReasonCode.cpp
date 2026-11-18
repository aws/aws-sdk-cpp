/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/DeviceStatusReasonCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Braket {
namespace Model {
namespace DeviceStatusReasonCodeMapper {

static const int OUTSIDE_AVAILABILITY_WINDOW_HASH = HashingUtils::HashString("OUTSIDE_AVAILABILITY_WINDOW");
static const int MAINTENANCE_HASH = HashingUtils::HashString("MAINTENANCE");
static const int RESERVATION_HASH = HashingUtils::HashString("RESERVATION");

DeviceStatusReasonCode GetDeviceStatusReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OUTSIDE_AVAILABILITY_WINDOW_HASH) {
    return DeviceStatusReasonCode::OUTSIDE_AVAILABILITY_WINDOW;
  } else if (hashCode == MAINTENANCE_HASH) {
    return DeviceStatusReasonCode::MAINTENANCE;
  } else if (hashCode == RESERVATION_HASH) {
    return DeviceStatusReasonCode::RESERVATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeviceStatusReasonCode>(hashCode);
  }

  return DeviceStatusReasonCode::NOT_SET;
}

Aws::String GetNameForDeviceStatusReasonCode(DeviceStatusReasonCode enumValue) {
  switch (enumValue) {
    case DeviceStatusReasonCode::NOT_SET:
      return {};
    case DeviceStatusReasonCode::OUTSIDE_AVAILABILITY_WINDOW:
      return "OUTSIDE_AVAILABILITY_WINDOW";
    case DeviceStatusReasonCode::MAINTENANCE:
      return "MAINTENANCE";
    case DeviceStatusReasonCode::RESERVATION:
      return "RESERVATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeviceStatusReasonCodeMapper
}  // namespace Model
}  // namespace Braket
}  // namespace Aws
