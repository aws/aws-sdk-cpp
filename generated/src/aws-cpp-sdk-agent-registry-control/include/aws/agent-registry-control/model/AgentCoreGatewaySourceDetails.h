/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AgentCoreGatewayProtocolType.h>
#include <aws/agent-registry-control/model/AuthorizerConfiguration.h>
#include <aws/agent-registry-control/model/WorkloadIdentityDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Source details for a record auto-detected from an AgentCore Gateway
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AgentCoreGatewaySourceDetails">AWS
 * API Reference</a></p>
 */
class AgentCoreGatewaySourceDetails {
 public:
  AWS_AGENTREGISTRYCONTROL_API AgentCoreGatewaySourceDetails() = default;
  AWS_AGENTREGISTRYCONTROL_API AgentCoreGatewaySourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AgentCoreGatewaySourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline AgentCoreGatewayProtocolType GetProtocolType() const { return m_protocolType; }
  inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
  inline void SetProtocolType(AgentCoreGatewayProtocolType value) {
    m_protocolTypeHasBeenSet = true;
    m_protocolType = value;
  }
  inline AgentCoreGatewaySourceDetails& WithProtocolType(AgentCoreGatewayProtocolType value) {
    SetProtocolType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of authorizer configured on the AgentCore Gateway resource that the
   * registry record was detected from.</p>
   */
  inline const Aws::String& GetAuthorizerType() const { return m_authorizerType; }
  inline bool AuthorizerTypeHasBeenSet() const { return m_authorizerTypeHasBeenSet; }
  template <typename AuthorizerTypeT = Aws::String>
  void SetAuthorizerType(AuthorizerTypeT&& value) {
    m_authorizerTypeHasBeenSet = true;
    m_authorizerType = std::forward<AuthorizerTypeT>(value);
  }
  template <typename AuthorizerTypeT = Aws::String>
  AgentCoreGatewaySourceDetails& WithAuthorizerType(AuthorizerTypeT&& value) {
    SetAuthorizerType(std::forward<AuthorizerTypeT>(value));
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
  AgentCoreGatewaySourceDetails& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
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
  AgentCoreGatewaySourceDetails& WithWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) {
    SetWorkloadIdentityDetails(std::forward<WorkloadIdentityDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  AgentCoreGatewayProtocolType m_protocolType{AgentCoreGatewayProtocolType::NOT_SET};

  Aws::String m_authorizerType;

  AuthorizerConfiguration m_authorizerConfiguration;

  WorkloadIdentityDetails m_workloadIdentityDetails;
  bool m_protocolTypeHasBeenSet = false;
  bool m_authorizerTypeHasBeenSet = false;
  bool m_authorizerConfigurationHasBeenSet = false;
  bool m_workloadIdentityDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
