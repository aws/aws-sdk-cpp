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
  enum class AutomationStreamStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AutomationStreamStatusMapper
{
AWS_BEDROCKAGENTCORE_API AutomationStreamStatus GetAutomationStreamStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForAutomationStreamStatus(AutomationStreamStatus value);
} // namespace AutomationStreamStatusMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
