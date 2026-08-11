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
enum class MetricFilterNumberConditionComparison { NOT_SET, LESSER, LESSER_OR_EQUAL, GREATER, GREATER_OR_EQUAL };

namespace MetricFilterNumberConditionComparisonMapper {
AWS_CONNECT_API MetricFilterNumberConditionComparison GetMetricFilterNumberConditionComparisonForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMetricFilterNumberConditionComparison(MetricFilterNumberConditionComparison value);
}  // namespace MetricFilterNumberConditionComparisonMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
