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
enum class ExpressGatewayServiceInclude { NOT_SET, TAGS };

namespace ExpressGatewayServiceIncludeMapper {
AWS_ECS_API ExpressGatewayServiceInclude GetExpressGatewayServiceIncludeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForExpressGatewayServiceInclude(ExpressGatewayServiceInclude value);
}  // namespace ExpressGatewayServiceIncludeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
