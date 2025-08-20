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
    AWS_COGNITOIDENTITYPROVIDER_API RespondToAuthChallengeResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API RespondToAuthChallengeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API RespondToAuthChallengeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the next challenge that you must respond to.</p> <p>Possible
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
    inline void SetChallengeName(ChallengeNameType value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }
    inline RespondToAuthChallengeResult& WithChallengeName(ChallengeNameType value) { SetChallengeName(value); return *this;}
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
    inline const Aws::String& GetSession() const { return m_session; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    RespondToAuthChallengeResult& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that define your response to the next challenge.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeParameters() const { return m_challengeParameters; }
    template<typename ChallengeParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetChallengeParameters(ChallengeParametersT&& value) { m_challengeParametersHasBeenSet = true; m_challengeParameters = std::forward<ChallengeParametersT>(value); }
    template<typename ChallengeParametersT = Aws::Map<Aws::String, Aws::String>>
    RespondToAuthChallengeResult& WithChallengeParameters(ChallengeParametersT&& value) { SetChallengeParameters(std::forward<ChallengeParametersT>(value)); return *this;}
    template<typename ChallengeParametersKeyT = Aws::String, typename ChallengeParametersValueT = Aws::String>
    RespondToAuthChallengeResult& AddChallengeParameters(ChallengeParametersKeyT&& key, ChallengeParametersValueT&& value) {
      m_challengeParametersHasBeenSet = true; m_challengeParameters.emplace(std::forward<ChallengeParametersKeyT>(key), std::forward<ChallengeParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The outcome of a successful authentication process. After your application
     * has passed all challenges, Amazon Cognito returns an
     * <code>AuthenticationResult</code> with the JSON web tokens (JWTs) that indicate
     * successful sign-in.</p>
     */
    inline const AuthenticationResultType& GetAuthenticationResult() const { return m_authenticationResult; }
    template<typename AuthenticationResultT = AuthenticationResultType>
    void SetAuthenticationResult(AuthenticationResultT&& value) { m_authenticationResultHasBeenSet = true; m_authenticationResult = std::forward<AuthenticationResultT>(value); }
    template<typename AuthenticationResultT = AuthenticationResultType>
    RespondToAuthChallengeResult& WithAuthenticationResult(AuthenticationResultT&& value) { SetAuthenticationResult(std::forward<AuthenticationResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RespondToAuthChallengeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChallengeNameType m_challengeName{ChallengeNameType::NOT_SET};
    bool m_challengeNameHasBeenSet = false;

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_challengeParameters;
    bool m_challengeParametersHasBeenSet = false;

    AuthenticationResultType m_authenticationResult;
    bool m_authenticationResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
