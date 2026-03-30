/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/RecommendationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace RecommendationStatusMapper {

static const int PROPOSED_HASH = HashingUtils::HashString("PROPOSED");
static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");

RecommendationStatus GetRecommendationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROPOSED_HASH) {
    return RecommendationStatus::PROPOSED;
  } else if (hashCode == ACCEPTED_HASH) {
    return RecommendationStatus::ACCEPTED;
  } else if (hashCode == REJECTED_HASH) {
    return RecommendationStatus::REJECTED;
  } else if (hashCode == CLOSED_HASH) {
    return RecommendationStatus::CLOSED;
  } else if (hashCode == COMPLETED_HASH) {
    return RecommendationStatus::COMPLETED;
  } else if (hashCode == UPDATE_IN_PROGRESS_HASH) {
    return RecommendationStatus::UPDATE_IN_PROGRESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationStatus>(hashCode);
  }

  return RecommendationStatus::NOT_SET;
}

Aws::String GetNameForRecommendationStatus(RecommendationStatus enumValue) {
  switch (enumValue) {
    case RecommendationStatus::NOT_SET:
      return {};
    case RecommendationStatus::PROPOSED:
      return "PROPOSED";
    case RecommendationStatus::ACCEPTED:
      return "ACCEPTED";
    case RecommendationStatus::REJECTED:
      return "REJECTED";
    case RecommendationStatus::CLOSED:
      return "CLOSED";
    case RecommendationStatus::COMPLETED:
      return "COMPLETED";
    case RecommendationStatus::UPDATE_IN_PROGRESS:
      return "UPDATE_IN_PROGRESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
