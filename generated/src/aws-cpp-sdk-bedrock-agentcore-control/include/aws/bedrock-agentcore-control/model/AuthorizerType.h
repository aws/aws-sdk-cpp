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
  enum class AuthorizerType
  {
    NOT_SET,
    CUSTOM_JWT
  };

namespace AuthorizerTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API AuthorizerType GetAuthorizerTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForAuthorizerType(AuthorizerType value);
} // namespace AuthorizerTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
