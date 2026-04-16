/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/TrainingMetricName.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace TrainingMetricNameMapper {

static const int hit_HASH = HashingUtils::HashString("hit");
static const int coverage_HASH = HashingUtils::HashString("coverage");
static const int recall_HASH = HashingUtils::HashString("recall");
static const int popularity_HASH = HashingUtils::HashString("popularity");
static const int freshness_HASH = HashingUtils::HashString("freshness");
static const int similarity_HASH = HashingUtils::HashString("similarity");
static const int mean_reciprocal_rank_at_25_HASH = HashingUtils::HashString("mean_reciprocal_rank_at_25");
static const int normalized_discounted_cumulative_gain_at_5_HASH = HashingUtils::HashString("normalized_discounted_cumulative_gain_at_5");
static const int normalized_discounted_cumulative_gain_at_10_HASH = HashingUtils::HashString("normalized_discounted_cumulative_gain_at_10");
static const int normalized_discounted_cumulative_gain_at_25_HASH = HashingUtils::HashString("normalized_discounted_cumulative_gain_at_25");
static const int precision_at_5_HASH = HashingUtils::HashString("precision_at_5");
static const int precision_at_10_HASH = HashingUtils::HashString("precision_at_10");
static const int precision_at_25_HASH = HashingUtils::HashString("precision_at_25");

TrainingMetricName GetTrainingMetricNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == hit_HASH) {
    return TrainingMetricName::hit;
  } else if (hashCode == coverage_HASH) {
    return TrainingMetricName::coverage;
  } else if (hashCode == recall_HASH) {
    return TrainingMetricName::recall;
  } else if (hashCode == popularity_HASH) {
    return TrainingMetricName::popularity;
  } else if (hashCode == freshness_HASH) {
    return TrainingMetricName::freshness;
  } else if (hashCode == similarity_HASH) {
    return TrainingMetricName::similarity;
  } else if (hashCode == mean_reciprocal_rank_at_25_HASH) {
    return TrainingMetricName::mean_reciprocal_rank_at_25;
  } else if (hashCode == normalized_discounted_cumulative_gain_at_5_HASH) {
    return TrainingMetricName::normalized_discounted_cumulative_gain_at_5;
  } else if (hashCode == normalized_discounted_cumulative_gain_at_10_HASH) {
    return TrainingMetricName::normalized_discounted_cumulative_gain_at_10;
  } else if (hashCode == normalized_discounted_cumulative_gain_at_25_HASH) {
    return TrainingMetricName::normalized_discounted_cumulative_gain_at_25;
  } else if (hashCode == precision_at_5_HASH) {
    return TrainingMetricName::precision_at_5;
  } else if (hashCode == precision_at_10_HASH) {
    return TrainingMetricName::precision_at_10;
  } else if (hashCode == precision_at_25_HASH) {
    return TrainingMetricName::precision_at_25;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrainingMetricName>(hashCode);
  }

  return TrainingMetricName::NOT_SET;
}

Aws::String GetNameForTrainingMetricName(TrainingMetricName enumValue) {
  switch (enumValue) {
    case TrainingMetricName::NOT_SET:
      return {};
    case TrainingMetricName::hit:
      return "hit";
    case TrainingMetricName::coverage:
      return "coverage";
    case TrainingMetricName::recall:
      return "recall";
    case TrainingMetricName::popularity:
      return "popularity";
    case TrainingMetricName::freshness:
      return "freshness";
    case TrainingMetricName::similarity:
      return "similarity";
    case TrainingMetricName::mean_reciprocal_rank_at_25:
      return "mean_reciprocal_rank_at_25";
    case TrainingMetricName::normalized_discounted_cumulative_gain_at_5:
      return "normalized_discounted_cumulative_gain_at_5";
    case TrainingMetricName::normalized_discounted_cumulative_gain_at_10:
      return "normalized_discounted_cumulative_gain_at_10";
    case TrainingMetricName::normalized_discounted_cumulative_gain_at_25:
      return "normalized_discounted_cumulative_gain_at_25";
    case TrainingMetricName::precision_at_5:
      return "precision_at_5";
    case TrainingMetricName::precision_at_10:
      return "precision_at_10";
    case TrainingMetricName::precision_at_25:
      return "precision_at_25";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrainingMetricNameMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
