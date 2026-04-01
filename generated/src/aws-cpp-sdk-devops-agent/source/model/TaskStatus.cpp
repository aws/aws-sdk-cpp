/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/TaskStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace TaskStatusMapper {

static const int PENDING_TRIAGE_HASH = HashingUtils::HashString("PENDING_TRIAGE");
static const int LINKED_HASH = HashingUtils::HashString("LINKED");
static const int PENDING_START_HASH = HashingUtils::HashString("PENDING_START");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int PENDING_CUSTOMER_APPROVAL_HASH = HashingUtils::HashString("PENDING_CUSTOMER_APPROVAL");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");

TaskStatus GetTaskStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_TRIAGE_HASH) {
    return TaskStatus::PENDING_TRIAGE;
  } else if (hashCode == LINKED_HASH) {
    return TaskStatus::LINKED;
  } else if (hashCode == PENDING_START_HASH) {
    return TaskStatus::PENDING_START;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return TaskStatus::IN_PROGRESS;
  } else if (hashCode == PENDING_CUSTOMER_APPROVAL_HASH) {
    return TaskStatus::PENDING_CUSTOMER_APPROVAL;
  } else if (hashCode == COMPLETED_HASH) {
    return TaskStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return TaskStatus::FAILED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return TaskStatus::TIMED_OUT;
  } else if (hashCode == CANCELED_HASH) {
    return TaskStatus::CANCELED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TaskStatus>(hashCode);
  }

  return TaskStatus::NOT_SET;
}

Aws::String GetNameForTaskStatus(TaskStatus enumValue) {
  switch (enumValue) {
    case TaskStatus::NOT_SET:
      return {};
    case TaskStatus::PENDING_TRIAGE:
      return "PENDING_TRIAGE";
    case TaskStatus::LINKED:
      return "LINKED";
    case TaskStatus::PENDING_START:
      return "PENDING_START";
    case TaskStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case TaskStatus::PENDING_CUSTOMER_APPROVAL:
      return "PENDING_CUSTOMER_APPROVAL";
    case TaskStatus::COMPLETED:
      return "COMPLETED";
    case TaskStatus::FAILED:
      return "FAILED";
    case TaskStatus::TIMED_OUT:
      return "TIMED_OUT";
    case TaskStatus::CANCELED:
      return "CANCELED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TaskStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
