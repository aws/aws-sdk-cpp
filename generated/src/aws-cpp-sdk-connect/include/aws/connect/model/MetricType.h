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
enum class MetricType { NOT_SET, AWS_MANAGED, CUSTOMER_MANAGED };

namespace MetricTypeMapper {
AWS_CONNECT_API MetricType GetMetricTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMetricType(MetricType value);
}  // namespace MetricTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
