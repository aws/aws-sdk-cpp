/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class JwkKeyType { NOT_SET, EC };

namespace JwkKeyTypeMapper {
AWS_BEDROCKAGENTCORE_API JwkKeyType GetJwkKeyTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForJwkKeyType(JwkKeyType value);
}  // namespace JwkKeyTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
