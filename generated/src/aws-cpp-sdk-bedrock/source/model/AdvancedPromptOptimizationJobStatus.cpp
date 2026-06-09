/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AdvancedPromptOptimizationJobStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace AdvancedPromptOptimizationJobStatusMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int PartiallyCompleted_HASH = HashingUtils::HashString("PartiallyCompleted");
static const int Stopping_HASH = HashingUtils::HashString("Stopping");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");

AdvancedPromptOptimizationJobStatus GetAdvancedPromptOptimizationJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return AdvancedPromptOptimizationJobStatus::InProgress;
  } else if (hashCode == Completed_HASH) {
    return AdvancedPromptOptimizationJobStatus::Completed;
  } else if (hashCode == Failed_HASH) {
    return AdvancedPromptOptimizationJobStatus::Failed;
  } else if (hashCode == PartiallyCompleted_HASH) {
    return AdvancedPromptOptimizationJobStatus::PartiallyCompleted;
  } else if (hashCode == Stopping_HASH) {
    return AdvancedPromptOptimizationJobStatus::Stopping;
  } else if (hashCode == Stopped_HASH) {
    return AdvancedPromptOptimizationJobStatus::Stopped;
  } else if (hashCode == Deleting_HASH) {
    return AdvancedPromptOptimizationJobStatus::Deleting;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AdvancedPromptOptimizationJobStatus>(hashCode);
  }

  return AdvancedPromptOptimizationJobStatus::NOT_SET;
}

Aws::String GetNameForAdvancedPromptOptimizationJobStatus(AdvancedPromptOptimizationJobStatus enumValue) {
  switch (enumValue) {
    case AdvancedPromptOptimizationJobStatus::NOT_SET:
      return {};
    case AdvancedPromptOptimizationJobStatus::InProgress:
      return "InProgress";
    case AdvancedPromptOptimizationJobStatus::Completed:
      return "Completed";
    case AdvancedPromptOptimizationJobStatus::Failed:
      return "Failed";
    case AdvancedPromptOptimizationJobStatus::PartiallyCompleted:
      return "PartiallyCompleted";
    case AdvancedPromptOptimizationJobStatus::Stopping:
      return "Stopping";
    case AdvancedPromptOptimizationJobStatus::Stopped:
      return "Stopped";
    case AdvancedPromptOptimizationJobStatus::Deleting:
      return "Deleting";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AdvancedPromptOptimizationJobStatusMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
