/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>OAuth 3-legged authorization configuration for MCP server.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerOAuth3LOConfig">AWS
 * API Reference</a></p>
 */
class MCPServerOAuth3LOConfig {
 public:
  AWS_DEVOPSAGENT_API MCPServerOAuth3LOConfig() = default;
  AWS_DEVOPSAGENT_API MCPServerOAuth3LOConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerOAuth3LOConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>User friendly OAuth client name specified by end user.</p>
   */
  inline const Aws::String& GetClientName() const { return m_clientName; }
  inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }
  template <typename ClientNameT = Aws::String>
  void SetClientName(ClientNameT&& value) {
    m_clientNameHasBeenSet = true;
    m_clientName = std::forward<ClientNameT>(value);
  }
  template <typename ClientNameT = Aws::String>
  MCPServerOAuth3LOConfig& WithClientName(ClientNameT&& value) {
    SetClientName(std::forward<ClientNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth client ID for authenticating with the service.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  MCPServerOAuth3LOConfig& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth token exchange parameters for authenticating with the service.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetExchangeParameters() const { return m_exchangeParameters; }
  inline bool ExchangeParametersHasBeenSet() const { return m_exchangeParametersHasBeenSet; }
  template <typename ExchangeParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetExchangeParameters(ExchangeParametersT&& value) {
    m_exchangeParametersHasBeenSet = true;
    m_exchangeParameters = std::forward<ExchangeParametersT>(value);
  }
  template <typename ExchangeParametersT = Aws::Map<Aws::String, Aws::String>>
  MCPServerOAuth3LOConfig& WithExchangeParameters(ExchangeParametersT&& value) {
    SetExchangeParameters(std::forward<ExchangeParametersT>(value));
    return *this;
  }
  template <typename ExchangeParametersKeyT = Aws::String, typename ExchangeParametersValueT = Aws::String>
  MCPServerOAuth3LOConfig& AddExchangeParameters(ExchangeParametersKeyT&& key, ExchangeParametersValueT&& value) {
    m_exchangeParametersHasBeenSet = true;
    m_exchangeParameters.emplace(std::forward<ExchangeParametersKeyT>(key), std::forward<ExchangeParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint to return to after OAuth flow completes (must be AWS console
   * domain)</p>
   */
  inline const Aws::String& GetReturnToEndpoint() const { return m_returnToEndpoint; }
  inline bool ReturnToEndpointHasBeenSet() const { return m_returnToEndpointHasBeenSet; }
  template <typename ReturnToEndpointT = Aws::String>
  void SetReturnToEndpoint(ReturnToEndpointT&& value) {
    m_returnToEndpointHasBeenSet = true;
    m_returnToEndpoint = std::forward<ReturnToEndpointT>(value);
  }
  template <typename ReturnToEndpointT = Aws::String>
  MCPServerOAuth3LOConfig& WithReturnToEndpoint(ReturnToEndpointT&& value) {
    SetReturnToEndpoint(std::forward<ReturnToEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth authorization URL for 3LO authentication.</p>
   */
  inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
  inline bool AuthorizationUrlHasBeenSet() const { return m_authorizationUrlHasBeenSet; }
  template <typename AuthorizationUrlT = Aws::String>
  void SetAuthorizationUrl(AuthorizationUrlT&& value) {
    m_authorizationUrlHasBeenSet = true;
    m_authorizationUrl = std::forward<AuthorizationUrlT>(value);
  }
  template <typename AuthorizationUrlT = Aws::String>
  MCPServerOAuth3LOConfig& WithAuthorizationUrl(AuthorizationUrlT&& value) {
    SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth token exchange URL.</p>
   */
  inline const Aws::String& GetExchangeUrl() const { return m_exchangeUrl; }
  inline bool ExchangeUrlHasBeenSet() const { return m_exchangeUrlHasBeenSet; }
  template <typename ExchangeUrlT = Aws::String>
  void SetExchangeUrl(ExchangeUrlT&& value) {
    m_exchangeUrlHasBeenSet = true;
    m_exchangeUrl = std::forward<ExchangeUrlT>(value);
  }
  template <typename ExchangeUrlT = Aws::String>
  MCPServerOAuth3LOConfig& WithExchangeUrl(ExchangeUrlT&& value) {
    SetExchangeUrl(std::forward<ExchangeUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth client secret for authenticating with the service. Required for
   * confidential clients or when PKCE is not supported. Optional for public clients
   * using PKCE.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  MCPServerOAuth3LOConfig& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the service supports PKCE (Proof Key for Code Exchange) for enhanced
   * security during the OAuth flow.</p>
   */
  inline bool GetSupportCodeChallenge() const { return m_supportCodeChallenge; }
  inline bool SupportCodeChallengeHasBeenSet() const { return m_supportCodeChallengeHasBeenSet; }
  inline void SetSupportCodeChallenge(bool value) {
    m_supportCodeChallengeHasBeenSet = true;
    m_supportCodeChallenge = value;
  }
  inline MCPServerOAuth3LOConfig& WithSupportCodeChallenge(bool value) {
    SetSupportCodeChallenge(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth scopes for 3LO authentication. The service will always request scope
   * offline_access.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  MCPServerOAuth3LOConfig& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  MCPServerOAuth3LOConfig& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientName;

  Aws::String m_clientId;

  Aws::Map<Aws::String, Aws::String> m_exchangeParameters;

  Aws::String m_returnToEndpoint;

  Aws::String m_authorizationUrl;

  Aws::String m_exchangeUrl;

  Aws::String m_clientSecret;

  bool m_supportCodeChallenge{false};

  Aws::Vector<Aws::String> m_scopes;
  bool m_clientNameHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_exchangeParametersHasBeenSet = false;
  bool m_returnToEndpointHasBeenSet = false;
  bool m_authorizationUrlHasBeenSet = false;
  bool m_exchangeUrlHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_supportCodeChallengeHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
