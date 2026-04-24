/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/GoalStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace GoalStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");

GoalStatus GetGoalStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return GoalStatus::ACTIVE;
  } else if (hashCode == PAUSED_HASH) {
    return GoalStatus::PAUSED;
  } else if (hashCode == COMPLETE_HASH) {
    return GoalStatus::COMPLETE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GoalStatus>(hashCode);
  }

  return GoalStatus::NOT_SET;
}

Aws::String GetNameForGoalStatus(GoalStatus enumValue) {
  switch (enumValue) {
    case GoalStatus::NOT_SET:
      return {};
    case GoalStatus::ACTIVE:
      return "ACTIVE";
    case GoalStatus::PAUSED:
      return "PAUSED";
    case GoalStatus::COMPLETE:
      return "COMPLETE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GoalStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
