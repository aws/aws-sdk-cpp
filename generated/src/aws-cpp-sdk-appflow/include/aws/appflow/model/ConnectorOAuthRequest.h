/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Used by select connectors for which the OAuth workflow is supported, such as
   * Salesforce, Google Analytics, Marketo, Zendesk, and Slack. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorOAuthRequest">AWS
   * API Reference</a></p>
   */
  class ConnectorOAuthRequest
  {
  public:
    AWS_APPFLOW_API ConnectorOAuthRequest();
    AWS_APPFLOW_API ConnectorOAuthRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorOAuthRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The code provided by the connector when it has been authenticated via the
     * connected app. </p>
     */
    inline const Aws::String& GetAuthCode() const{ return m_authCode; }

    /**
     * <p> The code provided by the connector when it has been authenticated via the
     * connected app. </p>
     */
    inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }

    /**
     * <p> The code provided by the connector when it has been authenticated via the
     * connected app. </p>
     */
    inline void SetAuthCode(const Aws::String& value) { m_authCodeHasBeenSet = true; m_authCode = value; }

    /**
     * <p> The code provided by the connector when it has been authenticated via the
     * connected app. </p>
     */
    inline void SetAuthCode(Aws::String&& value) { m_authCodeHasBeenSet = true; m_authCode = std::move(value); }

    /**
     * <p> The code provided by the connector when it has been authenticated via the
     * connected app. </p>
     */
    inline void SetAuthCode(const char* value) { m_authCodeHasBeenSet = true; m_authCode.assign(value); }

    /**
     * <p> The code provided by the connector when it has been authenticated via the
     * connected app. </p>
     */
    inline ConnectorOAuthRequest& WithAuthCode(const Aws::String& value) { SetAuthCode(value); return *this;}

    /**
     * <p> The code provided by the connector when it has been authenticated via the
     * connected app. </p>
     */
    inline ConnectorOAuthRequest& WithAuthCode(Aws::String&& value) { SetAuthCode(std::move(value)); return *this;}

    /**
     * <p> The code provided by the connector when it has been authenticated via the
     * connected app. </p>
     */
    inline ConnectorOAuthRequest& WithAuthCode(const char* value) { SetAuthCode(value); return *this;}


    /**
     * <p> The URL to which the authentication server redirects the browser after
     * authorization has been granted. </p>
     */
    inline const Aws::String& GetRedirectUri() const{ return m_redirectUri; }

    /**
     * <p> The URL to which the authentication server redirects the browser after
     * authorization has been granted. </p>
     */
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }

    /**
     * <p> The URL to which the authentication server redirects the browser after
     * authorization has been granted. </p>
     */
    inline void SetRedirectUri(const Aws::String& value) { m_redirectUriHasBeenSet = true; m_redirectUri = value; }

    /**
     * <p> The URL to which the authentication server redirects the browser after
     * authorization has been granted. </p>
     */
    inline void SetRedirectUri(Aws::String&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::move(value); }

    /**
     * <p> The URL to which the authentication server redirects the browser after
     * authorization has been granted. </p>
     */
    inline void SetRedirectUri(const char* value) { m_redirectUriHasBeenSet = true; m_redirectUri.assign(value); }

    /**
     * <p> The URL to which the authentication server redirects the browser after
     * authorization has been granted. </p>
     */
    inline ConnectorOAuthRequest& WithRedirectUri(const Aws::String& value) { SetRedirectUri(value); return *this;}

    /**
     * <p> The URL to which the authentication server redirects the browser after
     * authorization has been granted. </p>
     */
    inline ConnectorOAuthRequest& WithRedirectUri(Aws::String&& value) { SetRedirectUri(std::move(value)); return *this;}

    /**
     * <p> The URL to which the authentication server redirects the browser after
     * authorization has been granted. </p>
     */
    inline ConnectorOAuthRequest& WithRedirectUri(const char* value) { SetRedirectUri(value); return *this;}

  private:

    Aws::String m_authCode;
    bool m_authCodeHasBeenSet = false;

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
