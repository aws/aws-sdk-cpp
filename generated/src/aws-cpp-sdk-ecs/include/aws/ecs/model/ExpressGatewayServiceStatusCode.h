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
enum class ExpressGatewayServiceStatusCode { NOT_SET, ACTIVE, DRAINING, INACTIVE };

namespace ExpressGatewayServiceStatusCodeMapper {
AWS_ECS_API ExpressGatewayServiceStatusCode GetExpressGatewayServiceStatusCodeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForExpressGatewayServiceStatusCode(ExpressGatewayServiceStatusCode value);
}  // namespace ExpressGatewayServiceStatusCodeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
