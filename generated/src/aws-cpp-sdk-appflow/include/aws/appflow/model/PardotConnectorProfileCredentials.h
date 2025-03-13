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
   * <p>The connector-specific profile credentials required when using Salesforce
   * Pardot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/PardotConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class PardotConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API PardotConnectorProfileCredentials() = default;
    AWS_APPFLOW_API PardotConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API PardotConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The credentials used to access protected Salesforce Pardot resources.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    PardotConnectorProfileCredentials& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials used to acquire new access tokens.</p>
     */
    inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    template<typename RefreshTokenT = Aws::String>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = Aws::String>
    PardotConnectorProfileCredentials& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConnectorOAuthRequest& GetOAuthRequest() const { return m_oAuthRequest; }
    inline bool OAuthRequestHasBeenSet() const { return m_oAuthRequestHasBeenSet; }
    template<typename OAuthRequestT = ConnectorOAuthRequest>
    void SetOAuthRequest(OAuthRequestT&& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = std::forward<OAuthRequestT>(value); }
    template<typename OAuthRequestT = ConnectorOAuthRequest>
    PardotConnectorProfileCredentials& WithOAuthRequest(OAuthRequestT&& value) { SetOAuthRequest(std::forward<OAuthRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret manager ARN, which contains the client ID and client secret of the
     * connected app.</p>
     */
    inline const Aws::String& GetClientCredentialsArn() const { return m_clientCredentialsArn; }
    inline bool ClientCredentialsArnHasBeenSet() const { return m_clientCredentialsArnHasBeenSet; }
    template<typename ClientCredentialsArnT = Aws::String>
    void SetClientCredentialsArn(ClientCredentialsArnT&& value) { m_clientCredentialsArnHasBeenSet = true; m_clientCredentialsArn = std::forward<ClientCredentialsArnT>(value); }
    template<typename ClientCredentialsArnT = Aws::String>
    PardotConnectorProfileCredentials& WithClientCredentialsArn(ClientCredentialsArnT&& value) { SetClientCredentialsArn(std::forward<ClientCredentialsArnT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
