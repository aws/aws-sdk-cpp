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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The request representing the confirmation for a password reset.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ConfirmForgotPasswordRequest : public CognitoIdentityProviderRequest
  {
  public:
    ConfirmForgotPasswordRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline ConfirmForgotPasswordRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline ConfirmForgotPasswordRequest& WithClientId(Aws::String&& value) { SetClientId(value); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline ConfirmForgotPasswordRequest& WithClientId(const char* value) { SetClientId(value); return *this;}

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline const Aws::String& GetSecretHash() const{ return m_secretHash; }

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline void SetSecretHash(const Aws::String& value) { m_secretHashHasBeenSet = true; m_secretHash = value; }

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline void SetSecretHash(Aws::String&& value) { m_secretHashHasBeenSet = true; m_secretHash = value; }

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline void SetSecretHash(const char* value) { m_secretHashHasBeenSet = true; m_secretHash.assign(value); }

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline ConfirmForgotPasswordRequest& WithSecretHash(const Aws::String& value) { SetSecretHash(value); return *this;}

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline ConfirmForgotPasswordRequest& WithSecretHash(Aws::String&& value) { SetSecretHash(value); return *this;}

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline ConfirmForgotPasswordRequest& WithSecretHash(const char* value) { SetSecretHash(value); return *this;}

    /**
     * <p>The user name of the user for whom you want to enter a code to retrieve a
     * forgotten password.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user for whom you want to enter a code to retrieve a
     * forgotten password.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user for whom you want to enter a code to retrieve a
     * forgotten password.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user for whom you want to enter a code to retrieve a
     * forgotten password.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name of the user for whom you want to enter a code to retrieve a
     * forgotten password.</p>
     */
    inline ConfirmForgotPasswordRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user for whom you want to enter a code to retrieve a
     * forgotten password.</p>
     */
    inline ConfirmForgotPasswordRequest& WithUsername(Aws::String&& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user for whom you want to enter a code to retrieve a
     * forgotten password.</p>
     */
    inline ConfirmForgotPasswordRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

    /**
     * <p>The confirmation code sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline const Aws::String& GetConfirmationCode() const{ return m_confirmationCode; }

    /**
     * <p>The confirmation code sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline void SetConfirmationCode(const Aws::String& value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode = value; }

    /**
     * <p>The confirmation code sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline void SetConfirmationCode(Aws::String&& value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode = value; }

    /**
     * <p>The confirmation code sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline void SetConfirmationCode(const char* value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode.assign(value); }

    /**
     * <p>The confirmation code sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline ConfirmForgotPasswordRequest& WithConfirmationCode(const Aws::String& value) { SetConfirmationCode(value); return *this;}

    /**
     * <p>The confirmation code sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline ConfirmForgotPasswordRequest& WithConfirmationCode(Aws::String&& value) { SetConfirmationCode(value); return *this;}

    /**
     * <p>The confirmation code sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline ConfirmForgotPasswordRequest& WithConfirmationCode(const char* value) { SetConfirmationCode(value); return *this;}

    /**
     * <p>The password sent by sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password sent by sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password sent by sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password sent by sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password sent by sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline ConfirmForgotPasswordRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password sent by sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline ConfirmForgotPasswordRequest& WithPassword(Aws::String&& value) { SetPassword(value); return *this;}

    /**
     * <p>The password sent by sent by a user's request to retrieve a forgotten
     * password.</p>
     */
    inline ConfirmForgotPasswordRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:
    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;
    Aws::String m_secretHash;
    bool m_secretHashHasBeenSet;
    Aws::String m_username;
    bool m_usernameHasBeenSet;
    Aws::String m_confirmationCode;
    bool m_confirmationCodeHasBeenSet;
    Aws::String m_password;
    bool m_passwordHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
