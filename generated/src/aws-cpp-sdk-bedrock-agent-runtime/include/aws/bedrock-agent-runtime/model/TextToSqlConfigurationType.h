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
  enum class TextToSqlConfigurationType
  {
    NOT_SET,
    KNOWLEDGE_BASE
  };

namespace TextToSqlConfigurationTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API TextToSqlConfigurationType GetTextToSqlConfigurationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForTextToSqlConfigurationType(TextToSqlConfigurationType value);
} // namespace TextToSqlConfigurationTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
