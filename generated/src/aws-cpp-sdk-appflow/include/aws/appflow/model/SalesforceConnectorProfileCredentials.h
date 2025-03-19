/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorOAuthRequest.h>
#include <aws/appflow/model/OAuth2GrantType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile credentials required when using Salesforce.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SalesforceConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class SalesforceConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API SalesforceConnectorProfileCredentials() = default;
    AWS_APPFLOW_API SalesforceConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SalesforceConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The credentials used to access protected Salesforce resources. </p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    SalesforceConnectorProfileCredentials& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    template<typename RefreshTokenT = Aws::String>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = Aws::String>
    SalesforceConnectorProfileCredentials& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The OAuth requirement needed to request security tokens from the connector
     * endpoint. </p>
     */
    inline const ConnectorOAuthRequest& GetOAuthRequest() const { return m_oAuthRequest; }
    inline bool OAuthRequestHasBeenSet() const { return m_oAuthRequestHasBeenSet; }
    template<typename OAuthRequestT = ConnectorOAuthRequest>
    void SetOAuthRequest(OAuthRequestT&& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = std::forward<OAuthRequestT>(value); }
    template<typename OAuthRequestT = ConnectorOAuthRequest>
    SalesforceConnectorProfileCredentials& WithOAuthRequest(OAuthRequestT&& value) { SetOAuthRequest(std::forward<OAuthRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The secret manager ARN, which contains the client ID and client secret of
     * the connected app. </p>
     */
    inline const Aws::String& GetClientCredentialsArn() const { return m_clientCredentialsArn; }
    inline bool ClientCredentialsArnHasBeenSet() const { return m_clientCredentialsArnHasBeenSet; }
    template<typename ClientCredentialsArnT = Aws::String>
    void SetClientCredentialsArn(ClientCredentialsArnT&& value) { m_clientCredentialsArnHasBeenSet = true; m_clientCredentialsArn = std::forward<ClientCredentialsArnT>(value); }
    template<typename ClientCredentialsArnT = Aws::String>
    SalesforceConnectorProfileCredentials& WithClientCredentialsArn(ClientCredentialsArnT&& value) { SetClientCredentialsArn(std::forward<ClientCredentialsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the OAuth 2.0 grant type that Amazon AppFlow uses when it requests
     * an access token from Salesforce. Amazon AppFlow requires an access token each
     * time it attempts to access your Salesforce records.</p> <p>You can specify one
     * of the following values:</p> <dl> <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon
     * AppFlow passes an authorization code when it requests the access token from
     * Salesforce. Amazon AppFlow receives the authorization code from Salesforce after
     * you log in to your Salesforce account and authorize Amazon AppFlow to access
     * your records.</p> </dd> <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow passes a JSON
     * web token (JWT) when it requests the access token from Salesforce. You provide
     * the JWT to Amazon AppFlow when you define the connection to your Salesforce
     * account. When you use this grant type, you don't need to log in to your
     * Salesforce account to authorize Amazon AppFlow to access your records.</p> </dd>
     * </dl>  <p>The CLIENT_CREDENTIALS value is not supported for
     * Salesforce.</p> 
     */
    inline OAuth2GrantType GetOAuth2GrantType() const { return m_oAuth2GrantType; }
    inline bool OAuth2GrantTypeHasBeenSet() const { return m_oAuth2GrantTypeHasBeenSet; }
    inline void SetOAuth2GrantType(OAuth2GrantType value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = value; }
    inline SalesforceConnectorProfileCredentials& WithOAuth2GrantType(OAuth2GrantType value) { SetOAuth2GrantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON web token (JWT) that authorizes Amazon AppFlow to access your
     * Salesforce records.</p>
     */
    inline const Aws::String& GetJwtToken() const { return m_jwtToken; }
    inline bool JwtTokenHasBeenSet() const { return m_jwtTokenHasBeenSet; }
    template<typename JwtTokenT = Aws::String>
    void SetJwtToken(JwtTokenT&& value) { m_jwtTokenHasBeenSet = true; m_jwtToken = std::forward<JwtTokenT>(value); }
    template<typename JwtTokenT = Aws::String>
    SalesforceConnectorProfileCredentials& WithJwtToken(JwtTokenT&& value) { SetJwtToken(std::forward<JwtTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    ConnectorOAuthRequest m_oAuthRequest;
    bool m_oAuthRequestHasBeenSet = false;

    Aws::String m_clientCredentialsArn;
    bool m_clientCredentialsArnHasBeenSet = false;

    OAuth2GrantType m_oAuth2GrantType{OAuth2GrantType::NOT_SET};
    bool m_oAuth2GrantTypeHasBeenSet = false;

    Aws::String m_jwtToken;
    bool m_jwtTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
