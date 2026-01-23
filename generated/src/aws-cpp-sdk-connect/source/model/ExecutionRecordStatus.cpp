/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ExecutionRecordStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ExecutionRecordStatusMapper {

static const int PASSED_HASH = HashingUtils::HashString("PASSED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

ExecutionRecordStatus GetExecutionRecordStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASSED_HASH) {
    return ExecutionRecordStatus::PASSED;
  } else if (hashCode == FAILED_HASH) {
    return ExecutionRecordStatus::FAILED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return ExecutionRecordStatus::IN_PROGRESS;
  } else if (hashCode == STOPPED_HASH) {
    return ExecutionRecordStatus::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExecutionRecordStatus>(hashCode);
  }

  return ExecutionRecordStatus::NOT_SET;
}

Aws::String GetNameForExecutionRecordStatus(ExecutionRecordStatus enumValue) {
  switch (enumValue) {
    case ExecutionRecordStatus::NOT_SET:
      return {};
    case ExecutionRecordStatus::PASSED:
      return "PASSED";
    case ExecutionRecordStatus::FAILED:
      return "FAILED";
    case ExecutionRecordStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case ExecutionRecordStatus::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExecutionRecordStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
