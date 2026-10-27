/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/GpuSharingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace GpuSharingModeMapper {

static const int IDLE_HASH = HashingUtils::HashString("IDLE");
static const int NVIDIA_MPS_HASH = HashingUtils::HashString("NVIDIA_MPS");
static const int DEDICATED_HASH = HashingUtils::HashString("DEDICATED");

GpuSharingMode GetGpuSharingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IDLE_HASH) {
    return GpuSharingMode::IDLE;
  } else if (hashCode == NVIDIA_MPS_HASH) {
    return GpuSharingMode::NVIDIA_MPS;
  } else if (hashCode == DEDICATED_HASH) {
    return GpuSharingMode::DEDICATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GpuSharingMode>(hashCode);
  }

  return GpuSharingMode::NOT_SET;
}

Aws::String GetNameForGpuSharingMode(GpuSharingMode enumValue) {
  switch (enumValue) {
    case GpuSharingMode::NOT_SET:
      return {};
    case GpuSharingMode::IDLE:
      return "IDLE";
    case GpuSharingMode::NVIDIA_MPS:
      return "NVIDIA_MPS";
    case GpuSharingMode::DEDICATED:
      return "DEDICATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GpuSharingModeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
