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
  enum class Source
  {
    NOT_SET,
    ACTION_GROUP,
    KNOWLEDGE_BASE,
    PARSER
  };

namespace SourceMapper
{
AWS_BEDROCKAGENTRUNTIME_API Source GetSourceForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForSource(Source value);
} // namespace SourceMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
