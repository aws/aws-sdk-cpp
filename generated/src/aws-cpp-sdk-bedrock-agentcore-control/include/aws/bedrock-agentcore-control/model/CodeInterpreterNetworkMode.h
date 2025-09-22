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
  enum class CodeInterpreterNetworkMode
  {
    NOT_SET,
    PUBLIC_,
    SANDBOX,
    VPC
  };

namespace CodeInterpreterNetworkModeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API CodeInterpreterNetworkMode GetCodeInterpreterNetworkModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForCodeInterpreterNetworkMode(CodeInterpreterNetworkMode value);
} // namespace CodeInterpreterNetworkModeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
