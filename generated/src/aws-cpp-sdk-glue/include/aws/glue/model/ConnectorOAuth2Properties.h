/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ClientCredentialsProperties.h>
#include <aws/glue/model/ConnectorAuthorizationCodeProperties.h>
#include <aws/glue/model/ConnectorOAuth2GrantType.h>
#include <aws/glue/model/JWTBearerProperties.h>

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
 * <p>OAuth2 configuration container that defines the authentication properties and
 * flow-specific configurations for OAuth2-based connections.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectorOAuth2Properties">AWS
 * API Reference</a></p>
 */
class ConnectorOAuth2Properties {
 public:
  AWS_GLUE_API ConnectorOAuth2Properties() = default;
  AWS_GLUE_API ConnectorOAuth2Properties(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ConnectorOAuth2Properties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth2 grant type to use for authentication, such as CLIENT_CREDENTIALS,
   * JWT_BEARER, or AUTHORIZATION_CODE.</p>
   */
  inline ConnectorOAuth2GrantType GetOAuth2GrantType() const { return m_oAuth2GrantType; }
  inline bool OAuth2GrantTypeHasBeenSet() const { return m_oAuth2GrantTypeHasBeenSet; }
  inline void SetOAuth2GrantType(ConnectorOAuth2GrantType value) {
    m_oAuth2GrantTypeHasBeenSet = true;
    m_oAuth2GrantType = value;
  }
  inline ConnectorOAuth2Properties& WithOAuth2GrantType(ConnectorOAuth2GrantType value) {
    SetOAuth2GrantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration properties specific to the OAuth2 Client Credentials grant type
   * flow.</p>
   */
  inline const ClientCredentialsProperties& GetClientCredentialsProperties() const { return m_clientCredentialsProperties; }
  inline bool ClientCredentialsPropertiesHasBeenSet() const { return m_clientCredentialsPropertiesHasBeenSet; }
  template <typename ClientCredentialsPropertiesT = ClientCredentialsProperties>
  void SetClientCredentialsProperties(ClientCredentialsPropertiesT&& value) {
    m_clientCredentialsPropertiesHasBeenSet = true;
    m_clientCredentialsProperties = std::forward<ClientCredentialsPropertiesT>(value);
  }
  template <typename ClientCredentialsPropertiesT = ClientCredentialsProperties>
  ConnectorOAuth2Properties& WithClientCredentialsProperties(ClientCredentialsPropertiesT&& value) {
    SetClientCredentialsProperties(std::forward<ClientCredentialsPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration properties specific to the OAuth2 JWT Bearer grant type
   * flow.</p>
   */
  inline const JWTBearerProperties& GetJWTBearerProperties() const { return m_jWTBearerProperties; }
  inline bool JWTBearerPropertiesHasBeenSet() const { return m_jWTBearerPropertiesHasBeenSet; }
  template <typename JWTBearerPropertiesT = JWTBearerProperties>
  void SetJWTBearerProperties(JWTBearerPropertiesT&& value) {
    m_jWTBearerPropertiesHasBeenSet = true;
    m_jWTBearerProperties = std::forward<JWTBearerPropertiesT>(value);
  }
  template <typename JWTBearerPropertiesT = JWTBearerProperties>
  ConnectorOAuth2Properties& WithJWTBearerProperties(JWTBearerPropertiesT&& value) {
    SetJWTBearerProperties(std::forward<JWTBearerPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration properties specific to the OAuth2 Authorization Code grant type
   * flow.</p>
   */
  inline const ConnectorAuthorizationCodeProperties& GetAuthorizationCodeProperties() const { return m_authorizationCodeProperties; }
  inline bool AuthorizationCodePropertiesHasBeenSet() const { return m_authorizationCodePropertiesHasBeenSet; }
  template <typename AuthorizationCodePropertiesT = ConnectorAuthorizationCodeProperties>
  void SetAuthorizationCodeProperties(AuthorizationCodePropertiesT&& value) {
    m_authorizationCodePropertiesHasBeenSet = true;
    m_authorizationCodeProperties = std::forward<AuthorizationCodePropertiesT>(value);
  }
  template <typename AuthorizationCodePropertiesT = ConnectorAuthorizationCodeProperties>
  ConnectorOAuth2Properties& WithAuthorizationCodeProperties(AuthorizationCodePropertiesT&& value) {
    SetAuthorizationCodeProperties(std::forward<AuthorizationCodePropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorOAuth2GrantType m_oAuth2GrantType{ConnectorOAuth2GrantType::NOT_SET};

  ClientCredentialsProperties m_clientCredentialsProperties;

  JWTBearerProperties m_jWTBearerProperties;

  ConnectorAuthorizationCodeProperties m_authorizationCodeProperties;
  bool m_oAuth2GrantTypeHasBeenSet = false;
  bool m_clientCredentialsPropertiesHasBeenSet = false;
  bool m_jWTBearerPropertiesHasBeenSet = false;
  bool m_authorizationCodePropertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
