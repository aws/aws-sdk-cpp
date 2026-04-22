/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessToolType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace HarnessToolTypeMapper {

static const int remote_mcp_HASH = HashingUtils::HashString("remote_mcp");
static const int agentcore_browser_HASH = HashingUtils::HashString("agentcore_browser");
static const int agentcore_gateway_HASH = HashingUtils::HashString("agentcore_gateway");
static const int inline_function_HASH = HashingUtils::HashString("inline_function");
static const int agentcore_code_interpreter_HASH = HashingUtils::HashString("agentcore_code_interpreter");

HarnessToolType GetHarnessToolTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == remote_mcp_HASH) {
    return HarnessToolType::remote_mcp;
  } else if (hashCode == agentcore_browser_HASH) {
    return HarnessToolType::agentcore_browser;
  } else if (hashCode == agentcore_gateway_HASH) {
    return HarnessToolType::agentcore_gateway;
  } else if (hashCode == inline_function_HASH) {
    return HarnessToolType::inline_function;
  } else if (hashCode == agentcore_code_interpreter_HASH) {
    return HarnessToolType::agentcore_code_interpreter;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessToolType>(hashCode);
  }

  return HarnessToolType::NOT_SET;
}

Aws::String GetNameForHarnessToolType(HarnessToolType enumValue) {
  switch (enumValue) {
    case HarnessToolType::NOT_SET:
      return {};
    case HarnessToolType::remote_mcp:
      return "remote_mcp";
    case HarnessToolType::agentcore_browser:
      return "agentcore_browser";
    case HarnessToolType::agentcore_gateway:
      return "agentcore_gateway";
    case HarnessToolType::inline_function:
      return "inline_function";
    case HarnessToolType::agentcore_code_interpreter:
      return "agentcore_code_interpreter";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessToolTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
