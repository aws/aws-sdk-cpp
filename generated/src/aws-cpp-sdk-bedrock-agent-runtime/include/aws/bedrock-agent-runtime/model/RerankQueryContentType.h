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
  enum class RerankQueryContentType
  {
    NOT_SET,
    TEXT
  };

namespace RerankQueryContentTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API RerankQueryContentType GetRerankQueryContentTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRerankQueryContentType(RerankQueryContentType value);
} // namespace RerankQueryContentTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
