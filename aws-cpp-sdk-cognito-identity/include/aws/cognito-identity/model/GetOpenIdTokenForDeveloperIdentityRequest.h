/*
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
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the <code>GetOpenIdTokenForDeveloperIdentity</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetOpenIdTokenForDeveloperIdentityInput">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API GetOpenIdTokenForDeveloperIdentityRequest : public CognitoIdentityRequest
  {
  public:
    GetOpenIdTokenForDeveloperIdentityRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline void SetLogins(const Aws::Map<Aws::String, Aws::String>& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline void SetLogins(Aws::Map<Aws::String, Aws::String>&& value) { m_loginsHasBeenSet = true; m_logins = std::move(value); }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& WithLogins(const Aws::Map<Aws::String, Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& WithLogins(Aws::Map<Aws::String, Aws::String>&& value) { SetLogins(std::move(value)); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& AddLogins(const Aws::String& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins.emplace(key, value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& AddLogins(Aws::String&& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& AddLogins(const Aws::String& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& AddLogins(Aws::String&& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& AddLogins(const char* key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& AddLogins(Aws::String&& key, const char* value) { m_loginsHasBeenSet = true; m_logins.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. Each name-value pair represents a user from a public provider or
     * developer provider. If the user is from a developer provider, the name-value
     * pair will follow the syntax <code>"developer_provider_name":
     * "developer_user_identifier"</code>. The developer provider is the "domain" by
     * which Cognito will refer to your users; you provided this domain while
     * creating/updating the identity pool. The developer user identifier is an
     * identifier from your backend that uniquely identifies a user. When you create an
     * identity pool, you can specify the supported logins.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& AddLogins(const char* key, const char* value) { m_loginsHasBeenSet = true; m_logins.emplace(key, value); return *this; }

    /**
     * <p>The expiration time of the token, in seconds. You can specify a custom
     * expiration time for the token so that you can cache it. If you don't provide an
     * expiration time, the token is valid for 15 minutes. You can exchange the token
     * with Amazon STS for temporary AWS credentials, which are valid for a maximum of
     * one hour. The maximum token duration you can set is 24 hours. You should take
     * care in setting the expiration time for a token, as there are significant
     * security implications: an attacker could use a leaked token to access your AWS
     * resources for the token's duration.</p>
     */
    inline long long GetTokenDuration() const{ return m_tokenDuration; }

    /**
     * <p>The expiration time of the token, in seconds. You can specify a custom
     * expiration time for the token so that you can cache it. If you don't provide an
     * expiration time, the token is valid for 15 minutes. You can exchange the token
     * with Amazon STS for temporary AWS credentials, which are valid for a maximum of
     * one hour. The maximum token duration you can set is 24 hours. You should take
     * care in setting the expiration time for a token, as there are significant
     * security implications: an attacker could use a leaked token to access your AWS
     * resources for the token's duration.</p>
     */
    inline void SetTokenDuration(long long value) { m_tokenDurationHasBeenSet = true; m_tokenDuration = value; }

    /**
     * <p>The expiration time of the token, in seconds. You can specify a custom
     * expiration time for the token so that you can cache it. If you don't provide an
     * expiration time, the token is valid for 15 minutes. You can exchange the token
     * with Amazon STS for temporary AWS credentials, which are valid for a maximum of
     * one hour. The maximum token duration you can set is 24 hours. You should take
     * care in setting the expiration time for a token, as there are significant
     * security implications: an attacker could use a leaked token to access your AWS
     * resources for the token's duration.</p>
     */
    inline GetOpenIdTokenForDeveloperIdentityRequest& WithTokenDuration(long long value) { SetTokenDuration(value); return *this;}

  private:
    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;
    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_logins;
    bool m_loginsHasBeenSet;
    long long m_tokenDuration;
    bool m_tokenDurationHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
