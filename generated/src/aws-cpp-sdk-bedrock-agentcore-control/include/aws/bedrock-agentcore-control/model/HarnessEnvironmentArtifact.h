/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
 * <p>The environment artifact for a harness, such as a container image containing
 * custom dependencies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessEnvironmentArtifact">AWS
 * API Reference</a></p>
 */
class HarnessEnvironmentArtifact {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessEnvironmentArtifact() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessEnvironmentArtifact(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessEnvironmentArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const ContainerConfiguration& GetContainerConfiguration() const { return m_containerConfiguration; }
  inline bool ContainerConfigurationHasBeenSet() const { return m_containerConfigurationHasBeenSet; }
  template <typename ContainerConfigurationT = ContainerConfiguration>
  void SetContainerConfiguration(ContainerConfigurationT&& value) {
    m_containerConfigurationHasBeenSet = true;
    m_containerConfiguration = std::forward<ContainerConfigurationT>(value);
  }
  template <typename ContainerConfigurationT = ContainerConfiguration>
  HarnessEnvironmentArtifact& WithContainerConfiguration(ContainerConfigurationT&& value) {
    SetContainerConfiguration(std::forward<ContainerConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ContainerConfiguration m_containerConfiguration;
  bool m_containerConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
