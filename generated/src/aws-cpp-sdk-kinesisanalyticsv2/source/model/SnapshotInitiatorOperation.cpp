/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInitiatorOperation.h>

using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
namespace SnapshotInitiatorOperationMapper {

static const int CreateSnapshot_HASH = HashingUtils::HashString("CreateSnapshot");
static const int ImportSnapshot_HASH = HashingUtils::HashString("ImportSnapshot");
static const int SystemCreateSnapshot_HASH = HashingUtils::HashString("SystemCreateSnapshot");

SnapshotInitiatorOperation GetSnapshotInitiatorOperationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CreateSnapshot_HASH) {
    return SnapshotInitiatorOperation::CreateSnapshot;
  } else if (hashCode == ImportSnapshot_HASH) {
    return SnapshotInitiatorOperation::ImportSnapshot;
  } else if (hashCode == SystemCreateSnapshot_HASH) {
    return SnapshotInitiatorOperation::SystemCreateSnapshot;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotInitiatorOperation>(hashCode);
  }

  return SnapshotInitiatorOperation::NOT_SET;
}

Aws::String GetNameForSnapshotInitiatorOperation(SnapshotInitiatorOperation enumValue) {
  switch (enumValue) {
    case SnapshotInitiatorOperation::NOT_SET:
      return {};
    case SnapshotInitiatorOperation::CreateSnapshot:
      return "CreateSnapshot";
    case SnapshotInitiatorOperation::ImportSnapshot:
      return "ImportSnapshot";
    case SnapshotInitiatorOperation::SystemCreateSnapshot:
      return "SystemCreateSnapshot";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotInitiatorOperationMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
