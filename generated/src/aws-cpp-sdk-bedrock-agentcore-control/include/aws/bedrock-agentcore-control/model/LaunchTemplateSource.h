/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/LaunchParameters.h>

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
 * <p>The source of the launch template configuration for a capacity provider. The
 * <code>launchParameters</code> member specifies the operating system, instance
 * requirements, and other settings used to launch instances.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LaunchTemplateSource">AWS
 * API Reference</a></p>
 */
class LaunchTemplateSource {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API LaunchTemplateSource() = default;
  AWS_BEDROCKAGENTCORECONTROL_API LaunchTemplateSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API LaunchTemplateSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The parameters that AgentCore uses to create the launch template.</p>
   */
  inline const LaunchParameters& GetLaunchParameters() const { return m_launchParameters; }
  inline bool LaunchParametersHasBeenSet() const { return m_launchParametersHasBeenSet; }
  template <typename LaunchParametersT = LaunchParameters>
  void SetLaunchParameters(LaunchParametersT&& value) {
    m_launchParametersHasBeenSet = true;
    m_launchParameters = std::forward<LaunchParametersT>(value);
  }
  template <typename LaunchParametersT = LaunchParameters>
  LaunchTemplateSource& WithLaunchParameters(LaunchParametersT&& value) {
    SetLaunchParameters(std::forward<LaunchParametersT>(value));
    return *this;
  }
  ///@}
 private:
  LaunchParameters m_launchParameters;
  bool m_launchParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
