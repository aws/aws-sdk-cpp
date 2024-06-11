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
   * <p> The connector-specific credentials required when using Amazon Honeycode.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/HoneycodeConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class HoneycodeConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API HoneycodeConnectorProfileCredentials();
    AWS_APPFLOW_API HoneycodeConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API HoneycodeConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The credentials used to access protected Amazon Honeycode resources. </p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline HoneycodeConnectorProfileCredentials& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline HoneycodeConnectorProfileCredentials& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline HoneycodeConnectorProfileCredentials& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The credentials used to acquire new access tokens. </p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }
    inline HoneycodeConnectorProfileCredentials& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}
    inline HoneycodeConnectorProfileCredentials& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}
    inline HoneycodeConnectorProfileCredentials& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ConnectorOAuthRequest& GetOAuthRequest() const{ return m_oAuthRequest; }
    inline bool OAuthRequestHasBeenSet() const { return m_oAuthRequestHasBeenSet; }
    inline void SetOAuthRequest(const ConnectorOAuthRequest& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = value; }
    inline void SetOAuthRequest(ConnectorOAuthRequest&& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = std::move(value); }
    inline HoneycodeConnectorProfileCredentials& WithOAuthRequest(const ConnectorOAuthRequest& value) { SetOAuthRequest(value); return *this;}
    inline HoneycodeConnectorProfileCredentials& WithOAuthRequest(ConnectorOAuthRequest&& value) { SetOAuthRequest(std::move(value)); return *this;}
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
