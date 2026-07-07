/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/VmPlatform.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace VmPlatformMapper {

static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
static const int LINUX_HASH = HashingUtils::HashString("LINUX");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

VmPlatform GetVmPlatformForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WINDOWS_HASH) {
    return VmPlatform::WINDOWS;
  } else if (hashCode == LINUX_HASH) {
    return VmPlatform::LINUX;
  } else if (hashCode == UNKNOWN_HASH) {
    return VmPlatform::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VmPlatform>(hashCode);
  }

  return VmPlatform::NOT_SET;
}

Aws::String GetNameForVmPlatform(VmPlatform enumValue) {
  switch (enumValue) {
    case VmPlatform::NOT_SET:
      return {};
    case VmPlatform::WINDOWS:
      return "WINDOWS";
    case VmPlatform::LINUX:
      return "LINUX";
    case VmPlatform::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VmPlatformMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
