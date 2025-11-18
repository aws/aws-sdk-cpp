/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/ExecutionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace ExecutionStatusMapper {

static const int Running_HASH = HashingUtils::HashString("Running");
static const int InvalidQuery_HASH = HashingUtils::HashString("InvalidQuery");
static const int Complete_HASH = HashingUtils::HashString("Complete");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Timeout_HASH = HashingUtils::HashString("Timeout");

ExecutionStatus GetExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Running_HASH) {
    return ExecutionStatus::Running;
  } else if (hashCode == InvalidQuery_HASH) {
    return ExecutionStatus::InvalidQuery;
  } else if (hashCode == Complete_HASH) {
    return ExecutionStatus::Complete;
  } else if (hashCode == Failed_HASH) {
    return ExecutionStatus::Failed;
  } else if (hashCode == Timeout_HASH) {
    return ExecutionStatus::Timeout;
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
    case ExecutionStatus::Running:
      return "Running";
    case ExecutionStatus::InvalidQuery:
      return "InvalidQuery";
    case ExecutionStatus::Complete:
      return "Complete";
    case ExecutionStatus::Failed:
      return "Failed";
    case ExecutionStatus::Timeout:
      return "Timeout";
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
}  // namespace CloudWatchLogs
}  // namespace Aws
