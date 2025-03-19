/**
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
   * <p> The connector-specific profile credentials required by Google Analytics.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/GoogleAnalyticsConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class GoogleAnalyticsConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API GoogleAnalyticsConnectorProfileCredentials() = default;
    AWS_APPFLOW_API GoogleAnalyticsConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API GoogleAnalyticsConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier for the desired client. </p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    GoogleAnalyticsConnectorProfileCredentials& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The client secret used by the OAuth client to authenticate to the
     * authorization server. </p>
     */
    inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    template<typename ClientSecretT = Aws::String>
    void SetClientSecret(ClientSecretT&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::forward<ClientSecretT>(value); }
    template<typename ClientSecretT = Aws::String>
    GoogleAnalyticsConnectorProfileCredentials& WithClientSecret(ClientSecretT&& value) { SetClientSecret(std::forward<ClientSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The credentials used to access protected Google Analytics resources. </p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    GoogleAnalyticsConnectorProfileCredentials& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The credentials used to acquire new access tokens. This is required only for
     * OAuth2 access tokens, and is not required for OAuth1 access tokens. </p>
     */
    inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    template<typename RefreshTokenT = Aws::String>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = Aws::String>
    GoogleAnalyticsConnectorProfileCredentials& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
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
    GoogleAnalyticsConnectorProfileCredentials& WithOAuthRequest(OAuthRequestT&& value) { SetOAuthRequest(std::forward<OAuthRequestT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    ConnectorOAuthRequest m_oAuthRequest;
    bool m_oAuthRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
