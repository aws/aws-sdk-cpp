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
  enum class RetrievalResultLocationType
  {
    NOT_SET,
    S3
  };

namespace RetrievalResultLocationTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocationType GetRetrievalResultLocationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRetrievalResultLocationType(RetrievalResultLocationType value);
} // namespace RetrievalResultLocationTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
