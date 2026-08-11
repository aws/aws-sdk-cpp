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
enum class MetricFilterBooleanConditionComparison { NOT_SET, IS_TRUE, IS_FALSE };

namespace MetricFilterBooleanConditionComparisonMapper {
AWS_CONNECT_API MetricFilterBooleanConditionComparison GetMetricFilterBooleanConditionComparisonForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMetricFilterBooleanConditionComparison(MetricFilterBooleanConditionComparison value);
}  // namespace MetricFilterBooleanConditionComparisonMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
