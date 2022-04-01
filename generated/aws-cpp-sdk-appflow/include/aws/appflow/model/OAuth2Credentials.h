﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorOAuthRequest.h>
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
   * <p>The OAuth 2.0 credentials required for OAuth 2.0
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/OAuth2Credentials">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API OAuth2Credentials
  {
  public:
    OAuth2Credentials();
    OAuth2Credentials(Aws::Utils::Json::JsonView jsonValue);
    OAuth2Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the desired client.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The identifier for the desired client.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The identifier for the desired client.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The identifier for the desired client.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The identifier for the desired client.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The identifier for the desired client.</p>
     */
    inline OAuth2Credentials& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The identifier for the desired client.</p>
     */
    inline OAuth2Credentials& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the desired client.</p>
     */
    inline OAuth2Credentials& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The client secret used by the OAuth client to authenticate to the
     * authorization server.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>The client secret used by the OAuth client to authenticate to the
     * authorization server.</p>
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * <p>The client secret used by the OAuth client to authenticate to the
     * authorization server.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * <p>The client secret used by the OAuth client to authenticate to the
     * authorization server.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * <p>The client secret used by the OAuth client to authenticate to the
     * authorization server.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * <p>The client secret used by the OAuth client to authenticate to the
     * authorization server.</p>
     */
    inline OAuth2Credentials& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>The client secret used by the OAuth client to authenticate to the
     * authorization server.</p>
     */
    inline OAuth2Credentials& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>The client secret used by the OAuth client to authenticate to the
     * authorization server.</p>
     */
    inline OAuth2Credentials& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * <p>The access token used to access the connector on your behalf.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access token used to access the connector on your behalf.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>The access token used to access the connector on your behalf.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token used to access the connector on your behalf.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>The access token used to access the connector on your behalf.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The access token used to access the connector on your behalf.</p>
     */
    inline OAuth2Credentials& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token used to access the connector on your behalf.</p>
     */
    inline OAuth2Credentials& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The access token used to access the connector on your behalf.</p>
     */
    inline OAuth2Credentials& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>The refresh token used to refresh an expired access token.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>The refresh token used to refresh an expired access token.</p>
     */
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }

    /**
     * <p>The refresh token used to refresh an expired access token.</p>
     */
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p>The refresh token used to refresh an expired access token.</p>
     */
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }

    /**
     * <p>The refresh token used to refresh an expired access token.</p>
     */
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }

    /**
     * <p>The refresh token used to refresh an expired access token.</p>
     */
    inline OAuth2Credentials& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>The refresh token used to refresh an expired access token.</p>
     */
    inline OAuth2Credentials& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}

    /**
     * <p>The refresh token used to refresh an expired access token.</p>
     */
    inline OAuth2Credentials& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}


    
    inline const ConnectorOAuthRequest& GetOAuthRequest() const{ return m_oAuthRequest; }

    
    inline bool OAuthRequestHasBeenSet() const { return m_oAuthRequestHasBeenSet; }

    
    inline void SetOAuthRequest(const ConnectorOAuthRequest& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = value; }

    
    inline void SetOAuthRequest(ConnectorOAuthRequest&& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = std::move(value); }

    
    inline OAuth2Credentials& WithOAuthRequest(const ConnectorOAuthRequest& value) { SetOAuthRequest(value); return *this;}

    
    inline OAuth2Credentials& WithOAuthRequest(ConnectorOAuthRequest&& value) { SetOAuthRequest(std::move(value)); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet;

    ConnectorOAuthRequest m_oAuthRequest;
    bool m_oAuthRequestHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
