﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-identity/model/CognitoIdentityProvider.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentity
{
namespace Model
{
  /**
   * <p>An object representing an Amazon Cognito identity pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/IdentityPool">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API UpdateIdentityPoolResult
  {
  public:
    UpdateIdentityPoolResult();
    UpdateIdentityPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateIdentityPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolId = value; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolId = std::move(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolId.assign(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline UpdateIdentityPoolResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline UpdateIdentityPoolResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline UpdateIdentityPoolResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>A string that you provide.</p>
     */
    inline const Aws::String& GetIdentityPoolName() const{ return m_identityPoolName; }

    /**
     * <p>A string that you provide.</p>
     */
    inline void SetIdentityPoolName(const Aws::String& value) { m_identityPoolName = value; }

    /**
     * <p>A string that you provide.</p>
     */
    inline void SetIdentityPoolName(Aws::String&& value) { m_identityPoolName = std::move(value); }

    /**
     * <p>A string that you provide.</p>
     */
    inline void SetIdentityPoolName(const char* value) { m_identityPoolName.assign(value); }

    /**
     * <p>A string that you provide.</p>
     */
    inline UpdateIdentityPoolResult& WithIdentityPoolName(const Aws::String& value) { SetIdentityPoolName(value); return *this;}

    /**
     * <p>A string that you provide.</p>
     */
    inline UpdateIdentityPoolResult& WithIdentityPoolName(Aws::String&& value) { SetIdentityPoolName(std::move(value)); return *this;}

    /**
     * <p>A string that you provide.</p>
     */
    inline UpdateIdentityPoolResult& WithIdentityPoolName(const char* value) { SetIdentityPoolName(value); return *this;}


    /**
     * <p>TRUE if the identity pool supports unauthenticated logins.</p>
     */
    inline bool GetAllowUnauthenticatedIdentities() const{ return m_allowUnauthenticatedIdentities; }

    /**
     * <p>TRUE if the identity pool supports unauthenticated logins.</p>
     */
    inline void SetAllowUnauthenticatedIdentities(bool value) { m_allowUnauthenticatedIdentities = value; }

    /**
     * <p>TRUE if the identity pool supports unauthenticated logins.</p>
     */
    inline UpdateIdentityPoolResult& WithAllowUnauthenticatedIdentities(bool value) { SetAllowUnauthenticatedIdentities(value); return *this;}


    /**
     * <p>Enables or disables the Basic (Classic) authentication flow. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Identity
     * Pools (Federated Identities) Authentication Flow</a> in the <i>Amazon Cognito
     * Developer Guide</i>.</p>
     */
    inline bool GetAllowClassicFlow() const{ return m_allowClassicFlow; }

    /**
     * <p>Enables or disables the Basic (Classic) authentication flow. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Identity
     * Pools (Federated Identities) Authentication Flow</a> in the <i>Amazon Cognito
     * Developer Guide</i>.</p>
     */
    inline void SetAllowClassicFlow(bool value) { m_allowClassicFlow = value; }

    /**
     * <p>Enables or disables the Basic (Classic) authentication flow. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Identity
     * Pools (Federated Identities) Authentication Flow</a> in the <i>Amazon Cognito
     * Developer Guide</i>.</p>
     */
    inline UpdateIdentityPoolResult& WithAllowClassicFlow(bool value) { SetAllowClassicFlow(value); return *this;}


    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSupportedLoginProviders() const{ return m_supportedLoginProviders; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline void SetSupportedLoginProviders(const Aws::Map<Aws::String, Aws::String>& value) { m_supportedLoginProviders = value; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline void SetSupportedLoginProviders(Aws::Map<Aws::String, Aws::String>&& value) { m_supportedLoginProviders = std::move(value); }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline UpdateIdentityPoolResult& WithSupportedLoginProviders(const Aws::Map<Aws::String, Aws::String>& value) { SetSupportedLoginProviders(value); return *this;}

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline UpdateIdentityPoolResult& WithSupportedLoginProviders(Aws::Map<Aws::String, Aws::String>&& value) { SetSupportedLoginProviders(std::move(value)); return *this;}

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline UpdateIdentityPoolResult& AddSupportedLoginProviders(const Aws::String& key, const Aws::String& value) { m_supportedLoginProviders.emplace(key, value); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline UpdateIdentityPoolResult& AddSupportedLoginProviders(Aws::String&& key, const Aws::String& value) { m_supportedLoginProviders.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline UpdateIdentityPoolResult& AddSupportedLoginProviders(const Aws::String& key, Aws::String&& value) { m_supportedLoginProviders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline UpdateIdentityPoolResult& AddSupportedLoginProviders(Aws::String&& key, Aws::String&& value) { m_supportedLoginProviders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline UpdateIdentityPoolResult& AddSupportedLoginProviders(const char* key, Aws::String&& value) { m_supportedLoginProviders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline UpdateIdentityPoolResult& AddSupportedLoginProviders(Aws::String&& key, const char* value) { m_supportedLoginProviders.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline UpdateIdentityPoolResult& AddSupportedLoginProviders(const char* key, const char* value) { m_supportedLoginProviders.emplace(key, value); return *this; }


    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline const Aws::String& GetDeveloperProviderName() const{ return m_developerProviderName; }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline void SetDeveloperProviderName(const Aws::String& value) { m_developerProviderName = value; }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline void SetDeveloperProviderName(Aws::String&& value) { m_developerProviderName = std::move(value); }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline void SetDeveloperProviderName(const char* value) { m_developerProviderName.assign(value); }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline UpdateIdentityPoolResult& WithDeveloperProviderName(const Aws::String& value) { SetDeveloperProviderName(value); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline UpdateIdentityPoolResult& WithDeveloperProviderName(Aws::String&& value) { SetDeveloperProviderName(std::move(value)); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline UpdateIdentityPoolResult& WithDeveloperProviderName(const char* value) { SetDeveloperProviderName(value); return *this;}


    /**
     * <p>The ARNs of the OpenID Connect providers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOpenIdConnectProviderARNs() const{ return m_openIdConnectProviderARNs; }

    /**
     * <p>The ARNs of the OpenID Connect providers.</p>
     */
    inline void SetOpenIdConnectProviderARNs(const Aws::Vector<Aws::String>& value) { m_openIdConnectProviderARNs = value; }

    /**
     * <p>The ARNs of the OpenID Connect providers.</p>
     */
    inline void SetOpenIdConnectProviderARNs(Aws::Vector<Aws::String>&& value) { m_openIdConnectProviderARNs = std::move(value); }

    /**
     * <p>The ARNs of the OpenID Connect providers.</p>
     */
    inline UpdateIdentityPoolResult& WithOpenIdConnectProviderARNs(const Aws::Vector<Aws::String>& value) { SetOpenIdConnectProviderARNs(value); return *this;}

    /**
     * <p>The ARNs of the OpenID Connect providers.</p>
     */
    inline UpdateIdentityPoolResult& WithOpenIdConnectProviderARNs(Aws::Vector<Aws::String>&& value) { SetOpenIdConnectProviderARNs(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the OpenID Connect providers.</p>
     */
    inline UpdateIdentityPoolResult& AddOpenIdConnectProviderARNs(const Aws::String& value) { m_openIdConnectProviderARNs.push_back(value); return *this; }

    /**
     * <p>The ARNs of the OpenID Connect providers.</p>
     */
    inline UpdateIdentityPoolResult& AddOpenIdConnectProviderARNs(Aws::String&& value) { m_openIdConnectProviderARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the OpenID Connect providers.</p>
     */
    inline UpdateIdentityPoolResult& AddOpenIdConnectProviderARNs(const char* value) { m_openIdConnectProviderARNs.push_back(value); return *this; }


    /**
     * <p>A list representing an Amazon Cognito user pool and its client ID.</p>
     */
    inline const Aws::Vector<CognitoIdentityProvider>& GetCognitoIdentityProviders() const{ return m_cognitoIdentityProviders; }

    /**
     * <p>A list representing an Amazon Cognito user pool and its client ID.</p>
     */
    inline void SetCognitoIdentityProviders(const Aws::Vector<CognitoIdentityProvider>& value) { m_cognitoIdentityProviders = value; }

    /**
     * <p>A list representing an Amazon Cognito user pool and its client ID.</p>
     */
    inline void SetCognitoIdentityProviders(Aws::Vector<CognitoIdentityProvider>&& value) { m_cognitoIdentityProviders = std::move(value); }

    /**
     * <p>A list representing an Amazon Cognito user pool and its client ID.</p>
     */
    inline UpdateIdentityPoolResult& WithCognitoIdentityProviders(const Aws::Vector<CognitoIdentityProvider>& value) { SetCognitoIdentityProviders(value); return *this;}

    /**
     * <p>A list representing an Amazon Cognito user pool and its client ID.</p>
     */
    inline UpdateIdentityPoolResult& WithCognitoIdentityProviders(Aws::Vector<CognitoIdentityProvider>&& value) { SetCognitoIdentityProviders(std::move(value)); return *this;}

    /**
     * <p>A list representing an Amazon Cognito user pool and its client ID.</p>
     */
    inline UpdateIdentityPoolResult& AddCognitoIdentityProviders(const CognitoIdentityProvider& value) { m_cognitoIdentityProviders.push_back(value); return *this; }

    /**
     * <p>A list representing an Amazon Cognito user pool and its client ID.</p>
     */
    inline UpdateIdentityPoolResult& AddCognitoIdentityProviders(CognitoIdentityProvider&& value) { m_cognitoIdentityProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSamlProviderARNs() const{ return m_samlProviderARNs; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline void SetSamlProviderARNs(const Aws::Vector<Aws::String>& value) { m_samlProviderARNs = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline void SetSamlProviderARNs(Aws::Vector<Aws::String>&& value) { m_samlProviderARNs = std::move(value); }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline UpdateIdentityPoolResult& WithSamlProviderARNs(const Aws::Vector<Aws::String>& value) { SetSamlProviderARNs(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline UpdateIdentityPoolResult& WithSamlProviderARNs(Aws::Vector<Aws::String>&& value) { SetSamlProviderARNs(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline UpdateIdentityPoolResult& AddSamlProviderARNs(const Aws::String& value) { m_samlProviderARNs.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline UpdateIdentityPoolResult& AddSamlProviderARNs(Aws::String&& value) { m_samlProviderARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline UpdateIdentityPoolResult& AddSamlProviderARNs(const char* value) { m_samlProviderARNs.push_back(value); return *this; }


    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIdentityPoolTags() const{ return m_identityPoolTags; }

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline void SetIdentityPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { m_identityPoolTags = value; }

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline void SetIdentityPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { m_identityPoolTags = std::move(value); }

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateIdentityPoolResult& WithIdentityPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { SetIdentityPoolTags(value); return *this;}

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateIdentityPoolResult& WithIdentityPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { SetIdentityPoolTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateIdentityPoolResult& AddIdentityPoolTags(const Aws::String& key, const Aws::String& value) { m_identityPoolTags.emplace(key, value); return *this; }

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateIdentityPoolResult& AddIdentityPoolTags(Aws::String&& key, const Aws::String& value) { m_identityPoolTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateIdentityPoolResult& AddIdentityPoolTags(const Aws::String& key, Aws::String&& value) { m_identityPoolTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateIdentityPoolResult& AddIdentityPoolTags(Aws::String&& key, Aws::String&& value) { m_identityPoolTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateIdentityPoolResult& AddIdentityPoolTags(const char* key, Aws::String&& value) { m_identityPoolTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateIdentityPoolResult& AddIdentityPoolTags(Aws::String&& key, const char* value) { m_identityPoolTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateIdentityPoolResult& AddIdentityPoolTags(const char* key, const char* value) { m_identityPoolTags.emplace(key, value); return *this; }

  private:

    Aws::String m_identityPoolId;

    Aws::String m_identityPoolName;

    bool m_allowUnauthenticatedIdentities;

    bool m_allowClassicFlow;

    Aws::Map<Aws::String, Aws::String> m_supportedLoginProviders;

    Aws::String m_developerProviderName;

    Aws::Vector<Aws::String> m_openIdConnectProviderARNs;

    Aws::Vector<CognitoIdentityProvider> m_cognitoIdentityProviders;

    Aws::Vector<Aws::String> m_samlProviderARNs;

    Aws::Map<Aws::String, Aws::String> m_identityPoolTags;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
