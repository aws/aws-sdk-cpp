/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for Model Context Protocol (MCP) server
 * integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerConfiguration">AWS
 * API Reference</a></p>
 */
class MCPServerConfiguration {
 public:
  AWS_DEVOPSAGENT_API MCPServerConfiguration() = default;
  AWS_DEVOPSAGENT_API MCPServerConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of MCP tools can be used with the association.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = Aws::Vector<Aws::String>>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = Aws::Vector<Aws::String>>
  MCPServerConfiguration& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  template <typename ToolsT = Aws::String>
  MCPServerConfiguration& AddTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools.emplace_back(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_tools;
  bool m_toolsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
