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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AttributeType.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to register a user.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SignUpRequest : public CognitoIdentityProviderRequest
  {
  public:
    SignUpRequest();
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
    inline SignUpRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline SignUpRequest& WithClientId(Aws::String&& value) { SetClientId(value); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline SignUpRequest& WithClientId(const char* value) { SetClientId(value); return *this;}

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
    inline SignUpRequest& WithSecretHash(const Aws::String& value) { SetSecretHash(value); return *this;}

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline SignUpRequest& WithSecretHash(Aws::String&& value) { SetSecretHash(value); return *this;}

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline SignUpRequest& WithSecretHash(const char* value) { SetSecretHash(value); return *this;}

    /**
     * <p>The user name of the user you wish to register.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user you wish to register.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user you wish to register.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user you wish to register.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name of the user you wish to register.</p>
     */
    inline SignUpRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user you wish to register.</p>
     */
    inline SignUpRequest& WithUsername(Aws::String&& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user you wish to register.</p>
     */
    inline SignUpRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

    /**
     * <p>The password of the user you wish to register.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password of the user you wish to register.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of the user you wish to register.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of the user you wish to register.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password of the user you wish to register.</p>
     */
    inline SignUpRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of the user you wish to register.</p>
     */
    inline SignUpRequest& WithPassword(Aws::String&& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of the user you wish to register.</p>
     */
    inline SignUpRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline SignUpRequest& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline SignUpRequest& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline SignUpRequest& AddUserAttributes(const AttributeType& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline SignUpRequest& AddUserAttributes(AttributeType&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>The validation data in the request to register a user.</p>
     */
    inline const Aws::Vector<AttributeType>& GetValidationData() const{ return m_validationData; }

    /**
     * <p>The validation data in the request to register a user.</p>
     */
    inline void SetValidationData(const Aws::Vector<AttributeType>& value) { m_validationDataHasBeenSet = true; m_validationData = value; }

    /**
     * <p>The validation data in the request to register a user.</p>
     */
    inline void SetValidationData(Aws::Vector<AttributeType>&& value) { m_validationDataHasBeenSet = true; m_validationData = value; }

    /**
     * <p>The validation data in the request to register a user.</p>
     */
    inline SignUpRequest& WithValidationData(const Aws::Vector<AttributeType>& value) { SetValidationData(value); return *this;}

    /**
     * <p>The validation data in the request to register a user.</p>
     */
    inline SignUpRequest& WithValidationData(Aws::Vector<AttributeType>&& value) { SetValidationData(value); return *this;}

    /**
     * <p>The validation data in the request to register a user.</p>
     */
    inline SignUpRequest& AddValidationData(const AttributeType& value) { m_validationDataHasBeenSet = true; m_validationData.push_back(value); return *this; }

    /**
     * <p>The validation data in the request to register a user.</p>
     */
    inline SignUpRequest& AddValidationData(AttributeType&& value) { m_validationDataHasBeenSet = true; m_validationData.push_back(value); return *this; }

  private:
    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;
    Aws::String m_secretHash;
    bool m_secretHashHasBeenSet;
    Aws::String m_username;
    bool m_usernameHasBeenSet;
    Aws::String m_password;
    bool m_passwordHasBeenSet;
    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet;
    Aws::Vector<AttributeType> m_validationData;
    bool m_validationDataHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
