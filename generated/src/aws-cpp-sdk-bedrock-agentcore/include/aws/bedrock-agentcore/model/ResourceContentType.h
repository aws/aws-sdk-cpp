/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{
  enum class ResourceContentType
  {
    NOT_SET,
    text,
    blob
  };

namespace ResourceContentTypeMapper
{
AWS_BEDROCKAGENTCORE_API ResourceContentType GetResourceContentTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForResourceContentType(ResourceContentType value);
} // namespace ResourceContentTypeMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
