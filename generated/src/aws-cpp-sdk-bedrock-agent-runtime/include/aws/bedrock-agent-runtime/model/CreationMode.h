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
  enum class CreationMode
  {
    NOT_SET,
    DEFAULT,
    OVERRIDDEN
  };

namespace CreationModeMapper
{
AWS_BEDROCKAGENTRUNTIME_API CreationMode GetCreationModeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForCreationMode(CreationMode value);
} // namespace CreationModeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
