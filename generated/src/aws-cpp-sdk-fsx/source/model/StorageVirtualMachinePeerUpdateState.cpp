/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/StorageVirtualMachinePeerUpdateState.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace StorageVirtualMachinePeerUpdateStateMapper {

static const int PEERED_HASH = HashingUtils::HashString("PEERED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");

StorageVirtualMachinePeerUpdateState GetStorageVirtualMachinePeerUpdateStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PEERED_HASH) {
    return StorageVirtualMachinePeerUpdateState::PEERED;
  } else if (hashCode == REJECTED_HASH) {
    return StorageVirtualMachinePeerUpdateState::REJECTED;
  } else if (hashCode == SUSPENDED_HASH) {
    return StorageVirtualMachinePeerUpdateState::SUSPENDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageVirtualMachinePeerUpdateState>(hashCode);
  }

  return StorageVirtualMachinePeerUpdateState::NOT_SET;
}

Aws::String GetNameForStorageVirtualMachinePeerUpdateState(StorageVirtualMachinePeerUpdateState enumValue) {
  switch (enumValue) {
    case StorageVirtualMachinePeerUpdateState::NOT_SET:
      return {};
    case StorageVirtualMachinePeerUpdateState::PEERED:
      return "PEERED";
    case StorageVirtualMachinePeerUpdateState::REJECTED:
      return "REJECTED";
    case StorageVirtualMachinePeerUpdateState::SUSPENDED:
      return "SUSPENDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageVirtualMachinePeerUpdateStateMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
