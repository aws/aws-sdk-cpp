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
  enum class BrowserNetworkMode
  {
    NOT_SET,
    PUBLIC_,
    VPC
  };

namespace BrowserNetworkModeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API BrowserNetworkMode GetBrowserNetworkModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForBrowserNetworkMode(BrowserNetworkMode value);
} // namespace BrowserNetworkModeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
