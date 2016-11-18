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
   * Input to the GetId action.
   */
  class AWS_COGNITOIDENTITY_API GetIdRequest : public CognitoIdentityRequest
  {
  public:
    GetIdRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * A standard AWS account ID (9+ digits).
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * A standard AWS account ID (9+ digits).
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * A standard AWS account ID (9+ digits).
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * A standard AWS account ID (9+ digits).
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * A standard AWS account ID (9+ digits).
     */
    inline GetIdRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * A standard AWS account ID (9+ digits).
     */
    inline GetIdRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * A standard AWS account ID (9+ digits).
     */
    inline GetIdRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline GetIdRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline GetIdRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline GetIdRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline void SetLogins(const Aws::Map<Aws::String, Aws::String>& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline void SetLogins(Aws::Map<Aws::String, Aws::String>&& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline GetIdRequest& WithLogins(const Aws::Map<Aws::String, Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline GetIdRequest& WithLogins(Aws::Map<Aws::String, Aws::String>&& value) { SetLogins(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline GetIdRequest& AddLogins(const Aws::String& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline GetIdRequest& AddLogins(Aws::String&& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline GetIdRequest& AddLogins(const Aws::String& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline GetIdRequest& AddLogins(Aws::String&& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline GetIdRequest& AddLogins(const char* key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline GetIdRequest& AddLogins(Aws::String&& key, const char* value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p> <p>The available provider names for <code>Logins</code> are as
     * follows: <ul> <li>Facebook: <code>graph.facebook.com</code></li> <li>Google:
     * <code>accounts.google.com</code></li> <li>Amazon:
     * <code>www.amazon.com</code></li> <li>Twitter: <code>api.twitter.com</code></li>
     * <li>Digits: <code>www.digits.com</code></li> </ul> </p>
     */
    inline GetIdRequest& AddLogins(const char* key, const char* value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_logins;
    bool m_loginsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
