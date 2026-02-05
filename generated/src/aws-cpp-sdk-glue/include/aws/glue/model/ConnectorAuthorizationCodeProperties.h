/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectorProperty.h>
#include <aws/glue/model/ContentType.h>
#include <aws/glue/model/HTTPMethod.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>OAuth2 authorization code configuration that defines the properties needed
 * for the Authorization Code grant type flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectorAuthorizationCodeProperties">AWS
 * API Reference</a></p>
 */
class ConnectorAuthorizationCodeProperties {
 public:
  AWS_GLUE_API ConnectorAuthorizationCodeProperties() = default;
  AWS_GLUE_API ConnectorAuthorizationCodeProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ConnectorAuthorizationCodeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The authorization endpoint URL where users will be redirected to grant
   * authorization.</p>
   */
  inline const ConnectorProperty& GetAuthorizationCodeUrl() const { return m_authorizationCodeUrl; }
  inline bool AuthorizationCodeUrlHasBeenSet() const { return m_authorizationCodeUrlHasBeenSet; }
  template <typename AuthorizationCodeUrlT = ConnectorProperty>
  void SetAuthorizationCodeUrl(AuthorizationCodeUrlT&& value) {
    m_authorizationCodeUrlHasBeenSet = true;
    m_authorizationCodeUrl = std::forward<AuthorizationCodeUrlT>(value);
  }
  template <typename AuthorizationCodeUrlT = ConnectorProperty>
  ConnectorAuthorizationCodeProperties& WithAuthorizationCodeUrl(AuthorizationCodeUrlT&& value) {
    SetAuthorizationCodeUrl(std::forward<AuthorizationCodeUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization code received from the authorization server after user
   * consent.</p>
   */
  inline const ConnectorProperty& GetAuthorizationCode() const { return m_authorizationCode; }
  inline bool AuthorizationCodeHasBeenSet() const { return m_authorizationCodeHasBeenSet; }
  template <typename AuthorizationCodeT = ConnectorProperty>
  void SetAuthorizationCode(AuthorizationCodeT&& value) {
    m_authorizationCodeHasBeenSet = true;
    m_authorizationCode = std::forward<AuthorizationCodeT>(value);
  }
  template <typename AuthorizationCodeT = ConnectorProperty>
  ConnectorAuthorizationCodeProperties& WithAuthorizationCode(AuthorizationCodeT&& value) {
    SetAuthorizationCode(std::forward<AuthorizationCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redirect URI that must match the URI registered with the authorization
   * server.</p>
   */
  inline const ConnectorProperty& GetRedirectUri() const { return m_redirectUri; }
  inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
  template <typename RedirectUriT = ConnectorProperty>
  void SetRedirectUri(RedirectUriT&& value) {
    m_redirectUriHasBeenSet = true;
    m_redirectUri = std::forward<RedirectUriT>(value);
  }
  template <typename RedirectUriT = ConnectorProperty>
  ConnectorAuthorizationCodeProperties& WithRedirectUri(RedirectUriT&& value) {
    SetRedirectUri(std::forward<RedirectUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token endpoint URL where the authorization code will be exchanged for an
   * access token.</p>
   */
  inline const ConnectorProperty& GetTokenUrl() const { return m_tokenUrl; }
  inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
  template <typename TokenUrlT = ConnectorProperty>
  void SetTokenUrl(TokenUrlT&& value) {
    m_tokenUrlHasBeenSet = true;
    m_tokenUrl = std::forward<TokenUrlT>(value);
  }
  template <typename TokenUrlT = ConnectorProperty>
  ConnectorAuthorizationCodeProperties& WithTokenUrl(TokenUrlT&& value) {
    SetTokenUrl(std::forward<TokenUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP method to use when making token exchange requests, typically
   * POST.</p>
   */
  inline HTTPMethod GetRequestMethod() const { return m_requestMethod; }
  inline bool RequestMethodHasBeenSet() const { return m_requestMethodHasBeenSet; }
  inline void SetRequestMethod(HTTPMethod value) {
    m_requestMethodHasBeenSet = true;
    m_requestMethod = value;
  }
  inline ConnectorAuthorizationCodeProperties& WithRequestMethod(HTTPMethod value) {
    SetRequestMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content type to use for token exchange requests, such as
   * application/x-www-form-urlencoded or application/json.</p>
   */
  inline ContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(ContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline ConnectorAuthorizationCodeProperties& WithContentType(ContentType value) {
    SetContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth2 client identifier provided by the authorization server.</p>
   */
  inline const ConnectorProperty& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = ConnectorProperty>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = ConnectorProperty>
  ConnectorAuthorizationCodeProperties& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth2 client secret provided by the authorization server.</p>
   */
  inline const ConnectorProperty& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = ConnectorProperty>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = ConnectorProperty>
  ConnectorAuthorizationCodeProperties& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth2 scope that defines the level of access requested for the
   * authorization code flow.</p>
   */
  inline const ConnectorProperty& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = ConnectorProperty>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = ConnectorProperty>
  ConnectorAuthorizationCodeProperties& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth2 prompt parameter that controls the authorization server's behavior
   * during user authentication.</p>
   */
  inline const ConnectorProperty& GetPrompt() const { return m_prompt; }
  inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
  template <typename PromptT = ConnectorProperty>
  void SetPrompt(PromptT&& value) {
    m_promptHasBeenSet = true;
    m_prompt = std::forward<PromptT>(value);
  }
  template <typename PromptT = ConnectorProperty>
  ConnectorAuthorizationCodeProperties& WithPrompt(PromptT&& value) {
    SetPrompt(std::forward<PromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional parameters to include in token URL requests as key-value
   * pairs.</p>
   */
  inline const Aws::Vector<ConnectorProperty>& GetTokenUrlParameters() const { return m_tokenUrlParameters; }
  inline bool TokenUrlParametersHasBeenSet() const { return m_tokenUrlParametersHasBeenSet; }
  template <typename TokenUrlParametersT = Aws::Vector<ConnectorProperty>>
  void SetTokenUrlParameters(TokenUrlParametersT&& value) {
    m_tokenUrlParametersHasBeenSet = true;
    m_tokenUrlParameters = std::forward<TokenUrlParametersT>(value);
  }
  template <typename TokenUrlParametersT = Aws::Vector<ConnectorProperty>>
  ConnectorAuthorizationCodeProperties& WithTokenUrlParameters(TokenUrlParametersT&& value) {
    SetTokenUrlParameters(std::forward<TokenUrlParametersT>(value));
    return *this;
  }
  template <typename TokenUrlParametersT = ConnectorProperty>
  ConnectorAuthorizationCodeProperties& AddTokenUrlParameters(TokenUrlParametersT&& value) {
    m_tokenUrlParametersHasBeenSet = true;
    m_tokenUrlParameters.emplace_back(std::forward<TokenUrlParametersT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorProperty m_authorizationCodeUrl;

  ConnectorProperty m_authorizationCode;

  ConnectorProperty m_redirectUri;

  ConnectorProperty m_tokenUrl;

  HTTPMethod m_requestMethod{HTTPMethod::NOT_SET};

  ContentType m_contentType{ContentType::NOT_SET};

  ConnectorProperty m_clientId;

  ConnectorProperty m_clientSecret;

  ConnectorProperty m_scope;

  ConnectorProperty m_prompt;

  Aws::Vector<ConnectorProperty> m_tokenUrlParameters;
  bool m_authorizationCodeUrlHasBeenSet = false;
  bool m_authorizationCodeHasBeenSet = false;
  bool m_redirectUriHasBeenSet = false;
  bool m_tokenUrlHasBeenSet = false;
  bool m_requestMethodHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_promptHasBeenSet = false;
  bool m_tokenUrlParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
