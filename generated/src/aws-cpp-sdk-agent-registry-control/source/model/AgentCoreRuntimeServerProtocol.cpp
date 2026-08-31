/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AgentCoreRuntimeServerProtocol.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace AgentCoreRuntimeServerProtocolMapper {

static const int HTTP_HASH = HashingUtils::HashString("HTTP");
static const int A2A_HASH = HashingUtils::HashString("A2A");
static const int MCP_HASH = HashingUtils::HashString("MCP");
static const int AGUI_HASH = HashingUtils::HashString("AGUI");

AgentCoreRuntimeServerProtocol GetAgentCoreRuntimeServerProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HTTP_HASH) {
    return AgentCoreRuntimeServerProtocol::HTTP;
  } else if (hashCode == A2A_HASH) {
    return AgentCoreRuntimeServerProtocol::A2A;
  } else if (hashCode == MCP_HASH) {
    return AgentCoreRuntimeServerProtocol::MCP;
  } else if (hashCode == AGUI_HASH) {
    return AgentCoreRuntimeServerProtocol::AGUI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentCoreRuntimeServerProtocol>(hashCode);
  }

  return AgentCoreRuntimeServerProtocol::NOT_SET;
}

Aws::String GetNameForAgentCoreRuntimeServerProtocol(AgentCoreRuntimeServerProtocol enumValue) {
  switch (enumValue) {
    case AgentCoreRuntimeServerProtocol::NOT_SET:
      return {};
    case AgentCoreRuntimeServerProtocol::HTTP:
      return "HTTP";
    case AgentCoreRuntimeServerProtocol::A2A:
      return "A2A";
    case AgentCoreRuntimeServerProtocol::MCP:
      return "MCP";
    case AgentCoreRuntimeServerProtocol::AGUI:
      return "AGUI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentCoreRuntimeServerProtocolMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
