/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperation.h>

using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
namespace SnapshotOperationMapper {

static const int CreateSnapshot_HASH = HashingUtils::HashString("CreateSnapshot");
static const int DeleteSnapshot_HASH = HashingUtils::HashString("DeleteSnapshot");
static const int ImportSnapshot_HASH = HashingUtils::HashString("ImportSnapshot");
static const int ExportSnapshot_HASH = HashingUtils::HashString("ExportSnapshot");
static const int SystemCreateSnapshot_HASH = HashingUtils::HashString("SystemCreateSnapshot");

SnapshotOperation GetSnapshotOperationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CreateSnapshot_HASH) {
    return SnapshotOperation::CreateSnapshot;
  } else if (hashCode == DeleteSnapshot_HASH) {
    return SnapshotOperation::DeleteSnapshot;
  } else if (hashCode == ImportSnapshot_HASH) {
    return SnapshotOperation::ImportSnapshot;
  } else if (hashCode == ExportSnapshot_HASH) {
    return SnapshotOperation::ExportSnapshot;
  } else if (hashCode == SystemCreateSnapshot_HASH) {
    return SnapshotOperation::SystemCreateSnapshot;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotOperation>(hashCode);
  }

  return SnapshotOperation::NOT_SET;
}

Aws::String GetNameForSnapshotOperation(SnapshotOperation enumValue) {
  switch (enumValue) {
    case SnapshotOperation::NOT_SET:
      return {};
    case SnapshotOperation::CreateSnapshot:
      return "CreateSnapshot";
    case SnapshotOperation::DeleteSnapshot:
      return "DeleteSnapshot";
    case SnapshotOperation::ImportSnapshot:
      return "ImportSnapshot";
    case SnapshotOperation::ExportSnapshot:
      return "ExportSnapshot";
    case SnapshotOperation::SystemCreateSnapshot:
      return "SystemCreateSnapshot";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotOperationMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
