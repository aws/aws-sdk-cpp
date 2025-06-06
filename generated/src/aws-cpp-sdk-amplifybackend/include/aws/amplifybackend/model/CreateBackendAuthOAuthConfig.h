﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/OAuthGrantType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifybackend/model/SocialProviderSettings.h>
#include <aws/amplifybackend/model/OAuthScopesElement.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Creates the OAuth configuration for your Amplify project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuthOAuthConfig">AWS
   * API Reference</a></p>
   */
  class CreateBackendAuthOAuthConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateBackendAuthOAuthConfig() = default;
    AWS_AMPLIFYBACKEND_API CreateBackendAuthOAuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthOAuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain prefix for your Amplify app.</p>
     */
    inline const Aws::String& GetDomainPrefix() const { return m_domainPrefix; }
    inline bool DomainPrefixHasBeenSet() const { return m_domainPrefixHasBeenSet; }
    template<typename DomainPrefixT = Aws::String>
    void SetDomainPrefix(DomainPrefixT&& value) { m_domainPrefixHasBeenSet = true; m_domainPrefix = std::forward<DomainPrefixT>(value); }
    template<typename DomainPrefixT = Aws::String>
    CreateBackendAuthOAuthConfig& WithDomainPrefix(DomainPrefixT&& value) { SetDomainPrefix(std::forward<DomainPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth grant type that you use to allow app users to authenticate from
     * your Amplify app.</p>
     */
    inline OAuthGrantType GetOAuthGrantType() const { return m_oAuthGrantType; }
    inline bool OAuthGrantTypeHasBeenSet() const { return m_oAuthGrantTypeHasBeenSet; }
    inline void SetOAuthGrantType(OAuthGrantType value) { m_oAuthGrantTypeHasBeenSet = true; m_oAuthGrantType = value; }
    inline CreateBackendAuthOAuthConfig& WithOAuthGrantType(OAuthGrantType value) { SetOAuthGrantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of OAuth-related flows used to allow your app users to authenticate from
     * your Amplify app.</p>
     */
    inline const Aws::Vector<OAuthScopesElement>& GetOAuthScopes() const { return m_oAuthScopes; }
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }
    template<typename OAuthScopesT = Aws::Vector<OAuthScopesElement>>
    void SetOAuthScopes(OAuthScopesT&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::forward<OAuthScopesT>(value); }
    template<typename OAuthScopesT = Aws::Vector<OAuthScopesElement>>
    CreateBackendAuthOAuthConfig& WithOAuthScopes(OAuthScopesT&& value) { SetOAuthScopes(std::forward<OAuthScopesT>(value)); return *this;}
    inline CreateBackendAuthOAuthConfig& AddOAuthScopes(OAuthScopesElement value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The redirected URI for signing in to your Amplify app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRedirectSignInURIs() const { return m_redirectSignInURIs; }
    inline bool RedirectSignInURIsHasBeenSet() const { return m_redirectSignInURIsHasBeenSet; }
    template<typename RedirectSignInURIsT = Aws::Vector<Aws::String>>
    void SetRedirectSignInURIs(RedirectSignInURIsT&& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs = std::forward<RedirectSignInURIsT>(value); }
    template<typename RedirectSignInURIsT = Aws::Vector<Aws::String>>
    CreateBackendAuthOAuthConfig& WithRedirectSignInURIs(RedirectSignInURIsT&& value) { SetRedirectSignInURIs(std::forward<RedirectSignInURIsT>(value)); return *this;}
    template<typename RedirectSignInURIsT = Aws::String>
    CreateBackendAuthOAuthConfig& AddRedirectSignInURIs(RedirectSignInURIsT&& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs.emplace_back(std::forward<RedirectSignInURIsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRedirectSignOutURIs() const { return m_redirectSignOutURIs; }
    inline bool RedirectSignOutURIsHasBeenSet() const { return m_redirectSignOutURIsHasBeenSet; }
    template<typename RedirectSignOutURIsT = Aws::Vector<Aws::String>>
    void SetRedirectSignOutURIs(RedirectSignOutURIsT&& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs = std::forward<RedirectSignOutURIsT>(value); }
    template<typename RedirectSignOutURIsT = Aws::Vector<Aws::String>>
    CreateBackendAuthOAuthConfig& WithRedirectSignOutURIs(RedirectSignOutURIsT&& value) { SetRedirectSignOutURIs(std::forward<RedirectSignOutURIsT>(value)); return *this;}
    template<typename RedirectSignOutURIsT = Aws::String>
    CreateBackendAuthOAuthConfig& AddRedirectSignOutURIs(RedirectSignOutURIsT&& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs.emplace_back(std::forward<RedirectSignOutURIsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The settings for using social providers to access your Amplify app.</p>
     */
    inline const SocialProviderSettings& GetSocialProviderSettings() const { return m_socialProviderSettings; }
    inline bool SocialProviderSettingsHasBeenSet() const { return m_socialProviderSettingsHasBeenSet; }
    template<typename SocialProviderSettingsT = SocialProviderSettings>
    void SetSocialProviderSettings(SocialProviderSettingsT&& value) { m_socialProviderSettingsHasBeenSet = true; m_socialProviderSettings = std::forward<SocialProviderSettingsT>(value); }
    template<typename SocialProviderSettingsT = SocialProviderSettings>
    CreateBackendAuthOAuthConfig& WithSocialProviderSettings(SocialProviderSettingsT&& value) { SetSocialProviderSettings(std::forward<SocialProviderSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainPrefix;
    bool m_domainPrefixHasBeenSet = false;

    OAuthGrantType m_oAuthGrantType{OAuthGrantType::NOT_SET};
    bool m_oAuthGrantTypeHasBeenSet = false;

    Aws::Vector<OAuthScopesElement> m_oAuthScopes;
    bool m_oAuthScopesHasBeenSet = false;

    Aws::Vector<Aws::String> m_redirectSignInURIs;
    bool m_redirectSignInURIsHasBeenSet = false;

    Aws::Vector<Aws::String> m_redirectSignOutURIs;
    bool m_redirectSignOutURIsHasBeenSet = false;

    SocialProviderSettings m_socialProviderSettings;
    bool m_socialProviderSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
