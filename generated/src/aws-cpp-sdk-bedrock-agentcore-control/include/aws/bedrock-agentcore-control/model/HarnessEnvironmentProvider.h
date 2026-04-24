/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessAgentCoreRuntimeEnvironment.h>

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
 * <p>The environment provider for a harness.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessEnvironmentProvider">AWS
 * API Reference</a></p>
 */
class HarnessEnvironmentProvider {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessEnvironmentProvider() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessEnvironmentProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessEnvironmentProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AgentCore Runtime environment configuration.</p>
   */
  inline const HarnessAgentCoreRuntimeEnvironment& GetAgentCoreRuntimeEnvironment() const { return m_agentCoreRuntimeEnvironment; }
  inline bool AgentCoreRuntimeEnvironmentHasBeenSet() const { return m_agentCoreRuntimeEnvironmentHasBeenSet; }
  template <typename AgentCoreRuntimeEnvironmentT = HarnessAgentCoreRuntimeEnvironment>
  void SetAgentCoreRuntimeEnvironment(AgentCoreRuntimeEnvironmentT&& value) {
    m_agentCoreRuntimeEnvironmentHasBeenSet = true;
    m_agentCoreRuntimeEnvironment = std::forward<AgentCoreRuntimeEnvironmentT>(value);
  }
  template <typename AgentCoreRuntimeEnvironmentT = HarnessAgentCoreRuntimeEnvironment>
  HarnessEnvironmentProvider& WithAgentCoreRuntimeEnvironment(AgentCoreRuntimeEnvironmentT&& value) {
    SetAgentCoreRuntimeEnvironment(std::forward<AgentCoreRuntimeEnvironmentT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessAgentCoreRuntimeEnvironment m_agentCoreRuntimeEnvironment;
  bool m_agentCoreRuntimeEnvironmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
