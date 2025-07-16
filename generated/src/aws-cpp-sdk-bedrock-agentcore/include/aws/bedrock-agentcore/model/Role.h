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
  enum class Role
  {
    NOT_SET,
    ASSISTANT,
    USER,
    TOOL,
    OTHER
  };

namespace RoleMapper
{
AWS_BEDROCKAGENTCORE_API Role GetRoleForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForRole(Role value);
} // namespace RoleMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
