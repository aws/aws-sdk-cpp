/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/RecommendationPriority.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace RecommendationPriorityMapper {

static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");

RecommendationPriority GetRecommendationPriorityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HIGH_HASH) {
    return RecommendationPriority::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return RecommendationPriority::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return RecommendationPriority::LOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationPriority>(hashCode);
  }

  return RecommendationPriority::NOT_SET;
}

Aws::String GetNameForRecommendationPriority(RecommendationPriority enumValue) {
  switch (enumValue) {
    case RecommendationPriority::NOT_SET:
      return {};
    case RecommendationPriority::HIGH:
      return "HIGH";
    case RecommendationPriority::MEDIUM:
      return "MEDIUM";
    case RecommendationPriority::LOW:
      return "LOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationPriorityMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
