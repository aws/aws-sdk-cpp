/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
enum class AgenticRetrieveRerankingModelType { NOT_SET, CUSTOM, MANAGED, NONE };

namespace AgenticRetrieveRerankingModelTypeMapper {
AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveRerankingModelType GetAgenticRetrieveRerankingModelTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForAgenticRetrieveRerankingModelType(AgenticRetrieveRerankingModelType value);
}  // namespace AgenticRetrieveRerankingModelTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
