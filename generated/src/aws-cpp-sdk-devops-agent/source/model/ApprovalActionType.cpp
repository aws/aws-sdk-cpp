/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/ApprovalActionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace ApprovalActionTypeMapper {

static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");

ApprovalActionType GetApprovalActionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPROVED_HASH) {
    return ApprovalActionType::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return ApprovalActionType::REJECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApprovalActionType>(hashCode);
  }

  return ApprovalActionType::NOT_SET;
}

Aws::String GetNameForApprovalActionType(ApprovalActionType enumValue) {
  switch (enumValue) {
    case ApprovalActionType::NOT_SET:
      return {};
    case ApprovalActionType::APPROVED:
      return "APPROVED";
    case ApprovalActionType::REJECTED:
      return "REJECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApprovalActionTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
