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
enum class MetricMonotonicity { NOT_SET, monotonic, non_monotonic };

namespace MetricMonotonicityMapper {
AWS_CLOUDWATCHOMNI_API MetricMonotonicity GetMetricMonotonicityForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForMetricMonotonicity(MetricMonotonicity value);
}  // namespace MetricMonotonicityMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
