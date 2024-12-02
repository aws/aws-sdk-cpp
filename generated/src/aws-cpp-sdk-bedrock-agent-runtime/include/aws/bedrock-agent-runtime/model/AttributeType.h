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
  enum class AttributeType
  {
    NOT_SET,
    STRING,
    NUMBER,
    BOOLEAN,
    STRING_LIST
  };

namespace AttributeTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API AttributeType GetAttributeTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForAttributeType(AttributeType value);
} // namespace AttributeTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
