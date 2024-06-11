/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/AnalyticsMetadataType.h>
#include <aws/cognito-idp/model/UserContextDataType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class ConfirmSignUpRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmSignUpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmSignUp"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the app client associated with the user pool.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline ConfirmSignUpRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline ConfirmSignUpRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline ConfirmSignUpRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message.</p>
     */
    inline const Aws::String& GetSecretHash() const{ return m_secretHash; }
    inline bool SecretHashHasBeenSet() const { return m_secretHashHasBeenSet; }
    inline void SetSecretHash(const Aws::String& value) { m_secretHashHasBeenSet = true; m_secretHash = value; }
    inline void SetSecretHash(Aws::String&& value) { m_secretHashHasBeenSet = true; m_secretHash = std::move(value); }
    inline void SetSecretHash(const char* value) { m_secretHashHasBeenSet = true; m_secretHash.assign(value); }
    inline ConfirmSignUpRequest& WithSecretHash(const Aws::String& value) { SetSecretHash(value); return *this;}
    inline ConfirmSignUpRequest& WithSecretHash(Aws::String&& value) { SetSecretHash(std::move(value)); return *this;}
    inline ConfirmSignUpRequest& WithSecretHash(const char* value) { SetSecretHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the user that you want to query or modify. The value of this
     * parameter is typically your user's username, but it can be any of their alias
     * attributes. If <code>username</code> isn't an alias attribute in your user pool,
     * this value must be the <code>sub</code> of a local user or the username of a
     * user from a third-party IdP.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline ConfirmSignUpRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline ConfirmSignUpRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline ConfirmSignUpRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confirmation code sent by a user's request to confirm registration.</p>
     */
    inline const Aws::String& GetConfirmationCode() const{ return m_confirmationCode; }
    inline bool ConfirmationCodeHasBeenSet() const { return m_confirmationCodeHasBeenSet; }
    inline void SetConfirmationCode(const Aws::String& value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode = value; }
    inline void SetConfirmationCode(Aws::String&& value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode = std::move(value); }
    inline void SetConfirmationCode(const char* value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode.assign(value); }
    inline ConfirmSignUpRequest& WithConfirmationCode(const Aws::String& value) { SetConfirmationCode(value); return *this;}
    inline ConfirmSignUpRequest& WithConfirmationCode(Aws::String&& value) { SetConfirmationCode(std::move(value)); return *this;}
    inline ConfirmSignUpRequest& WithConfirmationCode(const char* value) { SetConfirmationCode(value); return *this;}
    ///@}

    ///@{
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
    inline bool ForceAliasCreationHasBeenSet() const { return m_forceAliasCreationHasBeenSet; }
    inline void SetForceAliasCreation(bool value) { m_forceAliasCreationHasBeenSet = true; m_forceAliasCreation = value; }
    inline ConfirmSignUpRequest& WithForceAliasCreation(bool value) { SetForceAliasCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>ConfirmSignUp</code> calls.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const{ return m_analyticsMetadata; }
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }
    inline void SetAnalyticsMetadata(const AnalyticsMetadataType& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = value; }
    inline void SetAnalyticsMetadata(AnalyticsMetadataType&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::move(value); }
    inline ConfirmSignUpRequest& WithAnalyticsMetadata(const AnalyticsMetadataType& value) { SetAnalyticsMetadata(value); return *this;}
    inline ConfirmSignUpRequest& WithAnalyticsMetadata(AnalyticsMetadataType&& value) { SetAnalyticsMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p>
     */
    inline const UserContextDataType& GetUserContextData() const{ return m_userContextData; }
    inline bool UserContextDataHasBeenSet() const { return m_userContextDataHasBeenSet; }
    inline void SetUserContextData(const UserContextDataType& value) { m_userContextDataHasBeenSet = true; m_userContextData = value; }
    inline void SetUserContextData(UserContextDataType&& value) { m_userContextDataHasBeenSet = true; m_userContextData = std::move(value); }
    inline ConfirmSignUpRequest& WithUserContextData(const UserContextDataType& value) { SetUserContextData(value); return *this;}
    inline ConfirmSignUpRequest& WithUserContextData(UserContextDataType&& value) { SetUserContextData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the ConfirmSignUp
     * API action, Amazon Cognito invokes the function that is assigned to the <i>post
     * confirmation</i> trigger. When Amazon Cognito invokes this function, it passes a
     * JSON payload, which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute, which provides the data that you assigned
     * to the ClientMetadata parameter in your ConfirmSignUp request. In your function
     * code in Lambda, you can process the <code>clientMetadata</code> value to enhance
     * your workflow for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const{ return m_clientMetadata; }
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::move(value); }
    inline ConfirmSignUpRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}
    inline ConfirmSignUpRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}
    inline ConfirmSignUpRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
    inline ConfirmSignUpRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline ConfirmSignUpRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline ConfirmSignUpRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline ConfirmSignUpRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline ConfirmSignUpRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline ConfirmSignUpRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_secretHash;
    bool m_secretHashHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_confirmationCode;
    bool m_confirmationCodeHasBeenSet = false;

    bool m_forceAliasCreation;
    bool m_forceAliasCreationHasBeenSet = false;

    AnalyticsMetadataType m_analyticsMetadata;
    bool m_analyticsMetadataHasBeenSet = false;

    UserContextDataType m_userContextData;
    bool m_userContextDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
