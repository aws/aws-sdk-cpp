/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
enum class EndpointIpAddressType { NOT_SET, IPV4, IPV6 };

namespace EndpointIpAddressTypeMapper {
AWS_AGENTREGISTRYCONTROL_API EndpointIpAddressType GetEndpointIpAddressTypeForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForEndpointIpAddressType(EndpointIpAddressType value);
}  // namespace EndpointIpAddressTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
