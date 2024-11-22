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
  enum class RequireConfirmation
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace RequireConfirmationMapper
{
AWS_BEDROCKAGENTRUNTIME_API RequireConfirmation GetRequireConfirmationForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRequireConfirmation(RequireConfirmation value);
} // namespace RequireConfirmationMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
