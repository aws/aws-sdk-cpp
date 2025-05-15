/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
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
AWS_BEDROCKAGENT_API VectorSearchRerankingConfigurationType GetVectorSearchRerankingConfigurationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForVectorSearchRerankingConfigurationType(VectorSearchRerankingConfigurationType value);
} // namespace VectorSearchRerankingConfigurationTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
