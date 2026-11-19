/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/RegistryRecordOAuthGrantType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The configuration for an OAuth 2.0 credential provider that authenticates
 * requests to a registry record's source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/RegistryRecordOAuthCredentialProvider">AWS
 * API Reference</a></p>
 */
class RegistryRecordOAuthCredentialProvider {
 public:
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordOAuthCredentialProvider() = default;
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordOAuthCredentialProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordOAuthCredentialProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the OAuth 2.0 credential provider resource
   * in Amazon Bedrock AgentCore Identity.</p>
   */
  inline const Aws::String& GetProviderArn() const { return m_providerArn; }
  inline bool ProviderArnHasBeenSet() const { return m_providerArnHasBeenSet; }
  template <typename ProviderArnT = Aws::String>
  void SetProviderArn(ProviderArnT&& value) {
    m_providerArnHasBeenSet = true;
    m_providerArn = std::forward<ProviderArnT>(value);
  }
  template <typename ProviderArnT = Aws::String>
  RegistryRecordOAuthCredentialProvider& WithProviderArn(ProviderArnT&& value) {
    SetProviderArn(std::forward<ProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth 2.0 grant type used to obtain access tokens. A GitHub skill source
   * requires <code>AUTHORIZATION_CODE</code>. Other sources, such as MCP server and
   * A2A agent card sources, use <code>CLIENT_CREDENTIALS</code>. A GitHub source
   * takes exactly one OAuth credential provider, in the registry's Amazon Web
   * Services account and Region. Only an IAM role or IAM user in the account that
   * owns the registry can set, synchronize, or reauthorize it, and the caller needs
   * <code>bedrock-agentcore:GetWorkloadAccessTokenForUserId</code> and
   * <code>bedrock-agentcore:GetResourceOauth2Token</code> on the registry's workload
   * identity, <code>registry-</code> followed by the registry ID.</p>
   */
  inline RegistryRecordOAuthGrantType GetGrantType() const { return m_grantType; }
  inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
  inline void SetGrantType(RegistryRecordOAuthGrantType value) {
    m_grantTypeHasBeenSet = true;
    m_grantType = value;
  }
  inline RegistryRecordOAuthCredentialProvider& WithGrantType(RegistryRecordOAuthGrantType value) {
    SetGrantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth 2.0 scopes to request when obtaining access tokens.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  RegistryRecordOAuthCredentialProvider& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  RegistryRecordOAuthCredentialProvider& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional parameters to include in the OAuth 2.0 token request.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetCustomParameters() const { return m_customParameters; }
  inline bool CustomParametersHasBeenSet() const { return m_customParametersHasBeenSet; }
  template <typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetCustomParameters(CustomParametersT&& value) {
    m_customParametersHasBeenSet = true;
    m_customParameters = std::forward<CustomParametersT>(value);
  }
  template <typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
  RegistryRecordOAuthCredentialProvider& WithCustomParameters(CustomParametersT&& value) {
    SetCustomParameters(std::forward<CustomParametersT>(value));
    return *this;
  }
  template <typename CustomParametersKeyT = Aws::String, typename CustomParametersValueT = Aws::String>
  RegistryRecordOAuthCredentialProvider& AddCustomParameters(CustomParametersKeyT&& key, CustomParametersValueT&& value) {
    m_customParametersHasBeenSet = true;
    m_customParameters.emplace(std::forward<CustomParametersKeyT>(key), std::forward<CustomParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL that the user's browser returns to after the user approves access on
   * GitHub, for the <code>AUTHORIZATION_CODE</code> grant. There, your application
   * completes the authorization by calling the Amazon Bedrock AgentCore Identity
   * <code>CompleteResourceTokenAuth</code> operation with the <code>userId</code>
   * from <code>authorizationData</code>. If you omit it, the user returns to the
   * Amazon Web Services Agent Registry console, which completes the authorization
   * when the user is signed in as the IAM principal that made the request. A request
   * that joins an authorization already in progress uses the return URL of the
   * request that started it.</p>
   */
  inline const Aws::String& GetReturnUrl() const { return m_returnUrl; }
  inline bool ReturnUrlHasBeenSet() const { return m_returnUrlHasBeenSet; }
  template <typename ReturnUrlT = Aws::String>
  void SetReturnUrl(ReturnUrlT&& value) {
    m_returnUrlHasBeenSet = true;
    m_returnUrl = std::forward<ReturnUrlT>(value);
  }
  template <typename ReturnUrlT = Aws::String>
  RegistryRecordOAuthCredentialProvider& WithReturnUrl(ReturnUrlT&& value) {
    SetReturnUrl(std::forward<ReturnUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_providerArn;

  RegistryRecordOAuthGrantType m_grantType{RegistryRecordOAuthGrantType::NOT_SET};

  Aws::Vector<Aws::String> m_scopes;

  Aws::Map<Aws::String, Aws::String> m_customParameters;

  Aws::String m_returnUrl;
  bool m_providerArnHasBeenSet = false;
  bool m_grantTypeHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_customParametersHasBeenSet = false;
  bool m_returnUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
