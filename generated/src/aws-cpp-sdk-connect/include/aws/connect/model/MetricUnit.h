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
enum class MetricUnit { NOT_SET, INTEGER, DOUBLE, PERCENT, SECONDS };

namespace MetricUnitMapper {
AWS_CONNECT_API MetricUnit GetMetricUnitForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMetricUnit(MetricUnit value);
}  // namespace MetricUnitMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
