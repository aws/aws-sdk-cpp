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
enum class RecommendationType { NOT_SET, SYSTEM_PROMPT_RECOMMENDATION, TOOL_DESCRIPTION_RECOMMENDATION };

namespace RecommendationTypeMapper {
AWS_BEDROCKAGENTCORE_API RecommendationType GetRecommendationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForRecommendationType(RecommendationType value);
}  // namespace RecommendationTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
