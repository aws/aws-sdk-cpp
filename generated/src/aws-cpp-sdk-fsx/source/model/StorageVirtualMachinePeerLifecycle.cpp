/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/StorageVirtualMachinePeerLifecycle.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace StorageVirtualMachinePeerLifecycleMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

StorageVirtualMachinePeerLifecycle GetStorageVirtualMachinePeerLifecycleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return StorageVirtualMachinePeerLifecycle::CREATING;
  } else if (hashCode == CREATED_HASH) {
    return StorageVirtualMachinePeerLifecycle::CREATED;
  } else if (hashCode == DELETING_HASH) {
    return StorageVirtualMachinePeerLifecycle::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return StorageVirtualMachinePeerLifecycle::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageVirtualMachinePeerLifecycle>(hashCode);
  }

  return StorageVirtualMachinePeerLifecycle::NOT_SET;
}

Aws::String GetNameForStorageVirtualMachinePeerLifecycle(StorageVirtualMachinePeerLifecycle enumValue) {
  switch (enumValue) {
    case StorageVirtualMachinePeerLifecycle::NOT_SET:
      return {};
    case StorageVirtualMachinePeerLifecycle::CREATING:
      return "CREATING";
    case StorageVirtualMachinePeerLifecycle::CREATED:
      return "CREATED";
    case StorageVirtualMachinePeerLifecycle::DELETING:
      return "DELETING";
    case StorageVirtualMachinePeerLifecycle::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageVirtualMachinePeerLifecycleMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
