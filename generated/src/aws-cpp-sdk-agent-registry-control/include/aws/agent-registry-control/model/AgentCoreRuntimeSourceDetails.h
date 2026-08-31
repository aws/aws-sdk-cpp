/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AgentCoreRuntimeProtocolConfiguration.h>
#include <aws/agent-registry-control/model/AuthorizerConfiguration.h>
#include <aws/agent-registry-control/model/WorkloadIdentityDetails.h>

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
 * <p>Source details for a record auto-detected from an AgentCore Runtime
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AgentCoreRuntimeSourceDetails">AWS
 * API Reference</a></p>
 */
class AgentCoreRuntimeSourceDetails {
 public:
  AWS_AGENTREGISTRYCONTROL_API AgentCoreRuntimeSourceDetails() = default;
  AWS_AGENTREGISTRYCONTROL_API AgentCoreRuntimeSourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AgentCoreRuntimeSourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const AgentCoreRuntimeProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
  inline bool ProtocolConfigurationHasBeenSet() const { return m_protocolConfigurationHasBeenSet; }
  template <typename ProtocolConfigurationT = AgentCoreRuntimeProtocolConfiguration>
  void SetProtocolConfiguration(ProtocolConfigurationT&& value) {
    m_protocolConfigurationHasBeenSet = true;
    m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value);
  }
  template <typename ProtocolConfigurationT = AgentCoreRuntimeProtocolConfiguration>
  AgentCoreRuntimeSourceDetails& WithProtocolConfiguration(ProtocolConfigurationT&& value) {
    SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
  inline bool AuthorizerConfigurationHasBeenSet() const { return m_authorizerConfigurationHasBeenSet; }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    m_authorizerConfigurationHasBeenSet = true;
    m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value);
  }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  AgentCoreRuntimeSourceDetails& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const WorkloadIdentityDetails& GetWorkloadIdentityDetails() const { return m_workloadIdentityDetails; }
  inline bool WorkloadIdentityDetailsHasBeenSet() const { return m_workloadIdentityDetailsHasBeenSet; }
  template <typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
  void SetWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) {
    m_workloadIdentityDetailsHasBeenSet = true;
    m_workloadIdentityDetails = std::forward<WorkloadIdentityDetailsT>(value);
  }
  template <typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
  AgentCoreRuntimeSourceDetails& WithWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) {
    SetWorkloadIdentityDetails(std::forward<WorkloadIdentityDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  AgentCoreRuntimeProtocolConfiguration m_protocolConfiguration;

  AuthorizerConfiguration m_authorizerConfiguration;

  WorkloadIdentityDetails m_workloadIdentityDetails;
  bool m_protocolConfigurationHasBeenSet = false;
  bool m_authorizerConfigurationHasBeenSet = false;
  bool m_workloadIdentityDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
