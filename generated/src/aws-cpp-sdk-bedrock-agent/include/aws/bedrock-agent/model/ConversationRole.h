﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class ConversationRole
  {
    NOT_SET,
    user,
    assistant
  };

namespace ConversationRoleMapper
{
AWS_BEDROCKAGENT_API ConversationRole GetConversationRoleForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForConversationRole(ConversationRole value);
} // namespace ConversationRoleMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
