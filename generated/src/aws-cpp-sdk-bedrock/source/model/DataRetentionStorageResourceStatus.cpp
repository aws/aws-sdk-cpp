/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DataRetentionStorageResourceStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace DataRetentionStorageResourceStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int active_HASH = HashingUtils::HashString("active");
static const int access_denied_HASH = HashingUtils::HashString("access_denied");

DataRetentionStorageResourceStatus GetDataRetentionStorageResourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return DataRetentionStorageResourceStatus::pending;
  } else if (hashCode == active_HASH) {
    return DataRetentionStorageResourceStatus::active;
  } else if (hashCode == access_denied_HASH) {
    return DataRetentionStorageResourceStatus::access_denied;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataRetentionStorageResourceStatus>(hashCode);
  }

  return DataRetentionStorageResourceStatus::NOT_SET;
}

Aws::String GetNameForDataRetentionStorageResourceStatus(DataRetentionStorageResourceStatus enumValue) {
  switch (enumValue) {
    case DataRetentionStorageResourceStatus::NOT_SET:
      return {};
    case DataRetentionStorageResourceStatus::pending:
      return "pending";
    case DataRetentionStorageResourceStatus::active:
      return "active";
    case DataRetentionStorageResourceStatus::access_denied:
      return "access_denied";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataRetentionStorageResourceStatusMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
