/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BatchEvaluationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace BatchEvaluationStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

BatchEvaluationStatus GetBatchEvaluationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return BatchEvaluationStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return BatchEvaluationStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return BatchEvaluationStatus::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ERRORS_HASH) {
    return BatchEvaluationStatus::COMPLETED_WITH_ERRORS;
  } else if (hashCode == FAILED_HASH) {
    return BatchEvaluationStatus::FAILED;
  } else if (hashCode == STOPPING_HASH) {
    return BatchEvaluationStatus::STOPPING;
  } else if (hashCode == STOPPED_HASH) {
    return BatchEvaluationStatus::STOPPED;
  } else if (hashCode == DELETING_HASH) {
    return BatchEvaluationStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchEvaluationStatus>(hashCode);
  }

  return BatchEvaluationStatus::NOT_SET;
}

Aws::String GetNameForBatchEvaluationStatus(BatchEvaluationStatus enumValue) {
  switch (enumValue) {
    case BatchEvaluationStatus::NOT_SET:
      return {};
    case BatchEvaluationStatus::PENDING:
      return "PENDING";
    case BatchEvaluationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case BatchEvaluationStatus::COMPLETED:
      return "COMPLETED";
    case BatchEvaluationStatus::COMPLETED_WITH_ERRORS:
      return "COMPLETED_WITH_ERRORS";
    case BatchEvaluationStatus::FAILED:
      return "FAILED";
    case BatchEvaluationStatus::STOPPING:
      return "STOPPING";
    case BatchEvaluationStatus::STOPPED:
      return "STOPPED";
    case BatchEvaluationStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchEvaluationStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
