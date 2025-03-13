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
    AWS_APPFLOW_API ConnectorOAuthRequest() = default;
    AWS_APPFLOW_API ConnectorOAuthRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorOAuthRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The code provided by the connector when it has been authenticated via the
     * connected app. </p>
     */
    inline const Aws::String& GetAuthCode() const { return m_authCode; }
    inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }
    template<typename AuthCodeT = Aws::String>
    void SetAuthCode(AuthCodeT&& value) { m_authCodeHasBeenSet = true; m_authCode = std::forward<AuthCodeT>(value); }
    template<typename AuthCodeT = Aws::String>
    ConnectorOAuthRequest& WithAuthCode(AuthCodeT&& value) { SetAuthCode(std::forward<AuthCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL to which the authentication server redirects the browser after
     * authorization has been granted. </p>
     */
    inline const Aws::String& GetRedirectUri() const { return m_redirectUri; }
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
    template<typename RedirectUriT = Aws::String>
    void SetRedirectUri(RedirectUriT&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::forward<RedirectUriT>(value); }
    template<typename RedirectUriT = Aws::String>
    ConnectorOAuthRequest& WithRedirectUri(RedirectUriT&& value) { SetRedirectUri(std::forward<RedirectUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authCode;
    bool m_authCodeHasBeenSet = false;

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
