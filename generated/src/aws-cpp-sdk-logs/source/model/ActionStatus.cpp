/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/ActionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace ActionStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int CLIENT_ERROR_HASH = HashingUtils::HashString("CLIENT_ERROR");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");

ActionStatus GetActionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return ActionStatus::IN_PROGRESS;
  } else if (hashCode == CLIENT_ERROR_HASH) {
    return ActionStatus::CLIENT_ERROR;
  } else if (hashCode == FAILED_HASH) {
    return ActionStatus::FAILED;
  } else if (hashCode == COMPLETE_HASH) {
    return ActionStatus::COMPLETE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActionStatus>(hashCode);
  }

  return ActionStatus::NOT_SET;
}

Aws::String GetNameForActionStatus(ActionStatus enumValue) {
  switch (enumValue) {
    case ActionStatus::NOT_SET:
      return {};
    case ActionStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case ActionStatus::CLIENT_ERROR:
      return "CLIENT_ERROR";
    case ActionStatus::FAILED:
      return "FAILED";
    case ActionStatus::COMPLETE:
      return "COMPLETE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActionStatusMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
