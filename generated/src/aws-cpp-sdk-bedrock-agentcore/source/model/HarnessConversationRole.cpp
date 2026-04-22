/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessConversationRole.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace HarnessConversationRoleMapper {

static const int user_HASH = HashingUtils::HashString("user");
static const int assistant_HASH = HashingUtils::HashString("assistant");

HarnessConversationRole GetHarnessConversationRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == user_HASH) {
    return HarnessConversationRole::user;
  } else if (hashCode == assistant_HASH) {
    return HarnessConversationRole::assistant;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessConversationRole>(hashCode);
  }

  return HarnessConversationRole::NOT_SET;
}

Aws::String GetNameForHarnessConversationRole(HarnessConversationRole enumValue) {
  switch (enumValue) {
    case HarnessConversationRole::NOT_SET:
      return {};
    case HarnessConversationRole::user:
      return "user";
    case HarnessConversationRole::assistant:
      return "assistant";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessConversationRoleMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
