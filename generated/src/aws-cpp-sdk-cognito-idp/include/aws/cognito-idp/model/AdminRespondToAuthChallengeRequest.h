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
    AWS_COGNITOIDENTITYPROVIDER_API AdminRespondToAuthChallengeRequest();

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
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline AdminRespondToAuthChallengeRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app client where you initiated sign-in.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline AdminRespondToAuthChallengeRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the challenge that you are responding to. You can find more
     * information about values for <code>ChallengeName</code> in the response
     * parameters of <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminInitiateAuth.html#CognitoUserPools-AdminInitiateAuth-response-ChallengeName">AdminInitiateAuth</a>.</p>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }
    inline bool ChallengeNameHasBeenSet() const { return m_challengeNameHasBeenSet; }
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeNameHasBeenSet = true; m_challengeName = std::move(value); }
    inline AdminRespondToAuthChallengeRequest& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}
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
     * href="https://www.w3.org/TR/webauthn-3/#dictdef-authenticationresponsejson">
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
     * "[username]"}</code> </p> </li> </ul> </dd> <dt>SMS_OTP</dt> <dd> <p>
     * <code>"ChallengeName": "SMS_OTP", "ChallengeResponses": {"SMS_OTP_CODE":
     * "[code]", "USERNAME": "[username]"}</code> </p> </dd> <dt>EMAIL_OTP</dt> <dd>
     * <p> <code>"ChallengeName": "EMAIL_OTP", "ChallengeResponses": {"EMAIL_OTP_CODE":
     * "[code]", "USERNAME": "[username]"}</code> </p> </dd> <dt>SMS_MFA</dt> <dd> <p>
     * <code>"ChallengeName": "SMS_MFA", "ChallengeResponses": {"SMS_MFA_CODE":
     * "[code]", "USERNAME": "[username]"}</code> </p> </dd> <dt>PASSWORD_VERIFIER</dt>
     * <dd> <p>This challenge response is part of the SRP flow. Amazon Cognito requires
     * that your application respond to this challenge within a few seconds. When the
     * response time exceeds this period, your user pool returns a
     * <code>NotAuthorizedException</code> error.</p> <p> <code>"ChallengeName":
     * "PASSWORD_VERIFIER", "ChallengeResponses": {"PASSWORD_CLAIM_SIGNATURE":
     * "[claim_signature]", "PASSWORD_CLAIM_SECRET_BLOCK": "[secret_block]",
     * "TIMESTAMP": [timestamp], "USERNAME": "[username]"}</code> </p> <p>Add
     * <code>"DEVICE_KEY"</code> when you sign in with a remembered device.</p> </dd>
     * <dt>CUSTOM_CHALLENGE</dt> <dd> <p> <code>"ChallengeName": "CUSTOM_CHALLENGE",
     * "ChallengeResponses": {"USERNAME": "[username]", "ANSWER":
     * "[challenge_answer]"}</code> </p> <p>Add <code>"DEVICE_KEY"</code> when you sign
     * in with a remembered device.</p> </dd> <dt>NEW_PASSWORD_REQUIRED</dt> <dd> <p>
     * <code>"ChallengeName": "NEW_PASSWORD_REQUIRED", "ChallengeResponses":
     * {"NEW_PASSWORD": "[new_password]", "USERNAME": "[username]"}</code> </p> <p>To
     * set any required attributes that <code>InitiateAuth</code> returned in an
     * <code>requiredAttributes</code> parameter, add
     * <code>"userAttributes.[attribute_name]": "[attribute_value]"</code>. This
     * parameter can also set values for writable attributes that aren't required by
     * your user pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge
     * response, you can't modify a required attribute that already has a value. In
     * <code>RespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>UpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </dd> <dt>SOFTWARE_TOKEN_MFA</dt> <dd> <p>
     * <code>"ChallengeName": "SOFTWARE_TOKEN_MFA", "ChallengeResponses": {"USERNAME":
     * "[username]", "SOFTWARE_TOKEN_MFA_CODE": [authenticator_code]}</code> </p> </dd>
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
     * "[SMS_MFA or SOFTWARE_TOKEN_MFA]"}</code> </p> </dd> </dl> <p>For more
     * information about <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeResponses() const{ return m_challengeResponses; }
    inline bool ChallengeResponsesHasBeenSet() const { return m_challengeResponsesHasBeenSet; }
    inline void SetChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = value; }
    inline void SetChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = std::move(value); }
    inline AdminRespondToAuthChallengeRequest& WithChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeResponses(value); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeResponses(std::move(value)); return *this;}
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, value); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), std::move(value)); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const char* key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const char* key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, value); return *this; }
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
    inline const Aws::String& GetSession() const{ return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    inline void SetSession(const Aws::String& value) { m_sessionHasBeenSet = true; m_session = value; }
    inline void SetSession(Aws::String&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }
    inline void SetSession(const char* value) { m_sessionHasBeenSet = true; m_session.assign(value); }
    inline AdminRespondToAuthChallengeRequest& WithSession(const Aws::String& value) { SetSession(value); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithSession(const char* value) { SetSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminRespondToAuthChallenge</code> calls.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const{ return m_analyticsMetadata; }
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }
    inline void SetAnalyticsMetadata(const AnalyticsMetadataType& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = value; }
    inline void SetAnalyticsMetadata(AnalyticsMetadataType&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::move(value); }
    inline AdminRespondToAuthChallengeRequest& WithAnalyticsMetadata(const AnalyticsMetadataType& value) { SetAnalyticsMetadata(value); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithAnalyticsMetadata(AnalyticsMetadataType&& value) { SetAnalyticsMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-viewing-threat-protection-app.html">Collecting
     * data for threat protection in applications</a>.</p>
     */
    inline const ContextDataType& GetContextData() const{ return m_contextData; }
    inline bool ContextDataHasBeenSet() const { return m_contextDataHasBeenSet; }
    inline void SetContextData(const ContextDataType& value) { m_contextDataHasBeenSet = true; m_contextData = value; }
    inline void SetContextData(ContextDataType&& value) { m_contextDataHasBeenSet = true; m_contextData = std::move(value); }
    inline AdminRespondToAuthChallengeRequest& WithContextData(const ContextDataType& value) { SetContextData(value); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithContextData(ContextDataType&& value) { SetContextData(std::move(value)); return *this;}
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
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the
     * <code>ClientMetadata</code> parameter, note that Amazon Cognito won't do the
     * following:</p> <ul> <li> <p>Store the <code>ClientMetadata</code> value. This
     * data is available only to Lambda triggers that are assigned to a user pool to
     * support custom workflows. If your user pool configuration doesn't include
     * triggers, the <code>ClientMetadata</code> parameter serves no purpose.</p> </li>
     * <li> <p>Validate the <code>ClientMetadata</code> value.</p> </li> <li>
     * <p>Encrypt the <code>ClientMetadata</code> value. Don't send sensitive
     * information in this parameter.</p> </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const{ return m_clientMetadata; }
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::move(value); }
    inline AdminRespondToAuthChallengeRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}
    inline AdminRespondToAuthChallengeRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    ChallengeNameType m_challengeName;
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
