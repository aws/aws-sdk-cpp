/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/StorageVirtualMachinePeerApplication.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace StorageVirtualMachinePeerApplicationMapper {

static const int SNAPMIRROR_HASH = HashingUtils::HashString("SNAPMIRROR");
static const int FILE_COPY_HASH = HashingUtils::HashString("FILE_COPY");
static const int LUN_COPY_HASH = HashingUtils::HashString("LUN_COPY");
static const int FLEXCACHE_HASH = HashingUtils::HashString("FLEXCACHE");

StorageVirtualMachinePeerApplication GetStorageVirtualMachinePeerApplicationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SNAPMIRROR_HASH) {
    return StorageVirtualMachinePeerApplication::SNAPMIRROR;
  } else if (hashCode == FILE_COPY_HASH) {
    return StorageVirtualMachinePeerApplication::FILE_COPY;
  } else if (hashCode == LUN_COPY_HASH) {
    return StorageVirtualMachinePeerApplication::LUN_COPY;
  } else if (hashCode == FLEXCACHE_HASH) {
    return StorageVirtualMachinePeerApplication::FLEXCACHE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageVirtualMachinePeerApplication>(hashCode);
  }

  return StorageVirtualMachinePeerApplication::NOT_SET;
}

Aws::String GetNameForStorageVirtualMachinePeerApplication(StorageVirtualMachinePeerApplication enumValue) {
  switch (enumValue) {
    case StorageVirtualMachinePeerApplication::NOT_SET:
      return {};
    case StorageVirtualMachinePeerApplication::SNAPMIRROR:
      return "SNAPMIRROR";
    case StorageVirtualMachinePeerApplication::FILE_COPY:
      return "FILE_COPY";
    case StorageVirtualMachinePeerApplication::LUN_COPY:
      return "LUN_COPY";
    case StorageVirtualMachinePeerApplication::FLEXCACHE:
      return "FLEXCACHE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageVirtualMachinePeerApplicationMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
