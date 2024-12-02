/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class VectorSearchRerankingConfigurationType
  {
    NOT_SET,
    BEDROCK_RERANKING_MODEL
  };

namespace VectorSearchRerankingConfigurationTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API VectorSearchRerankingConfigurationType GetVectorSearchRerankingConfigurationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForVectorSearchRerankingConfigurationType(VectorSearchRerankingConfigurationType value);
} // namespace VectorSearchRerankingConfigurationTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
