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
enum class ScenarioType { NOT_SET, FIXED, DYNAMIC };

namespace ScenarioTypeMapper {
AWS_BEDROCKAGENTCORE_API ScenarioType GetScenarioTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForScenarioType(ScenarioType value);
}  // namespace ScenarioTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
