/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/OAuth2GrantType.h>
#include <aws/appflow/model/OAuth2CustomParameter.h>
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
   * <p>Contains the default values required for OAuth 2.0
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/OAuth2Defaults">AWS
   * API Reference</a></p>
   */
  class OAuth2Defaults
  {
  public:
    AWS_APPFLOW_API OAuth2Defaults() = default;
    AWS_APPFLOW_API OAuth2Defaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API OAuth2Defaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOauthScopes() const { return m_oauthScopes; }
    inline bool OauthScopesHasBeenSet() const { return m_oauthScopesHasBeenSet; }
    template<typename OauthScopesT = Aws::Vector<Aws::String>>
    void SetOauthScopes(OauthScopesT&& value) { m_oauthScopesHasBeenSet = true; m_oauthScopes = std::forward<OauthScopesT>(value); }
    template<typename OauthScopesT = Aws::Vector<Aws::String>>
    OAuth2Defaults& WithOauthScopes(OauthScopesT&& value) { SetOauthScopes(std::forward<OauthScopesT>(value)); return *this;}
    template<typename OauthScopesT = Aws::String>
    OAuth2Defaults& AddOauthScopes(OauthScopesT&& value) { m_oauthScopesHasBeenSet = true; m_oauthScopes.emplace_back(std::forward<OauthScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenUrls() const { return m_tokenUrls; }
    inline bool TokenUrlsHasBeenSet() const { return m_tokenUrlsHasBeenSet; }
    template<typename TokenUrlsT = Aws::Vector<Aws::String>>
    void SetTokenUrls(TokenUrlsT&& value) { m_tokenUrlsHasBeenSet = true; m_tokenUrls = std::forward<TokenUrlsT>(value); }
    template<typename TokenUrlsT = Aws::Vector<Aws::String>>
    OAuth2Defaults& WithTokenUrls(TokenUrlsT&& value) { SetTokenUrls(std::forward<TokenUrlsT>(value)); return *this;}
    template<typename TokenUrlsT = Aws::String>
    OAuth2Defaults& AddTokenUrls(TokenUrlsT&& value) { m_tokenUrlsHasBeenSet = true; m_tokenUrls.emplace_back(std::forward<TokenUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthCodeUrls() const { return m_authCodeUrls; }
    inline bool AuthCodeUrlsHasBeenSet() const { return m_authCodeUrlsHasBeenSet; }
    template<typename AuthCodeUrlsT = Aws::Vector<Aws::String>>
    void SetAuthCodeUrls(AuthCodeUrlsT&& value) { m_authCodeUrlsHasBeenSet = true; m_authCodeUrls = std::forward<AuthCodeUrlsT>(value); }
    template<typename AuthCodeUrlsT = Aws::Vector<Aws::String>>
    OAuth2Defaults& WithAuthCodeUrls(AuthCodeUrlsT&& value) { SetAuthCodeUrls(std::forward<AuthCodeUrlsT>(value)); return *this;}
    template<typename AuthCodeUrlsT = Aws::String>
    OAuth2Defaults& AddAuthCodeUrls(AuthCodeUrlsT&& value) { m_authCodeUrlsHasBeenSet = true; m_authCodeUrls.emplace_back(std::forward<AuthCodeUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>OAuth 2.0 grant types supported by the connector.</p>
     */
    inline const Aws::Vector<OAuth2GrantType>& GetOauth2GrantTypesSupported() const { return m_oauth2GrantTypesSupported; }
    inline bool Oauth2GrantTypesSupportedHasBeenSet() const { return m_oauth2GrantTypesSupportedHasBeenSet; }
    template<typename Oauth2GrantTypesSupportedT = Aws::Vector<OAuth2GrantType>>
    void SetOauth2GrantTypesSupported(Oauth2GrantTypesSupportedT&& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported = std::forward<Oauth2GrantTypesSupportedT>(value); }
    template<typename Oauth2GrantTypesSupportedT = Aws::Vector<OAuth2GrantType>>
    OAuth2Defaults& WithOauth2GrantTypesSupported(Oauth2GrantTypesSupportedT&& value) { SetOauth2GrantTypesSupported(std::forward<Oauth2GrantTypesSupportedT>(value)); return *this;}
    inline OAuth2Defaults& AddOauth2GrantTypesSupported(OAuth2GrantType value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of custom parameters required for OAuth 2.0 authentication.</p>
     */
    inline const Aws::Vector<OAuth2CustomParameter>& GetOauth2CustomProperties() const { return m_oauth2CustomProperties; }
    inline bool Oauth2CustomPropertiesHasBeenSet() const { return m_oauth2CustomPropertiesHasBeenSet; }
    template<typename Oauth2CustomPropertiesT = Aws::Vector<OAuth2CustomParameter>>
    void SetOauth2CustomProperties(Oauth2CustomPropertiesT&& value) { m_oauth2CustomPropertiesHasBeenSet = true; m_oauth2CustomProperties = std::forward<Oauth2CustomPropertiesT>(value); }
    template<typename Oauth2CustomPropertiesT = Aws::Vector<OAuth2CustomParameter>>
    OAuth2Defaults& WithOauth2CustomProperties(Oauth2CustomPropertiesT&& value) { SetOauth2CustomProperties(std::forward<Oauth2CustomPropertiesT>(value)); return *this;}
    template<typename Oauth2CustomPropertiesT = OAuth2CustomParameter>
    OAuth2Defaults& AddOauth2CustomProperties(Oauth2CustomPropertiesT&& value) { m_oauth2CustomPropertiesHasBeenSet = true; m_oauth2CustomProperties.emplace_back(std::forward<Oauth2CustomPropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_oauthScopes;
    bool m_oauthScopesHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenUrls;
    bool m_tokenUrlsHasBeenSet = false;

    Aws::Vector<Aws::String> m_authCodeUrls;
    bool m_authCodeUrlsHasBeenSet = false;

    Aws::Vector<OAuth2GrantType> m_oauth2GrantTypesSupported;
    bool m_oauth2GrantTypesSupportedHasBeenSet = false;

    Aws::Vector<OAuth2CustomParameter> m_oauth2CustomProperties;
    bool m_oauth2CustomPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
