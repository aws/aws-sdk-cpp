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
 * <p>OAuth client credentials configuration for MCP server.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerOAuthClientCredentialsConfig">AWS
 * API Reference</a></p>
 */
class MCPServerOAuthClientCredentialsConfig {
 public:
  AWS_DEVOPSAGENT_API MCPServerOAuthClientCredentialsConfig() = default;
  AWS_DEVOPSAGENT_API MCPServerOAuthClientCredentialsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerOAuthClientCredentialsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  MCPServerOAuthClientCredentialsConfig& WithClientName(ClientNameT&& value) {
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
  MCPServerOAuthClientCredentialsConfig& WithClientId(ClientIdT&& value) {
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
  MCPServerOAuthClientCredentialsConfig& WithExchangeParameters(ExchangeParametersT&& value) {
    SetExchangeParameters(std::forward<ExchangeParametersT>(value));
    return *this;
  }
  template <typename ExchangeParametersKeyT = Aws::String, typename ExchangeParametersValueT = Aws::String>
  MCPServerOAuthClientCredentialsConfig& AddExchangeParameters(ExchangeParametersKeyT&& key, ExchangeParametersValueT&& value) {
    m_exchangeParametersHasBeenSet = true;
    m_exchangeParameters.emplace(std::forward<ExchangeParametersKeyT>(key), std::forward<ExchangeParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth client secret for authenticating with the service.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  MCPServerOAuthClientCredentialsConfig& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
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
  MCPServerOAuthClientCredentialsConfig& WithExchangeUrl(ExchangeUrlT&& value) {
    SetExchangeUrl(std::forward<ExchangeUrlT>(value));
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
  MCPServerOAuthClientCredentialsConfig& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  MCPServerOAuthClientCredentialsConfig& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientName;

  Aws::String m_clientId;

  Aws::Map<Aws::String, Aws::String> m_exchangeParameters;

  Aws::String m_clientSecret;

  Aws::String m_exchangeUrl;

  Aws::Vector<Aws::String> m_scopes;
  bool m_clientNameHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_exchangeParametersHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_exchangeUrlHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
