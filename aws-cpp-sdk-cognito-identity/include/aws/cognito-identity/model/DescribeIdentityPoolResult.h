﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-identity/model/CognitoIdentityProvider.h>

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
   * An object representing a Cognito identity pool.
   */
  class AWS_COGNITOIDENTITY_API DescribeIdentityPoolResult
  {
  public:
    DescribeIdentityPoolResult();
    DescribeIdentityPoolResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeIdentityPoolResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolId.assign(value); }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline DescribeIdentityPoolResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline DescribeIdentityPoolResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline DescribeIdentityPoolResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

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
    inline void SetIdentityPoolName(Aws::String&& value) { m_identityPoolName = value; }

    /**
     * <p>A string that you provide.</p>
     */
    inline void SetIdentityPoolName(const char* value) { m_identityPoolName.assign(value); }

    /**
     * <p>A string that you provide.</p>
     */
    inline DescribeIdentityPoolResult& WithIdentityPoolName(const Aws::String& value) { SetIdentityPoolName(value); return *this;}

    /**
     * <p>A string that you provide.</p>
     */
    inline DescribeIdentityPoolResult& WithIdentityPoolName(Aws::String&& value) { SetIdentityPoolName(value); return *this;}

    /**
     * <p>A string that you provide.</p>
     */
    inline DescribeIdentityPoolResult& WithIdentityPoolName(const char* value) { SetIdentityPoolName(value); return *this;}

    /**
     * TRUE if the identity pool supports unauthenticated logins.
     */
    inline bool GetAllowUnauthenticatedIdentities() const{ return m_allowUnauthenticatedIdentities; }

    /**
     * TRUE if the identity pool supports unauthenticated logins.
     */
    inline void SetAllowUnauthenticatedIdentities(bool value) { m_allowUnauthenticatedIdentities = value; }

    /**
     * TRUE if the identity pool supports unauthenticated logins.
     */
    inline DescribeIdentityPoolResult& WithAllowUnauthenticatedIdentities(bool value) { SetAllowUnauthenticatedIdentities(value); return *this;}

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
    inline void SetSupportedLoginProviders(Aws::Map<Aws::String, Aws::String>&& value) { m_supportedLoginProviders = value; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline DescribeIdentityPoolResult& WithSupportedLoginProviders(const Aws::Map<Aws::String, Aws::String>& value) { SetSupportedLoginProviders(value); return *this;}

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline DescribeIdentityPoolResult& WithSupportedLoginProviders(Aws::Map<Aws::String, Aws::String>&& value) { SetSupportedLoginProviders(value); return *this;}

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline DescribeIdentityPoolResult& AddSupportedLoginProviders(const Aws::String& key, const Aws::String& value) { m_supportedLoginProviders[key] = value; return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline DescribeIdentityPoolResult& AddSupportedLoginProviders(Aws::String&& key, const Aws::String& value) { m_supportedLoginProviders[key] = value; return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline DescribeIdentityPoolResult& AddSupportedLoginProviders(const Aws::String& key, Aws::String&& value) { m_supportedLoginProviders[key] = value; return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline DescribeIdentityPoolResult& AddSupportedLoginProviders(Aws::String&& key, Aws::String&& value) { m_supportedLoginProviders[key] = value; return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline DescribeIdentityPoolResult& AddSupportedLoginProviders(const char* key, Aws::String&& value) { m_supportedLoginProviders[key] = value; return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline DescribeIdentityPoolResult& AddSupportedLoginProviders(Aws::String&& key, const char* value) { m_supportedLoginProviders[key] = value; return *this; }

    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline DescribeIdentityPoolResult& AddSupportedLoginProviders(const char* key, const char* value) { m_supportedLoginProviders[key] = value; return *this; }

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
    inline void SetDeveloperProviderName(Aws::String&& value) { m_developerProviderName = value; }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline void SetDeveloperProviderName(const char* value) { m_developerProviderName.assign(value); }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline DescribeIdentityPoolResult& WithDeveloperProviderName(const Aws::String& value) { SetDeveloperProviderName(value); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline DescribeIdentityPoolResult& WithDeveloperProviderName(Aws::String&& value) { SetDeveloperProviderName(value); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline DescribeIdentityPoolResult& WithDeveloperProviderName(const char* value) { SetDeveloperProviderName(value); return *this;}

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOpenIdConnectProviderARNs() const{ return m_openIdConnectProviderARNs; }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline void SetOpenIdConnectProviderARNs(const Aws::Vector<Aws::String>& value) { m_openIdConnectProviderARNs = value; }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline void SetOpenIdConnectProviderARNs(Aws::Vector<Aws::String>&& value) { m_openIdConnectProviderARNs = value; }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline DescribeIdentityPoolResult& WithOpenIdConnectProviderARNs(const Aws::Vector<Aws::String>& value) { SetOpenIdConnectProviderARNs(value); return *this;}

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline DescribeIdentityPoolResult& WithOpenIdConnectProviderARNs(Aws::Vector<Aws::String>&& value) { SetOpenIdConnectProviderARNs(value); return *this;}

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline DescribeIdentityPoolResult& AddOpenIdConnectProviderARNs(const Aws::String& value) { m_openIdConnectProviderARNs.push_back(value); return *this; }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline DescribeIdentityPoolResult& AddOpenIdConnectProviderARNs(Aws::String&& value) { m_openIdConnectProviderARNs.push_back(value); return *this; }

    /**
     * <p>A list of OpendID Connect provider ARNs.</p>
     */
    inline DescribeIdentityPoolResult& AddOpenIdConnectProviderARNs(const char* value) { m_openIdConnectProviderARNs.push_back(value); return *this; }

    /**
     * <p>A list representing an Amazon Cognito Identity User Pool and its client
     * ID.</p>
     */
    inline const Aws::Vector<CognitoIdentityProvider>& GetCognitoIdentityProviders() const{ return m_cognitoIdentityProviders; }

    /**
     * <p>A list representing an Amazon Cognito Identity User Pool and its client
     * ID.</p>
     */
    inline void SetCognitoIdentityProviders(const Aws::Vector<CognitoIdentityProvider>& value) { m_cognitoIdentityProviders = value; }

    /**
     * <p>A list representing an Amazon Cognito Identity User Pool and its client
     * ID.</p>
     */
    inline void SetCognitoIdentityProviders(Aws::Vector<CognitoIdentityProvider>&& value) { m_cognitoIdentityProviders = value; }

    /**
     * <p>A list representing an Amazon Cognito Identity User Pool and its client
     * ID.</p>
     */
    inline DescribeIdentityPoolResult& WithCognitoIdentityProviders(const Aws::Vector<CognitoIdentityProvider>& value) { SetCognitoIdentityProviders(value); return *this;}

    /**
     * <p>A list representing an Amazon Cognito Identity User Pool and its client
     * ID.</p>
     */
    inline DescribeIdentityPoolResult& WithCognitoIdentityProviders(Aws::Vector<CognitoIdentityProvider>&& value) { SetCognitoIdentityProviders(value); return *this;}

    /**
     * <p>A list representing an Amazon Cognito Identity User Pool and its client
     * ID.</p>
     */
    inline DescribeIdentityPoolResult& AddCognitoIdentityProviders(const CognitoIdentityProvider& value) { m_cognitoIdentityProviders.push_back(value); return *this; }

    /**
     * <p>A list representing an Amazon Cognito Identity User Pool and its client
     * ID.</p>
     */
    inline DescribeIdentityPoolResult& AddCognitoIdentityProviders(CognitoIdentityProvider&& value) { m_cognitoIdentityProviders.push_back(value); return *this; }

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
    inline void SetSamlProviderARNs(Aws::Vector<Aws::String>&& value) { m_samlProviderARNs = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline DescribeIdentityPoolResult& WithSamlProviderARNs(const Aws::Vector<Aws::String>& value) { SetSamlProviderARNs(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline DescribeIdentityPoolResult& WithSamlProviderARNs(Aws::Vector<Aws::String>&& value) { SetSamlProviderARNs(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline DescribeIdentityPoolResult& AddSamlProviderARNs(const Aws::String& value) { m_samlProviderARNs.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline DescribeIdentityPoolResult& AddSamlProviderARNs(Aws::String&& value) { m_samlProviderARNs.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline DescribeIdentityPoolResult& AddSamlProviderARNs(const char* value) { m_samlProviderARNs.push_back(value); return *this; }

  private:
    Aws::String m_identityPoolId;
    Aws::String m_identityPoolName;
    bool m_allowUnauthenticatedIdentities;
    Aws::Map<Aws::String, Aws::String> m_supportedLoginProviders;
    Aws::String m_developerProviderName;
    Aws::Vector<Aws::String> m_openIdConnectProviderARNs;
    Aws::Vector<CognitoIdentityProvider> m_cognitoIdentityProviders;
    Aws::Vector<Aws::String> m_samlProviderARNs;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
