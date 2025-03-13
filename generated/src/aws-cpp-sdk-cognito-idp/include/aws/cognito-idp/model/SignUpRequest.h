/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AnalyticsMetadataType.h>
#include <aws/cognito-idp/model/UserContextDataType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to register a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignUpRequest">AWS
   * API Reference</a></p>
   */
  class SignUpRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SignUpRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SignUp"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the app client where the user wants to sign up.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    SignUpRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A keyed-hash message authentication code (HMAC) calculated using the secret
     * key of a user pool client and username plus the client ID in the message. For
     * more information about <code>SecretHash</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>.</p>
     */
    inline const Aws::String& GetSecretHash() const { return m_secretHash; }
    inline bool SecretHashHasBeenSet() const { return m_secretHashHasBeenSet; }
    template<typename SecretHashT = Aws::String>
    void SetSecretHash(SecretHashT&& value) { m_secretHashHasBeenSet = true; m_secretHash = std::forward<SecretHashT>(value); }
    template<typename SecretHashT = Aws::String>
    SignUpRequest& WithSecretHash(SecretHashT&& value) { SetSecretHash(std::forward<SecretHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the user that you want to sign up. The value of this
     * parameter is typically a username, but can be any alias attribute in your user
     * pool.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    SignUpRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's proposed password. The password must comply with the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/managing-users-passwords.html">password
     * requirements</a> of your user pool.</p> <p>Users can sign up without a password
     * when your user pool supports passwordless sign-in with email or SMS OTPs. To
     * create a user with no password, omit this parameter or submit a blank value. You
     * can only create a passwordless user when passwordless sign-in is available.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    SignUpRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, include a <code>custom:</code> prefix in the attribute name, for
     * example <code>custom:department</code>.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const { return m_userAttributes; }
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    void SetUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::forward<UserAttributesT>(value); }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    SignUpRequest& WithUserAttributes(UserAttributesT&& value) { SetUserAttributes(std::forward<UserAttributesT>(value)); return *this;}
    template<typename UserAttributesT = AttributeType>
    SignUpRequest& AddUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace_back(std::forward<UserAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Temporary user attributes that contribute to the outcomes of your pre sign-up
     * Lambda trigger. This set of key-value pairs are for custom validation of
     * information that you collect from your users but don't need to retain.</p>
     * <p>Your Lambda function can analyze this additional data and act on it. Your
     * function can automatically confirm and verify select users or perform external
     * API operations like logging user attributes and validation data to Amazon
     * CloudWatch Logs.</p> <p>For more information about the pre sign-up Lambda
     * trigger, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-pre-sign-up.html">Pre
     * sign-up Lambda trigger</a>.</p>
     */
    inline const Aws::Vector<AttributeType>& GetValidationData() const { return m_validationData; }
    inline bool ValidationDataHasBeenSet() const { return m_validationDataHasBeenSet; }
    template<typename ValidationDataT = Aws::Vector<AttributeType>>
    void SetValidationData(ValidationDataT&& value) { m_validationDataHasBeenSet = true; m_validationData = std::forward<ValidationDataT>(value); }
    template<typename ValidationDataT = Aws::Vector<AttributeType>>
    SignUpRequest& WithValidationData(ValidationDataT&& value) { SetValidationData(std::forward<ValidationDataT>(value)); return *this;}
    template<typename ValidationDataT = AttributeType>
    SignUpRequest& AddValidationData(ValidationDataT&& value) { m_validationDataHasBeenSet = true; m_validationData.emplace_back(std::forward<ValidationDataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information that supports analytics outcomes with Amazon Pinpoint, including
     * the user's endpoint ID. The endpoint ID is a destination for Amazon Pinpoint
     * push notifications, for example a device identifier, email address, or phone
     * number.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const { return m_analyticsMetadata; }
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }
    template<typename AnalyticsMetadataT = AnalyticsMetadataType>
    void SetAnalyticsMetadata(AnalyticsMetadataT&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::forward<AnalyticsMetadataT>(value); }
    template<typename AnalyticsMetadataT = AnalyticsMetadataType>
    SignUpRequest& WithAnalyticsMetadata(AnalyticsMetadataT&& value) { SetAnalyticsMetadata(std::forward<AnalyticsMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contextual data about your user session like the device fingerprint, IP
     * address, or location. Amazon Cognito threat protection evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-viewing-threat-protection-app.html">Collecting
     * data for threat protection in applications</a>.</p>
     */
    inline const UserContextDataType& GetUserContextData() const { return m_userContextData; }
    inline bool UserContextDataHasBeenSet() const { return m_userContextDataHasBeenSet; }
    template<typename UserContextDataT = UserContextDataType>
    void SetUserContextData(UserContextDataT&& value) { m_userContextDataHasBeenSet = true; m_userContextData = std::forward<UserContextDataT>(value); }
    template<typename UserContextDataT = UserContextDataType>
    SignUpRequest& WithUserContextData(UserContextDataT&& value) { SetUserContextData(std::forward<UserContextDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the SignUp API
     * action, Amazon Cognito invokes any functions that are assigned to the following
     * triggers: <i>pre sign-up</i>, <i>custom message</i>, and <i>post
     * confirmation</i>. When Amazon Cognito invokes any of these functions, it passes
     * a JSON payload, which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute, which provides the data that you assigned
     * to the ClientMetadata parameter in your SignUp request. In your function code in
     * Lambda, you can process the <code>clientMetadata</code> value to enhance your
     * workflow for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Using Lambda triggers</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     *  <p>When you use the <code>ClientMetadata</code> parameter, note that
     * Amazon Cognito won't do the following:</p> <ul> <li> <p>Store the
     * <code>ClientMetadata</code> value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the
     * <code>ClientMetadata</code> parameter serves no purpose.</p> </li> <li>
     * <p>Validate the <code>ClientMetadata</code> value.</p> </li> <li> <p>Encrypt the
     * <code>ClientMetadata</code> value. Don't send sensitive information in this
     * parameter.</p> </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const { return m_clientMetadata; }
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }
    template<typename ClientMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetClientMetadata(ClientMetadataT&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::forward<ClientMetadataT>(value); }
    template<typename ClientMetadataT = Aws::Map<Aws::String, Aws::String>>
    SignUpRequest& WithClientMetadata(ClientMetadataT&& value) { SetClientMetadata(std::forward<ClientMetadataT>(value)); return *this;}
    template<typename ClientMetadataKeyT = Aws::String, typename ClientMetadataValueT = Aws::String>
    SignUpRequest& AddClientMetadata(ClientMetadataKeyT&& key, ClientMetadataValueT&& value) {
      m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::forward<ClientMetadataKeyT>(key), std::forward<ClientMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_secretHash;
    bool m_secretHashHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    Aws::Vector<AttributeType> m_validationData;
    bool m_validationDataHasBeenSet = false;

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
