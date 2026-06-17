/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConnectorConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ConnectorSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Configuration for a connector integration target. Connectors provide
 * pre-built integrations with Amazon Web Services services and third-party
 * tools.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ConnectorTargetConfiguration">AWS
 * API Reference</a></p>
 */
class ConnectorTargetConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ConnectorTargetConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ConnectorTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ConnectorTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source configuration identifying which connector to use.</p>
   */
  inline const ConnectorSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = ConnectorSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = ConnectorSource>
  ConnectorTargetConfiguration& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tool names to enable from this connector. If absent, all tools
   * provided by the connector are enabled.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  template <typename EnabledT = Aws::Vector<Aws::String>>
  void SetEnabled(EnabledT&& value) {
    m_enabledHasBeenSet = true;
    m_enabled = std::forward<EnabledT>(value);
  }
  template <typename EnabledT = Aws::Vector<Aws::String>>
  ConnectorTargetConfiguration& WithEnabled(EnabledT&& value) {
    SetEnabled(std::forward<EnabledT>(value));
    return *this;
  }
  template <typename EnabledT = Aws::String>
  ConnectorTargetConfiguration& AddEnabled(EnabledT&& value) {
    m_enabledHasBeenSet = true;
    m_enabled.emplace_back(std::forward<EnabledT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of per-tool configurations for the connector.</p>
   */
  inline const Aws::Vector<ConnectorConfiguration>& GetConfigurations() const { return m_configurations; }
  inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
  template <typename ConfigurationsT = Aws::Vector<ConnectorConfiguration>>
  void SetConfigurations(ConfigurationsT&& value) {
    m_configurationsHasBeenSet = true;
    m_configurations = std::forward<ConfigurationsT>(value);
  }
  template <typename ConfigurationsT = Aws::Vector<ConnectorConfiguration>>
  ConnectorTargetConfiguration& WithConfigurations(ConfigurationsT&& value) {
    SetConfigurations(std::forward<ConfigurationsT>(value));
    return *this;
  }
  template <typename ConfigurationsT = ConnectorConfiguration>
  ConnectorTargetConfiguration& AddConfigurations(ConfigurationsT&& value) {
    m_configurationsHasBeenSet = true;
    m_configurations.emplace_back(std::forward<ConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorSource m_source;

  Aws::Vector<Aws::String> m_enabled;

  Aws::Vector<ConnectorConfiguration> m_configurations;
  bool m_sourceHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_configurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
