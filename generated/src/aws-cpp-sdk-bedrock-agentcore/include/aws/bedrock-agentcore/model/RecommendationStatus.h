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
enum class RecommendationStatus { NOT_SET, PENDING, IN_PROGRESS, COMPLETED, FAILED, DELETING };

namespace RecommendationStatusMapper {
AWS_BEDROCKAGENTCORE_API RecommendationStatus GetRecommendationStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForRecommendationStatus(RecommendationStatus value);
}  // namespace RecommendationStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
