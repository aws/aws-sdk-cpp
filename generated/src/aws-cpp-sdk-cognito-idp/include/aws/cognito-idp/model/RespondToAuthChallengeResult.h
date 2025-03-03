/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ChallengeNameType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AuthenticationResultType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>The response to respond to the authentication challenge.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RespondToAuthChallengeResponse">AWS
   * API Reference</a></p>
   */
  class RespondToAuthChallengeResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API RespondToAuthChallengeResult();
    AWS_COGNITOIDENTITYPROVIDER_API RespondToAuthChallengeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API RespondToAuthChallengeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the next challenge that you must respond to.</p> <p>Possible
     * challenges include the following:</p>  <p>All of the following challenges
     * require <code>USERNAME</code> and, when the app client has a client secret,
     * <code>SECRET_HASH</code> in the parameters.</p>  <ul> <li> <p>
     * <code>WEB_AUTHN</code>: Respond to the challenge with the results of a
     * successful authentication with a WebAuthn authenticator, or passkey. Examples of
     * WebAuthn authenticators include biometric devices and security keys.</p> </li>
     * <li> <p> <code>PASSWORD</code>: Respond with <code>USER_PASSWORD_AUTH</code>
     * parameters: <code>USERNAME</code> (required), <code>PASSWORD</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code>.</p> </li> <li> <p> <code>PASSWORD_SRP</code>:
     * Respond with <code>USER_SRP_AUTH</code> parameters: <code>USERNAME</code>
     * (required), <code>SRP_A</code> (required), <code>SECRET_HASH</code> (required if
     * the app client is configured with a client secret), <code>DEVICE_KEY</code>.</p>
     * </li> <li> <p> <code>SELECT_CHALLENGE</code>: Respond to the challenge with
     * <code>USERNAME</code> and an <code>ANSWER</code> that matches one of the
     * challenge types in the <code>AvailableChallenges</code> response parameter.</p>
     * </li> <li> <p> <code>SMS_MFA</code>: Respond with an <code>SMS_MFA_CODE</code>
     * that your user pool delivered in an SMS message.</p> </li> <li> <p>
     * <code>EMAIL_OTP</code>: Respond with an <code>EMAIL_OTP_CODE</code> that your
     * user pool delivered in an email message.</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: Respond with
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after client-side SRP calculations.</p> </li> <li>
     * <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued. The parameters of the challenge are determined by your
     * Lambda function.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: Respond with
     * the initial parameters of device SRP authentication. For more information, see
     * <a
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
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeName = value; }
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeName = std::move(value); }
    inline RespondToAuthChallengeResult& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}
    inline RespondToAuthChallengeResult& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session identifier that maintains the state of authentication requests
     * and challenge responses. If an <code>InitiateAuth</code> or
     * <code>RespondToAuthChallenge</code> API request results in a determination that
     * your application must pass another challenge, Amazon Cognito returns a session
     * with other challenge parameters. Send this session identifier, unmodified, to
     * the next <code>RespondToAuthChallenge</code> request.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }
    inline void SetSession(const Aws::String& value) { m_session = value; }
    inline void SetSession(Aws::String&& value) { m_session = std::move(value); }
    inline void SetSession(const char* value) { m_session.assign(value); }
    inline RespondToAuthChallengeResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}
    inline RespondToAuthChallengeResult& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}
    inline RespondToAuthChallengeResult& WithSession(const char* value) { SetSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that define your response to the next challenge.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeParameters() const{ return m_challengeParameters; }
    inline void SetChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeParameters = value; }
    inline void SetChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeParameters = std::move(value); }
    inline RespondToAuthChallengeResult& WithChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeParameters(value); return *this;}
    inline RespondToAuthChallengeResult& WithChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeParameters(std::move(value)); return *this;}
    inline RespondToAuthChallengeResult& AddChallengeParameters(const Aws::String& key, const Aws::String& value) { m_challengeParameters.emplace(key, value); return *this; }
    inline RespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, const Aws::String& value) { m_challengeParameters.emplace(std::move(key), value); return *this; }
    inline RespondToAuthChallengeResult& AddChallengeParameters(const Aws::String& key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }
    inline RespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, Aws::String&& value) { m_challengeParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline RespondToAuthChallengeResult& AddChallengeParameters(const char* key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }
    inline RespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, const char* value) { m_challengeParameters.emplace(std::move(key), value); return *this; }
    inline RespondToAuthChallengeResult& AddChallengeParameters(const char* key, const char* value) { m_challengeParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outcome of a successful authentication process. After your application
     * has passed all challenges, Amazon Cognito returns an
     * <code>AuthenticationResult</code> with the JSON web tokens (JWTs) that indicate
     * successful sign-in.</p>
     */
    inline const AuthenticationResultType& GetAuthenticationResult() const{ return m_authenticationResult; }
    inline void SetAuthenticationResult(const AuthenticationResultType& value) { m_authenticationResult = value; }
    inline void SetAuthenticationResult(AuthenticationResultType&& value) { m_authenticationResult = std::move(value); }
    inline RespondToAuthChallengeResult& WithAuthenticationResult(const AuthenticationResultType& value) { SetAuthenticationResult(value); return *this;}
    inline RespondToAuthChallengeResult& WithAuthenticationResult(AuthenticationResultType&& value) { SetAuthenticationResult(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RespondToAuthChallengeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RespondToAuthChallengeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RespondToAuthChallengeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ChallengeNameType m_challengeName;

    Aws::String m_session;

    Aws::Map<Aws::String, Aws::String> m_challengeParameters;

    AuthenticationResultType m_authenticationResult;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
