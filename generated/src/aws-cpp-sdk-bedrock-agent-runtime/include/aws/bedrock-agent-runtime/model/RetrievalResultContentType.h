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
  enum class RetrievalResultContentType
  {
    NOT_SET,
    TEXT,
    IMAGE,
    ROW
  };

namespace RetrievalResultContentTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContentType GetRetrievalResultContentTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRetrievalResultContentType(RetrievalResultContentType value);
} // namespace RetrievalResultContentTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
