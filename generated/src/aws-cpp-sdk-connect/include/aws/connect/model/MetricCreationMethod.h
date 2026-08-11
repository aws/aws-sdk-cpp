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
enum class MetricCreationMethod { NOT_SET, SERVICE_LEVEL_BUILDER, METRIC_BUILDER };

namespace MetricCreationMethodMapper {
AWS_CONNECT_API MetricCreationMethod GetMetricCreationMethodForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMetricCreationMethod(MetricCreationMethod value);
}  // namespace MetricCreationMethodMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
