/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/ApprovalStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace ApprovalStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");
static const int REDEEMED_HASH = HashingUtils::HashString("REDEEMED");

ApprovalStatus GetApprovalStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ApprovalStatus::PENDING;
  } else if (hashCode == APPROVED_HASH) {
    return ApprovalStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return ApprovalStatus::REJECTED;
  } else if (hashCode == REVOKED_HASH) {
    return ApprovalStatus::REVOKED;
  } else if (hashCode == REDEEMED_HASH) {
    return ApprovalStatus::REDEEMED;
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
    case ApprovalStatus::PENDING:
      return "PENDING";
    case ApprovalStatus::APPROVED:
      return "APPROVED";
    case ApprovalStatus::REJECTED:
      return "REJECTED";
    case ApprovalStatus::REVOKED:
      return "REVOKED";
    case ApprovalStatus::REDEEMED:
      return "REDEEMED";
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
}  // namespace DevOpsAgent
}  // namespace Aws
