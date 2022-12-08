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
   * <p>The OAuth configurations for authenticating users into your Amplify
   * app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuthOAuthConfig">AWS
   * API Reference</a></p>
   */
  class UpdateBackendAuthOAuthConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthOAuthConfig();
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthOAuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthOAuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Cognito domain prefix used to create a hosted UI for
     * authentication.</p>
     */
    inline const Aws::String& GetDomainPrefix() const{ return m_domainPrefix; }

    /**
     * <p>The Amazon Cognito domain prefix used to create a hosted UI for
     * authentication.</p>
     */
    inline bool DomainPrefixHasBeenSet() const { return m_domainPrefixHasBeenSet; }

    /**
     * <p>The Amazon Cognito domain prefix used to create a hosted UI for
     * authentication.</p>
     */
    inline void SetDomainPrefix(const Aws::String& value) { m_domainPrefixHasBeenSet = true; m_domainPrefix = value; }

    /**
     * <p>The Amazon Cognito domain prefix used to create a hosted UI for
     * authentication.</p>
     */
    inline void SetDomainPrefix(Aws::String&& value) { m_domainPrefixHasBeenSet = true; m_domainPrefix = std::move(value); }

    /**
     * <p>The Amazon Cognito domain prefix used to create a hosted UI for
     * authentication.</p>
     */
    inline void SetDomainPrefix(const char* value) { m_domainPrefixHasBeenSet = true; m_domainPrefix.assign(value); }

    /**
     * <p>The Amazon Cognito domain prefix used to create a hosted UI for
     * authentication.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithDomainPrefix(const Aws::String& value) { SetDomainPrefix(value); return *this;}

    /**
     * <p>The Amazon Cognito domain prefix used to create a hosted UI for
     * authentication.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithDomainPrefix(Aws::String&& value) { SetDomainPrefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon Cognito domain prefix used to create a hosted UI for
     * authentication.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithDomainPrefix(const char* value) { SetDomainPrefix(value); return *this;}


    /**
     * <p>The OAuth grant type to allow app users to authenticate from your Amplify
     * app.</p>
     */
    inline const OAuthGrantType& GetOAuthGrantType() const{ return m_oAuthGrantType; }

    /**
     * <p>The OAuth grant type to allow app users to authenticate from your Amplify
     * app.</p>
     */
    inline bool OAuthGrantTypeHasBeenSet() const { return m_oAuthGrantTypeHasBeenSet; }

    /**
     * <p>The OAuth grant type to allow app users to authenticate from your Amplify
     * app.</p>
     */
    inline void SetOAuthGrantType(const OAuthGrantType& value) { m_oAuthGrantTypeHasBeenSet = true; m_oAuthGrantType = value; }

    /**
     * <p>The OAuth grant type to allow app users to authenticate from your Amplify
     * app.</p>
     */
    inline void SetOAuthGrantType(OAuthGrantType&& value) { m_oAuthGrantTypeHasBeenSet = true; m_oAuthGrantType = std::move(value); }

    /**
     * <p>The OAuth grant type to allow app users to authenticate from your Amplify
     * app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithOAuthGrantType(const OAuthGrantType& value) { SetOAuthGrantType(value); return *this;}

    /**
     * <p>The OAuth grant type to allow app users to authenticate from your Amplify
     * app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithOAuthGrantType(OAuthGrantType&& value) { SetOAuthGrantType(std::move(value)); return *this;}


    /**
     * <p>The list of OAuth-related flows that can allow users to authenticate from
     * your Amplify app.</p>
     */
    inline const Aws::Vector<OAuthScopesElement>& GetOAuthScopes() const{ return m_oAuthScopes; }

    /**
     * <p>The list of OAuth-related flows that can allow users to authenticate from
     * your Amplify app.</p>
     */
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }

    /**
     * <p>The list of OAuth-related flows that can allow users to authenticate from
     * your Amplify app.</p>
     */
    inline void SetOAuthScopes(const Aws::Vector<OAuthScopesElement>& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = value; }

    /**
     * <p>The list of OAuth-related flows that can allow users to authenticate from
     * your Amplify app.</p>
     */
    inline void SetOAuthScopes(Aws::Vector<OAuthScopesElement>&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::move(value); }

    /**
     * <p>The list of OAuth-related flows that can allow users to authenticate from
     * your Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithOAuthScopes(const Aws::Vector<OAuthScopesElement>& value) { SetOAuthScopes(value); return *this;}

    /**
     * <p>The list of OAuth-related flows that can allow users to authenticate from
     * your Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithOAuthScopes(Aws::Vector<OAuthScopesElement>&& value) { SetOAuthScopes(std::move(value)); return *this;}

    /**
     * <p>The list of OAuth-related flows that can allow users to authenticate from
     * your Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& AddOAuthScopes(const OAuthScopesElement& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }

    /**
     * <p>The list of OAuth-related flows that can allow users to authenticate from
     * your Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& AddOAuthScopes(OAuthScopesElement&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(std::move(value)); return *this; }


    /**
     * <p>Redirect URLs that OAuth uses when a user signs in to an Amplify app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRedirectSignInURIs() const{ return m_redirectSignInURIs; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs in to an Amplify app.</p>
     */
    inline bool RedirectSignInURIsHasBeenSet() const { return m_redirectSignInURIsHasBeenSet; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs in to an Amplify app.</p>
     */
    inline void SetRedirectSignInURIs(const Aws::Vector<Aws::String>& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs = value; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs in to an Amplify app.</p>
     */
    inline void SetRedirectSignInURIs(Aws::Vector<Aws::String>&& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs = std::move(value); }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs in to an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithRedirectSignInURIs(const Aws::Vector<Aws::String>& value) { SetRedirectSignInURIs(value); return *this;}

    /**
     * <p>Redirect URLs that OAuth uses when a user signs in to an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithRedirectSignInURIs(Aws::Vector<Aws::String>&& value) { SetRedirectSignInURIs(std::move(value)); return *this;}

    /**
     * <p>Redirect URLs that OAuth uses when a user signs in to an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& AddRedirectSignInURIs(const Aws::String& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs.push_back(value); return *this; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs in to an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& AddRedirectSignInURIs(Aws::String&& value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs.push_back(std::move(value)); return *this; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs in to an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& AddRedirectSignInURIs(const char* value) { m_redirectSignInURIsHasBeenSet = true; m_redirectSignInURIs.push_back(value); return *this; }


    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRedirectSignOutURIs() const{ return m_redirectSignOutURIs; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline bool RedirectSignOutURIsHasBeenSet() const { return m_redirectSignOutURIsHasBeenSet; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline void SetRedirectSignOutURIs(const Aws::Vector<Aws::String>& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs = value; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline void SetRedirectSignOutURIs(Aws::Vector<Aws::String>&& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs = std::move(value); }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithRedirectSignOutURIs(const Aws::Vector<Aws::String>& value) { SetRedirectSignOutURIs(value); return *this;}

    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithRedirectSignOutURIs(Aws::Vector<Aws::String>&& value) { SetRedirectSignOutURIs(std::move(value)); return *this;}

    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& AddRedirectSignOutURIs(const Aws::String& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs.push_back(value); return *this; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& AddRedirectSignOutURIs(Aws::String&& value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs.push_back(std::move(value)); return *this; }

    /**
     * <p>Redirect URLs that OAuth uses when a user signs out of an Amplify app.</p>
     */
    inline UpdateBackendAuthOAuthConfig& AddRedirectSignOutURIs(const char* value) { m_redirectSignOutURIsHasBeenSet = true; m_redirectSignOutURIs.push_back(value); return *this; }


    /**
     * <p>Describes third-party social federation configurations for allowing your
     * users to sign in with OAuth.</p>
     */
    inline const SocialProviderSettings& GetSocialProviderSettings() const{ return m_socialProviderSettings; }

    /**
     * <p>Describes third-party social federation configurations for allowing your
     * users to sign in with OAuth.</p>
     */
    inline bool SocialProviderSettingsHasBeenSet() const { return m_socialProviderSettingsHasBeenSet; }

    /**
     * <p>Describes third-party social federation configurations for allowing your
     * users to sign in with OAuth.</p>
     */
    inline void SetSocialProviderSettings(const SocialProviderSettings& value) { m_socialProviderSettingsHasBeenSet = true; m_socialProviderSettings = value; }

    /**
     * <p>Describes third-party social federation configurations for allowing your
     * users to sign in with OAuth.</p>
     */
    inline void SetSocialProviderSettings(SocialProviderSettings&& value) { m_socialProviderSettingsHasBeenSet = true; m_socialProviderSettings = std::move(value); }

    /**
     * <p>Describes third-party social federation configurations for allowing your
     * users to sign in with OAuth.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithSocialProviderSettings(const SocialProviderSettings& value) { SetSocialProviderSettings(value); return *this;}

    /**
     * <p>Describes third-party social federation configurations for allowing your
     * users to sign in with OAuth.</p>
     */
    inline UpdateBackendAuthOAuthConfig& WithSocialProviderSettings(SocialProviderSettings&& value) { SetSocialProviderSettings(std::move(value)); return *this;}

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
