/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PortRange.h>

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
 * <p>A port or port range that is reachable through the runtime's session URL.
 * Specify exactly one of <code>port</code> or
 * <code>portRange</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AllowedPort">AWS
 * API Reference</a></p>
 */
class AllowedPort {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AllowedPort() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AllowedPort(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AllowedPort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A single port that is reachable through the runtime's session URL.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline AllowedPort& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An inclusive range of ports that are reachable through the runtime's session
   * URL.</p>
   */
  inline const PortRange& GetPortRange() const { return m_portRange; }
  inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
  template <typename PortRangeT = PortRange>
  void SetPortRange(PortRangeT&& value) {
    m_portRangeHasBeenSet = true;
    m_portRange = std::forward<PortRangeT>(value);
  }
  template <typename PortRangeT = PortRange>
  AllowedPort& WithPortRange(PortRangeT&& value) {
    SetPortRange(std::forward<PortRangeT>(value));
    return *this;
  }
  ///@}
 private:
  int m_port{0};

  PortRange m_portRange;
  bool m_portHasBeenSet = false;
  bool m_portRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
