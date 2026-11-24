/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class SnapmirrorPolicySnapshotCopyMode {
  NOT_SET,
  COPY_ALL_SOURCE_SNAPSHOTS,
  COPY_LATEST_SOURCE_SNAPSHOT,
  NO_CREATE_SNAPSHOT_ON_SOURCE
};

namespace SnapmirrorPolicySnapshotCopyModeMapper {
AWS_FSX_API SnapmirrorPolicySnapshotCopyMode GetSnapmirrorPolicySnapshotCopyModeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapmirrorPolicySnapshotCopyMode(SnapmirrorPolicySnapshotCopyMode value);
}  // namespace SnapmirrorPolicySnapshotCopyModeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
