/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapshotPolicyFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapshotPolicyFilterNameMapper {

static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");
static const int storage_virtual_machine_id_HASH = HashingUtils::HashString("storage-virtual-machine-id");

SnapshotPolicyFilterName GetSnapshotPolicyFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == file_system_id_HASH) {
    return SnapshotPolicyFilterName::file_system_id;
  } else if (hashCode == storage_virtual_machine_id_HASH) {
    return SnapshotPolicyFilterName::storage_virtual_machine_id;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotPolicyFilterName>(hashCode);
  }

  return SnapshotPolicyFilterName::NOT_SET;
}

Aws::String GetNameForSnapshotPolicyFilterName(SnapshotPolicyFilterName enumValue) {
  switch (enumValue) {
    case SnapshotPolicyFilterName::NOT_SET:
      return {};
    case SnapshotPolicyFilterName::file_system_id:
      return "file-system-id";
    case SnapshotPolicyFilterName::storage_virtual_machine_id:
      return "storage-virtual-machine-id";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotPolicyFilterNameMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
