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
enum class OAuthGrantType { NOT_SET, CLIENT_CREDENTIALS, AUTHORIZATION_CODE };

namespace OAuthGrantTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API OAuthGrantType GetOAuthGrantTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForOAuthGrantType(OAuthGrantType value);
}  // namespace OAuthGrantTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
