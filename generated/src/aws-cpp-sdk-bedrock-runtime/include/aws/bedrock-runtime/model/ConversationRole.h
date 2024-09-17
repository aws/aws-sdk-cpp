/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
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
AWS_BEDROCKRUNTIME_API ConversationRole GetConversationRoleForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForConversationRole(ConversationRole value);
} // namespace ConversationRoleMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
