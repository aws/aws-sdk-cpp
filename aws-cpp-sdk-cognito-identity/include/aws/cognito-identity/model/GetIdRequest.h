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
   * <p>Input to the GetId action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetIdInput">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API GetIdRequest : public CognitoIdentityRequest
  {
  public:
    GetIdRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A standard AWS account ID (9+ digits).</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>A standard AWS account ID (9+ digits).</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>A standard AWS account ID (9+ digits).</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>A standard AWS account ID (9+ digits).</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>A standard AWS account ID (9+ digits).</p>
     */
    inline GetIdRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>A standard AWS account ID (9+ digits).</p>
     */
    inline GetIdRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>A standard AWS account ID (9+ digits).</p>
     */
    inline GetIdRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

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
    inline GetIdRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline GetIdRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline GetIdRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline void SetLogins(const Aws::Map<Aws::String, Aws::String>& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline void SetLogins(Aws::Map<Aws::String, Aws::String>&& value) { m_loginsHasBeenSet = true; m_logins = std::move(value); }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline GetIdRequest& WithLogins(const Aws::Map<Aws::String, Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline GetIdRequest& WithLogins(Aws::Map<Aws::String, Aws::String>&& value) { SetLogins(std::move(value)); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline GetIdRequest& AddLogins(const Aws::String& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins.emplace(key, value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline GetIdRequest& AddLogins(Aws::String&& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline GetIdRequest& AddLogins(const Aws::String& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline GetIdRequest& AddLogins(Aws::String&& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline GetIdRequest& AddLogins(const char* key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline GetIdRequest& AddLogins(Aws::String&& key, const char* value) { m_loginsHasBeenSet = true; m_logins.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito Identity Provider:
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code> </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline GetIdRequest& AddLogins(const char* key, const char* value) { m_loginsHasBeenSet = true; m_logins.emplace(key, value); return *this; }

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
