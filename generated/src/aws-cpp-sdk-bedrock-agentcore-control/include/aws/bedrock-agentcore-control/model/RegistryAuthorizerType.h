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
enum class RegistryAuthorizerType { NOT_SET, CUSTOM_JWT, AWS_IAM };

namespace RegistryAuthorizerTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API RegistryAuthorizerType GetRegistryAuthorizerTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForRegistryAuthorizerType(RegistryAuthorizerType value);
}  // namespace RegistryAuthorizerTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
