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
    AWS_APPFLOW_API SalesforceConnectorProfileCredentials();
    AWS_APPFLOW_API SalesforceConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SalesforceConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The credentials used to access protected Salesforce resources. </p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p> The credentials used to access protected Salesforce resources. </p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p> The credentials used to access protected Salesforce resources. </p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p> The credentials used to access protected Salesforce resources. </p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p> The credentials used to access protected Salesforce resources. </p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p> The credentials used to access protected Salesforce resources. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p> The credentials used to access protected Salesforce resources. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p> The credentials used to access protected Salesforce resources. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }

    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }

    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }

    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}

    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}

    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}


    /**
     * <p> The OAuth requirement needed to request security tokens from the connector
     * endpoint. </p>
     */
    inline const ConnectorOAuthRequest& GetOAuthRequest() const{ return m_oAuthRequest; }

    /**
     * <p> The OAuth requirement needed to request security tokens from the connector
     * endpoint. </p>
     */
    inline bool OAuthRequestHasBeenSet() const { return m_oAuthRequestHasBeenSet; }

    /**
     * <p> The OAuth requirement needed to request security tokens from the connector
     * endpoint. </p>
     */
    inline void SetOAuthRequest(const ConnectorOAuthRequest& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = value; }

    /**
     * <p> The OAuth requirement needed to request security tokens from the connector
     * endpoint. </p>
     */
    inline void SetOAuthRequest(ConnectorOAuthRequest&& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = std::move(value); }

    /**
     * <p> The OAuth requirement needed to request security tokens from the connector
     * endpoint. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithOAuthRequest(const ConnectorOAuthRequest& value) { SetOAuthRequest(value); return *this;}

    /**
     * <p> The OAuth requirement needed to request security tokens from the connector
     * endpoint. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithOAuthRequest(ConnectorOAuthRequest&& value) { SetOAuthRequest(std::move(value)); return *this;}


    /**
     * <p> The secret manager ARN, which contains the client ID and client secret of
     * the connected app. </p>
     */
    inline const Aws::String& GetClientCredentialsArn() const{ return m_clientCredentialsArn; }

    /**
     * <p> The secret manager ARN, which contains the client ID and client secret of
     * the connected app. </p>
     */
    inline bool ClientCredentialsArnHasBeenSet() const { return m_clientCredentialsArnHasBeenSet; }

    /**
     * <p> The secret manager ARN, which contains the client ID and client secret of
     * the connected app. </p>
     */
    inline void SetClientCredentialsArn(const Aws::String& value) { m_clientCredentialsArnHasBeenSet = true; m_clientCredentialsArn = value; }

    /**
     * <p> The secret manager ARN, which contains the client ID and client secret of
     * the connected app. </p>
     */
    inline void SetClientCredentialsArn(Aws::String&& value) { m_clientCredentialsArnHasBeenSet = true; m_clientCredentialsArn = std::move(value); }

    /**
     * <p> The secret manager ARN, which contains the client ID and client secret of
     * the connected app. </p>
     */
    inline void SetClientCredentialsArn(const char* value) { m_clientCredentialsArnHasBeenSet = true; m_clientCredentialsArn.assign(value); }

    /**
     * <p> The secret manager ARN, which contains the client ID and client secret of
     * the connected app. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithClientCredentialsArn(const Aws::String& value) { SetClientCredentialsArn(value); return *this;}

    /**
     * <p> The secret manager ARN, which contains the client ID and client secret of
     * the connected app. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithClientCredentialsArn(Aws::String&& value) { SetClientCredentialsArn(std::move(value)); return *this;}

    /**
     * <p> The secret manager ARN, which contains the client ID and client secret of
     * the connected app. </p>
     */
    inline SalesforceConnectorProfileCredentials& WithClientCredentialsArn(const char* value) { SetClientCredentialsArn(value); return *this;}


    /**
     * <p>Specifies the OAuth 2.0 grant type that Amazon AppFlow uses when it requests
     * an access token from Salesforce. Amazon AppFlow requires an access token each
     * time it attempts to access your Salesforce records.</p> <p>You can specify one
     * of the following values:</p> <dl> <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon
     * AppFlow passes an authorization code when it requests the access token from
     * Salesforce. Amazon AppFlow receives the authorization code from Salesforce after
     * you log in to your Salesforce account and authorize Amazon AppFlow to access
     * your records.</p> </dd> <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow
     * passes client credentials (a client ID and client secret) when it requests the
     * access token from Salesforce. You provide these credentials to Amazon AppFlow
     * when you define the connection to your Salesforce account.</p> </dd>
     * <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow passes a JSON web token (JWT) when it
     * requests the access token from Salesforce. You provide the JWT to Amazon AppFlow
     * when you define the connection to your Salesforce account. When you use this
     * grant type, you don't need to log in to your Salesforce account to authorize
     * Amazon AppFlow to access your records.</p> </dd> </dl>
     */
    inline const OAuth2GrantType& GetOAuth2GrantType() const{ return m_oAuth2GrantType; }

    /**
     * <p>Specifies the OAuth 2.0 grant type that Amazon AppFlow uses when it requests
     * an access token from Salesforce. Amazon AppFlow requires an access token each
     * time it attempts to access your Salesforce records.</p> <p>You can specify one
     * of the following values:</p> <dl> <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon
     * AppFlow passes an authorization code when it requests the access token from
     * Salesforce. Amazon AppFlow receives the authorization code from Salesforce after
     * you log in to your Salesforce account and authorize Amazon AppFlow to access
     * your records.</p> </dd> <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow
     * passes client credentials (a client ID and client secret) when it requests the
     * access token from Salesforce. You provide these credentials to Amazon AppFlow
     * when you define the connection to your Salesforce account.</p> </dd>
     * <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow passes a JSON web token (JWT) when it
     * requests the access token from Salesforce. You provide the JWT to Amazon AppFlow
     * when you define the connection to your Salesforce account. When you use this
     * grant type, you don't need to log in to your Salesforce account to authorize
     * Amazon AppFlow to access your records.</p> </dd> </dl>
     */
    inline bool OAuth2GrantTypeHasBeenSet() const { return m_oAuth2GrantTypeHasBeenSet; }

    /**
     * <p>Specifies the OAuth 2.0 grant type that Amazon AppFlow uses when it requests
     * an access token from Salesforce. Amazon AppFlow requires an access token each
     * time it attempts to access your Salesforce records.</p> <p>You can specify one
     * of the following values:</p> <dl> <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon
     * AppFlow passes an authorization code when it requests the access token from
     * Salesforce. Amazon AppFlow receives the authorization code from Salesforce after
     * you log in to your Salesforce account and authorize Amazon AppFlow to access
     * your records.</p> </dd> <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow
     * passes client credentials (a client ID and client secret) when it requests the
     * access token from Salesforce. You provide these credentials to Amazon AppFlow
     * when you define the connection to your Salesforce account.</p> </dd>
     * <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow passes a JSON web token (JWT) when it
     * requests the access token from Salesforce. You provide the JWT to Amazon AppFlow
     * when you define the connection to your Salesforce account. When you use this
     * grant type, you don't need to log in to your Salesforce account to authorize
     * Amazon AppFlow to access your records.</p> </dd> </dl>
     */
    inline void SetOAuth2GrantType(const OAuth2GrantType& value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = value; }

    /**
     * <p>Specifies the OAuth 2.0 grant type that Amazon AppFlow uses when it requests
     * an access token from Salesforce. Amazon AppFlow requires an access token each
     * time it attempts to access your Salesforce records.</p> <p>You can specify one
     * of the following values:</p> <dl> <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon
     * AppFlow passes an authorization code when it requests the access token from
     * Salesforce. Amazon AppFlow receives the authorization code from Salesforce after
     * you log in to your Salesforce account and authorize Amazon AppFlow to access
     * your records.</p> </dd> <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow
     * passes client credentials (a client ID and client secret) when it requests the
     * access token from Salesforce. You provide these credentials to Amazon AppFlow
     * when you define the connection to your Salesforce account.</p> </dd>
     * <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow passes a JSON web token (JWT) when it
     * requests the access token from Salesforce. You provide the JWT to Amazon AppFlow
     * when you define the connection to your Salesforce account. When you use this
     * grant type, you don't need to log in to your Salesforce account to authorize
     * Amazon AppFlow to access your records.</p> </dd> </dl>
     */
    inline void SetOAuth2GrantType(OAuth2GrantType&& value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = std::move(value); }

    /**
     * <p>Specifies the OAuth 2.0 grant type that Amazon AppFlow uses when it requests
     * an access token from Salesforce. Amazon AppFlow requires an access token each
     * time it attempts to access your Salesforce records.</p> <p>You can specify one
     * of the following values:</p> <dl> <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon
     * AppFlow passes an authorization code when it requests the access token from
     * Salesforce. Amazon AppFlow receives the authorization code from Salesforce after
     * you log in to your Salesforce account and authorize Amazon AppFlow to access
     * your records.</p> </dd> <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow
     * passes client credentials (a client ID and client secret) when it requests the
     * access token from Salesforce. You provide these credentials to Amazon AppFlow
     * when you define the connection to your Salesforce account.</p> </dd>
     * <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow passes a JSON web token (JWT) when it
     * requests the access token from Salesforce. You provide the JWT to Amazon AppFlow
     * when you define the connection to your Salesforce account. When you use this
     * grant type, you don't need to log in to your Salesforce account to authorize
     * Amazon AppFlow to access your records.</p> </dd> </dl>
     */
    inline SalesforceConnectorProfileCredentials& WithOAuth2GrantType(const OAuth2GrantType& value) { SetOAuth2GrantType(value); return *this;}

    /**
     * <p>Specifies the OAuth 2.0 grant type that Amazon AppFlow uses when it requests
     * an access token from Salesforce. Amazon AppFlow requires an access token each
     * time it attempts to access your Salesforce records.</p> <p>You can specify one
     * of the following values:</p> <dl> <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon
     * AppFlow passes an authorization code when it requests the access token from
     * Salesforce. Amazon AppFlow receives the authorization code from Salesforce after
     * you log in to your Salesforce account and authorize Amazon AppFlow to access
     * your records.</p> </dd> <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow
     * passes client credentials (a client ID and client secret) when it requests the
     * access token from Salesforce. You provide these credentials to Amazon AppFlow
     * when you define the connection to your Salesforce account.</p> </dd>
     * <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow passes a JSON web token (JWT) when it
     * requests the access token from Salesforce. You provide the JWT to Amazon AppFlow
     * when you define the connection to your Salesforce account. When you use this
     * grant type, you don't need to log in to your Salesforce account to authorize
     * Amazon AppFlow to access your records.</p> </dd> </dl>
     */
    inline SalesforceConnectorProfileCredentials& WithOAuth2GrantType(OAuth2GrantType&& value) { SetOAuth2GrantType(std::move(value)); return *this;}


    /**
     * <p>A JSON web token (JWT) that authorizes Amazon AppFlow to access your
     * Salesforce records.</p>
     */
    inline const Aws::String& GetJwtToken() const{ return m_jwtToken; }

    /**
     * <p>A JSON web token (JWT) that authorizes Amazon AppFlow to access your
     * Salesforce records.</p>
     */
    inline bool JwtTokenHasBeenSet() const { return m_jwtTokenHasBeenSet; }

    /**
     * <p>A JSON web token (JWT) that authorizes Amazon AppFlow to access your
     * Salesforce records.</p>
     */
    inline void SetJwtToken(const Aws::String& value) { m_jwtTokenHasBeenSet = true; m_jwtToken = value; }

    /**
     * <p>A JSON web token (JWT) that authorizes Amazon AppFlow to access your
     * Salesforce records.</p>
     */
    inline void SetJwtToken(Aws::String&& value) { m_jwtTokenHasBeenSet = true; m_jwtToken = std::move(value); }

    /**
     * <p>A JSON web token (JWT) that authorizes Amazon AppFlow to access your
     * Salesforce records.</p>
     */
    inline void SetJwtToken(const char* value) { m_jwtTokenHasBeenSet = true; m_jwtToken.assign(value); }

    /**
     * <p>A JSON web token (JWT) that authorizes Amazon AppFlow to access your
     * Salesforce records.</p>
     */
    inline SalesforceConnectorProfileCredentials& WithJwtToken(const Aws::String& value) { SetJwtToken(value); return *this;}

    /**
     * <p>A JSON web token (JWT) that authorizes Amazon AppFlow to access your
     * Salesforce records.</p>
     */
    inline SalesforceConnectorProfileCredentials& WithJwtToken(Aws::String&& value) { SetJwtToken(std::move(value)); return *this;}

    /**
     * <p>A JSON web token (JWT) that authorizes Amazon AppFlow to access your
     * Salesforce records.</p>
     */
    inline SalesforceConnectorProfileCredentials& WithJwtToken(const char* value) { SetJwtToken(value); return *this;}

  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    ConnectorOAuthRequest m_oAuthRequest;
    bool m_oAuthRequestHasBeenSet = false;

    Aws::String m_clientCredentialsArn;
    bool m_clientCredentialsArnHasBeenSet = false;

    OAuth2GrantType m_oAuth2GrantType;
    bool m_oAuth2GrantTypeHasBeenSet = false;

    Aws::String m_jwtToken;
    bool m_jwtTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
