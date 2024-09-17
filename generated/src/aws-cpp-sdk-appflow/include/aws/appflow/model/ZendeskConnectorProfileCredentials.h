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
   * <p> The connector-specific profile credentials required when using Zendesk.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ZendeskConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class ZendeskConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API ZendeskConnectorProfileCredentials();
    AWS_APPFLOW_API ZendeskConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ZendeskConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier for the desired client. </p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline ZendeskConnectorProfileCredentials& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline ZendeskConnectorProfileCredentials& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline ZendeskConnectorProfileCredentials& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The client secret used by the OAuth client to authenticate to the
     * authorization server. </p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }
    inline ZendeskConnectorProfileCredentials& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}
    inline ZendeskConnectorProfileCredentials& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}
    inline ZendeskConnectorProfileCredentials& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The credentials used to access protected Zendesk resources. </p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline ZendeskConnectorProfileCredentials& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline ZendeskConnectorProfileCredentials& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline ZendeskConnectorProfileCredentials& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The OAuth requirement needed to request security tokens from the connector
     * endpoint. </p>
     */
    inline const ConnectorOAuthRequest& GetOAuthRequest() const{ return m_oAuthRequest; }
    inline bool OAuthRequestHasBeenSet() const { return m_oAuthRequestHasBeenSet; }
    inline void SetOAuthRequest(const ConnectorOAuthRequest& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = value; }
    inline void SetOAuthRequest(ConnectorOAuthRequest&& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = std::move(value); }
    inline ZendeskConnectorProfileCredentials& WithOAuthRequest(const ConnectorOAuthRequest& value) { SetOAuthRequest(value); return *this;}
    inline ZendeskConnectorProfileCredentials& WithOAuthRequest(ConnectorOAuthRequest&& value) { SetOAuthRequest(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    ConnectorOAuthRequest m_oAuthRequest;
    bool m_oAuthRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
