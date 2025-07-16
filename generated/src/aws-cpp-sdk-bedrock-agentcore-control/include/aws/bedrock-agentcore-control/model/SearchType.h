/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{
  enum class SearchType
  {
    NOT_SET,
    SEMANTIC
  };

namespace SearchTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API SearchType GetSearchTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForSearchType(SearchType value);
} // namespace SearchTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
