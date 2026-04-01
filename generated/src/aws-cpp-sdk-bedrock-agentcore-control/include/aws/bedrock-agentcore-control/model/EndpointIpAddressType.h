/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class EndpointIpAddressType { NOT_SET, IPV4, IPV6 };

namespace EndpointIpAddressTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API EndpointIpAddressType GetEndpointIpAddressTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForEndpointIpAddressType(EndpointIpAddressType value);
}  // namespace EndpointIpAddressTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
