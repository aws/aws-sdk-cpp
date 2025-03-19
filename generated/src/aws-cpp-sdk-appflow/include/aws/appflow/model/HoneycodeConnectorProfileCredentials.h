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
   * <p> The connector-specific credentials required when using Amazon Honeycode.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/HoneycodeConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class HoneycodeConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API HoneycodeConnectorProfileCredentials() = default;
    AWS_APPFLOW_API HoneycodeConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API HoneycodeConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The credentials used to access protected Amazon Honeycode resources. </p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    HoneycodeConnectorProfileCredentials& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
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
    HoneycodeConnectorProfileCredentials& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConnectorOAuthRequest& GetOAuthRequest() const { return m_oAuthRequest; }
    inline bool OAuthRequestHasBeenSet() const { return m_oAuthRequestHasBeenSet; }
    template<typename OAuthRequestT = ConnectorOAuthRequest>
    void SetOAuthRequest(OAuthRequestT&& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = std::forward<OAuthRequestT>(value); }
    template<typename OAuthRequestT = ConnectorOAuthRequest>
    HoneycodeConnectorProfileCredentials& WithOAuthRequest(OAuthRequestT&& value) { SetOAuthRequest(std::forward<OAuthRequestT>(value)); return *this;}
    ///@}
  private:

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
