/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class RecommendationCategory { NOT_SET, ENABLE_PROTECTION, FURTHER_INVESTIGATION, SUPPRESSION_RULE, HARDENING, MONITORING };

namespace RecommendationCategoryMapper {
AWS_GUARDDUTY_API RecommendationCategory GetRecommendationCategoryForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForRecommendationCategory(RecommendationCategory value);
}  // namespace RecommendationCategoryMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
