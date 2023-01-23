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
