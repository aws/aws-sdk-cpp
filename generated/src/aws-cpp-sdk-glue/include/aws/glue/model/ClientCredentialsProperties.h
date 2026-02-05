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
 * <p>OAuth2 client credentials configuration that defines the properties needed
 * for the Client Credentials grant type flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ClientCredentialsProperties">AWS
 * API Reference</a></p>
 */
class ClientCredentialsProperties {
 public:
  AWS_GLUE_API ClientCredentialsProperties() = default;
  AWS_GLUE_API ClientCredentialsProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ClientCredentialsProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The token endpoint URL where the client will request access tokens using
   * client credentials.</p>
   */
  inline const ConnectorProperty& GetTokenUrl() const { return m_tokenUrl; }
  inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
  template <typename TokenUrlT = ConnectorProperty>
  void SetTokenUrl(TokenUrlT&& value) {
    m_tokenUrlHasBeenSet = true;
    m_tokenUrl = std::forward<TokenUrlT>(value);
  }
  template <typename TokenUrlT = ConnectorProperty>
  ClientCredentialsProperties& WithTokenUrl(TokenUrlT&& value) {
    SetTokenUrl(std::forward<TokenUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP method to use when making token requests, typically POST.</p>
   */
  inline HTTPMethod GetRequestMethod() const { return m_requestMethod; }
  inline bool RequestMethodHasBeenSet() const { return m_requestMethodHasBeenSet; }
  inline void SetRequestMethod(HTTPMethod value) {
    m_requestMethodHasBeenSet = true;
    m_requestMethod = value;
  }
  inline ClientCredentialsProperties& WithRequestMethod(HTTPMethod value) {
    SetRequestMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content type to use for token requests, such as
   * application/x-www-form-urlencoded or application/json.</p>
   */
  inline ContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(ContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline ClientCredentialsProperties& WithContentType(ContentType value) {
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
  ClientCredentialsProperties& WithClientId(ClientIdT&& value) {
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
  ClientCredentialsProperties& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth2 scope that defines the level of access requested for the client
   * credentials flow.</p>
   */
  inline const ConnectorProperty& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = ConnectorProperty>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = ConnectorProperty>
  ClientCredentialsProperties& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
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
  ClientCredentialsProperties& WithTokenUrlParameters(TokenUrlParametersT&& value) {
    SetTokenUrlParameters(std::forward<TokenUrlParametersT>(value));
    return *this;
  }
  template <typename TokenUrlParametersT = ConnectorProperty>
  ClientCredentialsProperties& AddTokenUrlParameters(TokenUrlParametersT&& value) {
    m_tokenUrlParametersHasBeenSet = true;
    m_tokenUrlParameters.emplace_back(std::forward<TokenUrlParametersT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorProperty m_tokenUrl;

  HTTPMethod m_requestMethod{HTTPMethod::NOT_SET};

  ContentType m_contentType{ContentType::NOT_SET};

  ConnectorProperty m_clientId;

  ConnectorProperty m_clientSecret;

  ConnectorProperty m_scope;

  Aws::Vector<ConnectorProperty> m_tokenUrlParameters;
  bool m_tokenUrlHasBeenSet = false;
  bool m_requestMethodHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_tokenUrlParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
