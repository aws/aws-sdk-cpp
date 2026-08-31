/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AgentCoreGatewayProtocolType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace AgentCoreGatewayProtocolTypeMapper {

static const int MCP_HASH = HashingUtils::HashString("MCP");

AgentCoreGatewayProtocolType GetAgentCoreGatewayProtocolTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MCP_HASH) {
    return AgentCoreGatewayProtocolType::MCP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentCoreGatewayProtocolType>(hashCode);
  }

  return AgentCoreGatewayProtocolType::NOT_SET;
}

Aws::String GetNameForAgentCoreGatewayProtocolType(AgentCoreGatewayProtocolType enumValue) {
  switch (enumValue) {
    case AgentCoreGatewayProtocolType::NOT_SET:
      return {};
    case AgentCoreGatewayProtocolType::MCP:
      return "MCP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentCoreGatewayProtocolTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
