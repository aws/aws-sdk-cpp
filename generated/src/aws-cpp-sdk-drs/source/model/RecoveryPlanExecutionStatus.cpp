/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/drs/model/RecoveryPlanExecutionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {
namespace RecoveryPlanExecutionStatusMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

RecoveryPlanExecutionStatus GetRecoveryPlanExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return RecoveryPlanExecutionStatus::CREATED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return RecoveryPlanExecutionStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return RecoveryPlanExecutionStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return RecoveryPlanExecutionStatus::FAILED;
  } else if (hashCode == CANCELLING_HASH) {
    return RecoveryPlanExecutionStatus::CANCELLING;
  } else if (hashCode == CANCELLED_HASH) {
    return RecoveryPlanExecutionStatus::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecoveryPlanExecutionStatus>(hashCode);
  }

  return RecoveryPlanExecutionStatus::NOT_SET;
}

Aws::String GetNameForRecoveryPlanExecutionStatus(RecoveryPlanExecutionStatus enumValue) {
  switch (enumValue) {
    case RecoveryPlanExecutionStatus::NOT_SET:
      return {};
    case RecoveryPlanExecutionStatus::CREATED:
      return "CREATED";
    case RecoveryPlanExecutionStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case RecoveryPlanExecutionStatus::COMPLETED:
      return "COMPLETED";
    case RecoveryPlanExecutionStatus::FAILED:
      return "FAILED";
    case RecoveryPlanExecutionStatus::CANCELLING:
      return "CANCELLING";
    case RecoveryPlanExecutionStatus::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecoveryPlanExecutionStatusMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
