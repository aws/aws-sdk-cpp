/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ServerProtocol.h>
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
 * <p>The protocol configuration for an agent runtime. This structure defines how
 * the agent runtime communicates with clients.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ProtocolConfiguration">AWS
 * API Reference</a></p>
 */
class ProtocolConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ProtocolConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ProtocolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ProtocolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The server protocol for the agent runtime. This field specifies which
   * protocol the agent runtime uses to communicate with clients.</p>
   */
  inline ServerProtocol GetServerProtocol() const { return m_serverProtocol; }
  inline bool ServerProtocolHasBeenSet() const { return m_serverProtocolHasBeenSet; }
  inline void SetServerProtocol(ServerProtocol value) {
    m_serverProtocolHasBeenSet = true;
    m_serverProtocol = value;
  }
  inline ProtocolConfiguration& WithServerProtocol(ServerProtocol value) {
    SetServerProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port on which the agent server listens. The port must be between
   * <code>8000</code> and <code>12000</code>, excluding the reserved port
   * <code>8443</code>. When this field is omitted, the default is <code>8080</code>
   * for <code>HTTP</code> and <code>AGUI</code>, <code>8000</code> for
   * <code>MCP</code>, and <code>9000</code> for <code>A2A</code>.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline ProtocolConfiguration& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path on which the agent server accepts requests. The path must begin with
   * <code>/</code>. When this field is omitted, the default is
   * <code>/invocations</code> for <code>HTTP</code> and <code>AGUI</code>,
   * <code>/mcp</code> for <code>MCP</code>, and <code>/</code> for
   * <code>A2A</code>.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  ProtocolConfiguration& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}
 private:
  ServerProtocol m_serverProtocol{ServerProtocol::NOT_SET};

  int m_port{0};

  Aws::String m_path;
  bool m_serverProtocolHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_pathHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
