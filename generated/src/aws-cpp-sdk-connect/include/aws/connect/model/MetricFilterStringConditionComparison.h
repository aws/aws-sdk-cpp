/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class MetricFilterStringConditionComparison { NOT_SET, MATCHES_ANY, MATCHES_NONE };

namespace MetricFilterStringConditionComparisonMapper {
AWS_CONNECT_API MetricFilterStringConditionComparison GetMetricFilterStringConditionComparisonForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMetricFilterStringConditionComparison(MetricFilterStringConditionComparison value);
}  // namespace MetricFilterStringConditionComparisonMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
