/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PrivilegeMode.h>

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
 * <p>Contains the operating system configuration of agents that run on Linux
 * instances, such as the privilege mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LinuxOperatingSystemConfiguration">AWS
 * API Reference</a></p>
 */
class LinuxOperatingSystemConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API LinuxOperatingSystemConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API LinuxOperatingSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API LinuxOperatingSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The privilege mode of the agents. If you omit this field, the agents run in
   * <code>STANDARD</code> privilege mode. The following values are possible:</p>
   * <ul> <li> <p> <code>STANDARD</code> – The agent runs without elevated
   * privileges. This is the default.</p> </li> <li> <p> <code>PRIVILEGED</code> –
   * The agent runs with elevated privileges on its instance. Use this mode for
   * agents that build container images, run containers, or install system packages.
   * A session that runs a <code>PRIVILEGED</code> agent runs only that agent.</p>
   * </li> </ul>
   */
  inline PrivilegeMode GetPrivilegeMode() const { return m_privilegeMode; }
  inline bool PrivilegeModeHasBeenSet() const { return m_privilegeModeHasBeenSet; }
  inline void SetPrivilegeMode(PrivilegeMode value) {
    m_privilegeModeHasBeenSet = true;
    m_privilegeMode = value;
  }
  inline LinuxOperatingSystemConfiguration& WithPrivilegeMode(PrivilegeMode value) {
    SetPrivilegeMode(value);
    return *this;
  }
  ///@}
 private:
  PrivilegeMode m_privilegeMode{PrivilegeMode::NOT_SET};
  bool m_privilegeModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
