/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/MCPServerAPIKeyConfig.h>
#include <aws/devops-agent/model/MCPServerAuthorizationDiscoveryConfig.h>
#include <aws/devops-agent/model/MCPServerBearerTokenConfig.h>
#include <aws/devops-agent/model/MCPServerOAuth3LOConfig.h>
#include <aws/devops-agent/model/MCPServerOAuthClientCredentialsConfig.h>

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
 * <p>Authorization configuration options for MCP server, supporting OAuth, API
 * key, bearer token, and authorization discovery methods.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerAuthorizationConfig">AWS
 * API Reference</a></p>
 */
class MCPServerAuthorizationConfig {
 public:
  AWS_DEVOPSAGENT_API MCPServerAuthorizationConfig() = default;
  AWS_DEVOPSAGENT_API MCPServerAuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerAuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>MCP server configuration with OAuth client credentials.</p>
   */
  inline const MCPServerOAuthClientCredentialsConfig& GetOAuthClientCredentials() const { return m_oAuthClientCredentials; }
  inline bool OAuthClientCredentialsHasBeenSet() const { return m_oAuthClientCredentialsHasBeenSet; }
  template <typename OAuthClientCredentialsT = MCPServerOAuthClientCredentialsConfig>
  void SetOAuthClientCredentials(OAuthClientCredentialsT&& value) {
    m_oAuthClientCredentialsHasBeenSet = true;
    m_oAuthClientCredentials = std::forward<OAuthClientCredentialsT>(value);
  }
  template <typename OAuthClientCredentialsT = MCPServerOAuthClientCredentialsConfig>
  MCPServerAuthorizationConfig& WithOAuthClientCredentials(OAuthClientCredentialsT&& value) {
    SetOAuthClientCredentials(std::forward<OAuthClientCredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP server configuration with OAuth 3LO.</p>
   */
  inline const MCPServerOAuth3LOConfig& GetOAuth3LO() const { return m_oAuth3LO; }
  inline bool OAuth3LOHasBeenSet() const { return m_oAuth3LOHasBeenSet; }
  template <typename OAuth3LOT = MCPServerOAuth3LOConfig>
  void SetOAuth3LO(OAuth3LOT&& value) {
    m_oAuth3LOHasBeenSet = true;
    m_oAuth3LO = std::forward<OAuth3LOT>(value);
  }
  template <typename OAuth3LOT = MCPServerOAuth3LOConfig>
  MCPServerAuthorizationConfig& WithOAuth3LO(OAuth3LOT&& value) {
    SetOAuth3LO(std::forward<OAuth3LOT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP server configuration with API key authentication.</p>
   */
  inline const MCPServerAPIKeyConfig& GetApiKey() const { return m_apiKey; }
  inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
  template <typename ApiKeyT = MCPServerAPIKeyConfig>
  void SetApiKey(ApiKeyT&& value) {
    m_apiKeyHasBeenSet = true;
    m_apiKey = std::forward<ApiKeyT>(value);
  }
  template <typename ApiKeyT = MCPServerAPIKeyConfig>
  MCPServerAuthorizationConfig& WithApiKey(ApiKeyT&& value) {
    SetApiKey(std::forward<ApiKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP server configuration with Bearer token (RFC 6750).</p>
   */
  inline const MCPServerBearerTokenConfig& GetBearerToken() const { return m_bearerToken; }
  inline bool BearerTokenHasBeenSet() const { return m_bearerTokenHasBeenSet; }
  template <typename BearerTokenT = MCPServerBearerTokenConfig>
  void SetBearerToken(BearerTokenT&& value) {
    m_bearerTokenHasBeenSet = true;
    m_bearerToken = std::forward<BearerTokenT>(value);
  }
  template <typename BearerTokenT = MCPServerBearerTokenConfig>
  MCPServerAuthorizationConfig& WithBearerToken(BearerTokenT&& value) {
    SetBearerToken(std::forward<BearerTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP server authorization discovery configuration.</p>
   */
  inline const MCPServerAuthorizationDiscoveryConfig& GetAuthorizationDiscovery() const { return m_authorizationDiscovery; }
  inline bool AuthorizationDiscoveryHasBeenSet() const { return m_authorizationDiscoveryHasBeenSet; }
  template <typename AuthorizationDiscoveryT = MCPServerAuthorizationDiscoveryConfig>
  void SetAuthorizationDiscovery(AuthorizationDiscoveryT&& value) {
    m_authorizationDiscoveryHasBeenSet = true;
    m_authorizationDiscovery = std::forward<AuthorizationDiscoveryT>(value);
  }
  template <typename AuthorizationDiscoveryT = MCPServerAuthorizationDiscoveryConfig>
  MCPServerAuthorizationConfig& WithAuthorizationDiscovery(AuthorizationDiscoveryT&& value) {
    SetAuthorizationDiscovery(std::forward<AuthorizationDiscoveryT>(value));
    return *this;
  }
  ///@}
 private:
  MCPServerOAuthClientCredentialsConfig m_oAuthClientCredentials;

  MCPServerOAuth3LOConfig m_oAuth3LO;

  MCPServerAPIKeyConfig m_apiKey;

  MCPServerBearerTokenConfig m_bearerToken;

  MCPServerAuthorizationDiscoveryConfig m_authorizationDiscovery;
  bool m_oAuthClientCredentialsHasBeenSet = false;
  bool m_oAuth3LOHasBeenSet = false;
  bool m_apiKeyHasBeenSet = false;
  bool m_bearerTokenHasBeenSet = false;
  bool m_authorizationDiscoveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
