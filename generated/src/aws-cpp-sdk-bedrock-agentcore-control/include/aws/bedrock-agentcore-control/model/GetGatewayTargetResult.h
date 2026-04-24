/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AuthorizationData.h>
#include <aws/bedrock-agentcore-control/model/CredentialProviderConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ManagedResourceDetails.h>
#include <aws/bedrock-agentcore-control/model/MetadataConfiguration.h>
#include <aws/bedrock-agentcore-control/model/PrivateEndpoint.h>
#include <aws/bedrock-agentcore-control/model/TargetConfiguration.h>
#include <aws/bedrock-agentcore-control/model/TargetStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class GetGatewayTargetResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetGatewayTargetResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetGatewayTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetGatewayTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway.</p>
   */
  inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
  template <typename GatewayArnT = Aws::String>
  void SetGatewayArn(GatewayArnT&& value) {
    m_gatewayArnHasBeenSet = true;
    m_gatewayArn = std::forward<GatewayArnT>(value);
  }
  template <typename GatewayArnT = Aws::String>
  GetGatewayTargetResult& WithGatewayArn(GatewayArnT&& value) {
    SetGatewayArn(std::forward<GatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the gateway target.</p>
   */
  inline const Aws::String& GetTargetId() const { return m_targetId; }
  template <typename TargetIdT = Aws::String>
  void SetTargetId(TargetIdT&& value) {
    m_targetIdHasBeenSet = true;
    m_targetId = std::forward<TargetIdT>(value);
  }
  template <typename TargetIdT = Aws::String>
  GetGatewayTargetResult& WithTargetId(TargetIdT&& value) {
    SetTargetId(std::forward<TargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the gateway target was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetGatewayTargetResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the gateway target was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetGatewayTargetResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the gateway target.</p>
   */
  inline TargetStatus GetStatus() const { return m_status; }
  inline void SetStatus(TargetStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetGatewayTargetResult& WithStatus(TargetStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reasons for the current status of the gateway target.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStatusReasons() const { return m_statusReasons; }
  template <typename StatusReasonsT = Aws::Vector<Aws::String>>
  void SetStatusReasons(StatusReasonsT&& value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons = std::forward<StatusReasonsT>(value);
  }
  template <typename StatusReasonsT = Aws::Vector<Aws::String>>
  GetGatewayTargetResult& WithStatusReasons(StatusReasonsT&& value) {
    SetStatusReasons(std::forward<StatusReasonsT>(value));
    return *this;
  }
  template <typename StatusReasonsT = Aws::String>
  GetGatewayTargetResult& AddStatusReasons(StatusReasonsT&& value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the gateway target.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetGatewayTargetResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the gateway target.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetGatewayTargetResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const TargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
  template <typename TargetConfigurationT = TargetConfiguration>
  void SetTargetConfiguration(TargetConfigurationT&& value) {
    m_targetConfigurationHasBeenSet = true;
    m_targetConfiguration = std::forward<TargetConfigurationT>(value);
  }
  template <typename TargetConfigurationT = TargetConfiguration>
  GetGatewayTargetResult& WithTargetConfiguration(TargetConfigurationT&& value) {
    SetTargetConfiguration(std::forward<TargetConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credential provider configurations for the gateway target.</p>
   */
  inline const Aws::Vector<CredentialProviderConfiguration>& GetCredentialProviderConfigurations() const {
    return m_credentialProviderConfigurations;
  }
  template <typename CredentialProviderConfigurationsT = Aws::Vector<CredentialProviderConfiguration>>
  void SetCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    m_credentialProviderConfigurationsHasBeenSet = true;
    m_credentialProviderConfigurations = std::forward<CredentialProviderConfigurationsT>(value);
  }
  template <typename CredentialProviderConfigurationsT = Aws::Vector<CredentialProviderConfiguration>>
  GetGatewayTargetResult& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  template <typename CredentialProviderConfigurationsT = CredentialProviderConfiguration>
  GetGatewayTargetResult& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    m_credentialProviderConfigurationsHasBeenSet = true;
    m_credentialProviderConfigurations.emplace_back(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last synchronization of the target.</p>
   */
  inline const Aws::Utils::DateTime& GetLastSynchronizedAt() const { return m_lastSynchronizedAt; }
  template <typename LastSynchronizedAtT = Aws::Utils::DateTime>
  void SetLastSynchronizedAt(LastSynchronizedAtT&& value) {
    m_lastSynchronizedAtHasBeenSet = true;
    m_lastSynchronizedAt = std::forward<LastSynchronizedAtT>(value);
  }
  template <typename LastSynchronizedAtT = Aws::Utils::DateTime>
  GetGatewayTargetResult& WithLastSynchronizedAt(LastSynchronizedAtT&& value) {
    SetLastSynchronizedAt(std::forward<LastSynchronizedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata configuration for HTTP header and query parameter propagation
   * for the retrieved gateway target.</p>
   */
  inline const MetadataConfiguration& GetMetadataConfiguration() const { return m_metadataConfiguration; }
  template <typename MetadataConfigurationT = MetadataConfiguration>
  void SetMetadataConfiguration(MetadataConfigurationT&& value) {
    m_metadataConfigurationHasBeenSet = true;
    m_metadataConfiguration = std::forward<MetadataConfigurationT>(value);
  }
  template <typename MetadataConfigurationT = MetadataConfiguration>
  GetGatewayTargetResult& WithMetadataConfiguration(MetadataConfigurationT&& value) {
    SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private endpoint configuration for the gateway target.</p>
   */
  inline const PrivateEndpoint& GetPrivateEndpoint() const { return m_privateEndpoint; }
  template <typename PrivateEndpointT = PrivateEndpoint>
  void SetPrivateEndpoint(PrivateEndpointT&& value) {
    m_privateEndpointHasBeenSet = true;
    m_privateEndpoint = std::forward<PrivateEndpointT>(value);
  }
  template <typename PrivateEndpointT = PrivateEndpoint>
  GetGatewayTargetResult& WithPrivateEndpoint(PrivateEndpointT&& value) {
    SetPrivateEndpoint(std::forward<PrivateEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The managed resources created by the gateway for private endpoint
   * connectivity.</p>
   */
  inline const Aws::Vector<ManagedResourceDetails>& GetPrivateEndpointManagedResources() const { return m_privateEndpointManagedResources; }
  template <typename PrivateEndpointManagedResourcesT = Aws::Vector<ManagedResourceDetails>>
  void SetPrivateEndpointManagedResources(PrivateEndpointManagedResourcesT&& value) {
    m_privateEndpointManagedResourcesHasBeenSet = true;
    m_privateEndpointManagedResources = std::forward<PrivateEndpointManagedResourcesT>(value);
  }
  template <typename PrivateEndpointManagedResourcesT = Aws::Vector<ManagedResourceDetails>>
  GetGatewayTargetResult& WithPrivateEndpointManagedResources(PrivateEndpointManagedResourcesT&& value) {
    SetPrivateEndpointManagedResources(std::forward<PrivateEndpointManagedResourcesT>(value));
    return *this;
  }
  template <typename PrivateEndpointManagedResourcesT = ManagedResourceDetails>
  GetGatewayTargetResult& AddPrivateEndpointManagedResources(PrivateEndpointManagedResourcesT&& value) {
    m_privateEndpointManagedResourcesHasBeenSet = true;
    m_privateEndpointManagedResources.emplace_back(std::forward<PrivateEndpointManagedResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth2 authorization data for the gateway target. This data is returned when
   * a target is configured with a credential provider with authorization code grant
   * type and requires user federation.</p>
   */
  inline const AuthorizationData& GetAuthorizationData() const { return m_authorizationData; }
  template <typename AuthorizationDataT = AuthorizationData>
  void SetAuthorizationData(AuthorizationDataT&& value) {
    m_authorizationDataHasBeenSet = true;
    m_authorizationData = std::forward<AuthorizationDataT>(value);
  }
  template <typename AuthorizationDataT = AuthorizationData>
  GetGatewayTargetResult& WithAuthorizationData(AuthorizationDataT&& value) {
    SetAuthorizationData(std::forward<AuthorizationDataT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetGatewayTargetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_gatewayArn;

  Aws::String m_targetId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  TargetStatus m_status{TargetStatus::NOT_SET};

  Aws::Vector<Aws::String> m_statusReasons;

  Aws::String m_name;

  Aws::String m_description;

  TargetConfiguration m_targetConfiguration;

  Aws::Vector<CredentialProviderConfiguration> m_credentialProviderConfigurations;

  Aws::Utils::DateTime m_lastSynchronizedAt{};

  MetadataConfiguration m_metadataConfiguration;

  PrivateEndpoint m_privateEndpoint;

  Aws::Vector<ManagedResourceDetails> m_privateEndpointManagedResources;

  AuthorizationData m_authorizationData;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewayArnHasBeenSet = false;
  bool m_targetIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonsHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_targetConfigurationHasBeenSet = false;
  bool m_credentialProviderConfigurationsHasBeenSet = false;
  bool m_lastSynchronizedAtHasBeenSet = false;
  bool m_metadataConfigurationHasBeenSet = false;
  bool m_privateEndpointHasBeenSet = false;
  bool m_privateEndpointManagedResourcesHasBeenSet = false;
  bool m_authorizationDataHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
