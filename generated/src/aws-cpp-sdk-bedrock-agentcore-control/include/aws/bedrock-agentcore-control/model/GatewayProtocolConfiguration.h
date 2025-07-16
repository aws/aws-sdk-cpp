/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/MCPGatewayConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The configuration for a gateway protocol. This structure defines how the
   * gateway communicates with external services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GatewayProtocolConfiguration">AWS
   * API Reference</a></p>
   */
  class GatewayProtocolConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API GatewayProtocolConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API GatewayProtocolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API GatewayProtocolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the Model Context Protocol (MCP). This protocol enables
     * communication between Amazon Bedrock Agent and external tools.</p>
     */
    inline const MCPGatewayConfiguration& GetMcp() const { return m_mcp; }
    inline bool McpHasBeenSet() const { return m_mcpHasBeenSet; }
    template<typename McpT = MCPGatewayConfiguration>
    void SetMcp(McpT&& value) { m_mcpHasBeenSet = true; m_mcp = std::forward<McpT>(value); }
    template<typename McpT = MCPGatewayConfiguration>
    GatewayProtocolConfiguration& WithMcp(McpT&& value) { SetMcp(std::forward<McpT>(value)); return *this;}
    ///@}
  private:

    MCPGatewayConfiguration m_mcp;
    bool m_mcpHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
