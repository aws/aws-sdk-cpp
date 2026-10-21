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
enum class GatewayAlbProtocol { NOT_SET, HTTP, HTTPS };

namespace GatewayAlbProtocolMapper {
AWS_ECS_API GatewayAlbProtocol GetGatewayAlbProtocolForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForGatewayAlbProtocol(GatewayAlbProtocol value);
}  // namespace GatewayAlbProtocolMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
