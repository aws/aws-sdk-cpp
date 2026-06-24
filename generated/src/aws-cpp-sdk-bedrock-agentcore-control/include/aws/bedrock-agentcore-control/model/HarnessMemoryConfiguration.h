/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessAgentCoreMemoryConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessDisabledMemoryConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessManagedMemoryConfiguration.h>

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
 * <p>The memory configuration for a harness.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessMemoryConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessMemoryConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessMemoryConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessMemoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessMemoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AgentCore Memory configuration.</p>
   */
  inline const HarnessAgentCoreMemoryConfiguration& GetAgentCoreMemoryConfiguration() const { return m_agentCoreMemoryConfiguration; }
  inline bool AgentCoreMemoryConfigurationHasBeenSet() const { return m_agentCoreMemoryConfigurationHasBeenSet; }
  template <typename AgentCoreMemoryConfigurationT = HarnessAgentCoreMemoryConfiguration>
  void SetAgentCoreMemoryConfiguration(AgentCoreMemoryConfigurationT&& value) {
    m_agentCoreMemoryConfigurationHasBeenSet = true;
    m_agentCoreMemoryConfiguration = std::forward<AgentCoreMemoryConfigurationT>(value);
  }
  template <typename AgentCoreMemoryConfigurationT = HarnessAgentCoreMemoryConfiguration>
  HarnessMemoryConfiguration& WithAgentCoreMemoryConfiguration(AgentCoreMemoryConfigurationT&& value) {
    SetAgentCoreMemoryConfiguration(std::forward<AgentCoreMemoryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Harness creates and manages a memory resource in the customer's account.</p>
   */
  inline const HarnessManagedMemoryConfiguration& GetManagedMemoryConfiguration() const { return m_managedMemoryConfiguration; }
  inline bool ManagedMemoryConfigurationHasBeenSet() const { return m_managedMemoryConfigurationHasBeenSet; }
  template <typename ManagedMemoryConfigurationT = HarnessManagedMemoryConfiguration>
  void SetManagedMemoryConfiguration(ManagedMemoryConfigurationT&& value) {
    m_managedMemoryConfigurationHasBeenSet = true;
    m_managedMemoryConfiguration = std::forward<ManagedMemoryConfigurationT>(value);
  }
  template <typename ManagedMemoryConfigurationT = HarnessManagedMemoryConfiguration>
  HarnessMemoryConfiguration& WithManagedMemoryConfiguration(ManagedMemoryConfigurationT&& value) {
    SetManagedMemoryConfiguration(std::forward<ManagedMemoryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Explicitly opt out of memory.</p>
   */
  inline const HarnessDisabledMemoryConfiguration& GetDisabled() const { return m_disabled; }
  inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
  template <typename DisabledT = HarnessDisabledMemoryConfiguration>
  void SetDisabled(DisabledT&& value) {
    m_disabledHasBeenSet = true;
    m_disabled = std::forward<DisabledT>(value);
  }
  template <typename DisabledT = HarnessDisabledMemoryConfiguration>
  HarnessMemoryConfiguration& WithDisabled(DisabledT&& value) {
    SetDisabled(std::forward<DisabledT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessAgentCoreMemoryConfiguration m_agentCoreMemoryConfiguration;

  HarnessManagedMemoryConfiguration m_managedMemoryConfiguration;

  HarnessDisabledMemoryConfiguration m_disabled;
  bool m_agentCoreMemoryConfigurationHasBeenSet = false;
  bool m_managedMemoryConfigurationHasBeenSet = false;
  bool m_disabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
