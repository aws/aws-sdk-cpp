/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapmirrorPolicySnapshotCopyMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapmirrorPolicySnapshotCopyModeMapper {

static const int COPY_ALL_SOURCE_SNAPSHOTS_HASH = HashingUtils::HashString("COPY_ALL_SOURCE_SNAPSHOTS");
static const int COPY_LATEST_SOURCE_SNAPSHOT_HASH = HashingUtils::HashString("COPY_LATEST_SOURCE_SNAPSHOT");
static const int NO_CREATE_SNAPSHOT_ON_SOURCE_HASH = HashingUtils::HashString("NO_CREATE_SNAPSHOT_ON_SOURCE");

SnapmirrorPolicySnapshotCopyMode GetSnapmirrorPolicySnapshotCopyModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COPY_ALL_SOURCE_SNAPSHOTS_HASH) {
    return SnapmirrorPolicySnapshotCopyMode::COPY_ALL_SOURCE_SNAPSHOTS;
  } else if (hashCode == COPY_LATEST_SOURCE_SNAPSHOT_HASH) {
    return SnapmirrorPolicySnapshotCopyMode::COPY_LATEST_SOURCE_SNAPSHOT;
  } else if (hashCode == NO_CREATE_SNAPSHOT_ON_SOURCE_HASH) {
    return SnapmirrorPolicySnapshotCopyMode::NO_CREATE_SNAPSHOT_ON_SOURCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapmirrorPolicySnapshotCopyMode>(hashCode);
  }

  return SnapmirrorPolicySnapshotCopyMode::NOT_SET;
}

Aws::String GetNameForSnapmirrorPolicySnapshotCopyMode(SnapmirrorPolicySnapshotCopyMode enumValue) {
  switch (enumValue) {
    case SnapmirrorPolicySnapshotCopyMode::NOT_SET:
      return {};
    case SnapmirrorPolicySnapshotCopyMode::COPY_ALL_SOURCE_SNAPSHOTS:
      return "COPY_ALL_SOURCE_SNAPSHOTS";
    case SnapmirrorPolicySnapshotCopyMode::COPY_LATEST_SOURCE_SNAPSHOT:
      return "COPY_LATEST_SOURCE_SNAPSHOT";
    case SnapmirrorPolicySnapshotCopyMode::NO_CREATE_SNAPSHOT_ON_SOURCE:
      return "NO_CREATE_SNAPSHOT_ON_SOURCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapmirrorPolicySnapshotCopyModeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
