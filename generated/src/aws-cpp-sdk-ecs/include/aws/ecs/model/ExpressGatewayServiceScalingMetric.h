/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class ExpressGatewayServiceScalingMetric { NOT_SET, AVERAGE_CPU, AVERAGE_MEMORY, REQUEST_COUNT_PER_TARGET };

namespace ExpressGatewayServiceScalingMetricMapper {
AWS_ECS_API ExpressGatewayServiceScalingMetric GetExpressGatewayServiceScalingMetricForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForExpressGatewayServiceScalingMetric(ExpressGatewayServiceScalingMetric value);
}  // namespace ExpressGatewayServiceScalingMetricMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
