/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>

namespace Aws {
namespace DevOpsGuru {
namespace Model {
enum class CloudWatchMetricsStat { NOT_SET, Sum, Average, SampleCount, Minimum, Maximum, p99, p90, p50 };

namespace CloudWatchMetricsStatMapper {
AWS_DEVOPSGURU_API CloudWatchMetricsStat GetCloudWatchMetricsStatForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForCloudWatchMetricsStat(CloudWatchMetricsStat value);
}  // namespace CloudWatchMetricsStatMapper
}  // namespace Model
}  // namespace DevOpsGuru
}  // namespace Aws
