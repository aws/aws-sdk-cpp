/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ChallengeName.h>
#include <aws/cognito-idp/model/ChallengeResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

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
   * with user devices in your user pool</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ChallengeResponseType">AWS
   * API Reference</a></p>
   */
  class ChallengeResponseType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ChallengeResponseType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ChallengeResponseType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ChallengeResponseType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of challenge that your previous authentication request returned in
     * the parameter <code>ChallengeName</code>, for example <code>SMS_MFA</code>.</p>
     */
    inline ChallengeName GetChallengeName() const { return m_challengeName; }
    inline bool ChallengeNameHasBeenSet() const { return m_challengeNameHasBeenSet; }
    inline void SetChallengeName(ChallengeName value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }
    inline ChallengeResponseType& WithChallengeName(ChallengeName value) { SetChallengeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of key-value pairs that provides a response to the requested
     * challenge.</p>
     */
    inline ChallengeResponse GetChallengeResponse() const { return m_challengeResponse; }
    inline bool ChallengeResponseHasBeenSet() const { return m_challengeResponseHasBeenSet; }
    inline void SetChallengeResponse(ChallengeResponse value) { m_challengeResponseHasBeenSet = true; m_challengeResponse = value; }
    inline ChallengeResponseType& WithChallengeResponse(ChallengeResponse value) { SetChallengeResponse(value); return *this;}
    ///@}
  private:

    ChallengeName m_challengeName{ChallengeName::NOT_SET};
    bool m_challengeNameHasBeenSet = false;

    ChallengeResponse m_challengeResponse{ChallengeResponse::NOT_SET};
    bool m_challengeResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
