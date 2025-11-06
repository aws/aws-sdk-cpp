/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationSuggestedAnswerStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationSuggestedAnswerStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");

EvaluationSuggestedAnswerStatus GetEvaluationSuggestedAnswerStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return EvaluationSuggestedAnswerStatus::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return EvaluationSuggestedAnswerStatus::FAILED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return EvaluationSuggestedAnswerStatus::SUCCEEDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationSuggestedAnswerStatus>(hashCode);
  }

  return EvaluationSuggestedAnswerStatus::NOT_SET;
}

Aws::String GetNameForEvaluationSuggestedAnswerStatus(EvaluationSuggestedAnswerStatus enumValue) {
  switch (enumValue) {
    case EvaluationSuggestedAnswerStatus::NOT_SET:
      return {};
    case EvaluationSuggestedAnswerStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case EvaluationSuggestedAnswerStatus::FAILED:
      return "FAILED";
    case EvaluationSuggestedAnswerStatus::SUCCEEDED:
      return "SUCCEEDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationSuggestedAnswerStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
