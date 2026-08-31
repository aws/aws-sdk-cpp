/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AgentCoreGatewaySourceDetails.h>
#include <aws/agent-registry-control/model/AgentCoreRuntimeSourceDetails.h>

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
 * <p>The details about the upstream source from which a registry record was
 * detected. Exactly one member is populated, corresponding to the source
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/SourceDetails">AWS
 * API Reference</a></p>
 */
class SourceDetails {
 public:
  AWS_AGENTREGISTRYCONTROL_API SourceDetails() = default;
  AWS_AGENTREGISTRYCONTROL_API SourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API SourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const AgentCoreRuntimeSourceDetails& GetAgentcoreRuntime() const { return m_agentcoreRuntime; }
  inline bool AgentcoreRuntimeHasBeenSet() const { return m_agentcoreRuntimeHasBeenSet; }
  template <typename AgentcoreRuntimeT = AgentCoreRuntimeSourceDetails>
  void SetAgentcoreRuntime(AgentcoreRuntimeT&& value) {
    m_agentcoreRuntimeHasBeenSet = true;
    m_agentcoreRuntime = std::forward<AgentcoreRuntimeT>(value);
  }
  template <typename AgentcoreRuntimeT = AgentCoreRuntimeSourceDetails>
  SourceDetails& WithAgentcoreRuntime(AgentcoreRuntimeT&& value) {
    SetAgentcoreRuntime(std::forward<AgentcoreRuntimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AgentCoreGatewaySourceDetails& GetAgentcoreGateway() const { return m_agentcoreGateway; }
  inline bool AgentcoreGatewayHasBeenSet() const { return m_agentcoreGatewayHasBeenSet; }
  template <typename AgentcoreGatewayT = AgentCoreGatewaySourceDetails>
  void SetAgentcoreGateway(AgentcoreGatewayT&& value) {
    m_agentcoreGatewayHasBeenSet = true;
    m_agentcoreGateway = std::forward<AgentcoreGatewayT>(value);
  }
  template <typename AgentcoreGatewayT = AgentCoreGatewaySourceDetails>
  SourceDetails& WithAgentcoreGateway(AgentcoreGatewayT&& value) {
    SetAgentcoreGateway(std::forward<AgentcoreGatewayT>(value));
    return *this;
  }
  ///@}
 private:
  AgentCoreRuntimeSourceDetails m_agentcoreRuntime;

  AgentCoreGatewaySourceDetails m_agentcoreGateway;
  bool m_agentcoreRuntimeHasBeenSet = false;
  bool m_agentcoreGatewayHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
