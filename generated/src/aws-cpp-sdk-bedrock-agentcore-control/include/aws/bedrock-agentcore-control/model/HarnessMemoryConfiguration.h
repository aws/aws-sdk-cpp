/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessAgentCoreMemoryConfiguration.h>

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
 private:
  HarnessAgentCoreMemoryConfiguration m_agentCoreMemoryConfiguration;
  bool m_agentCoreMemoryConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
