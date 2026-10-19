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
enum class InsightType { NOT_SET, FAILURE };

namespace InsightTypeMapper {
AWS_BEDROCKAGENTCORE_API InsightType GetInsightTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForInsightType(InsightType value);
}  // namespace InsightTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
