/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConnectorParameterOverride.h>
#include <aws/core/utils/Document.h>
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
 * <p>Configuration for a single tool within a connector.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ConnectorConfiguration">AWS
 * API Reference</a></p>
 */
class ConnectorConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ConnectorConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tool or operation name (for example, <code>retrieve</code> or
   * <code>webSearch</code>).</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ConnectorConfiguration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An agent-facing description override for this tool.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ConnectorConfiguration& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameters to set as fixed or default values when provisioning this tool.</p>
   */
  inline Aws::Utils::DocumentView GetParameterValues() const { return m_parameterValues; }
  inline bool ParameterValuesHasBeenSet() const { return m_parameterValuesHasBeenSet; }
  template <typename ParameterValuesT = Aws::Utils::Document>
  void SetParameterValues(ParameterValuesT&& value) {
    m_parameterValuesHasBeenSet = true;
    m_parameterValues = std::forward<ParameterValuesT>(value);
  }
  template <typename ParameterValuesT = Aws::Utils::Document>
  ConnectorConfiguration& WithParameterValues(ParameterValuesT&& value) {
    SetParameterValues(std::forward<ParameterValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameters to expose to the agent at runtime, with optional description
   * overrides.</p>
   */
  inline const Aws::Vector<ConnectorParameterOverride>& GetParameterOverrides() const { return m_parameterOverrides; }
  inline bool ParameterOverridesHasBeenSet() const { return m_parameterOverridesHasBeenSet; }
  template <typename ParameterOverridesT = Aws::Vector<ConnectorParameterOverride>>
  void SetParameterOverrides(ParameterOverridesT&& value) {
    m_parameterOverridesHasBeenSet = true;
    m_parameterOverrides = std::forward<ParameterOverridesT>(value);
  }
  template <typename ParameterOverridesT = Aws::Vector<ConnectorParameterOverride>>
  ConnectorConfiguration& WithParameterOverrides(ParameterOverridesT&& value) {
    SetParameterOverrides(std::forward<ParameterOverridesT>(value));
    return *this;
  }
  template <typename ParameterOverridesT = ConnectorParameterOverride>
  ConnectorConfiguration& AddParameterOverrides(ParameterOverridesT&& value) {
    m_parameterOverridesHasBeenSet = true;
    m_parameterOverrides.emplace_back(std::forward<ParameterOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::Document m_parameterValues;

  Aws::Vector<ConnectorParameterOverride> m_parameterOverrides;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_parameterValuesHasBeenSet = false;
  bool m_parameterOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
