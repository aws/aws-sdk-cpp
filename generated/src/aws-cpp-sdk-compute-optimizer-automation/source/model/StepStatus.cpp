/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/StepStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace StepStatusMapper {

static const int Ready_HASH = HashingUtils::HashString("Ready");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Complete_HASH = HashingUtils::HashString("Complete");
static const int Failed_HASH = HashingUtils::HashString("Failed");

StepStatus GetStepStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Ready_HASH) {
    return StepStatus::Ready;
  } else if (hashCode == InProgress_HASH) {
    return StepStatus::InProgress;
  } else if (hashCode == Complete_HASH) {
    return StepStatus::Complete;
  } else if (hashCode == Failed_HASH) {
    return StepStatus::Failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StepStatus>(hashCode);
  }

  return StepStatus::NOT_SET;
}

Aws::String GetNameForStepStatus(StepStatus enumValue) {
  switch (enumValue) {
    case StepStatus::NOT_SET:
      return {};
    case StepStatus::Ready:
      return "Ready";
    case StepStatus::InProgress:
      return "InProgress";
    case StepStatus::Complete:
      return "Complete";
    case StepStatus::Failed:
      return "Failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StepStatusMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
