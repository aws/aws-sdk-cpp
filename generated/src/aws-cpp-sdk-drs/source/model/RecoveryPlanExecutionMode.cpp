/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/drs/model/RecoveryPlanExecutionMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {
namespace RecoveryPlanExecutionModeMapper {

static const int DRILL_HASH = HashingUtils::HashString("DRILL");
static const int RECOVERY_HASH = HashingUtils::HashString("RECOVERY");

RecoveryPlanExecutionMode GetRecoveryPlanExecutionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DRILL_HASH) {
    return RecoveryPlanExecutionMode::DRILL;
  } else if (hashCode == RECOVERY_HASH) {
    return RecoveryPlanExecutionMode::RECOVERY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecoveryPlanExecutionMode>(hashCode);
  }

  return RecoveryPlanExecutionMode::NOT_SET;
}

Aws::String GetNameForRecoveryPlanExecutionMode(RecoveryPlanExecutionMode enumValue) {
  switch (enumValue) {
    case RecoveryPlanExecutionMode::NOT_SET:
      return {};
    case RecoveryPlanExecutionMode::DRILL:
      return "DRILL";
    case RecoveryPlanExecutionMode::RECOVERY:
      return "RECOVERY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecoveryPlanExecutionModeMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
