/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/PlatformDeviceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace PlatformDeviceTypeMapper {

static const int GPU_HASH = HashingUtils::HashString("GPU");
static const int NEURON_DEVICE_HASH = HashingUtils::HashString("NEURON_DEVICE");

PlatformDeviceType GetPlatformDeviceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GPU_HASH) {
    return PlatformDeviceType::GPU;
  } else if (hashCode == NEURON_DEVICE_HASH) {
    return PlatformDeviceType::NEURON_DEVICE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PlatformDeviceType>(hashCode);
  }

  return PlatformDeviceType::NOT_SET;
}

Aws::String GetNameForPlatformDeviceType(PlatformDeviceType enumValue) {
  switch (enumValue) {
    case PlatformDeviceType::NOT_SET:
      return {};
    case PlatformDeviceType::GPU:
      return "GPU";
    case PlatformDeviceType::NEURON_DEVICE:
      return "NEURON_DEVICE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PlatformDeviceTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
