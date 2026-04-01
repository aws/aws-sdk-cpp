/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/ExecutionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace ExecutionStatusMapper {

static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

ExecutionStatus GetExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAILED_HASH) {
    return ExecutionStatus::FAILED;
  } else if (hashCode == RUNNING_HASH) {
    return ExecutionStatus::RUNNING;
  } else if (hashCode == STOPPED_HASH) {
    return ExecutionStatus::STOPPED;
  } else if (hashCode == CANCELED_HASH) {
    return ExecutionStatus::CANCELED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return ExecutionStatus::TIMED_OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExecutionStatus>(hashCode);
  }

  return ExecutionStatus::NOT_SET;
}

Aws::String GetNameForExecutionStatus(ExecutionStatus enumValue) {
  switch (enumValue) {
    case ExecutionStatus::NOT_SET:
      return {};
    case ExecutionStatus::FAILED:
      return "FAILED";
    case ExecutionStatus::RUNNING:
      return "RUNNING";
    case ExecutionStatus::STOPPED:
      return "STOPPED";
    case ExecutionStatus::CANCELED:
      return "CANCELED";
    case ExecutionStatus::TIMED_OUT:
      return "TIMED_OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExecutionStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
