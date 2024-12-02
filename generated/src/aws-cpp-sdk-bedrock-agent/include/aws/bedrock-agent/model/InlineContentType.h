/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class InlineContentType
  {
    NOT_SET,
    BYTE,
    TEXT
  };

namespace InlineContentTypeMapper
{
AWS_BEDROCKAGENT_API InlineContentType GetInlineContentTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForInlineContentType(InlineContentType value);
} // namespace InlineContentTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
