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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/AnalyticsMetadataType.h>
#include <aws/cognito-idp/model/UserContextDataType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to confirm registration of a user.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmSignUpRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ConfirmSignUpRequest : public CognitoIdentityProviderRequest
  {
  public:
    ConfirmSignUpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmSignUp"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the app client associated with the user pool.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The ID of the app client associated with the user pool.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The ID of the app client associated with the user pool.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The ID of the app client associated with the user pool.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The ID of the app client associated with the user pool.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The ID of the app client associated with the user pool.</p>
     */
    inline ConfirmSignUpRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The ID of the app client associated with the user pool.</p>
     */
    inline ConfirmSignUpRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The ID of the app client associated with the user pool.</p>
     */
    inline ConfirmSignUpRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline const Aws::String& GetSecretHash() const{ return m_secretHash; }

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline bool SecretHashHasBeenSet() const { return m_secretHashHasBeenSet; }

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline void SetSecretHash(const Aws::String& value) { m_secretHashHasBeenSet = true; m_secretHash = value; }

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline void SetSecretHash(Aws::String&& value) { m_secretHashHasBeenSet = true; m_secretHash = std::move(value); }

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline void SetSecretHash(const char* value) { m_secretHashHasBeenSet = true; m_secretHash.assign(value); }

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline ConfirmSignUpRequest& WithSecretHash(const Aws::String& value) { SetSecretHash(value); return *this;}

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline ConfirmSignUpRequest& WithSecretHash(Aws::String&& value) { SetSecretHash(std::move(value)); return *this;}

    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline ConfirmSignUpRequest& WithSecretHash(const char* value) { SetSecretHash(value); return *this;}


    /**
     * <p>The user name of the user whose registration you wish to confirm.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user whose registration you wish to confirm.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name of the user whose registration you wish to confirm.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user whose registration you wish to confirm.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name of the user whose registration you wish to confirm.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name of the user whose registration you wish to confirm.</p>
     */
    inline ConfirmSignUpRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user whose registration you wish to confirm.</p>
     */
    inline ConfirmSignUpRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name of the user whose registration you wish to confirm.</p>
     */
    inline ConfirmSignUpRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The confirmation code sent by a user's request to confirm registration.</p>
     */
    inline const Aws::String& GetConfirmationCode() const{ return m_confirmationCode; }

    /**
     * <p>The confirmation code sent by a user's request to confirm registration.</p>
     */
    inline bool ConfirmationCodeHasBeenSet() const { return m_confirmationCodeHasBeenSet; }

    /**
     * <p>The confirmation code sent by a user's request to confirm registration.</p>
     */
    inline void SetConfirmationCode(const Aws::String& value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode = value; }

    /**
     * <p>The confirmation code sent by a user's request to confirm registration.</p>
     */
    inline void SetConfirmationCode(Aws::String&& value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode = std::move(value); }

    /**
     * <p>The confirmation code sent by a user's request to confirm registration.</p>
     */
    inline void SetConfirmationCode(const char* value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode.assign(value); }

    /**
     * <p>The confirmation code sent by a user's request to confirm registration.</p>
     */
    inline ConfirmSignUpRequest& WithConfirmationCode(const Aws::String& value) { SetConfirmationCode(value); return *this;}

    /**
     * <p>The confirmation code sent by a user's request to confirm registration.</p>
     */
    inline ConfirmSignUpRequest& WithConfirmationCode(Aws::String&& value) { SetConfirmationCode(std::move(value)); return *this;}

    /**
     * <p>The confirmation code sent by a user's request to confirm registration.</p>
     */
    inline ConfirmSignUpRequest& WithConfirmationCode(const char* value) { SetConfirmationCode(value); return *this;}


    /**
     * <p>Boolean to be specified to force user confirmation irrespective of existing
     * alias. By default set to <code>False</code>. If this parameter is set to
     * <code>True</code> and the phone number/email used for sign up confirmation
     * already exists as an alias with a different user, the API call will migrate the
     * alias from the previous user to the newly created user being confirmed. If set
     * to <code>False</code>, the API will throw an <b>AliasExistsException</b>
     * error.</p>
     */
    inline bool GetForceAliasCreation() const{ return m_forceAliasCreation; }

    /**
     * <p>Boolean to be specified to force user confirmation irrespective of existing
     * alias. By default set to <code>False</code>. If this parameter is set to
     * <code>True</code> and the phone number/email used for sign up confirmation
     * already exists as an alias with a different user, the API call will migrate the
     * alias from the previous user to the newly created user being confirmed. If set
     * to <code>False</code>, the API will throw an <b>AliasExistsException</b>
     * error.</p>
     */
    inline bool ForceAliasCreationHasBeenSet() const { return m_forceAliasCreationHasBeenSet; }

    /**
     * <p>Boolean to be specified to force user confirmation irrespective of existing
     * alias. By default set to <code>False</code>. If this parameter is set to
     * <code>True</code> and the phone number/email used for sign up confirmation
     * already exists as an alias with a different user, the API call will migrate the
     * alias from the previous user to the newly created user being confirmed. If set
     * to <code>False</code>, the API will throw an <b>AliasExistsException</b>
     * error.</p>
     */
    inline void SetForceAliasCreation(bool value) { m_forceAliasCreationHasBeenSet = true; m_forceAliasCreation = value; }

    /**
     * <p>Boolean to be specified to force user confirmation irrespective of existing
     * alias. By default set to <code>False</code>. If this parameter is set to
     * <code>True</code> and the phone number/email used for sign up confirmation
     * already exists as an alias with a different user, the API call will migrate the
     * alias from the previous user to the newly created user being confirmed. If set
     * to <code>False</code>, the API will throw an <b>AliasExistsException</b>
     * error.</p>
     */
    inline ConfirmSignUpRequest& WithForceAliasCreation(bool value) { SetForceAliasCreation(value); return *this;}


    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>ConfirmSignUp</code> calls.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const{ return m_analyticsMetadata; }

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>ConfirmSignUp</code> calls.</p>
     */
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>ConfirmSignUp</code> calls.</p>
     */
    inline void SetAnalyticsMetadata(const AnalyticsMetadataType& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = value; }

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>ConfirmSignUp</code> calls.</p>
     */
    inline void SetAnalyticsMetadata(AnalyticsMetadataType&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::move(value); }

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>ConfirmSignUp</code> calls.</p>
     */
    inline ConfirmSignUpRequest& WithAnalyticsMetadata(const AnalyticsMetadataType& value) { SetAnalyticsMetadata(value); return *this;}

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>ConfirmSignUp</code> calls.</p>
     */
    inline ConfirmSignUpRequest& WithAnalyticsMetadata(AnalyticsMetadataType&& value) { SetAnalyticsMetadata(std::move(value)); return *this;}


    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline const UserContextDataType& GetUserContextData() const{ return m_userContextData; }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline bool UserContextDataHasBeenSet() const { return m_userContextDataHasBeenSet; }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline void SetUserContextData(const UserContextDataType& value) { m_userContextDataHasBeenSet = true; m_userContextData = value; }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline void SetUserContextData(UserContextDataType&& value) { m_userContextDataHasBeenSet = true; m_userContextData = std::move(value); }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline ConfirmSignUpRequest& WithUserContextData(const UserContextDataType& value) { SetUserContextData(value); return *this;}

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline ConfirmSignUpRequest& WithUserContextData(UserContextDataType&& value) { SetUserContextData(std::move(value)); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_secretHash;
    bool m_secretHashHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_confirmationCode;
    bool m_confirmationCodeHasBeenSet;

    bool m_forceAliasCreation;
    bool m_forceAliasCreationHasBeenSet;

    AnalyticsMetadataType m_analyticsMetadata;
    bool m_analyticsMetadataHasBeenSet;

    UserContextDataType m_userContextData;
    bool m_userContextDataHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
