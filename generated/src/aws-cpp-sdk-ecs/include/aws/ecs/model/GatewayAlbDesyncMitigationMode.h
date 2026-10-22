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
enum class GatewayAlbDesyncMitigationMode { NOT_SET, monitor, defensive, strictest };

namespace GatewayAlbDesyncMitigationModeMapper {
AWS_ECS_API GatewayAlbDesyncMitigationMode GetGatewayAlbDesyncMitigationModeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForGatewayAlbDesyncMitigationMode(GatewayAlbDesyncMitigationMode value);
}  // namespace GatewayAlbDesyncMitigationModeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
