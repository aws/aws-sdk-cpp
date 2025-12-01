/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class RecommenderRecipeName { NOT_SET, recommended_for_you, similar_items, frequently_paired_items, popular_items, trending_now };

namespace RecommenderRecipeNameMapper {
AWS_CUSTOMERPROFILES_API RecommenderRecipeName GetRecommenderRecipeNameForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForRecommenderRecipeName(RecommenderRecipeName value);
}  // namespace RecommenderRecipeNameMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
