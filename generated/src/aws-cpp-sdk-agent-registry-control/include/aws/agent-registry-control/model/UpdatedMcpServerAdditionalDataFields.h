/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedMcpToolsDescriptor.h>

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
 * <p>The set of MCP server additional-data fields that can be individually
 * updated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedMcpServerAdditionalDataFields">AWS
 * API Reference</a></p>
 */
class UpdatedMcpServerAdditionalDataFields {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedMcpServerAdditionalDataFields() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedMcpServerAdditionalDataFields(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedMcpServerAdditionalDataFields& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The patch for the MCP tools descriptor field.</p>
   */
  inline const UpdatedMcpToolsDescriptor& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = UpdatedMcpToolsDescriptor>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = UpdatedMcpToolsDescriptor>
  UpdatedMcpServerAdditionalDataFields& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedMcpToolsDescriptor m_tools;
  bool m_toolsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
