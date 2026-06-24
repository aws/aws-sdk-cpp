/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/RemoteAgentAPIKeyConfig.h>
#include <aws/devops-agent/model/RemoteAgentBearerTokenConfig.h>
#include <aws/devops-agent/model/RemoteAgentOAuthClientCredentialsConfig.h>

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
 * <p>Authorization configuration for remote A2A agents with token-based auth (API
 * key, OAuth, bearer token).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RemoteAgentAuthorizationConfig">AWS
 * API Reference</a></p>
 */
class RemoteAgentAuthorizationConfig {
 public:
  AWS_DEVOPSAGENT_API RemoteAgentAuthorizationConfig() = default;
  AWS_DEVOPSAGENT_API RemoteAgentAuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RemoteAgentAuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Remote agent configuration with API key authentication.</p>
   */
  inline const RemoteAgentAPIKeyConfig& GetApiKey() const { return m_apiKey; }
  inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
  template <typename ApiKeyT = RemoteAgentAPIKeyConfig>
  void SetApiKey(ApiKeyT&& value) {
    m_apiKeyHasBeenSet = true;
    m_apiKey = std::forward<ApiKeyT>(value);
  }
  template <typename ApiKeyT = RemoteAgentAPIKeyConfig>
  RemoteAgentAuthorizationConfig& WithApiKey(ApiKeyT&& value) {
    SetApiKey(std::forward<ApiKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Remote agent configuration with OAuth client credentials.</p>
   */
  inline const RemoteAgentOAuthClientCredentialsConfig& GetOAuthClientCredentials() const { return m_oAuthClientCredentials; }
  inline bool OAuthClientCredentialsHasBeenSet() const { return m_oAuthClientCredentialsHasBeenSet; }
  template <typename OAuthClientCredentialsT = RemoteAgentOAuthClientCredentialsConfig>
  void SetOAuthClientCredentials(OAuthClientCredentialsT&& value) {
    m_oAuthClientCredentialsHasBeenSet = true;
    m_oAuthClientCredentials = std::forward<OAuthClientCredentialsT>(value);
  }
  template <typename OAuthClientCredentialsT = RemoteAgentOAuthClientCredentialsConfig>
  RemoteAgentAuthorizationConfig& WithOAuthClientCredentials(OAuthClientCredentialsT&& value) {
    SetOAuthClientCredentials(std::forward<OAuthClientCredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Remote agent configuration with Bearer token (RFC 6750).</p>
   */
  inline const RemoteAgentBearerTokenConfig& GetBearerToken() const { return m_bearerToken; }
  inline bool BearerTokenHasBeenSet() const { return m_bearerTokenHasBeenSet; }
  template <typename BearerTokenT = RemoteAgentBearerTokenConfig>
  void SetBearerToken(BearerTokenT&& value) {
    m_bearerTokenHasBeenSet = true;
    m_bearerToken = std::forward<BearerTokenT>(value);
  }
  template <typename BearerTokenT = RemoteAgentBearerTokenConfig>
  RemoteAgentAuthorizationConfig& WithBearerToken(BearerTokenT&& value) {
    SetBearerToken(std::forward<BearerTokenT>(value));
    return *this;
  }
  ///@}
 private:
  RemoteAgentAPIKeyConfig m_apiKey;

  RemoteAgentOAuthClientCredentialsConfig m_oAuthClientCredentials;

  RemoteAgentBearerTokenConfig m_bearerToken;
  bool m_apiKeyHasBeenSet = false;
  bool m_oAuthClientCredentialsHasBeenSet = false;
  bool m_bearerTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
