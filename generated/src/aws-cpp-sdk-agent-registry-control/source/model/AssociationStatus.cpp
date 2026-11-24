/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AssociationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace AssociationStatusMapper {

static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");

AssociationStatus GetAssociationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_APPROVAL_HASH) {
    return AssociationStatus::PENDING_APPROVAL;
  } else if (hashCode == APPROVED_HASH) {
    return AssociationStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return AssociationStatus::REJECTED;
  } else if (hashCode == SUSPENDED_HASH) {
    return AssociationStatus::SUSPENDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssociationStatus>(hashCode);
  }

  return AssociationStatus::NOT_SET;
}

Aws::String GetNameForAssociationStatus(AssociationStatus enumValue) {
  switch (enumValue) {
    case AssociationStatus::NOT_SET:
      return {};
    case AssociationStatus::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    case AssociationStatus::APPROVED:
      return "APPROVED";
    case AssociationStatus::REJECTED:
      return "REJECTED";
    case AssociationStatus::SUSPENDED:
      return "SUSPENDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssociationStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
