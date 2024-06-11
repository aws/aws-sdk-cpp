/**
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
    AWS_AMPLIFYBACKEND_API CreateBackendAuthOAuthConfig();
    AWS_AMPLIFYBACKEND_API CreateBackendAuthOAuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthOAuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain prefix for your Amplify app.</p>
     */
    inline const Aws::String& GetDomainPrefix() const{ return m_domainPrefix; }
    inline bool DomainPrefixHasBeenSet() const { return m_domainPrefixHasBeenSet; }
    inline void SetDomainPrefix(const Aws::String& value) { m_domainPrefixHasBeenSet = true; m_domainPrefix = value; }
    inline void SetDomainPrefix(Aws::String&& value) { m_domainPrefixHasBeenSet = true; m_domainPrefix = std::move(value); }
    inline void SetDomainPrefix(const char* value) { m_domainPrefixHasBeenSet = true; m_domainPrefix.assign(value); }
    inline CreateBackendAuthOAuthConfig& WithDomainPrefix(const Aws::String& value) { SetDomainPrefix(value); return *this;}
    inline CreateBackendAuthOAuthConfig& WithDomainPrefix(Aws::String&& value) { SetDomainPrefix(std::move(value)); return *this;}
    inline CreateBackendAuthOAuthConfig& WithDomainPrefix(const char* value) { SetDomainPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth grant type that you use to allow app users to authenticate from
     * your Amplify app.</p>
     */
    inline const OAuthGrantType& GetOAuthGrantType() const{ return m_oAuthGrantType; }
    inline bool OAuthGrantTypeHasBeenSet() const { return m_oAuthGrantTypeHasBeenSet; }
    inline void SetOAuthGrantType(const OAuthGrantType& value) { m_oAuthGrantTypeHasBeenSet = true; m_oAuthGrantType = value; }
    inline void SetOAuthGrantType(OAuthGrantType&& value) { m_oAuthGrantTypeHasBeenSet = true; m_oAuthGrantType = std::move(value); }
    inline CreateBackendAuthOAuthConfig& WithOAuthGrantType(const OAuthGrantType& value) { SetOAuthGrantType(value); return *this;}
    inline CreateBackendAuthOAuthConfig& WithOAuthGrantType(OAuthGrantType&& value) { SetOAuthGrantType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of OAuth-related flows used to allow your app users to authenticate from
     * your Amplify app.</p>
     */
    inline const Aws::Vector<OAuthScopesElement>& GetOAuthScopes() const{ return m_oAuthScopes; }
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }
    inline void SetOAuthScopes(const Aws::Vector<OAuthScopesElement>& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = value; }
    inline void SetOAuthScopes(Aws::Vector<OAuthScopesElement>&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::move(value); }
    inline CreateBackendAuthOAuthConfig& WithOAuthScopes(const Aws::Vector<OAuthScopesElement>& value) { SetOAuthScopes(value); return *this;}
    inline CreateBackendAuthOAuthConfig& WithOAuthScopes(Aws::Vector<OAuthScopesElement>&& value) { SetOAuthScopes(std::move(value)); return *this;}
    inline CreateBackendAuthOAuthConfig& AddOAuthScopes(const OAuthScopesElement& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }
    inline CreateBackendAuthOAuthConfig& AddOAuthScopes(OAuthScopesElement&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The redirected URI for signing in to your Amplify app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRedirectSignInURIs() const{ return m_redirectSignInURIs; }
    inline bool RedirectSignInURIsHasBeenSet() const { return m_redirectSignInURIsHasBeenSet; }
    inline void SetRedirectSignInURIs(const Aws::Vector<Aws::String>& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs = value; }
    inline void SetRedirectSignInURIs(Aws::Vector<Aws::String>&& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs = std::move(value); }
    inline CreateBackendAuthOAuthConfig& WithRedirectSignInURIs(const Aws::Vector<Aws::String>& value) { SetRedirectSignInURIs(value); return *this;}
    inline CreateBackendAuthOAuthConfig& WithRedirectSignInURIs(Aws::Vector<Aws::String>&& value) { SetRedirectSignInURIs(std::move(value)); return *this;}
    inline CreateBackendAuthOAuthConfig& AddRedirectSignInURIs(const Aws::String& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs.push_back(value); return *this; }
    inline CreateBackendAuthOAuthConfig& AddRedirectSignInURIs(Aws::String&& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs.push_back(std::move(value)); return *this; }
    inline CreateBackendAuthOAuthConfig& AddRedirectSignInURIs(const char* value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRedirectSignOutURIs() const{ return m_redirectSignOutURIs; }
    inline bool RedirectSignOutURIsHasBeenSet() const { return m_redirectSignOutURIsHasBeenSet; }
    inline void SetRedirectSignOutURIs(const Aws::Vector<Aws::String>& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs = value; }
    inline void SetRedirectSignOutURIs(Aws::Vector<Aws::String>&& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs = std::move(value); }
    inline CreateBackendAuthOAuthConfig& WithRedirectSignOutURIs(const Aws::Vector<Aws::String>& value) { SetRedirectSignOutURIs(value); return *this;}
    inline CreateBackendAuthOAuthConfig& WithRedirectSignOutURIs(Aws::Vector<Aws::String>&& value) { SetRedirectSignOutURIs(std::move(value)); return *this;}
    inline CreateBackendAuthOAuthConfig& AddRedirectSignOutURIs(const Aws::String& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs.push_back(value); return *this; }
    inline CreateBackendAuthOAuthConfig& AddRedirectSignOutURIs(Aws::String&& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs.push_back(std::move(value)); return *this; }
    inline CreateBackendAuthOAuthConfig& AddRedirectSignOutURIs(const char* value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The settings for using social providers to access your Amplify app.</p>
     */
    inline const SocialProviderSettings& GetSocialProviderSettings() const{ return m_socialProviderSettings; }
    inline bool SocialProviderSettingsHasBeenSet() const { return m_socialProviderSettingsHasBeenSet; }
    inline void SetSocialProviderSettings(const SocialProviderSettings& value) { m_socialProviderSettingsHasBeenSet = true; m_socialProviderSettings = value; }
    inline void SetSocialProviderSettings(SocialProviderSettings&& value) { m_socialProviderSettingsHasBeenSet = true; m_socialProviderSettings = std::move(value); }
    inline CreateBackendAuthOAuthConfig& WithSocialProviderSettings(const SocialProviderSettings& value) { SetSocialProviderSettings(value); return *this;}
    inline CreateBackendAuthOAuthConfig& WithSocialProviderSettings(SocialProviderSettings&& value) { SetSocialProviderSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainPrefix;
    bool m_domainPrefixHasBeenSet = false;

    OAuthGrantType m_oAuthGrantType;
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
