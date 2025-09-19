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
  enum class NetworkMode
  {
    NOT_SET,
    PUBLIC_,
    VPC
  };

namespace NetworkModeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API NetworkMode GetNetworkModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForNetworkMode(NetworkMode value);
} // namespace NetworkModeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
