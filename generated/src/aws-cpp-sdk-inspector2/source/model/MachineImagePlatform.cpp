/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/MachineImagePlatform.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace MachineImagePlatformMapper {

static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
static const int LINUX_HASH = HashingUtils::HashString("LINUX");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

MachineImagePlatform GetMachineImagePlatformForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WINDOWS_HASH) {
    return MachineImagePlatform::WINDOWS;
  } else if (hashCode == LINUX_HASH) {
    return MachineImagePlatform::LINUX;
  } else if (hashCode == UNKNOWN_HASH) {
    return MachineImagePlatform::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MachineImagePlatform>(hashCode);
  }

  return MachineImagePlatform::NOT_SET;
}

Aws::String GetNameForMachineImagePlatform(MachineImagePlatform enumValue) {
  switch (enumValue) {
    case MachineImagePlatform::NOT_SET:
      return {};
    case MachineImagePlatform::WINDOWS:
      return "WINDOWS";
    case MachineImagePlatform::LINUX:
      return "LINUX";
    case MachineImagePlatform::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MachineImagePlatformMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
