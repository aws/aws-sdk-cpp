/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/model/PermissionCheckStatusType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {
namespace PermissionCheckStatusTypeMapper {

static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

PermissionCheckStatusType GetPermissionCheckStatusTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETE_HASH) {
    return PermissionCheckStatusType::COMPLETE;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return PermissionCheckStatusType::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return PermissionCheckStatusType::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PermissionCheckStatusType>(hashCode);
  }

  return PermissionCheckStatusType::NOT_SET;
}

Aws::String GetNameForPermissionCheckStatusType(PermissionCheckStatusType enumValue) {
  switch (enumValue) {
    case PermissionCheckStatusType::NOT_SET:
      return {};
    case PermissionCheckStatusType::COMPLETE:
      return "COMPLETE";
    case PermissionCheckStatusType::IN_PROGRESS:
      return "IN_PROGRESS";
    case PermissionCheckStatusType::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PermissionCheckStatusTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
