/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Configuration settings for connecting to a supported OAuth2 provider. This
 * includes client credentials and OAuth2 discovery information for providers that
 * have built-in support.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/IncludedOauth2ProviderConfigInput">AWS
 * API Reference</a></p>
 */
class IncludedOauth2ProviderConfigInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API IncludedOauth2ProviderConfigInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API IncludedOauth2ProviderConfigInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API IncludedOauth2ProviderConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The client ID for the supported OAuth2 provider. This identifier is assigned
   * by the OAuth2 provider when you register your application.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  IncludedOauth2ProviderConfigInput& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client secret for the supported OAuth2 provider. This secret is assigned
   * by the OAuth2 provider and used along with the client ID to authenticate your
   * application.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  IncludedOauth2ProviderConfigInput& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token issuer of your isolated OAuth2 application tenant. This URL identifies
   * the authorization server that issues tokens for this provider.</p>
   */
  inline const Aws::String& GetIssuer() const { return m_issuer; }
  inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
  template <typename IssuerT = Aws::String>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = Aws::String>
  IncludedOauth2ProviderConfigInput& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth2 authorization endpoint for your isolated OAuth2 application tenant.
   * This is where users are redirected to authenticate and authorize access to their
   * resources.</p>
   */
  inline const Aws::String& GetAuthorizationEndpoint() const { return m_authorizationEndpoint; }
  inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
  template <typename AuthorizationEndpointT = Aws::String>
  void SetAuthorizationEndpoint(AuthorizationEndpointT&& value) {
    m_authorizationEndpointHasBeenSet = true;
    m_authorizationEndpoint = std::forward<AuthorizationEndpointT>(value);
  }
  template <typename AuthorizationEndpointT = Aws::String>
  IncludedOauth2ProviderConfigInput& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) {
    SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth2 token endpoint for your isolated OAuth2 application tenant. This is
   * where authorization codes are exchanged for access tokens.</p>
   */
  inline const Aws::String& GetTokenEndpoint() const { return m_tokenEndpoint; }
  inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
  template <typename TokenEndpointT = Aws::String>
  void SetTokenEndpoint(TokenEndpointT&& value) {
    m_tokenEndpointHasBeenSet = true;
    m_tokenEndpoint = std::forward<TokenEndpointT>(value);
  }
  template <typename TokenEndpointT = Aws::String>
  IncludedOauth2ProviderConfigInput& WithTokenEndpoint(TokenEndpointT&& value) {
    SetTokenEndpoint(std::forward<TokenEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;
  bool m_clientIdHasBeenSet = false;

  Aws::String m_clientSecret;
  bool m_clientSecretHasBeenSet = false;

  Aws::String m_issuer;
  bool m_issuerHasBeenSet = false;

  Aws::String m_authorizationEndpoint;
  bool m_authorizationEndpointHasBeenSet = false;

  Aws::String m_tokenEndpoint;
  bool m_tokenEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
