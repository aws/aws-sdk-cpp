/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/RecommendationCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace RecommendationCategoryMapper {

static const int ENABLE_PROTECTION_HASH = HashingUtils::HashString("ENABLE_PROTECTION");
static const int FURTHER_INVESTIGATION_HASH = HashingUtils::HashString("FURTHER_INVESTIGATION");
static const int SUPPRESSION_RULE_HASH = HashingUtils::HashString("SUPPRESSION_RULE");
static const int HARDENING_HASH = HashingUtils::HashString("HARDENING");
static const int MONITORING_HASH = HashingUtils::HashString("MONITORING");

RecommendationCategory GetRecommendationCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLE_PROTECTION_HASH) {
    return RecommendationCategory::ENABLE_PROTECTION;
  } else if (hashCode == FURTHER_INVESTIGATION_HASH) {
    return RecommendationCategory::FURTHER_INVESTIGATION;
  } else if (hashCode == SUPPRESSION_RULE_HASH) {
    return RecommendationCategory::SUPPRESSION_RULE;
  } else if (hashCode == HARDENING_HASH) {
    return RecommendationCategory::HARDENING;
  } else if (hashCode == MONITORING_HASH) {
    return RecommendationCategory::MONITORING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationCategory>(hashCode);
  }

  return RecommendationCategory::NOT_SET;
}

Aws::String GetNameForRecommendationCategory(RecommendationCategory enumValue) {
  switch (enumValue) {
    case RecommendationCategory::NOT_SET:
      return {};
    case RecommendationCategory::ENABLE_PROTECTION:
      return "ENABLE_PROTECTION";
    case RecommendationCategory::FURTHER_INVESTIGATION:
      return "FURTHER_INVESTIGATION";
    case RecommendationCategory::SUPPRESSION_RULE:
      return "SUPPRESSION_RULE";
    case RecommendationCategory::HARDENING:
      return "HARDENING";
    case RecommendationCategory::MONITORING:
      return "MONITORING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationCategoryMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
