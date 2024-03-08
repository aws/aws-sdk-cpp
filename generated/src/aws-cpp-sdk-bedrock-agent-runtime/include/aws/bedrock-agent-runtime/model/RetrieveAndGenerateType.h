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
  enum class RetrieveAndGenerateType
  {
    NOT_SET,
    KNOWLEDGE_BASE
  };

namespace RetrieveAndGenerateTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateType GetRetrieveAndGenerateTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRetrieveAndGenerateType(RetrieveAndGenerateType value);
} // namespace RetrieveAndGenerateTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
