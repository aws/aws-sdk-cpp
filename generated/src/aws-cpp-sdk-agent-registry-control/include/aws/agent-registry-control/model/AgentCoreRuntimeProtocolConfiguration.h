/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AgentCoreRuntimeServerProtocol.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Protocol configuration for an AgentCore Runtime.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AgentCoreRuntimeProtocolConfiguration">AWS
 * API Reference</a></p>
 */
class AgentCoreRuntimeProtocolConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API AgentCoreRuntimeProtocolConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API AgentCoreRuntimeProtocolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AgentCoreRuntimeProtocolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline AgentCoreRuntimeServerProtocol GetServerProtocol() const { return m_serverProtocol; }
  inline bool ServerProtocolHasBeenSet() const { return m_serverProtocolHasBeenSet; }
  inline void SetServerProtocol(AgentCoreRuntimeServerProtocol value) {
    m_serverProtocolHasBeenSet = true;
    m_serverProtocol = value;
  }
  inline AgentCoreRuntimeProtocolConfiguration& WithServerProtocol(AgentCoreRuntimeServerProtocol value) {
    SetServerProtocol(value);
    return *this;
  }
  ///@}
 private:
  AgentCoreRuntimeServerProtocol m_serverProtocol{AgentCoreRuntimeServerProtocol::NOT_SET};
  bool m_serverProtocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
