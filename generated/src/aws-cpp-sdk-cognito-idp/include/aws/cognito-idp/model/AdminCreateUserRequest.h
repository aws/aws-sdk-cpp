/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/MessageActionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <aws/cognito-idp/model/DeliveryMediumType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Creates a new user in the specified user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUserRequest">AWS
   * API Reference</a></p>
   */
  class AdminCreateUserRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminCreateUser"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to create a user.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    AdminCreateUserRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you want to set as the username sign-in attribute. The
     * following conditions apply to the username parameter.</p> <ul> <li> <p>The
     * username can't be a duplicate of another username in the same user pool.</p>
     * </li> <li> <p>You can't change the value of a username after you create it.</p>
     * </li> <li> <p>You can only provide a value if usernames are a valid sign-in
     * attribute for your user pool. If your user pool only supports phone numbers or
     * email addresses as sign-in attributes, Amazon Cognito automatically generates a
     * username value. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html#user-pool-settings-aliases">Customizing
     * sign-in attributes</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    AdminCreateUserRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (when creating a user pool or in the
     * <b>Attributes</b> tab of the console) either you should supply (in your call to
     * <code>AdminCreateUser</code>) or the user should supply (when they sign up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. You can do this in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>You must also provide an email address or phone number when you expect the
     * user to do passwordless sign-in with an email or SMS OTP. These attributes must
     * be provided when passwordless options are the only available, or when you don't
     * submit a <code>TemporaryPassword</code>.</p> <p>In your
     * <code>AdminCreateUser</code> request, you can set the
     * <code>email_verified</code> and <code>phone_number_verified</code> attributes to
     * <code>true</code>. The following conditions apply:</p> <dl> <dt>email</dt> <dd>
     * <p>The email address where you want the user to receive their confirmation code
     * and username. You must provide a value for <code>email</code> when you want to
     * set <code>email_verified</code> to <code>true</code>, or if you set
     * <code>EMAIL</code> in the <code>DesiredDeliveryMediums</code> parameter.</p>
     * </dd> <dt>phone_number</dt> <dd> <p>The phone number where you want the user to
     * receive their confirmation code and username. You must provide a value for
     * <code>phone_number</code> when you want to set
     * <code>phone_number_verified</code> to <code>true</code>, or if you set
     * <code>SMS</code> in the <code>DesiredDeliveryMediums</code> parameter.</p> </dd>
     * </dl>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const { return m_userAttributes; }
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    void SetUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::forward<UserAttributesT>(value); }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    AdminCreateUserRequest& WithUserAttributes(UserAttributesT&& value) { SetUserAttributes(std::forward<UserAttributesT>(value)); return *this;}
    template<typename UserAttributesT = AttributeType>
    AdminCreateUserRequest& AddUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace_back(std::forward<UserAttributesT>(value)); return *this; }
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
    AdminCreateUserRequest& WithValidationData(ValidationDataT&& value) { SetValidationData(std::forward<ValidationDataT>(value)); return *this;}
    template<typename ValidationDataT = AttributeType>
    AdminCreateUserRequest& AddValidationData(ValidationDataT&& value) { m_validationDataHasBeenSet = true; m_validationData.emplace_back(std::forward<ValidationDataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The exception
     * to the requirement for a password is when your user pool supports passwordless
     * sign-in with email or SMS OTPs. To create a user with no password, omit this
     * parameter or submit a blank value. You can only create a passwordless user when
     * passwordless sign-in is available.</p> <p>The temporary password is valid only
     * once. To complete the Admin Create User flow, the user must enter the temporary
     * password in the sign-in page, along with a new password to be used in all future
     * sign-ins.</p> <p>If you don't specify a value, Amazon Cognito generates one for
     * you unless you have passwordless options active for your user pool.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you set for your user pool. To reset the account after that time limit, you must
     * call <code>AdminCreateUser</code> again and specify <code>RESEND</code> for the
     * <code>MessageAction</code> parameter.</p>
     */
    inline const Aws::String& GetTemporaryPassword() const { return m_temporaryPassword; }
    inline bool TemporaryPasswordHasBeenSet() const { return m_temporaryPasswordHasBeenSet; }
    template<typename TemporaryPasswordT = Aws::String>
    void SetTemporaryPassword(TemporaryPasswordT&& value) { m_temporaryPasswordHasBeenSet = true; m_temporaryPassword = std::forward<TemporaryPasswordT>(value); }
    template<typename TemporaryPasswordT = Aws::String>
    AdminCreateUserRequest& WithTemporaryPassword(TemporaryPasswordT&& value) { SetTemporaryPassword(std::forward<TemporaryPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is used only if the <code>phone_number_verified</code> or
     * <code>email_verified</code> attribute is set to <code>True</code>. Otherwise, it
     * is ignored.</p> <p>If this parameter is set to <code>True</code> and the phone
     * number or email address specified in the <code>UserAttributes</code> parameter
     * already exists as an alias with a different user, this request migrates the
     * alias from the previous user to the newly-created user. The previous user will
     * no longer be able to log in using that alias.</p> <p>If this parameter is set to
     * <code>False</code>, the API throws an <code>AliasExistsException</code> error if
     * the alias already exists. The default value is <code>False</code>.</p>
     */
    inline bool GetForceAliasCreation() const { return m_forceAliasCreation; }
    inline bool ForceAliasCreationHasBeenSet() const { return m_forceAliasCreationHasBeenSet; }
    inline void SetForceAliasCreation(bool value) { m_forceAliasCreationHasBeenSet = true; m_forceAliasCreation = value; }
    inline AdminCreateUserRequest& WithForceAliasCreation(bool value) { SetForceAliasCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>RESEND</code> to resend the invitation message to a user that
     * already exists, and to reset the temporary-password duration with a new
     * temporary password. Set to <code>SUPPRESS</code> to suppress sending the
     * message. You can specify only one value.</p>
     */
    inline MessageActionType GetMessageAction() const { return m_messageAction; }
    inline bool MessageActionHasBeenSet() const { return m_messageActionHasBeenSet; }
    inline void SetMessageAction(MessageActionType value) { m_messageActionHasBeenSet = true; m_messageAction = value; }
    inline AdminCreateUserRequest& WithMessageAction(MessageActionType value) { SetMessageAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>EMAIL</code> if email will be used to send the welcome message.
     * Specify <code>SMS</code> if the phone number will be used. The default value is
     * <code>SMS</code>. You can specify more than one value.</p>
     */
    inline const Aws::Vector<DeliveryMediumType>& GetDesiredDeliveryMediums() const { return m_desiredDeliveryMediums; }
    inline bool DesiredDeliveryMediumsHasBeenSet() const { return m_desiredDeliveryMediumsHasBeenSet; }
    template<typename DesiredDeliveryMediumsT = Aws::Vector<DeliveryMediumType>>
    void SetDesiredDeliveryMediums(DesiredDeliveryMediumsT&& value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums = std::forward<DesiredDeliveryMediumsT>(value); }
    template<typename DesiredDeliveryMediumsT = Aws::Vector<DeliveryMediumType>>
    AdminCreateUserRequest& WithDesiredDeliveryMediums(DesiredDeliveryMediumsT&& value) { SetDesiredDeliveryMediums(std::forward<DesiredDeliveryMediumsT>(value)); return *this;}
    inline AdminCreateUserRequest& AddDesiredDeliveryMediums(DeliveryMediumType value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>ClientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
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
    AdminCreateUserRequest& WithClientMetadata(ClientMetadataT&& value) { SetClientMetadata(std::forward<ClientMetadataT>(value)); return *this;}
    template<typename ClientMetadataKeyT = Aws::String, typename ClientMetadataValueT = Aws::String>
    AdminCreateUserRequest& AddClientMetadata(ClientMetadataKeyT&& key, ClientMetadataValueT&& value) {
      m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::forward<ClientMetadataKeyT>(key), std::forward<ClientMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    Aws::Vector<AttributeType> m_validationData;
    bool m_validationDataHasBeenSet = false;

    Aws::String m_temporaryPassword;
    bool m_temporaryPasswordHasBeenSet = false;

    bool m_forceAliasCreation{false};
    bool m_forceAliasCreationHasBeenSet = false;

    MessageActionType m_messageAction{MessageActionType::NOT_SET};
    bool m_messageActionHasBeenSet = false;

    Aws::Vector<DeliveryMediumType> m_desiredDeliveryMediums;
    bool m_desiredDeliveryMediumsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
