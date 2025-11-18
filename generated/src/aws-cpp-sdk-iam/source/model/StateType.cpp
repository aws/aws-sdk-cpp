/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/model/StateType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {
namespace StateTypeMapper {

static const int UNASSIGNED_HASH = HashingUtils::HashString("UNASSIGNED");
static const int ASSIGNED_HASH = HashingUtils::HashString("ASSIGNED");
static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int FINALIZED_HASH = HashingUtils::HashString("FINALIZED");
static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");

StateType GetStateTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNASSIGNED_HASH) {
    return StateType::UNASSIGNED;
  } else if (hashCode == ASSIGNED_HASH) {
    return StateType::ASSIGNED;
  } else if (hashCode == PENDING_APPROVAL_HASH) {
    return StateType::PENDING_APPROVAL;
  } else if (hashCode == FINALIZED_HASH) {
    return StateType::FINALIZED;
  } else if (hashCode == ACCEPTED_HASH) {
    return StateType::ACCEPTED;
  } else if (hashCode == REJECTED_HASH) {
    return StateType::REJECTED;
  } else if (hashCode == EXPIRED_HASH) {
    return StateType::EXPIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StateType>(hashCode);
  }

  return StateType::NOT_SET;
}

Aws::String GetNameForStateType(StateType enumValue) {
  switch (enumValue) {
    case StateType::NOT_SET:
      return {};
    case StateType::UNASSIGNED:
      return "UNASSIGNED";
    case StateType::ASSIGNED:
      return "ASSIGNED";
    case StateType::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    case StateType::FINALIZED:
      return "FINALIZED";
    case StateType::ACCEPTED:
      return "ACCEPTED";
    case StateType::REJECTED:
      return "REJECTED";
    case StateType::EXPIRED:
      return "EXPIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StateTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
