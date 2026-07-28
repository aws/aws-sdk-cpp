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
enum class ClientAuthenticationMethodType { NOT_SET, CLIENT_SECRET_BASIC, CLIENT_SECRET_POST, AWS_IAM_ID_TOKEN_JWT, PRIVATE_KEY_JWT };

namespace ClientAuthenticationMethodTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API ClientAuthenticationMethodType GetClientAuthenticationMethodTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForClientAuthenticationMethodType(ClientAuthenticationMethodType value);
}  // namespace ClientAuthenticationMethodTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
