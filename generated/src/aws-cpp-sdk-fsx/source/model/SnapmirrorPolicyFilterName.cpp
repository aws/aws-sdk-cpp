/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapmirrorPolicyFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapmirrorPolicyFilterNameMapper {

static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");
static const int storage_virtual_machine_id_HASH = HashingUtils::HashString("storage-virtual-machine-id");

SnapmirrorPolicyFilterName GetSnapmirrorPolicyFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == file_system_id_HASH) {
    return SnapmirrorPolicyFilterName::file_system_id;
  } else if (hashCode == storage_virtual_machine_id_HASH) {
    return SnapmirrorPolicyFilterName::storage_virtual_machine_id;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapmirrorPolicyFilterName>(hashCode);
  }

  return SnapmirrorPolicyFilterName::NOT_SET;
}

Aws::String GetNameForSnapmirrorPolicyFilterName(SnapmirrorPolicyFilterName enumValue) {
  switch (enumValue) {
    case SnapmirrorPolicyFilterName::NOT_SET:
      return {};
    case SnapmirrorPolicyFilterName::file_system_id:
      return "file-system-id";
    case SnapmirrorPolicyFilterName::storage_virtual_machine_id:
      return "storage-virtual-machine-id";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapmirrorPolicyFilterNameMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
