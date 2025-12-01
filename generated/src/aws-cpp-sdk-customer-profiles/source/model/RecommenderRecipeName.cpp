/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/RecommenderRecipeName.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace RecommenderRecipeNameMapper {

static const int recommended_for_you_HASH = HashingUtils::HashString("recommended-for-you");
static const int similar_items_HASH = HashingUtils::HashString("similar-items");
static const int frequently_paired_items_HASH = HashingUtils::HashString("frequently-paired-items");
static const int popular_items_HASH = HashingUtils::HashString("popular-items");
static const int trending_now_HASH = HashingUtils::HashString("trending-now");

RecommenderRecipeName GetRecommenderRecipeNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == recommended_for_you_HASH) {
    return RecommenderRecipeName::recommended_for_you;
  } else if (hashCode == similar_items_HASH) {
    return RecommenderRecipeName::similar_items;
  } else if (hashCode == frequently_paired_items_HASH) {
    return RecommenderRecipeName::frequently_paired_items;
  } else if (hashCode == popular_items_HASH) {
    return RecommenderRecipeName::popular_items;
  } else if (hashCode == trending_now_HASH) {
    return RecommenderRecipeName::trending_now;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommenderRecipeName>(hashCode);
  }

  return RecommenderRecipeName::NOT_SET;
}

Aws::String GetNameForRecommenderRecipeName(RecommenderRecipeName enumValue) {
  switch (enumValue) {
    case RecommenderRecipeName::NOT_SET:
      return {};
    case RecommenderRecipeName::recommended_for_you:
      return "recommended-for-you";
    case RecommenderRecipeName::similar_items:
      return "similar-items";
    case RecommenderRecipeName::frequently_paired_items:
      return "frequently-paired-items";
    case RecommenderRecipeName::popular_items:
      return "popular-items";
    case RecommenderRecipeName::trending_now:
      return "trending-now";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommenderRecipeNameMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
