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
   * <p>The request representing the confirmation for a password reset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmForgotPasswordRequest">AWS
   * API Reference</a></p>
   */
  class ConfirmForgotPasswordRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmForgotPasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmForgotPassword"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The app client ID of the app associated with the user pool.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline ConfirmForgotPasswordRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline ConfirmForgotPasswordRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline ConfirmForgotPasswordRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message. For
     * more information about <code>SecretHash</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>.</p>
     */
    inline const Aws::String& GetSecretHash() const{ return m_secretHash; }
    inline bool SecretHashHasBeenSet() const { return m_secretHashHasBeenSet; }
    inline void SetSecretHash(const Aws::String& value) { m_secretHashHasBeenSet = true; m_secretHash = value; }
    inline void SetSecretHash(Aws::String&& value) { m_secretHashHasBeenSet = true; m_secretHash = std::move(value); }
    inline void SetSecretHash(const char* value) { m_secretHashHasBeenSet = true; m_secretHash.assign(value); }
    inline ConfirmForgotPasswordRequest& WithSecretHash(const Aws::String& value) { SetSecretHash(value); return *this;}
    inline ConfirmForgotPasswordRequest& WithSecretHash(Aws::String&& value) { SetSecretHash(std::move(value)); return *this;}
    inline ConfirmForgotPasswordRequest& WithSecretHash(const char* value) { SetSecretHash(value); return *this;}
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
    inline ConfirmForgotPasswordRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline ConfirmForgotPasswordRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline ConfirmForgotPasswordRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confirmation code from your user's request to reset their password. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ForgotPassword.html">ForgotPassword</a>.</p>
     */
    inline const Aws::String& GetConfirmationCode() const{ return m_confirmationCode; }
    inline bool ConfirmationCodeHasBeenSet() const { return m_confirmationCodeHasBeenSet; }
    inline void SetConfirmationCode(const Aws::String& value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode = value; }
    inline void SetConfirmationCode(Aws::String&& value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode = std::move(value); }
    inline void SetConfirmationCode(const char* value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode.assign(value); }
    inline ConfirmForgotPasswordRequest& WithConfirmationCode(const Aws::String& value) { SetConfirmationCode(value); return *this;}
    inline ConfirmForgotPasswordRequest& WithConfirmationCode(Aws::String&& value) { SetConfirmationCode(std::move(value)); return *this;}
    inline ConfirmForgotPasswordRequest& WithConfirmationCode(const char* value) { SetConfirmationCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new password that your user wants to set.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline ConfirmForgotPasswordRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline ConfirmForgotPasswordRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline ConfirmForgotPasswordRequest& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>ConfirmForgotPassword</code> calls.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const{ return m_analyticsMetadata; }
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }
    inline void SetAnalyticsMetadata(const AnalyticsMetadataType& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = value; }
    inline void SetAnalyticsMetadata(AnalyticsMetadataType&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::move(value); }
    inline ConfirmForgotPasswordRequest& WithAnalyticsMetadata(const AnalyticsMetadataType& value) { SetAnalyticsMetadata(value); return *this;}
    inline ConfirmForgotPasswordRequest& WithAnalyticsMetadata(AnalyticsMetadataType&& value) { SetAnalyticsMetadata(std::move(value)); return *this;}
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
    inline ConfirmForgotPasswordRequest& WithUserContextData(const UserContextDataType& value) { SetUserContextData(value); return *this;}
    inline ConfirmForgotPasswordRequest& WithUserContextData(UserContextDataType&& value) { SetUserContextData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * ConfirmForgotPassword API action, Amazon Cognito invokes the function that is
     * assigned to the <i>post confirmation</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * ConfirmForgotPassword request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
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
    inline ConfirmForgotPasswordRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}
    inline ConfirmForgotPasswordRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}
    inline ConfirmForgotPasswordRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
    inline ConfirmForgotPasswordRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline ConfirmForgotPasswordRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline ConfirmForgotPasswordRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline ConfirmForgotPasswordRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline ConfirmForgotPasswordRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline ConfirmForgotPasswordRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
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

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

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
