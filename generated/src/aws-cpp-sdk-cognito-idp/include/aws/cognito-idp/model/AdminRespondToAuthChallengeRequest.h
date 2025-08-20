/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/ChallengeNameType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AnalyticsMetadataType.h>
#include <aws/cognito-idp/model/ContextDataType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The request to respond to the authentication challenge, as an
   * administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRespondToAuthChallengeRequest">AWS
   * API Reference</a></p>
   */
  class AdminRespondToAuthChallengeRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminRespondToAuthChallengeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminRespondToAuthChallenge"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to respond to an authentication
     * challenge.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    AdminRespondToAuthChallengeRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app client where you initiated sign-in.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    AdminRespondToAuthChallengeRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the challenge that you are responding to.</p> <p>Possible
     * challenges include the following:</p>  <p>All of the following challenges
     * require <code>USERNAME</code> and, when the app client has a client secret,
     * <code>SECRET_HASH</code> in the parameters. Include a <code>DEVICE_KEY</code>
     * for device authentication.</p>  <ul> <li> <p> <code>WEB_AUTHN</code>:
     * Respond to the challenge with the results of a successful authentication with a
     * WebAuthn authenticator, or passkey, as <code>CREDENTIAL</code>. Examples of
     * WebAuthn authenticators include biometric devices and security keys.</p> </li>
     * <li> <p> <code>PASSWORD</code>: Respond with the user's password as
     * <code>PASSWORD</code>.</p> </li> <li> <p> <code>PASSWORD_SRP</code>: Respond
     * with the initial SRP secret as <code>SRP_A</code>.</p> </li> <li> <p>
     * <code>SELECT_CHALLENGE</code>: Respond with a challenge selection as
     * <code>ANSWER</code>. It must be one of the challenge types in the
     * <code>AvailableChallenges</code> response parameter. Add the parameters of the
     * selected challenge, for example <code>USERNAME</code> and
     * <code>SMS_OTP</code>.</p> </li> <li> <p> <code>SMS_MFA</code>: Respond with the
     * code that your user pool delivered in an SMS message, as
     * <code>SMS_MFA_CODE</code> </p> </li> <li> <p> <code>EMAIL_MFA</code>: Respond
     * with the code that your user pool delivered in an email message, as
     * <code>EMAIL_MFA_CODE</code> </p> </li> <li> <p> <code>EMAIL_OTP</code>: Respond
     * with the code that your user pool delivered in an email message, as
     * <code>EMAIL_OTP_CODE</code> .</p> </li> <li> <p> <code>SMS_OTP</code>: Respond
     * with the code that your user pool delivered in an SMS message, as
     * <code>SMS_OTP_CODE</code>.</p> </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * Respond with the second stage of SRP secrets as
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code>.</p> </li> <li> <p> <code>CUSTOM_CHALLENGE</code>:
     * This is returned if your custom authentication flow determines that the user
     * should pass another challenge before tokens are issued. The parameters of the
     * challenge are determined by your Lambda function and issued in the
     * <code>ChallengeParameters</code> of a challenge response.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code>: Respond with the initial parameters of device SRP
     * authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html#user-pools-remembered-devices-signing-in-with-a-device">Signing
     * in with a device</a>.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>:
     * Respond with <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, and <code>TIMESTAMP</code> after
     * client-side SRP calculations. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html#user-pools-remembered-devices-signing-in-with-a-device">Signing
     * in with a device</a>.</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>: For
     * users who are required to change their passwords after successful first login.
     * Respond to this challenge with <code>NEW_PASSWORD</code> and any required
     * attributes that Amazon Cognito returned in the <code>requiredAttributes</code>
     * parameter. You can also set values for attributes that aren't required by your
     * user pool and that your app client can write.</p> <p>Amazon Cognito only returns
     * this challenge for users who have temporary passwords. When you create
     * passwordless users, you must provide values for all required attributes.</p>
     *  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response, you can't
     * modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code> or <code>RespondToAuthChallenge</code>,
     * set a value for any keys that Amazon Cognito returned in the
     * <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> or <code>UpdateUserAttributes</code> API
     * operation to modify the value of any additional attributes.</p>  </li>
     * <li> <p> <code>MFA_SETUP</code>: For users who are required to setup an MFA
     * factor before they can sign in. The MFA types activated for the user pool will
     * be listed in the challenge parameters <code>MFAS_CAN_SETUP</code> value. </p>
     * <p>To set up time-based one-time password (TOTP) MFA, use the session returned
     * in this challenge from <code>InitiateAuth</code> or
     * <code>AdminInitiateAuth</code> as an input to
     * <code>AssociateSoftwareToken</code>. Then, use the session returned by
     * <code>VerifySoftwareToken</code> as an input to
     * <code>RespondToAuthChallenge</code> or <code>AdminRespondToAuthChallenge</code>
     * with challenge name <code>MFA_SETUP</code> to complete sign-in. </p> <p>To set
     * up SMS or email MFA, collect a <code>phone_number</code> or <code>email</code>
     * attribute for the user. Then restart the authentication flow with an
     * <code>InitiateAuth</code> or <code>AdminInitiateAuth</code> request. </p> </li>
     * </ul>
     */
    inline ChallengeNameType GetChallengeName() const { return m_challengeName; }
    inline bool ChallengeNameHasBeenSet() const { return m_challengeNameHasBeenSet; }
    inline void SetChallengeName(ChallengeNameType value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }
    inline AdminRespondToAuthChallengeRequest& WithChallengeName(ChallengeNameType value) { SetChallengeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The responses to the challenge that you received in the previous request.
     * Each challenge has its own required response parameters. The following examples
     * are partial JSON request bodies that highlight challenge-response
     * parameters.</p>  <p>You must provide a SECRET_HASH parameter in all
     * challenge responses to an app client that has a client secret. Include a
     * <code>DEVICE_KEY</code> for device authentication.</p>  <dl>
     * <dt>SELECT_CHALLENGE</dt> <dd> <p> <code>"ChallengeName": "SELECT_CHALLENGE",
     * "ChallengeResponses": { "USERNAME": "[username]", "ANSWER": "[Challenge
     * name]"}</code> </p> <p>Available challenges are <code>PASSWORD</code>,
     * <code>PASSWORD_SRP</code>, <code>EMAIL_OTP</code>, <code>SMS_OTP</code>, and
     * <code>WEB_AUTHN</code>.</p> <p>Complete authentication in the
     * <code>SELECT_CHALLENGE</code> response for <code>PASSWORD</code>,
     * <code>PASSWORD_SRP</code>, and <code>WEB_AUTHN</code>:</p> <ul> <li> <p>
     * <code>"ChallengeName": "SELECT_CHALLENGE", "ChallengeResponses": { "ANSWER":
     * "WEB_AUTHN", "USERNAME": "[username]", "CREDENTIAL":
     * "[AuthenticationResponseJSON]"}</code> </p> <p>See <a
     * href="https://www.w3.org/TR/WebAuthn-3/#dictdef-authenticationresponsejson">
     * AuthenticationResponseJSON</a>.</p> </li> <li> <p> <code>"ChallengeName":
     * "SELECT_CHALLENGE", "ChallengeResponses": { "ANSWER": "PASSWORD", "USERNAME":
     * "[username]", "PASSWORD": "[password]"}</code> </p> </li> <li> <p>
     * <code>"ChallengeName": "SELECT_CHALLENGE", "ChallengeResponses": { "ANSWER":
     * "PASSWORD_SRP", "USERNAME": "[username]", "SRP_A": "[SRP_A]"}</code> </p> </li>
     * </ul> <p>For <code>SMS_OTP</code> and <code>EMAIL_OTP</code>, respond with the
     * username and answer. Your user pool will send a code for the user to submit in
     * the next challenge response.</p> <ul> <li> <p> <code>"ChallengeName":
     * "SELECT_CHALLENGE", "ChallengeResponses": { "ANSWER": "SMS_OTP", "USERNAME":
     * "[username]"}</code> </p> </li> <li> <p> <code>"ChallengeName":
     * "SELECT_CHALLENGE", "ChallengeResponses": { "ANSWER": "EMAIL_OTP", "USERNAME":
     * "[username]"}</code> </p> </li> </ul> </dd> <dt>WEB_AUTHN</dt> <dd> <p>
     * <code>"ChallengeName": "WEB_AUTHN", "ChallengeResponses": { "USERNAME":
     * "[username]", "CREDENTIAL": "[AuthenticationResponseJSON]"}</code> </p> <p>See
     * <a href="https://www.w3.org/TR/WebAuthn-3/#dictdef-authenticationresponsejson">
     * AuthenticationResponseJSON</a>.</p> </dd> <dt>PASSWORD</dt> <dd> <p>
     * <code>"ChallengeName": "PASSWORD", "ChallengeResponses": { "USERNAME":
     * "[username]", "PASSWORD": "[password]"}</code> </p> </dd> <dt>PASSWORD_SRP</dt>
     * <dd> <p> <code>"ChallengeName": "PASSWORD_SRP", "ChallengeResponses": {
     * "USERNAME": "[username]", "SRP_A": "[SRP_A]"}</code> </p> </dd> <dt>SMS_OTP</dt>
     * <dd> <p> <code>"ChallengeName": "SMS_OTP", "ChallengeResponses":
     * {"SMS_OTP_CODE": "[code]", "USERNAME": "[username]"}</code> </p> </dd>
     * <dt>EMAIL_OTP</dt> <dd> <p> <code>"ChallengeName": "EMAIL_OTP",
     * "ChallengeResponses": {"EMAIL_OTP_CODE": "[code]", "USERNAME":
     * "[username]"}</code> </p> </dd> <dt>SMS_MFA</dt> <dd> <p> <code>"ChallengeName":
     * "SMS_MFA", "ChallengeResponses": {"SMS_MFA_CODE": "[code]", "USERNAME":
     * "[username]"}</code> </p> </dd> <dt>PASSWORD_VERIFIER</dt> <dd> <p>This
     * challenge response is part of the SRP flow. Amazon Cognito requires that your
     * application respond to this challenge within a few seconds. When the response
     * time exceeds this period, your user pool returns a
     * <code>NotAuthorizedException</code> error.</p> <p> <code>"ChallengeName":
     * "PASSWORD_VERIFIER", "ChallengeResponses": {"PASSWORD_CLAIM_SIGNATURE":
     * "[claim_signature]", "PASSWORD_CLAIM_SECRET_BLOCK": "[secret_block]",
     * "TIMESTAMP": [timestamp], "USERNAME": "[username]"}</code> </p> </dd>
     * <dt>CUSTOM_CHALLENGE</dt> <dd> <p> <code>"ChallengeName": "CUSTOM_CHALLENGE",
     * "ChallengeResponses": {"USERNAME": "[username]", "ANSWER":
     * "[challenge_answer]"}</code> </p> </dd> <dt>NEW_PASSWORD_REQUIRED</dt> <dd> <p>
     * <code>"ChallengeName": "NEW_PASSWORD_REQUIRED", "ChallengeResponses":
     * {"NEW_PASSWORD": "[new_password]", "USERNAME": "[username]"}</code> </p> <p>To
     * set any required attributes that <code>InitiateAuth</code> returned in an
     * <code>requiredAttributes</code> parameter, add
     * <code>"userAttributes.[attribute_name]": "[attribute_value]"</code>. This
     * parameter can also set values for writable attributes that aren't required by
     * your user pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge
     * response, you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code> or <code>RespondToAuthChallenge</code>,
     * set a value for any keys that Amazon Cognito returned in the
     * <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> or <code>UpdateUserAttributes</code> API
     * operation to modify the value of any additional attributes.</p>  </dd>
     * <dt>SOFTWARE_TOKEN_MFA</dt> <dd> <p> <code>"ChallengeName":
     * "SOFTWARE_TOKEN_MFA", "ChallengeResponses": {"USERNAME": "[username]",
     * "SOFTWARE_TOKEN_MFA_CODE": [authenticator_code]}</code> </p> </dd>
     * <dt>DEVICE_SRP_AUTH</dt> <dd> <p> <code>"ChallengeName": "DEVICE_SRP_AUTH",
     * "ChallengeResponses": {"USERNAME": "[username]", "DEVICE_KEY": "[device_key]",
     * "SRP_A": "[srp_a]"}</code> </p> </dd> <dt>DEVICE_PASSWORD_VERIFIER</dt> <dd> <p>
     * <code>"ChallengeName": "DEVICE_PASSWORD_VERIFIER", "ChallengeResponses":
     * {"DEVICE_KEY": "[device_key]", "PASSWORD_CLAIM_SIGNATURE": "[claim_signature]",
     * "PASSWORD_CLAIM_SECRET_BLOCK": "[secret_block]", "TIMESTAMP": [timestamp],
     * "USERNAME": "[username]"}</code> </p> </dd> <dt>MFA_SETUP</dt> <dd> <p>
     * <code>"ChallengeName": "MFA_SETUP", "ChallengeResponses": {"USERNAME":
     * "[username]"}, "SESSION": "[Session ID from VerifySoftwareToken]"</code> </p>
     * </dd> <dt>SELECT_MFA_TYPE</dt> <dd> <p> <code>"ChallengeName":
     * "SELECT_MFA_TYPE", "ChallengeResponses": {"USERNAME": "[username]", "ANSWER":
     * "[SMS_MFA|EMAIL_MFA|SOFTWARE_TOKEN_MFA]"}</code> </p> </dd> </dl> <p>For more
     * information about <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeResponses() const { return m_challengeResponses; }
    inline bool ChallengeResponsesHasBeenSet() const { return m_challengeResponsesHasBeenSet; }
    template<typename ChallengeResponsesT = Aws::Map<Aws::String, Aws::String>>
    void SetChallengeResponses(ChallengeResponsesT&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = std::forward<ChallengeResponsesT>(value); }
    template<typename ChallengeResponsesT = Aws::Map<Aws::String, Aws::String>>
    AdminRespondToAuthChallengeRequest& WithChallengeResponses(ChallengeResponsesT&& value) { SetChallengeResponses(std::forward<ChallengeResponsesT>(value)); return *this;}
    template<typename ChallengeResponsesKeyT = Aws::String, typename ChallengeResponsesValueT = Aws::String>
    AdminRespondToAuthChallengeRequest& AddChallengeResponses(ChallengeResponsesKeyT&& key, ChallengeResponsesValueT&& value) {
      m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::forward<ChallengeResponsesKeyT>(key), std::forward<ChallengeResponsesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The session identifier that maintains the state of authentication requests
     * and challenge responses. If an <code>AdminInitiateAuth</code> or
     * <code>AdminRespondToAuthChallenge</code> API request results in a determination
     * that your application must pass another challenge, Amazon Cognito returns a
     * session with other challenge parameters. Send this session identifier,
     * unmodified, to the next <code>AdminRespondToAuthChallenge</code> request.</p>
     */
    inline const Aws::String& GetSession() const { return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    AdminRespondToAuthChallengeRequest& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
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
    AdminRespondToAuthChallengeRequest& WithAnalyticsMetadata(AnalyticsMetadataT&& value) { SetAnalyticsMetadata(std::forward<AnalyticsMetadataT>(value)); return *this;}
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
    inline const ContextDataType& GetContextData() const { return m_contextData; }
    inline bool ContextDataHasBeenSet() const { return m_contextDataHasBeenSet; }
    template<typename ContextDataT = ContextDataType>
    void SetContextData(ContextDataT&& value) { m_contextDataHasBeenSet = true; m_contextData = std::forward<ContextDataT>(value); }
    template<typename ContextDataT = ContextDataType>
    AdminRespondToAuthChallengeRequest& WithContextData(ContextDataT&& value) { SetContextData(std::forward<ContextDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>Pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>Post
     * authentication</p> </li> <li> <p>User migration</p> </li> <li> <p>Pre token
     * generation</p> </li> <li> <p>Define auth challenge</p> </li> <li> <p>Create auth
     * challenge</p> </li> <li> <p>Verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
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
    AdminRespondToAuthChallengeRequest& WithClientMetadata(ClientMetadataT&& value) { SetClientMetadata(std::forward<ClientMetadataT>(value)); return *this;}
    template<typename ClientMetadataKeyT = Aws::String, typename ClientMetadataValueT = Aws::String>
    AdminRespondToAuthChallengeRequest& AddClientMetadata(ClientMetadataKeyT&& key, ClientMetadataValueT&& value) {
      m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::forward<ClientMetadataKeyT>(key), std::forward<ClientMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    ChallengeNameType m_challengeName{ChallengeNameType::NOT_SET};
    bool m_challengeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_challengeResponses;
    bool m_challengeResponsesHasBeenSet = false;

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;

    AnalyticsMetadataType m_analyticsMetadata;
    bool m_analyticsMetadataHasBeenSet = false;

    ContextDataType m_contextData;
    bool m_contextDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
