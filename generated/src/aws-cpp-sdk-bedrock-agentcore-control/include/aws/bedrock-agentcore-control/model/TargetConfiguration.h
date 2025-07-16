/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/McpTargetConfiguration.h>
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
   * <p>The configuration for a gateway target. This structure defines how the
   * gateway connects to and interacts with the target endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/TargetConfiguration">AWS
   * API Reference</a></p>
   */
  class TargetConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API TargetConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API TargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API TargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Model Context Protocol (MCP) configuration for the target. This
     * configuration defines how the gateway uses MCP to communicate with the
     * target.</p>
     */
    inline const McpTargetConfiguration& GetMcp() const { return m_mcp; }
    inline bool McpHasBeenSet() const { return m_mcpHasBeenSet; }
    template<typename McpT = McpTargetConfiguration>
    void SetMcp(McpT&& value) { m_mcpHasBeenSet = true; m_mcp = std::forward<McpT>(value); }
    template<typename McpT = McpTargetConfiguration>
    TargetConfiguration& WithMcp(McpT&& value) { SetMcp(std::forward<McpT>(value)); return *this;}
    ///@}
  private:

    McpTargetConfiguration m_mcp;
    bool m_mcpHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
