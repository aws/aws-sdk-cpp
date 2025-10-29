/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ToolUseType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace ToolUseTypeMapper {

static const int server_tool_use_HASH = HashingUtils::HashString("server_tool_use");

ToolUseType GetToolUseTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == server_tool_use_HASH) {
    return ToolUseType::server_tool_use;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ToolUseType>(hashCode);
  }

  return ToolUseType::NOT_SET;
}

Aws::String GetNameForToolUseType(ToolUseType enumValue) {
  switch (enumValue) {
    case ToolUseType::NOT_SET:
      return {};
    case ToolUseType::server_tool_use:
      return "server_tool_use";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ToolUseTypeMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
