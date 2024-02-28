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
  enum class SearchType
  {
    NOT_SET,
    HYBRID,
    SEMANTIC
  };

namespace SearchTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API SearchType GetSearchTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForSearchType(SearchType value);
} // namespace SearchTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
