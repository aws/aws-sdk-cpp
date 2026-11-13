/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisanalyticsv2/model/SnapshotMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
namespace SnapshotModeMapper {

static const int APPLICATION_SNAPSHOTS_LEGACY_HASH = HashingUtils::HashString("APPLICATION_SNAPSHOTS_LEGACY");
static const int ENHANCED_SNAPSHOTS_HASH = HashingUtils::HashString("ENHANCED_SNAPSHOTS");

SnapshotMode GetSnapshotModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPLICATION_SNAPSHOTS_LEGACY_HASH) {
    return SnapshotMode::APPLICATION_SNAPSHOTS_LEGACY;
  } else if (hashCode == ENHANCED_SNAPSHOTS_HASH) {
    return SnapshotMode::ENHANCED_SNAPSHOTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotMode>(hashCode);
  }

  return SnapshotMode::NOT_SET;
}

Aws::String GetNameForSnapshotMode(SnapshotMode enumValue) {
  switch (enumValue) {
    case SnapshotMode::NOT_SET:
      return {};
    case SnapshotMode::APPLICATION_SNAPSHOTS_LEGACY:
      return "APPLICATION_SNAPSHOTS_LEGACY";
    case SnapshotMode::ENHANCED_SNAPSHOTS:
      return "ENHANCED_SNAPSHOTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotModeMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
