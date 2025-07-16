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
  enum class ContentBlockType
  {
    NOT_SET,
    text,
    image,
    resource,
    resource_link
  };

namespace ContentBlockTypeMapper
{
AWS_BEDROCKAGENTCORE_API ContentBlockType GetContentBlockTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForContentBlockType(ContentBlockType value);
} // namespace ContentBlockTypeMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
