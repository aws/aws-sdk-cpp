/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ApprovalStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace ApprovalStatusMapper {

static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int DENIED_HASH = HashingUtils::HashString("DENIED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");

ApprovalStatus GetApprovalStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPROVED_HASH) {
    return ApprovalStatus::APPROVED;
  } else if (hashCode == DENIED_HASH) {
    return ApprovalStatus::DENIED;
  } else if (hashCode == PENDING_HASH) {
    return ApprovalStatus::PENDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApprovalStatus>(hashCode);
  }

  return ApprovalStatus::NOT_SET;
}

Aws::String GetNameForApprovalStatus(ApprovalStatus enumValue) {
  switch (enumValue) {
    case ApprovalStatus::NOT_SET:
      return {};
    case ApprovalStatus::APPROVED:
      return "APPROVED";
    case ApprovalStatus::DENIED:
      return "DENIED";
    case ApprovalStatus::PENDING:
      return "PENDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApprovalStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
