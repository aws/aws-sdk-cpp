/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devicefarm/model/DeviceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {
namespace DeviceTypeMapper {

static const int PHYSICAL_HASH = HashingUtils::HashString("PHYSICAL");
static const int VIRTUAL_HASH = HashingUtils::HashString("VIRTUAL");

DeviceType GetDeviceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PHYSICAL_HASH) {
    return DeviceType::PHYSICAL;
  } else if (hashCode == VIRTUAL_HASH) {
    return DeviceType::VIRTUAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeviceType>(hashCode);
  }

  return DeviceType::NOT_SET;
}

Aws::String GetNameForDeviceType(DeviceType enumValue) {
  switch (enumValue) {
    case DeviceType::NOT_SET:
      return {};
    case DeviceType::PHYSICAL:
      return "PHYSICAL";
    case DeviceType::VIRTUAL:
      return "VIRTUAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeviceTypeMapper
}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
