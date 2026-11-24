/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AssociationApprovalStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace AssociationApprovalStatusMapper {

static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");

AssociationApprovalStatus GetAssociationApprovalStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPROVED_HASH) {
    return AssociationApprovalStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return AssociationApprovalStatus::REJECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssociationApprovalStatus>(hashCode);
  }

  return AssociationApprovalStatus::NOT_SET;
}

Aws::String GetNameForAssociationApprovalStatus(AssociationApprovalStatus enumValue) {
  switch (enumValue) {
    case AssociationApprovalStatus::NOT_SET:
      return {};
    case AssociationApprovalStatus::APPROVED:
      return "APPROVED";
    case AssociationApprovalStatus::REJECTED:
      return "REJECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssociationApprovalStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
