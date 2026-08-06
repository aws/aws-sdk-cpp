/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/McpToolsDescriptor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Additional data for an MCP server descriptor</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/McpServerAdditionalData">AWS
 * API Reference</a></p>
 */
class McpServerAdditionalData {
 public:
  AWS_AGENTREGISTRYCONTROL_API McpServerAdditionalData() = default;
  AWS_AGENTREGISTRYCONTROL_API McpServerAdditionalData(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API McpServerAdditionalData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const McpToolsDescriptor& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = McpToolsDescriptor>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = McpToolsDescriptor>
  McpServerAdditionalData& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}
 private:
  McpToolsDescriptor m_tools;
  bool m_toolsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
