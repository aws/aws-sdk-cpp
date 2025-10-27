/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/CapacityManagerDataExportStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace CapacityManagerDataExportStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int in_progress_HASH = HashingUtils::HashString("in-progress");
static const int delivered_HASH = HashingUtils::HashString("delivered");
static const int failed_HASH = HashingUtils::HashString("failed");

CapacityManagerDataExportStatus GetCapacityManagerDataExportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return CapacityManagerDataExportStatus::pending;
  } else if (hashCode == in_progress_HASH) {
    return CapacityManagerDataExportStatus::in_progress;
  } else if (hashCode == delivered_HASH) {
    return CapacityManagerDataExportStatus::delivered;
  } else if (hashCode == failed_HASH) {
    return CapacityManagerDataExportStatus::failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityManagerDataExportStatus>(hashCode);
  }

  return CapacityManagerDataExportStatus::NOT_SET;
}

Aws::String GetNameForCapacityManagerDataExportStatus(CapacityManagerDataExportStatus enumValue) {
  switch (enumValue) {
    case CapacityManagerDataExportStatus::NOT_SET:
      return {};
    case CapacityManagerDataExportStatus::pending:
      return "pending";
    case CapacityManagerDataExportStatus::in_progress:
      return "in-progress";
    case CapacityManagerDataExportStatus::delivered:
      return "delivered";
    case CapacityManagerDataExportStatus::failed:
      return "failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityManagerDataExportStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
