/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> The OAuth properties required for OAuth type authentication. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/OAuthProperties">AWS
   * API Reference</a></p>
   */
  class OAuthProperties
  {
  public:
    AWS_APPFLOW_API OAuthProperties() = default;
    AWS_APPFLOW_API OAuthProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API OAuthProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The token url required to fetch access/refresh tokens using authorization
     * code and also to refresh expired access token using refresh token.</p>
     */
    inline const Aws::String& GetTokenUrl() const { return m_tokenUrl; }
    inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
    template<typename TokenUrlT = Aws::String>
    void SetTokenUrl(TokenUrlT&& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = std::forward<TokenUrlT>(value); }
    template<typename TokenUrlT = Aws::String>
    OAuthProperties& WithTokenUrl(TokenUrlT&& value) { SetTokenUrl(std::forward<TokenUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The authorization code url required to redirect to SAP Login Page to fetch
     * authorization code for OAuth type authentication. </p>
     */
    inline const Aws::String& GetAuthCodeUrl() const { return m_authCodeUrl; }
    inline bool AuthCodeUrlHasBeenSet() const { return m_authCodeUrlHasBeenSet; }
    template<typename AuthCodeUrlT = Aws::String>
    void SetAuthCodeUrl(AuthCodeUrlT&& value) { m_authCodeUrlHasBeenSet = true; m_authCodeUrl = std::forward<AuthCodeUrlT>(value); }
    template<typename AuthCodeUrlT = Aws::String>
    OAuthProperties& WithAuthCodeUrl(AuthCodeUrlT&& value) { SetAuthCodeUrl(std::forward<AuthCodeUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOAuthScopes() const { return m_oAuthScopes; }
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }
    template<typename OAuthScopesT = Aws::Vector<Aws::String>>
    void SetOAuthScopes(OAuthScopesT&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::forward<OAuthScopesT>(value); }
    template<typename OAuthScopesT = Aws::Vector<Aws::String>>
    OAuthProperties& WithOAuthScopes(OAuthScopesT&& value) { SetOAuthScopes(std::forward<OAuthScopesT>(value)); return *this;}
    template<typename OAuthScopesT = Aws::String>
    OAuthProperties& AddOAuthScopes(OAuthScopesT&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.emplace_back(std::forward<OAuthScopesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet = false;

    Aws::String m_authCodeUrl;
    bool m_authCodeUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_oAuthScopes;
    bool m_oAuthScopesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
