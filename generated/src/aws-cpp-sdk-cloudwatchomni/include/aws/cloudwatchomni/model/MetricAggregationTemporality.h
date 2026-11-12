/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class MetricAggregationTemporality { NOT_SET, delta, cumulative };

namespace MetricAggregationTemporalityMapper {
AWS_CLOUDWATCHOMNI_API MetricAggregationTemporality GetMetricAggregationTemporalityForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForMetricAggregationTemporality(MetricAggregationTemporality value);
}  // namespace MetricAggregationTemporalityMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
