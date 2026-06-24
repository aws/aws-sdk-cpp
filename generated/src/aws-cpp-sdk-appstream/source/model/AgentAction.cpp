/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AgentAction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace AgentActionMapper {

static const int COMPUTER_VISION_HASH = HashingUtils::HashString("COMPUTER_VISION");
static const int COMPUTER_INPUT_HASH = HashingUtils::HashString("COMPUTER_INPUT");
static const int FORWARD_MCP_TOOLS_HASH = HashingUtils::HashString("FORWARD_MCP_TOOLS");

AgentAction GetAgentActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPUTER_VISION_HASH) {
    return AgentAction::COMPUTER_VISION;
  } else if (hashCode == COMPUTER_INPUT_HASH) {
    return AgentAction::COMPUTER_INPUT;
  } else if (hashCode == FORWARD_MCP_TOOLS_HASH) {
    return AgentAction::FORWARD_MCP_TOOLS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentAction>(hashCode);
  }

  return AgentAction::NOT_SET;
}

Aws::String GetNameForAgentAction(AgentAction enumValue) {
  switch (enumValue) {
    case AgentAction::NOT_SET:
      return {};
    case AgentAction::COMPUTER_VISION:
      return "COMPUTER_VISION";
    case AgentAction::COMPUTER_INPUT:
      return "COMPUTER_INPUT";
    case AgentAction::FORWARD_MCP_TOOLS:
      return "FORWARD_MCP_TOOLS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentActionMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
