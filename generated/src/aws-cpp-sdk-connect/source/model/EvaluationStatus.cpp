/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationStatusMapper {

static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int REVIEW_REQUESTED_HASH = HashingUtils::HashString("REVIEW_REQUESTED");
static const int UNDER_REVIEW_HASH = HashingUtils::HashString("UNDER_REVIEW");

EvaluationStatus GetEvaluationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DRAFT_HASH) {
    return EvaluationStatus::DRAFT;
  } else if (hashCode == SUBMITTED_HASH) {
    return EvaluationStatus::SUBMITTED;
  } else if (hashCode == REVIEW_REQUESTED_HASH) {
    return EvaluationStatus::REVIEW_REQUESTED;
  } else if (hashCode == UNDER_REVIEW_HASH) {
    return EvaluationStatus::UNDER_REVIEW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationStatus>(hashCode);
  }

  return EvaluationStatus::NOT_SET;
}

Aws::String GetNameForEvaluationStatus(EvaluationStatus enumValue) {
  switch (enumValue) {
    case EvaluationStatus::NOT_SET:
      return {};
    case EvaluationStatus::DRAFT:
      return "DRAFT";
    case EvaluationStatus::SUBMITTED:
      return "SUBMITTED";
    case EvaluationStatus::REVIEW_REQUESTED:
      return "REVIEW_REQUESTED";
    case EvaluationStatus::UNDER_REVIEW:
      return "UNDER_REVIEW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
