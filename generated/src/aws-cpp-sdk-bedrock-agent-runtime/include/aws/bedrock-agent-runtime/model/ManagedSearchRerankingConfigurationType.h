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
enum class ManagedSearchRerankingConfigurationType { NOT_SET, BEDROCK_RERANKING_MODEL };

namespace ManagedSearchRerankingConfigurationTypeMapper {
AWS_BEDROCKAGENTRUNTIME_API ManagedSearchRerankingConfigurationType
GetManagedSearchRerankingConfigurationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForManagedSearchRerankingConfigurationType(ManagedSearchRerankingConfigurationType value);
}  // namespace ManagedSearchRerankingConfigurationTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
