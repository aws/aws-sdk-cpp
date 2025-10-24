/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Oauth2FlowType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class GetResourceOauth2TokenRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API GetResourceOauth2TokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetResourceOauth2Token"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identity token of the workload from which you want to retrieve the OAuth2
   * token.</p>
   */
  inline const Aws::String& GetWorkloadIdentityToken() const { return m_workloadIdentityToken; }
  inline bool WorkloadIdentityTokenHasBeenSet() const { return m_workloadIdentityTokenHasBeenSet; }
  template <typename WorkloadIdentityTokenT = Aws::String>
  void SetWorkloadIdentityToken(WorkloadIdentityTokenT&& value) {
    m_workloadIdentityTokenHasBeenSet = true;
    m_workloadIdentityToken = std::forward<WorkloadIdentityTokenT>(value);
  }
  template <typename WorkloadIdentityTokenT = Aws::String>
  GetResourceOauth2TokenRequest& WithWorkloadIdentityToken(WorkloadIdentityTokenT&& value) {
    SetWorkloadIdentityToken(std::forward<WorkloadIdentityTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource's credential provider.</p>
   */
  inline const Aws::String& GetResourceCredentialProviderName() const { return m_resourceCredentialProviderName; }
  inline bool ResourceCredentialProviderNameHasBeenSet() const { return m_resourceCredentialProviderNameHasBeenSet; }
  template <typename ResourceCredentialProviderNameT = Aws::String>
  void SetResourceCredentialProviderName(ResourceCredentialProviderNameT&& value) {
    m_resourceCredentialProviderNameHasBeenSet = true;
    m_resourceCredentialProviderName = std::forward<ResourceCredentialProviderNameT>(value);
  }
  template <typename ResourceCredentialProviderNameT = Aws::String>
  GetResourceOauth2TokenRequest& WithResourceCredentialProviderName(ResourceCredentialProviderNameT&& value) {
    SetResourceCredentialProviderName(std::forward<ResourceCredentialProviderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth scopes being requested.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  GetResourceOauth2TokenRequest& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  GetResourceOauth2TokenRequest& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of flow to be performed.</p>
   */
  inline Oauth2FlowType GetOauth2Flow() const { return m_oauth2Flow; }
  inline bool Oauth2FlowHasBeenSet() const { return m_oauth2FlowHasBeenSet; }
  inline void SetOauth2Flow(Oauth2FlowType value) {
    m_oauth2FlowHasBeenSet = true;
    m_oauth2Flow = value;
  }
  inline GetResourceOauth2TokenRequest& WithOauth2Flow(Oauth2FlowType value) {
    SetOauth2Flow(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier for the user's authentication session for retrieving OAuth2
   * tokens. This ID tracks the authorization flow state across multiple requests and
   * responses during the OAuth2 authentication process.</p>
   */
  inline const Aws::String& GetSessionUri() const { return m_sessionUri; }
  inline bool SessionUriHasBeenSet() const { return m_sessionUriHasBeenSet; }
  template <typename SessionUriT = Aws::String>
  void SetSessionUri(SessionUriT&& value) {
    m_sessionUriHasBeenSet = true;
    m_sessionUri = std::forward<SessionUriT>(value);
  }
  template <typename SessionUriT = Aws::String>
  GetResourceOauth2TokenRequest& WithSessionUri(SessionUriT&& value) {
    SetSessionUri(std::forward<SessionUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The callback URL to redirect to after the OAuth 2.0 token retrieval is
   * complete. This URL must be one of the provided URLs configured for the workload
   * identity.</p>
   */
  inline const Aws::String& GetResourceOauth2ReturnUrl() const { return m_resourceOauth2ReturnUrl; }
  inline bool ResourceOauth2ReturnUrlHasBeenSet() const { return m_resourceOauth2ReturnUrlHasBeenSet; }
  template <typename ResourceOauth2ReturnUrlT = Aws::String>
  void SetResourceOauth2ReturnUrl(ResourceOauth2ReturnUrlT&& value) {
    m_resourceOauth2ReturnUrlHasBeenSet = true;
    m_resourceOauth2ReturnUrl = std::forward<ResourceOauth2ReturnUrlT>(value);
  }
  template <typename ResourceOauth2ReturnUrlT = Aws::String>
  GetResourceOauth2TokenRequest& WithResourceOauth2ReturnUrl(ResourceOauth2ReturnUrlT&& value) {
    SetResourceOauth2ReturnUrl(std::forward<ResourceOauth2ReturnUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to always initiate a new three-legged OAuth (3LO) flow,
   * regardless of any existing session.</p>
   */
  inline bool GetForceAuthentication() const { return m_forceAuthentication; }
  inline bool ForceAuthenticationHasBeenSet() const { return m_forceAuthenticationHasBeenSet; }
  inline void SetForceAuthentication(bool value) {
    m_forceAuthenticationHasBeenSet = true;
    m_forceAuthentication = value;
  }
  inline GetResourceOauth2TokenRequest& WithForceAuthentication(bool value) {
    SetForceAuthentication(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of custom parameters to include in the authorization request to the
   * resource credential provider. These parameters are in addition to the standard
   * OAuth 2.0 flow parameters, and will not override them.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetCustomParameters() const { return m_customParameters; }
  inline bool CustomParametersHasBeenSet() const { return m_customParametersHasBeenSet; }
  template <typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetCustomParameters(CustomParametersT&& value) {
    m_customParametersHasBeenSet = true;
    m_customParameters = std::forward<CustomParametersT>(value);
  }
  template <typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
  GetResourceOauth2TokenRequest& WithCustomParameters(CustomParametersT&& value) {
    SetCustomParameters(std::forward<CustomParametersT>(value));
    return *this;
  }
  template <typename CustomParametersKeyT = Aws::String, typename CustomParametersValueT = Aws::String>
  GetResourceOauth2TokenRequest& AddCustomParameters(CustomParametersKeyT&& key, CustomParametersValueT&& value) {
    m_customParametersHasBeenSet = true;
    m_customParameters.emplace(std::forward<CustomParametersKeyT>(key), std::forward<CustomParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An opaque string that will be sent back to the callback URL provided in
   * resourceOauth2ReturnUrl. This state should be used to protect the callback URL
   * of your application against CSRF attacks by ensuring the response corresponds to
   * the original request.</p>
   */
  inline const Aws::String& GetCustomState() const { return m_customState; }
  inline bool CustomStateHasBeenSet() const { return m_customStateHasBeenSet; }
  template <typename CustomStateT = Aws::String>
  void SetCustomState(CustomStateT&& value) {
    m_customStateHasBeenSet = true;
    m_customState = std::forward<CustomStateT>(value);
  }
  template <typename CustomStateT = Aws::String>
  GetResourceOauth2TokenRequest& WithCustomState(CustomStateT&& value) {
    SetCustomState(std::forward<CustomStateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workloadIdentityToken;
  bool m_workloadIdentityTokenHasBeenSet = false;

  Aws::String m_resourceCredentialProviderName;
  bool m_resourceCredentialProviderNameHasBeenSet = false;

  Aws::Vector<Aws::String> m_scopes;
  bool m_scopesHasBeenSet = false;

  Oauth2FlowType m_oauth2Flow{Oauth2FlowType::NOT_SET};
  bool m_oauth2FlowHasBeenSet = false;

  Aws::String m_sessionUri;
  bool m_sessionUriHasBeenSet = false;

  Aws::String m_resourceOauth2ReturnUrl;
  bool m_resourceOauth2ReturnUrlHasBeenSet = false;

  bool m_forceAuthentication{false};
  bool m_forceAuthenticationHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_customParameters;
  bool m_customParametersHasBeenSet = false;

  Aws::String m_customState;
  bool m_customStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
