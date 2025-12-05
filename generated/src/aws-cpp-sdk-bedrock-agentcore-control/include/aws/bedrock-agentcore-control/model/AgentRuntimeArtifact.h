/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CodeConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ContainerConfiguration.h>

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
 * <p>The artifact of the agent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AgentRuntimeArtifact">AWS
 * API Reference</a></p>
 */
class AgentRuntimeArtifact {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AgentRuntimeArtifact() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AgentRuntimeArtifact(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AgentRuntimeArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The container configuration for the agent artifact.</p>
   */
  inline const ContainerConfiguration& GetContainerConfiguration() const { return m_containerConfiguration; }
  inline bool ContainerConfigurationHasBeenSet() const { return m_containerConfigurationHasBeenSet; }
  template <typename ContainerConfigurationT = ContainerConfiguration>
  void SetContainerConfiguration(ContainerConfigurationT&& value) {
    m_containerConfigurationHasBeenSet = true;
    m_containerConfiguration = std::forward<ContainerConfigurationT>(value);
  }
  template <typename ContainerConfigurationT = ContainerConfiguration>
  AgentRuntimeArtifact& WithContainerConfiguration(ContainerConfigurationT&& value) {
    SetContainerConfiguration(std::forward<ContainerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code configuration for the agent runtime artifact, including the source
   * code location and execution settings.</p>
   */
  inline const CodeConfiguration& GetCodeConfiguration() const { return m_codeConfiguration; }
  inline bool CodeConfigurationHasBeenSet() const { return m_codeConfigurationHasBeenSet; }
  template <typename CodeConfigurationT = CodeConfiguration>
  void SetCodeConfiguration(CodeConfigurationT&& value) {
    m_codeConfigurationHasBeenSet = true;
    m_codeConfiguration = std::forward<CodeConfigurationT>(value);
  }
  template <typename CodeConfigurationT = CodeConfiguration>
  AgentRuntimeArtifact& WithCodeConfiguration(CodeConfigurationT&& value) {
    SetCodeConfiguration(std::forward<CodeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ContainerConfiguration m_containerConfiguration;

  CodeConfiguration m_codeConfiguration;
  bool m_containerConfigurationHasBeenSet = false;
  bool m_codeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
