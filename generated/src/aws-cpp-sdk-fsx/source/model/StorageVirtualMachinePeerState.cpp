/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/StorageVirtualMachinePeerState.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace StorageVirtualMachinePeerStateMapper {

static const int PEERED_HASH = HashingUtils::HashString("PEERED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
static const int INITIATED_HASH = HashingUtils::HashString("INITIATED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");

StorageVirtualMachinePeerState GetStorageVirtualMachinePeerStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PEERED_HASH) {
    return StorageVirtualMachinePeerState::PEERED;
  } else if (hashCode == REJECTED_HASH) {
    return StorageVirtualMachinePeerState::REJECTED;
  } else if (hashCode == SUSPENDED_HASH) {
    return StorageVirtualMachinePeerState::SUSPENDED;
  } else if (hashCode == INITIATED_HASH) {
    return StorageVirtualMachinePeerState::INITIATED;
  } else if (hashCode == PENDING_HASH) {
    return StorageVirtualMachinePeerState::PENDING;
  } else if (hashCode == INITIALIZING_HASH) {
    return StorageVirtualMachinePeerState::INITIALIZING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageVirtualMachinePeerState>(hashCode);
  }

  return StorageVirtualMachinePeerState::NOT_SET;
}

Aws::String GetNameForStorageVirtualMachinePeerState(StorageVirtualMachinePeerState enumValue) {
  switch (enumValue) {
    case StorageVirtualMachinePeerState::NOT_SET:
      return {};
    case StorageVirtualMachinePeerState::PEERED:
      return "PEERED";
    case StorageVirtualMachinePeerState::REJECTED:
      return "REJECTED";
    case StorageVirtualMachinePeerState::SUSPENDED:
      return "SUSPENDED";
    case StorageVirtualMachinePeerState::INITIATED:
      return "INITIATED";
    case StorageVirtualMachinePeerState::PENDING:
      return "PENDING";
    case StorageVirtualMachinePeerState::INITIALIZING:
      return "INITIALIZING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageVirtualMachinePeerStateMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
