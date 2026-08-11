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
enum class MetricStatus { NOT_SET, PUBLISHED, SAVED };

namespace MetricStatusMapper {
AWS_CONNECT_API MetricStatus GetMetricStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMetricStatus(MetricStatus value);
}  // namespace MetricStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
