/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/ExecutionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace ExecutionStatusMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

ExecutionStatus GetExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return ExecutionStatus::RUNNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ExecutionStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ExecutionStatus::FAILED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return ExecutionStatus::TIMED_OUT;
  } else if (hashCode == STOPPED_HASH) {
    return ExecutionStatus::STOPPED;
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
    case ExecutionStatus::RUNNING:
      return "RUNNING";
    case ExecutionStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ExecutionStatus::FAILED:
      return "FAILED";
    case ExecutionStatus::TIMED_OUT:
      return "TIMED_OUT";
    case ExecutionStatus::STOPPED:
      return "STOPPED";
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
}  // namespace Lambda
}  // namespace Aws
