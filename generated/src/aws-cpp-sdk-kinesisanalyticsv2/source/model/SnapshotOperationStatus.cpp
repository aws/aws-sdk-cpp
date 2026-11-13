/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
namespace SnapshotOperationStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

SnapshotOperationStatus GetSnapshotOperationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return SnapshotOperationStatus::IN_PROGRESS;
  } else if (hashCode == SUCCESSFUL_HASH) {
    return SnapshotOperationStatus::SUCCESSFUL;
  } else if (hashCode == FAILED_HASH) {
    return SnapshotOperationStatus::FAILED;
  } else if (hashCode == CANCELLED_HASH) {
    return SnapshotOperationStatus::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotOperationStatus>(hashCode);
  }

  return SnapshotOperationStatus::NOT_SET;
}

Aws::String GetNameForSnapshotOperationStatus(SnapshotOperationStatus enumValue) {
  switch (enumValue) {
    case SnapshotOperationStatus::NOT_SET:
      return {};
    case SnapshotOperationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case SnapshotOperationStatus::SUCCESSFUL:
      return "SUCCESSFUL";
    case SnapshotOperationStatus::FAILED:
      return "FAILED";
    case SnapshotOperationStatus::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotOperationStatusMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
