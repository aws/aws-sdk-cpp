/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class HarnessConversationRole { NOT_SET, user, assistant };

namespace HarnessConversationRoleMapper {
AWS_BEDROCKAGENTCORE_API HarnessConversationRole GetHarnessConversationRoleForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForHarnessConversationRole(HarnessConversationRole value);
}  // namespace HarnessConversationRoleMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
