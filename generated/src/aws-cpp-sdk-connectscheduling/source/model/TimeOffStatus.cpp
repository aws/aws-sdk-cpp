/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/TimeOffStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectScheduling {
namespace Model {
namespace TimeOffStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int AWAITING_APPROVAL_HASH = HashingUtils::HashString("AWAITING_APPROVAL");

TimeOffStatus GetTimeOffStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return TimeOffStatus::PENDING;
  } else if (hashCode == APPROVED_HASH) {
    return TimeOffStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return TimeOffStatus::REJECTED;
  } else if (hashCode == CANCELLED_HASH) {
    return TimeOffStatus::CANCELLED;
  } else if (hashCode == AWAITING_APPROVAL_HASH) {
    return TimeOffStatus::AWAITING_APPROVAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TimeOffStatus>(hashCode);
  }

  return TimeOffStatus::NOT_SET;
}

Aws::String GetNameForTimeOffStatus(TimeOffStatus enumValue) {
  switch (enumValue) {
    case TimeOffStatus::NOT_SET:
      return {};
    case TimeOffStatus::PENDING:
      return "PENDING";
    case TimeOffStatus::APPROVED:
      return "APPROVED";
    case TimeOffStatus::REJECTED:
      return "REJECTED";
    case TimeOffStatus::CANCELLED:
      return "CANCELLED";
    case TimeOffStatus::AWAITING_APPROVAL:
      return "AWAITING_APPROVAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TimeOffStatusMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
