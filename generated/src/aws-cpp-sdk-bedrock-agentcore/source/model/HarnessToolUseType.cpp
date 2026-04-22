/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessToolUseType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace HarnessToolUseTypeMapper {

static const int tool_use_HASH = HashingUtils::HashString("tool_use");
static const int server_tool_use_HASH = HashingUtils::HashString("server_tool_use");
static const int mcp_tool_use_HASH = HashingUtils::HashString("mcp_tool_use");

HarnessToolUseType GetHarnessToolUseTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == tool_use_HASH) {
    return HarnessToolUseType::tool_use;
  } else if (hashCode == server_tool_use_HASH) {
    return HarnessToolUseType::server_tool_use;
  } else if (hashCode == mcp_tool_use_HASH) {
    return HarnessToolUseType::mcp_tool_use;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessToolUseType>(hashCode);
  }

  return HarnessToolUseType::NOT_SET;
}

Aws::String GetNameForHarnessToolUseType(HarnessToolUseType enumValue) {
  switch (enumValue) {
    case HarnessToolUseType::NOT_SET:
      return {};
    case HarnessToolUseType::tool_use:
      return "tool_use";
    case HarnessToolUseType::server_tool_use:
      return "server_tool_use";
    case HarnessToolUseType::mcp_tool_use:
      return "mcp_tool_use";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessToolUseTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
