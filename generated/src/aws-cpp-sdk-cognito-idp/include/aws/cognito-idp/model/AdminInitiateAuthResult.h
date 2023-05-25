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
   * <p>Initiates the authentication response, as an administrator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminInitiateAuthResponse">AWS
   * API Reference</a></p>
   */
  class AdminInitiateAuthResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminInitiateAuthResult();
    AWS_COGNITOIDENTITYPROVIDER_API AdminInitiateAuthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminInitiateAuthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the challenge that you're responding to with this call. This is
     * returned in the <code>AdminInitiateAuth</code> response if you must pass another
     * challenge.</p> <ul> <li> <p> <code>MFA_SETUP</code>: If MFA is required, users
     * who don't have at least one of the MFA methods set up are presented with an
     * <code>MFA_SETUP</code> challenge. The user must set up at least one MFA type to
     * continue to authenticate.</p> </li> <li> <p> <code>SELECT_MFA_TYPE</code>:
     * Selects the MFA type. Valid MFA options are <code>SMS_MFA</code> for text SMS
     * MFA, and <code>SOFTWARE_TOKEN_MFA</code> for time-based one-time password (TOTP)
     * software token MFA.</p> </li> <li> <p> <code>SMS_MFA</code>: Next challenge is
     * to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was activated in your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>ADMIN_NO_SRP_AUTH</code>: This is returned if you must authenticate with
     * <code>USERNAME</code> and <code>PASSWORD</code> directly. An app client must be
     * enabled to use this flow.</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * For users who are required to change their passwords after successful first
     * login. Respond to this challenge with <code>NEW_PASSWORD</code> and any required
     * attributes that Amazon Cognito returned in the <code>requiredAttributes</code>
     * parameter. You can also set values for attributes that aren't required by your
     * user pool and that your app client can write. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminRespondToAuthChallenge.html">AdminRespondToAuthChallenge</a>.</p>
     *  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response, you can't
     * modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>: For
     * users who are required to set up an MFA factor before they can sign in. The MFA
     * types activated for the user pool will be listed in the challenge parameters
     * <code>MFA_CAN_SETUP</code> value. </p> <p> To set up software token MFA, use the
     * session returned here from <code>InitiateAuth</code> as an input to
     * <code>AssociateSoftwareToken</code>, and use the session returned by
     * <code>VerifySoftwareToken</code> as an input to
     * <code>RespondToAuthChallenge</code> with challenge name <code>MFA_SETUP</code>
     * to complete sign-in. To set up SMS MFA, users will need help from an
     * administrator to add a phone number to their account and then call
     * <code>InitiateAuth</code> again to restart sign-in.</p> </li> </ul>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The name of the challenge that you're responding to with this call. This is
     * returned in the <code>AdminInitiateAuth</code> response if you must pass another
     * challenge.</p> <ul> <li> <p> <code>MFA_SETUP</code>: If MFA is required, users
     * who don't have at least one of the MFA methods set up are presented with an
     * <code>MFA_SETUP</code> challenge. The user must set up at least one MFA type to
     * continue to authenticate.</p> </li> <li> <p> <code>SELECT_MFA_TYPE</code>:
     * Selects the MFA type. Valid MFA options are <code>SMS_MFA</code> for text SMS
     * MFA, and <code>SOFTWARE_TOKEN_MFA</code> for time-based one-time password (TOTP)
     * software token MFA.</p> </li> <li> <p> <code>SMS_MFA</code>: Next challenge is
     * to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was activated in your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>ADMIN_NO_SRP_AUTH</code>: This is returned if you must authenticate with
     * <code>USERNAME</code> and <code>PASSWORD</code> directly. An app client must be
     * enabled to use this flow.</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * For users who are required to change their passwords after successful first
     * login. Respond to this challenge with <code>NEW_PASSWORD</code> and any required
     * attributes that Amazon Cognito returned in the <code>requiredAttributes</code>
     * parameter. You can also set values for attributes that aren't required by your
     * user pool and that your app client can write. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminRespondToAuthChallenge.html">AdminRespondToAuthChallenge</a>.</p>
     *  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response, you can't
     * modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>: For
     * users who are required to set up an MFA factor before they can sign in. The MFA
     * types activated for the user pool will be listed in the challenge parameters
     * <code>MFA_CAN_SETUP</code> value. </p> <p> To set up software token MFA, use the
     * session returned here from <code>InitiateAuth</code> as an input to
     * <code>AssociateSoftwareToken</code>, and use the session returned by
     * <code>VerifySoftwareToken</code> as an input to
     * <code>RespondToAuthChallenge</code> with challenge name <code>MFA_SETUP</code>
     * to complete sign-in. To set up SMS MFA, users will need help from an
     * administrator to add a phone number to their account and then call
     * <code>InitiateAuth</code> again to restart sign-in.</p> </li> </ul>
     */
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeName = value; }

    /**
     * <p>The name of the challenge that you're responding to with this call. This is
     * returned in the <code>AdminInitiateAuth</code> response if you must pass another
     * challenge.</p> <ul> <li> <p> <code>MFA_SETUP</code>: If MFA is required, users
     * who don't have at least one of the MFA methods set up are presented with an
     * <code>MFA_SETUP</code> challenge. The user must set up at least one MFA type to
     * continue to authenticate.</p> </li> <li> <p> <code>SELECT_MFA_TYPE</code>:
     * Selects the MFA type. Valid MFA options are <code>SMS_MFA</code> for text SMS
     * MFA, and <code>SOFTWARE_TOKEN_MFA</code> for time-based one-time password (TOTP)
     * software token MFA.</p> </li> <li> <p> <code>SMS_MFA</code>: Next challenge is
     * to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was activated in your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>ADMIN_NO_SRP_AUTH</code>: This is returned if you must authenticate with
     * <code>USERNAME</code> and <code>PASSWORD</code> directly. An app client must be
     * enabled to use this flow.</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * For users who are required to change their passwords after successful first
     * login. Respond to this challenge with <code>NEW_PASSWORD</code> and any required
     * attributes that Amazon Cognito returned in the <code>requiredAttributes</code>
     * parameter. You can also set values for attributes that aren't required by your
     * user pool and that your app client can write. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminRespondToAuthChallenge.html">AdminRespondToAuthChallenge</a>.</p>
     *  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response, you can't
     * modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>: For
     * users who are required to set up an MFA factor before they can sign in. The MFA
     * types activated for the user pool will be listed in the challenge parameters
     * <code>MFA_CAN_SETUP</code> value. </p> <p> To set up software token MFA, use the
     * session returned here from <code>InitiateAuth</code> as an input to
     * <code>AssociateSoftwareToken</code>, and use the session returned by
     * <code>VerifySoftwareToken</code> as an input to
     * <code>RespondToAuthChallenge</code> with challenge name <code>MFA_SETUP</code>
     * to complete sign-in. To set up SMS MFA, users will need help from an
     * administrator to add a phone number to their account and then call
     * <code>InitiateAuth</code> again to restart sign-in.</p> </li> </ul>
     */
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeName = std::move(value); }

    /**
     * <p>The name of the challenge that you're responding to with this call. This is
     * returned in the <code>AdminInitiateAuth</code> response if you must pass another
     * challenge.</p> <ul> <li> <p> <code>MFA_SETUP</code>: If MFA is required, users
     * who don't have at least one of the MFA methods set up are presented with an
     * <code>MFA_SETUP</code> challenge. The user must set up at least one MFA type to
     * continue to authenticate.</p> </li> <li> <p> <code>SELECT_MFA_TYPE</code>:
     * Selects the MFA type. Valid MFA options are <code>SMS_MFA</code> for text SMS
     * MFA, and <code>SOFTWARE_TOKEN_MFA</code> for time-based one-time password (TOTP)
     * software token MFA.</p> </li> <li> <p> <code>SMS_MFA</code>: Next challenge is
     * to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was activated in your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>ADMIN_NO_SRP_AUTH</code>: This is returned if you must authenticate with
     * <code>USERNAME</code> and <code>PASSWORD</code> directly. An app client must be
     * enabled to use this flow.</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * For users who are required to change their passwords after successful first
     * login. Respond to this challenge with <code>NEW_PASSWORD</code> and any required
     * attributes that Amazon Cognito returned in the <code>requiredAttributes</code>
     * parameter. You can also set values for attributes that aren't required by your
     * user pool and that your app client can write. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminRespondToAuthChallenge.html">AdminRespondToAuthChallenge</a>.</p>
     *  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response, you can't
     * modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>: For
     * users who are required to set up an MFA factor before they can sign in. The MFA
     * types activated for the user pool will be listed in the challenge parameters
     * <code>MFA_CAN_SETUP</code> value. </p> <p> To set up software token MFA, use the
     * session returned here from <code>InitiateAuth</code> as an input to
     * <code>AssociateSoftwareToken</code>, and use the session returned by
     * <code>VerifySoftwareToken</code> as an input to
     * <code>RespondToAuthChallenge</code> with challenge name <code>MFA_SETUP</code>
     * to complete sign-in. To set up SMS MFA, users will need help from an
     * administrator to add a phone number to their account and then call
     * <code>InitiateAuth</code> again to restart sign-in.</p> </li> </ul>
     */
    inline AdminInitiateAuthResult& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The name of the challenge that you're responding to with this call. This is
     * returned in the <code>AdminInitiateAuth</code> response if you must pass another
     * challenge.</p> <ul> <li> <p> <code>MFA_SETUP</code>: If MFA is required, users
     * who don't have at least one of the MFA methods set up are presented with an
     * <code>MFA_SETUP</code> challenge. The user must set up at least one MFA type to
     * continue to authenticate.</p> </li> <li> <p> <code>SELECT_MFA_TYPE</code>:
     * Selects the MFA type. Valid MFA options are <code>SMS_MFA</code> for text SMS
     * MFA, and <code>SOFTWARE_TOKEN_MFA</code> for time-based one-time password (TOTP)
     * software token MFA.</p> </li> <li> <p> <code>SMS_MFA</code>: Next challenge is
     * to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was activated in your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>ADMIN_NO_SRP_AUTH</code>: This is returned if you must authenticate with
     * <code>USERNAME</code> and <code>PASSWORD</code> directly. An app client must be
     * enabled to use this flow.</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * For users who are required to change their passwords after successful first
     * login. Respond to this challenge with <code>NEW_PASSWORD</code> and any required
     * attributes that Amazon Cognito returned in the <code>requiredAttributes</code>
     * parameter. You can also set values for attributes that aren't required by your
     * user pool and that your app client can write. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminRespondToAuthChallenge.html">AdminRespondToAuthChallenge</a>.</p>
     *  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response, you can't
     * modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>: For
     * users who are required to set up an MFA factor before they can sign in. The MFA
     * types activated for the user pool will be listed in the challenge parameters
     * <code>MFA_CAN_SETUP</code> value. </p> <p> To set up software token MFA, use the
     * session returned here from <code>InitiateAuth</code> as an input to
     * <code>AssociateSoftwareToken</code>, and use the session returned by
     * <code>VerifySoftwareToken</code> as an input to
     * <code>RespondToAuthChallenge</code> with challenge name <code>MFA_SETUP</code>
     * to complete sign-in. To set up SMS MFA, users will need help from an
     * administrator to add a phone number to their account and then call
     * <code>InitiateAuth</code> again to restart sign-in.</p> </li> </ul>
     */
    inline AdminInitiateAuthResult& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}


    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If <code>AdminInitiateAuth</code> or
     * <code>AdminRespondToAuthChallenge</code> API call determines that the caller
     * must pass another challenge, they return a session with other challenge
     * parameters. This session should be passed as it is to the next
     * <code>AdminRespondToAuthChallenge</code> API call.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If <code>AdminInitiateAuth</code> or
     * <code>AdminRespondToAuthChallenge</code> API call determines that the caller
     * must pass another challenge, they return a session with other challenge
     * parameters. This session should be passed as it is to the next
     * <code>AdminRespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const Aws::String& value) { m_session = value; }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If <code>AdminInitiateAuth</code> or
     * <code>AdminRespondToAuthChallenge</code> API call determines that the caller
     * must pass another challenge, they return a session with other challenge
     * parameters. This session should be passed as it is to the next
     * <code>AdminRespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(Aws::String&& value) { m_session = std::move(value); }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If <code>AdminInitiateAuth</code> or
     * <code>AdminRespondToAuthChallenge</code> API call determines that the caller
     * must pass another challenge, they return a session with other challenge
     * parameters. This session should be passed as it is to the next
     * <code>AdminRespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const char* value) { m_session.assign(value); }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If <code>AdminInitiateAuth</code> or
     * <code>AdminRespondToAuthChallenge</code> API call determines that the caller
     * must pass another challenge, they return a session with other challenge
     * parameters. This session should be passed as it is to the next
     * <code>AdminRespondToAuthChallenge</code> API call.</p>
     */
    inline AdminInitiateAuthResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If <code>AdminInitiateAuth</code> or
     * <code>AdminRespondToAuthChallenge</code> API call determines that the caller
     * must pass another challenge, they return a session with other challenge
     * parameters. This session should be passed as it is to the next
     * <code>AdminRespondToAuthChallenge</code> API call.</p>
     */
    inline AdminInitiateAuthResult& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If <code>AdminInitiateAuth</code> or
     * <code>AdminRespondToAuthChallenge</code> API call determines that the caller
     * must pass another challenge, they return a session with other challenge
     * parameters. This session should be passed as it is to the next
     * <code>AdminRespondToAuthChallenge</code> API call.</p>
     */
    inline AdminInitiateAuthResult& WithSession(const char* value) { SetSession(value); return *this;}


    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeParameters() const{ return m_challengeParameters; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline void SetChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeParameters = value; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline void SetChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeParameters = std::move(value); }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline AdminInitiateAuthResult& WithChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeParameters(value); return *this;}

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline AdminInitiateAuthResult& WithChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeParameters(std::move(value)); return *this;}

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline AdminInitiateAuthResult& AddChallengeParameters(const Aws::String& key, const Aws::String& value) { m_challengeParameters.emplace(key, value); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline AdminInitiateAuthResult& AddChallengeParameters(Aws::String&& key, const Aws::String& value) { m_challengeParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline AdminInitiateAuthResult& AddChallengeParameters(const Aws::String& key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline AdminInitiateAuthResult& AddChallengeParameters(Aws::String&& key, Aws::String&& value) { m_challengeParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline AdminInitiateAuthResult& AddChallengeParameters(const char* key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline AdminInitiateAuthResult& AddChallengeParameters(Aws::String&& key, const char* value) { m_challengeParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>AdminInitiateAuth</code> response if you must pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>AdminRespondToAuthChallenge</code>).</p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p> <p>The
     * value of the <code>USER_ID_FOR_SRP</code> attribute is the user's actual
     * username, not an alias (such as email address or phone number), even if you
     * specified an alias in your call to <code>AdminInitiateAuth</code>. This happens
     * because, in the <code>AdminRespondToAuthChallenge</code> API
     * <code>ChallengeResponses</code>, the <code>USERNAME</code> attribute can't be an
     * alias.</p>
     */
    inline AdminInitiateAuthResult& AddChallengeParameters(const char* key, const char* value) { m_challengeParameters.emplace(key, value); return *this; }


    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller doesn't need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline const AuthenticationResultType& GetAuthenticationResult() const{ return m_authenticationResult; }

    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller doesn't need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline void SetAuthenticationResult(const AuthenticationResultType& value) { m_authenticationResult = value; }

    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller doesn't need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline void SetAuthenticationResult(AuthenticationResultType&& value) { m_authenticationResult = std::move(value); }

    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller doesn't need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline AdminInitiateAuthResult& WithAuthenticationResult(const AuthenticationResultType& value) { SetAuthenticationResult(value); return *this;}

    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller doesn't need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline AdminInitiateAuthResult& WithAuthenticationResult(AuthenticationResultType&& value) { SetAuthenticationResult(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AdminInitiateAuthResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AdminInitiateAuthResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AdminInitiateAuthResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
