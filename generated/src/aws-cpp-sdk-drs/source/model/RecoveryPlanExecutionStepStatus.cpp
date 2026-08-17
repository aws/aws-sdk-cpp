/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/drs/model/RecoveryPlanExecutionStepStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {
namespace RecoveryPlanExecutionStepStatusMapper {

static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
static const int EXECUTING_HASH = HashingUtils::HashString("EXECUTING");
static const int WAITING_HASH = HashingUtils::HashString("WAITING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");

RecoveryPlanExecutionStepStatus GetRecoveryPlanExecutionStepStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_STARTED_HASH) {
    return RecoveryPlanExecutionStepStatus::NOT_STARTED;
  } else if (hashCode == EXECUTING_HASH) {
    return RecoveryPlanExecutionStepStatus::EXECUTING;
  } else if (hashCode == WAITING_HASH) {
    return RecoveryPlanExecutionStepStatus::WAITING;
  } else if (hashCode == COMPLETED_HASH) {
    return RecoveryPlanExecutionStepStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return RecoveryPlanExecutionStepStatus::FAILED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return RecoveryPlanExecutionStepStatus::TIMED_OUT;
  } else if (hashCode == SKIPPED_HASH) {
    return RecoveryPlanExecutionStepStatus::SKIPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecoveryPlanExecutionStepStatus>(hashCode);
  }

  return RecoveryPlanExecutionStepStatus::NOT_SET;
}

Aws::String GetNameForRecoveryPlanExecutionStepStatus(RecoveryPlanExecutionStepStatus enumValue) {
  switch (enumValue) {
    case RecoveryPlanExecutionStepStatus::NOT_SET:
      return {};
    case RecoveryPlanExecutionStepStatus::NOT_STARTED:
      return "NOT_STARTED";
    case RecoveryPlanExecutionStepStatus::EXECUTING:
      return "EXECUTING";
    case RecoveryPlanExecutionStepStatus::WAITING:
      return "WAITING";
    case RecoveryPlanExecutionStepStatus::COMPLETED:
      return "COMPLETED";
    case RecoveryPlanExecutionStepStatus::FAILED:
      return "FAILED";
    case RecoveryPlanExecutionStepStatus::TIMED_OUT:
      return "TIMED_OUT";
    case RecoveryPlanExecutionStepStatus::SKIPPED:
      return "SKIPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecoveryPlanExecutionStepStatusMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
