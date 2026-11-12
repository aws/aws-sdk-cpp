/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/MetricAggregationTemporality.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace MetricAggregationTemporalityMapper {

static const int delta_HASH = HashingUtils::HashString("delta");
static const int cumulative_HASH = HashingUtils::HashString("cumulative");

MetricAggregationTemporality GetMetricAggregationTemporalityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == delta_HASH) {
    return MetricAggregationTemporality::delta;
  } else if (hashCode == cumulative_HASH) {
    return MetricAggregationTemporality::cumulative;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricAggregationTemporality>(hashCode);
  }

  return MetricAggregationTemporality::NOT_SET;
}

Aws::String GetNameForMetricAggregationTemporality(MetricAggregationTemporality enumValue) {
  switch (enumValue) {
    case MetricAggregationTemporality::NOT_SET:
      return {};
    case MetricAggregationTemporality::delta:
      return "delta";
    case MetricAggregationTemporality::cumulative:
      return "cumulative";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricAggregationTemporalityMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
