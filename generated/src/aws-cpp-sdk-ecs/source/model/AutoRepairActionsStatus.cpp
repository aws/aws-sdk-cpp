/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/AutoRepairActionsStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace AutoRepairActionsStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

AutoRepairActionsStatus GetAutoRepairActionsStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return AutoRepairActionsStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return AutoRepairActionsStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoRepairActionsStatus>(hashCode);
  }

  return AutoRepairActionsStatus::NOT_SET;
}

Aws::String GetNameForAutoRepairActionsStatus(AutoRepairActionsStatus enumValue) {
  switch (enumValue) {
    case AutoRepairActionsStatus::NOT_SET:
      return {};
    case AutoRepairActionsStatus::ENABLED:
      return "ENABLED";
    case AutoRepairActionsStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoRepairActionsStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
