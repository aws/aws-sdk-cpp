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
enum class PropagateGatewayTags { NOT_SET, NONE, GATEWAY };

namespace PropagateGatewayTagsMapper {
AWS_ECS_API PropagateGatewayTags GetPropagateGatewayTagsForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForPropagateGatewayTags(PropagateGatewayTags value);
}  // namespace PropagateGatewayTagsMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
