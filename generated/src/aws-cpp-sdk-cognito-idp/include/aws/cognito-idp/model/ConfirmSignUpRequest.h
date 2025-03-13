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
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmSignUpRequest() = default;

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
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    ConfirmSignUpRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
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
    ConfirmSignUpRequest& WithSecretHash(SecretHashT&& value) { SetSecretHash(std::forward<SecretHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user that you want to query or modify. The value of this
     * parameter is typically your user's username, but it can be any of their alias
     * attributes. If <code>username</code> isn't an alias attribute in your user pool,
     * this value must be the <code>sub</code> of a local user or the username of a
     * user from a third-party IdP.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    ConfirmSignUpRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confirmation code that your user pool sent in response to the
     * <code>SignUp</code> request.</p>
     */
    inline const Aws::String& GetConfirmationCode() const { return m_confirmationCode; }
    inline bool ConfirmationCodeHasBeenSet() const { return m_confirmationCodeHasBeenSet; }
    template<typename ConfirmationCodeT = Aws::String>
    void SetConfirmationCode(ConfirmationCodeT&& value) { m_confirmationCodeHasBeenSet = true; m_confirmationCode = std::forward<ConfirmationCodeT>(value); }
    template<typename ConfirmationCodeT = Aws::String>
    ConfirmSignUpRequest& WithConfirmationCode(ConfirmationCodeT&& value) { SetConfirmationCode(std::forward<ConfirmationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, forces user confirmation despite any existing
     * aliases. Defaults to <code>false</code>. A value of <code>true</code> migrates
     * the alias from an existing user to the new user if an existing user already has
     * the phone number or email address as an alias.</p> <p>Say, for example, that an
     * existing user has an <code>email</code> attribute of
     * <code>bob@example.com</code> and email is an alias in your user pool. If the new
     * user also has an email of <code>bob@example.com</code> and your
     * <code>ConfirmSignUp</code> response sets <code>ForceAliasCreation</code> to
     * <code>true</code>, the new user can sign in with a username of
     * <code>bob@example.com</code> and the existing user can no longer do so.</p>
     * <p>If <code>false</code> and an attribute belongs to an existing alias, this
     * request returns an <b>AliasExistsException</b> error.</p> <p>For more
     * information about sign-in aliases, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html#user-pool-settings-aliases">Customizing
     * sign-in attributes</a>.</p>
     */
    inline bool GetForceAliasCreation() const { return m_forceAliasCreation; }
    inline bool ForceAliasCreationHasBeenSet() const { return m_forceAliasCreationHasBeenSet; }
    inline void SetForceAliasCreation(bool value) { m_forceAliasCreationHasBeenSet = true; m_forceAliasCreation = value; }
    inline ConfirmSignUpRequest& WithForceAliasCreation(bool value) { SetForceAliasCreation(value); return *this;}
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
    ConfirmSignUpRequest& WithAnalyticsMetadata(AnalyticsMetadataT&& value) { SetAnalyticsMetadata(std::forward<AnalyticsMetadataT>(value)); return *this;}
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
    ConfirmSignUpRequest& WithUserContextData(UserContextDataT&& value) { SetUserContextData(std::forward<UserContextDataT>(value)); return *this;}
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
    ConfirmSignUpRequest& WithClientMetadata(ClientMetadataT&& value) { SetClientMetadata(std::forward<ClientMetadataT>(value)); return *this;}
    template<typename ClientMetadataKeyT = Aws::String, typename ClientMetadataValueT = Aws::String>
    ConfirmSignUpRequest& AddClientMetadata(ClientMetadataKeyT&& key, ClientMetadataValueT&& value) {
      m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::forward<ClientMetadataKeyT>(key), std::forward<ClientMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The optional session ID from a <code>SignUp</code> API request. You can sign
     * in a user directly from the sign-up process with the <code>USER_AUTH</code>
     * authentication flow.</p>
     */
    inline const Aws::String& GetSession() const { return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    ConfirmSignUpRequest& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
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

    bool m_forceAliasCreation{false};
    bool m_forceAliasCreationHasBeenSet = false;

    AnalyticsMetadataType m_analyticsMetadata;
    bool m_analyticsMetadataHasBeenSet = false;

    UserContextDataType m_userContextData;
    bool m_userContextDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
