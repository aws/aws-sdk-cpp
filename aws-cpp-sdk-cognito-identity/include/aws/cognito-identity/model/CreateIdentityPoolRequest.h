/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-identity/model/CognitoIdentityProvider.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the CreateIdentityPool action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/CreateIdentityPoolInput">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API CreateIdentityPoolRequest : public CognitoIdentityRequest
  {
  public:
    CreateIdentityPoolRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A string that you provide.</p>
     */
    inline const Aws::String& GetIdentityPoolName() const{ return m_identityPoolName; }

    /**
     * <p>A string that you provide.</p>
     */
    inline void SetIdentityPoolName(const Aws::String& value) { m_identityPoolNameHasBeenSet = true; m_identityPoolName = value; }

    /**
     * <p>A string that you provide.</p>
     */
    inline void SetIdentityPoolName(Aws::String&& value) { m_identityPoolNameHasBeenSet = true; m_identityPoolName = std::move(value); }

    /**
     * <p>A string that you provide.</p>
     */
    inline void SetIdentityPoolName(const char* value) { m_identityPoolNameHasBeenSet = true; m_identityPoolName.assign(value); }

    /**
     * <p>A string that you provide.</p>
     */
    inline CreateIdentityPoolRequest& WithIdentityPoolName(const Aws::String& value) { SetIdentityPoolName(value); return *this;}

    /**
     * <p>A string that you provide.</p>
     */
    inline CreateIdentityPoolRequest& WithIdentityPoolName(Aws::String&& value) { SetIdentityPoolName(std::move(value)); return *this;}

    /**
     * <p>A string that you provide.</p>
     */
    inline CreateIdentityPoolRequest& WithIdentityPoolName(const char* value) { SetIdentityPoolName(value); return *this;}

    /**
     * <p>TRUE if the identity pool supports unauthenticated logins.</p>
     */
    inline bool GetAllowUnauthenticatedIdentities() const{ return m_allowUnauthenticatedIdentities; }

    /**
     * <p>TRUE if the identity pool supports unauthenticated logins.</p>
     */
    inline void SetAllowUnauthenticatedIdentities(bool value) { m_allowUnauthenticatedIdentitiesHasBeenSet = true; m_allowUnauthenticatedIdentities = value; }

    /**
     * <p>TRUE if the identity pool supports unauthenticated logins.</p>
     */
    inline CreateIdentityPoolRequest& WithAllowUnauthenticatedIdentities(bool value) { SetAllowUnauthenticatedIdentities(value); return *this;}

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSupportedLoginProviders() const{ return m_supportedLoginProviders; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline void SetSupportedLoginProviders(const Aws::Map<Aws::String, Aws::String>& value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders = value; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline void SetSupportedLoginProviders(Aws::Map<Aws::String, Aws::String>&& value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders = std::move(value); }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline CreateIdentityPoolRequest& WithSupportedLoginProviders(const Aws::Map<Aws::String, Aws::String>& value) { SetSupportedLoginProviders(value); return *this;}

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline CreateIdentityPoolRequest& WithSupportedLoginProviders(Aws::Map<Aws::String, Aws::String>&& value) { SetSupportedLoginProviders(std::move(value)); return *this;}

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline CreateIdentityPoolRequest& AddSupportedLoginProviders(const Aws::String& key, const Aws::String& value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders.emplace(key, value); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline CreateIdentityPoolRequest& AddSupportedLoginProviders(Aws::String&& key, const Aws::String& value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline CreateIdentityPoolRequest& AddSupportedLoginProviders(const Aws::String& key, Aws::String&& value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline CreateIdentityPoolRequest& AddSupportedLoginProviders(Aws::String&& key, Aws::String&& value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline CreateIdentityPoolRequest& AddSupportedLoginProviders(const char* key, Aws::String&& value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline CreateIdentityPoolRequest& AddSupportedLoginProviders(Aws::String&& key, const char* value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline CreateIdentityPoolRequest& AddSupportedLoginProviders(const char* key, const char* value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders.emplace(key, value); return *this; }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This name acts as a
     * placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (<code>.</code>), underscore (<code>_</code>),
     * and dash (<code>-</code>).</p> <p>Once you have set a developer provider name,
     * you cannot change it. Please take care in setting this parameter.</p>
     */
    inline const Aws::String& GetDeveloperProviderName() const{ return m_developerProviderName; }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This name acts as a
     * placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (<code>.</code>), underscore (<code>_</code>),
     * and dash (<code>-</code>).</p> <p>Once you have set a developer provider name,
     * you cannot change it. Please take care in setting this parameter.</p>
     */
    inline void SetDeveloperProviderName(const Aws::String& value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName = value; }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This name acts as a
     * placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (<code>.</code>), underscore (<code>_</code>),
     * and dash (<code>-</code>).</p> <p>Once you have set a developer provider name,
     * you cannot change it. Please take care in setting this parameter.</p>
     */
    inline void SetDeveloperProviderName(Aws::String&& value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName = std::move(value); }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This name acts as a
     * placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (<code>.</code>), underscore (<code>_</code>),
     * and dash (<code>-</code>).</p> <p>Once you have set a developer provider name,
     * you cannot change it. Please take care in setting this parameter.</p>
     */
    inline void SetDeveloperProviderName(const char* value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName.assign(value); }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This name acts as a
     * placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (<code>.</code>), underscore (<code>_</code>),
     * and dash (<code>-</code>).</p> <p>Once you have set a developer provider name,
     * you cannot change it. Please take care in setting this parameter.</p>
     */
    inline CreateIdentityPoolRequest& WithDeveloperProviderName(const Aws::String& value) { SetDeveloperProviderName(value); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users. This name acts as a
     * placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (<code>.</code>), underscore (<code>_</code>),
     * and dash (<code>-</code>).</p> <p>Once you have set a developer provider name,
     * you cannot change it. Please take care in setting this parameter.</p>
     */
    inline CreateIdentityPoolRequest& WithDeveloperProviderName(Aws::String&& value) { SetDeveloperProviderName(std::move(value)); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users. This name acts as a
     * placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (<code>.</code>), underscore (<code>_</code>),
     * and dash (<code>-</code>).</p> <p>Once you have set a developer provider name,
     * you cannot change it. Please take care in setting this parameter.</p>
     */
    inline CreateIdentityPoolRequest& WithDeveloperProviderName(const char* value) { SetDeveloperProviderName(value); return *this;}

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOpenIdConnectProviderARNs() const{ return m_openIdConnectProviderARNs; }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline void SetOpenIdConnectProviderARNs(const Aws::Vector<Aws::String>& value) { m_openIdConnectProviderARNsHasBeenSet = true; m_openIdConnectProviderARNs = value; }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline void SetOpenIdConnectProviderARNs(Aws::Vector<Aws::String>&& value) { m_openIdConnectProviderARNsHasBeenSet = true; m_openIdConnectProviderARNs = std::move(value); }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline CreateIdentityPoolRequest& WithOpenIdConnectProviderARNs(const Aws::Vector<Aws::String>& value) { SetOpenIdConnectProviderARNs(value); return *this;}

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline CreateIdentityPoolRequest& WithOpenIdConnectProviderARNs(Aws::Vector<Aws::String>&& value) { SetOpenIdConnectProviderARNs(std::move(value)); return *this;}

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline CreateIdentityPoolRequest& AddOpenIdConnectProviderARNs(const Aws::String& value) { m_openIdConnectProviderARNsHasBeenSet = true; m_openIdConnectProviderARNs.push_back(value); return *this; }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline CreateIdentityPoolRequest& AddOpenIdConnectProviderARNs(Aws::String&& value) { m_openIdConnectProviderARNsHasBeenSet = true; m_openIdConnectProviderARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline CreateIdentityPoolRequest& AddOpenIdConnectProviderARNs(const char* value) { m_openIdConnectProviderARNsHasBeenSet = true; m_openIdConnectProviderARNs.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Cognito Identity user pools and their client IDs.</p>
     */
    inline const Aws::Vector<CognitoIdentityProvider>& GetCognitoIdentityProviders() const{ return m_cognitoIdentityProviders; }

    /**
     * <p>An array of Amazon Cognito Identity user pools and their client IDs.</p>
     */
    inline void SetCognitoIdentityProviders(const Aws::Vector<CognitoIdentityProvider>& value) { m_cognitoIdentityProvidersHasBeenSet = true; m_cognitoIdentityProviders = value; }

    /**
     * <p>An array of Amazon Cognito Identity user pools and their client IDs.</p>
     */
    inline void SetCognitoIdentityProviders(Aws::Vector<CognitoIdentityProvider>&& value) { m_cognitoIdentityProvidersHasBeenSet = true; m_cognitoIdentityProviders = std::move(value); }

    /**
     * <p>An array of Amazon Cognito Identity user pools and their client IDs.</p>
     */
    inline CreateIdentityPoolRequest& WithCognitoIdentityProviders(const Aws::Vector<CognitoIdentityProvider>& value) { SetCognitoIdentityProviders(value); return *this;}

    /**
     * <p>An array of Amazon Cognito Identity user pools and their client IDs.</p>
     */
    inline CreateIdentityPoolRequest& WithCognitoIdentityProviders(Aws::Vector<CognitoIdentityProvider>&& value) { SetCognitoIdentityProviders(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Cognito Identity user pools and their client IDs.</p>
     */
    inline CreateIdentityPoolRequest& AddCognitoIdentityProviders(const CognitoIdentityProvider& value) { m_cognitoIdentityProvidersHasBeenSet = true; m_cognitoIdentityProviders.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Cognito Identity user pools and their client IDs.</p>
     */
    inline CreateIdentityPoolRequest& AddCognitoIdentityProviders(CognitoIdentityProvider&& value) { m_cognitoIdentityProvidersHasBeenSet = true; m_cognitoIdentityProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSamlProviderARNs() const{ return m_samlProviderARNs; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline void SetSamlProviderARNs(const Aws::Vector<Aws::String>& value) { m_samlProviderARNsHasBeenSet = true; m_samlProviderARNs = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline void SetSamlProviderARNs(Aws::Vector<Aws::String>&& value) { m_samlProviderARNsHasBeenSet = true; m_samlProviderARNs = std::move(value); }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline CreateIdentityPoolRequest& WithSamlProviderARNs(const Aws::Vector<Aws::String>& value) { SetSamlProviderARNs(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline CreateIdentityPoolRequest& WithSamlProviderARNs(Aws::Vector<Aws::String>&& value) { SetSamlProviderARNs(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline CreateIdentityPoolRequest& AddSamlProviderARNs(const Aws::String& value) { m_samlProviderARNsHasBeenSet = true; m_samlProviderARNs.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline CreateIdentityPoolRequest& AddSamlProviderARNs(Aws::String&& value) { m_samlProviderARNsHasBeenSet = true; m_samlProviderARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline CreateIdentityPoolRequest& AddSamlProviderARNs(const char* value) { m_samlProviderARNsHasBeenSet = true; m_samlProviderARNs.push_back(value); return *this; }

  private:
    Aws::String m_identityPoolName;
    bool m_identityPoolNameHasBeenSet;
    bool m_allowUnauthenticatedIdentities;
    bool m_allowUnauthenticatedIdentitiesHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_supportedLoginProviders;
    bool m_supportedLoginProvidersHasBeenSet;
    Aws::String m_developerProviderName;
    bool m_developerProviderNameHasBeenSet;
    Aws::Vector<Aws::String> m_openIdConnectProviderARNs;
    bool m_openIdConnectProviderARNsHasBeenSet;
    Aws::Vector<CognitoIdentityProvider> m_cognitoIdentityProviders;
    bool m_cognitoIdentityProvidersHasBeenSet;
    Aws::Vector<Aws::String> m_samlProviderARNs;
    bool m_samlProviderARNsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
