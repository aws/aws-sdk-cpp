/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/MCPToolDetail.h>

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
 * <p>Mixin for webhook update support.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerDatadogConfiguration">AWS
 * API Reference</a></p>
 */
class MCPServerDatadogConfiguration {
 public:
  AWS_DEVOPSAGENT_API MCPServerDatadogConfiguration() = default;
  AWS_DEVOPSAGENT_API MCPServerDatadogConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerDatadogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The subset of elevated-access tools enabled for this integration.</p>
   */
  inline const Aws::Vector<MCPToolDetail>& GetEnabledElevatedTools() const { return m_enabledElevatedTools; }
  inline bool EnabledElevatedToolsHasBeenSet() const { return m_enabledElevatedToolsHasBeenSet; }
  template <typename EnabledElevatedToolsT = Aws::Vector<MCPToolDetail>>
  void SetEnabledElevatedTools(EnabledElevatedToolsT&& value) {
    m_enabledElevatedToolsHasBeenSet = true;
    m_enabledElevatedTools = std::forward<EnabledElevatedToolsT>(value);
  }
  template <typename EnabledElevatedToolsT = Aws::Vector<MCPToolDetail>>
  MCPServerDatadogConfiguration& WithEnabledElevatedTools(EnabledElevatedToolsT&& value) {
    SetEnabledElevatedTools(std::forward<EnabledElevatedToolsT>(value));
    return *this;
  }
  template <typename EnabledElevatedToolsT = MCPToolDetail>
  MCPServerDatadogConfiguration& AddEnabledElevatedTools(EnabledElevatedToolsT&& value) {
    m_enabledElevatedToolsHasBeenSet = true;
    m_enabledElevatedTools.emplace_back(std::forward<EnabledElevatedToolsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MCPToolDetail> m_enabledElevatedTools;
  bool m_enabledElevatedToolsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
