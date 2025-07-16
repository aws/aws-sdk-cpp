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
  enum class BrowserSessionStatus
  {
    NOT_SET,
    READY,
    TERMINATED
  };

namespace BrowserSessionStatusMapper
{
AWS_BEDROCKAGENTCORE_API BrowserSessionStatus GetBrowserSessionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForBrowserSessionStatus(BrowserSessionStatus value);
} // namespace BrowserSessionStatusMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
