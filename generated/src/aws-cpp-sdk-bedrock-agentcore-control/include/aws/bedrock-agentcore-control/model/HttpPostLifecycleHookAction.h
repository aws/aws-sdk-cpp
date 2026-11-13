/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A lifecycle hook action that sends an HTTP <code>POST</code> request to the
 * agent's container. The path and port can't conflict with a path that your agent
 * already serves for AgentCore Runtime, such as the protocol's invocation path or
 * the health check path.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HttpPostLifecycleHookAction">AWS
 * API Reference</a></p>
 */
class HttpPostLifecycleHookAction {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HttpPostLifecycleHookAction() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HttpPostLifecycleHookAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HttpPostLifecycleHookAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The path in the agent's container that AgentCore Runtime sends the
   * <code>POST</code> request to.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  HttpPostLifecycleHookAction& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port in the agent's container that AgentCore Runtime sends the
   * <code>POST</code> request to. If you don't specify a port, the default is the
   * runtime's server port: the port in the protocol configuration if one is set,
   * otherwise the protocol's default port.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline HttpPostLifecycleHookAction& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;

  int m_port{0};
  bool m_pathHasBeenSet = false;
  bool m_portHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
