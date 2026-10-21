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
enum class GatewayElbIpAddressType { NOT_SET, ipv4, dualstack, dualstack_without_public_ipv4 };

namespace GatewayElbIpAddressTypeMapper {
AWS_ECS_API GatewayElbIpAddressType GetGatewayElbIpAddressTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForGatewayElbIpAddressType(GatewayElbIpAddressType value);
}  // namespace GatewayElbIpAddressTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
