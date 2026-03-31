/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/SchedulerState.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace SchedulerStateMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

SchedulerState GetSchedulerStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return SchedulerState::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return SchedulerState::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SchedulerState>(hashCode);
  }

  return SchedulerState::NOT_SET;
}

Aws::String GetNameForSchedulerState(SchedulerState enumValue) {
  switch (enumValue) {
    case SchedulerState::NOT_SET:
      return {};
    case SchedulerState::ENABLED:
      return "ENABLED";
    case SchedulerState::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SchedulerStateMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
