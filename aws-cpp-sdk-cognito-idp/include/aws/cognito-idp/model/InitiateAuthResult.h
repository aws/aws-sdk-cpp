﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Initiates the authentication response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InitiateAuthResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API InitiateAuthResult
  {
  public:
    InitiateAuthResult();
    InitiateAuthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    InitiateAuthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the challenge which you are responding to with this call. This is
     * returned to you in the <code>AdminInitiateAuth</code> response if you need to
     * pass another challenge.</p> <p>Valid values include the following. Note that all
     * of these challenges require <code>USERNAME</code> and <code>SECRET_HASH</code>
     * (if applicable) in the parameters.</p> <ul> <li> <p> <code>SMS_MFA</code>: Next
     * challenge is to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was enabled on your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: For users which are required to change their
     * passwords after successful first login. This challenge should be passed with
     * <code>NEW_PASSWORD</code> and any other required attributes.</p> </li> </ul>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The name of the challenge which you are responding to with this call. This is
     * returned to you in the <code>AdminInitiateAuth</code> response if you need to
     * pass another challenge.</p> <p>Valid values include the following. Note that all
     * of these challenges require <code>USERNAME</code> and <code>SECRET_HASH</code>
     * (if applicable) in the parameters.</p> <ul> <li> <p> <code>SMS_MFA</code>: Next
     * challenge is to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was enabled on your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: For users which are required to change their
     * passwords after successful first login. This challenge should be passed with
     * <code>NEW_PASSWORD</code> and any other required attributes.</p> </li> </ul>
     */
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeName = value; }

    /**
     * <p>The name of the challenge which you are responding to with this call. This is
     * returned to you in the <code>AdminInitiateAuth</code> response if you need to
     * pass another challenge.</p> <p>Valid values include the following. Note that all
     * of these challenges require <code>USERNAME</code> and <code>SECRET_HASH</code>
     * (if applicable) in the parameters.</p> <ul> <li> <p> <code>SMS_MFA</code>: Next
     * challenge is to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was enabled on your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: For users which are required to change their
     * passwords after successful first login. This challenge should be passed with
     * <code>NEW_PASSWORD</code> and any other required attributes.</p> </li> </ul>
     */
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeName = std::move(value); }

    /**
     * <p>The name of the challenge which you are responding to with this call. This is
     * returned to you in the <code>AdminInitiateAuth</code> response if you need to
     * pass another challenge.</p> <p>Valid values include the following. Note that all
     * of these challenges require <code>USERNAME</code> and <code>SECRET_HASH</code>
     * (if applicable) in the parameters.</p> <ul> <li> <p> <code>SMS_MFA</code>: Next
     * challenge is to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was enabled on your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: For users which are required to change their
     * passwords after successful first login. This challenge should be passed with
     * <code>NEW_PASSWORD</code> and any other required attributes.</p> </li> </ul>
     */
    inline InitiateAuthResult& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The name of the challenge which you are responding to with this call. This is
     * returned to you in the <code>AdminInitiateAuth</code> response if you need to
     * pass another challenge.</p> <p>Valid values include the following. Note that all
     * of these challenges require <code>USERNAME</code> and <code>SECRET_HASH</code>
     * (if applicable) in the parameters.</p> <ul> <li> <p> <code>SMS_MFA</code>: Next
     * challenge is to supply an <code>SMS_MFA_CODE</code>, delivered via SMS.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>: Next challenge is to supply
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * and <code>TIMESTAMP</code> after the client-side SRP calculations.</p> </li>
     * <li> <p> <code>CUSTOM_CHALLENGE</code>: This is returned if your custom
     * authentication flow determines that the user should pass another challenge
     * before tokens are issued.</p> </li> <li> <p> <code>DEVICE_SRP_AUTH</code>: If
     * device tracking was enabled on your user pool and the previous challenges were
     * passed, this challenge is returned so that Amazon Cognito can start tracking
     * this device.</p> </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code>: Similar
     * to <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: For users which are required to change their
     * passwords after successful first login. This challenge should be passed with
     * <code>NEW_PASSWORD</code> and any other required attributes.</p> </li> </ul>
     */
    inline InitiateAuthResult& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}


    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const Aws::String& value) { m_session = value; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(Aws::String&& value) { m_session = std::move(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const char* value) { m_session.assign(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline InitiateAuthResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline InitiateAuthResult& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline InitiateAuthResult& WithSession(const char* value) { SetSession(value); return *this;}


    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeParameters() const{ return m_challengeParameters; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline void SetChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeParameters = value; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline void SetChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeParameters = std::move(value); }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline InitiateAuthResult& WithChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeParameters(value); return *this;}

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline InitiateAuthResult& WithChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeParameters(std::move(value)); return *this;}

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline InitiateAuthResult& AddChallengeParameters(const Aws::String& key, const Aws::String& value) { m_challengeParameters.emplace(key, value); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline InitiateAuthResult& AddChallengeParameters(Aws::String&& key, const Aws::String& value) { m_challengeParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline InitiateAuthResult& AddChallengeParameters(const Aws::String& key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline InitiateAuthResult& AddChallengeParameters(Aws::String&& key, Aws::String&& value) { m_challengeParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline InitiateAuthResult& AddChallengeParameters(const char* key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline InitiateAuthResult& AddChallengeParameters(Aws::String&& key, const char* value) { m_challengeParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge parameters. These are returned to you in the
     * <code>InitiateAuth</code> response if you need to pass another challenge. The
     * responses in this parameter should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code> and <code>SECRET_HASH</code> (if applicable).</p>
     */
    inline InitiateAuthResult& AddChallengeParameters(const char* key, const char* value) { m_challengeParameters.emplace(key, value); return *this; }


    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller does not need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline const AuthenticationResultType& GetAuthenticationResult() const{ return m_authenticationResult; }

    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller does not need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline void SetAuthenticationResult(const AuthenticationResultType& value) { m_authenticationResult = value; }

    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller does not need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline void SetAuthenticationResult(AuthenticationResultType&& value) { m_authenticationResult = std::move(value); }

    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller does not need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline InitiateAuthResult& WithAuthenticationResult(const AuthenticationResultType& value) { SetAuthenticationResult(value); return *this;}

    /**
     * <p>The result of the authentication response. This is only returned if the
     * caller does not need to pass another challenge. If the caller does need to pass
     * another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline InitiateAuthResult& WithAuthenticationResult(AuthenticationResultType&& value) { SetAuthenticationResult(std::move(value)); return *this;}

  private:

    ChallengeNameType m_challengeName;

    Aws::String m_session;

    Aws::Map<Aws::String, Aws::String> m_challengeParameters;

    AuthenticationResultType m_authenticationResult;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
