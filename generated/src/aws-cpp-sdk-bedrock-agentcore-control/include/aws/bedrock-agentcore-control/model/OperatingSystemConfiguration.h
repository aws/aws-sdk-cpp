/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/LinuxOperatingSystemConfiguration.h>

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
 * <p>Contains the operating system configuration of the agents that AgentCore
 * Runtime runs on a capacity provider. Specify the member for the operating system
 * of the capacity provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/OperatingSystemConfiguration">AWS
 * API Reference</a></p>
 */
class OperatingSystemConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API OperatingSystemConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API OperatingSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API OperatingSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The operating system configuration of agents that run on Linux instances.</p>
   */
  inline const LinuxOperatingSystemConfiguration& GetLinux() const { return m_linux; }
  inline bool LinuxHasBeenSet() const { return m_linuxHasBeenSet; }
  template <typename LinuxT = LinuxOperatingSystemConfiguration>
  void SetLinux(LinuxT&& value) {
    m_linuxHasBeenSet = true;
    m_linux = std::forward<LinuxT>(value);
  }
  template <typename LinuxT = LinuxOperatingSystemConfiguration>
  OperatingSystemConfiguration& WithLinux(LinuxT&& value) {
    SetLinux(std::forward<LinuxT>(value));
    return *this;
  }
  ///@}
 private:
  LinuxOperatingSystemConfiguration m_linux;
  bool m_linuxHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
