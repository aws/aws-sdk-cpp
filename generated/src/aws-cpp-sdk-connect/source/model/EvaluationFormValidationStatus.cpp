/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormValidationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormValidationStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

EvaluationFormValidationStatus GetEvaluationFormValidationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return EvaluationFormValidationStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return EvaluationFormValidationStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return EvaluationFormValidationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormValidationStatus>(hashCode);
  }

  return EvaluationFormValidationStatus::NOT_SET;
}

Aws::String GetNameForEvaluationFormValidationStatus(EvaluationFormValidationStatus enumValue) {
  switch (enumValue) {
    case EvaluationFormValidationStatus::NOT_SET:
      return {};
    case EvaluationFormValidationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case EvaluationFormValidationStatus::COMPLETED:
      return "COMPLETED";
    case EvaluationFormValidationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormValidationStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
