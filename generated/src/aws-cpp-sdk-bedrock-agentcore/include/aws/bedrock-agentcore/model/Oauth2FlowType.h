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
  enum class Oauth2FlowType
  {
    NOT_SET,
    USER_FEDERATION,
    M2M
  };

namespace Oauth2FlowTypeMapper
{
AWS_BEDROCKAGENTCORE_API Oauth2FlowType GetOauth2FlowTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForOauth2FlowType(Oauth2FlowType value);
} // namespace Oauth2FlowTypeMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
