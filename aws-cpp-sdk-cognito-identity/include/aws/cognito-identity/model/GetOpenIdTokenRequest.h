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

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * Input to the GetOpenIdToken action.
   */
  class AWS_COGNITOIDENTITY_API GetOpenIdTokenRequest : public CognitoIdentityRequest
  {
  public:
    GetOpenIdTokenRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline GetOpenIdTokenRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline GetOpenIdTokenRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(value); return *this;}

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline GetOpenIdTokenRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline void SetLogins(const Aws::Map<Aws::String, Aws::String>& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline void SetLogins(Aws::Map<Aws::String, Aws::String>&& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline GetOpenIdTokenRequest& WithLogins(const Aws::Map<Aws::String, Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline GetOpenIdTokenRequest& WithLogins(Aws::Map<Aws::String, Aws::String>&& value) { SetLogins(value); return *this;}

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline GetOpenIdTokenRequest& AddLogins(const Aws::String& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline GetOpenIdTokenRequest& AddLogins(Aws::String&& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline GetOpenIdTokenRequest& AddLogins(const Aws::String& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline GetOpenIdTokenRequest& AddLogins(Aws::String&& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline GetOpenIdTokenRequest& AddLogins(const char* key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline GetOpenIdTokenRequest& AddLogins(Aws::String&& key, const char* value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     * When using graph.facebook.com and www.amazon.com, supply the access_token
     * returned from the provider's authflow. For accounts.google.com or any other
     * OpenId Connect provider, always include the id_token.
     */
    inline GetOpenIdTokenRequest& AddLogins(const char* key, const char* value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

  private:
    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_logins;
    bool m_loginsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
