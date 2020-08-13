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
#include <aws/cognito-idp/model/UserContextDataType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The request to respond to an authentication challenge.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RespondToAuthChallengeRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API RespondToAuthChallengeRequest : public CognitoIdentityProviderRequest
  {
  public:
    RespondToAuthChallengeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RespondToAuthChallenge"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The app client ID.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The app client ID.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The app client ID.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The app client ID.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The app client ID.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The app client ID.</p>
     */
    inline RespondToAuthChallengeRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline RespondToAuthChallengeRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline RespondToAuthChallengeRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_InitiateAuth.html">InitiateAuth</a>.</p>
     * <p> <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_InitiateAuth.html">InitiateAuth</a>.</p>
     * <p> <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline bool ChallengeNameHasBeenSet() const { return m_challengeNameHasBeenSet; }

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_InitiateAuth.html">InitiateAuth</a>.</p>
     * <p> <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_InitiateAuth.html">InitiateAuth</a>.</p>
     * <p> <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeNameHasBeenSet = true; m_challengeName = std::move(value); }

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_InitiateAuth.html">InitiateAuth</a>.</p>
     * <p> <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline RespondToAuthChallengeRequest& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_InitiateAuth.html">InitiateAuth</a>.</p>
     * <p> <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline RespondToAuthChallengeRequest& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}


    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const Aws::String& value) { m_sessionHasBeenSet = true; m_session = value; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(Aws::String&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const char* value) { m_sessionHasBeenSet = true; m_session.assign(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline RespondToAuthChallengeRequest& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline RespondToAuthChallengeRequest& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline RespondToAuthChallengeRequest& WithSession(const char* value) { SetSession(value); return *this;}


    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeResponses() const{ return m_challengeResponses; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline bool ChallengeResponsesHasBeenSet() const { return m_challengeResponsesHasBeenSet; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline void SetChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = value; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline void SetChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = std::move(value); }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline RespondToAuthChallengeRequest& WithChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeResponses(value); return *this;}

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline RespondToAuthChallengeRequest& WithChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeResponses(std::move(value)); return *this;}

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const char* key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p>  <p> <code>SECRET_HASH</code>
     * (if app client is configured with client secret) applies to all inputs below
     * (including <code>SOFTWARE_TOKEN_MFA</code>).</p>  <ul> <li> <p>
     * <code>SMS_MFA</code>: <code>SMS_MFA_CODE</code>, <code>USERNAME</code>.</p>
     * </li> <li> <p> <code>PASSWORD_VERIFIER</code>:
     * <code>PASSWORD_CLAIM_SIGNATURE</code>, <code>PASSWORD_CLAIM_SECRET_BLOCK</code>,
     * <code>TIMESTAMP</code>, <code>USERNAME</code>.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>. </p> </li> <li> <p>
     * <code>SOFTWARE_TOKEN_MFA</code>: <code>USERNAME</code> and
     * <code>SOFTWARE_TOKEN_MFA_CODE</code> are required attributes.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code> requires <code>USERNAME</code>,
     * <code>DEVICE_KEY</code>, <code>SRP_A</code> (and <code>SECRET_HASH</code>).</p>
     * </li> <li> <p> <code>DEVICE_PASSWORD_VERIFIER</code> requires everything that
     * <code>PASSWORD_VERIFIER</code> requires plus <code>DEVICE_KEY</code>.</p> </li>
     * </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const char* key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>RespondToAuthChallenge</code> calls.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const{ return m_analyticsMetadata; }

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>RespondToAuthChallenge</code> calls.</p>
     */
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>RespondToAuthChallenge</code> calls.</p>
     */
    inline void SetAnalyticsMetadata(const AnalyticsMetadataType& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = value; }

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>RespondToAuthChallenge</code> calls.</p>
     */
    inline void SetAnalyticsMetadata(AnalyticsMetadataType&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::move(value); }

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>RespondToAuthChallenge</code> calls.</p>
     */
    inline RespondToAuthChallengeRequest& WithAnalyticsMetadata(const AnalyticsMetadataType& value) { SetAnalyticsMetadata(value); return *this;}

    /**
     * <p>The Amazon Pinpoint analytics metadata for collecting metrics for
     * <code>RespondToAuthChallenge</code> calls.</p>
     */
    inline RespondToAuthChallengeRequest& WithAnalyticsMetadata(AnalyticsMetadataType&& value) { SetAnalyticsMetadata(std::move(value)); return *this;}


    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline const UserContextDataType& GetUserContextData() const{ return m_userContextData; }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline bool UserContextDataHasBeenSet() const { return m_userContextDataHasBeenSet; }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline void SetUserContextData(const UserContextDataType& value) { m_userContextDataHasBeenSet = true; m_userContextData = value; }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline void SetUserContextData(UserContextDataType&& value) { m_userContextDataHasBeenSet = true; m_userContextData = std::move(value); }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline RespondToAuthChallengeRequest& WithUserContextData(const UserContextDataType& value) { SetUserContextData(value); return *this;}

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline RespondToAuthChallengeRequest& WithUserContextData(UserContextDataType&& value) { SetUserContextData(std::move(value)); return *this;}


    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const{ return m_clientMetadata; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::move(value); }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline RespondToAuthChallengeRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline RespondToAuthChallengeRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline RespondToAuthChallengeRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline RespondToAuthChallengeRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline RespondToAuthChallengeRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline RespondToAuthChallengeRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline RespondToAuthChallengeRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline RespondToAuthChallengeRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * RespondToAuthChallenge API action, Amazon Cognito invokes any functions that are
     * assigned to the following triggers: <i>post authentication</i>, <i>pre token
     * generation</i>, <i>define auth challenge</i>, <i>create auth challenge</i>, and
     * <i>verify auth challenge</i>. When Amazon Cognito invokes any of these
     * functions, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * RespondToAuthChallenge request. In your function code in AWS Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline RespondToAuthChallengeRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    ChallengeNameType m_challengeName;
    bool m_challengeNameHasBeenSet;

    Aws::String m_session;
    bool m_sessionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_challengeResponses;
    bool m_challengeResponsesHasBeenSet;

    AnalyticsMetadataType m_analyticsMetadata;
    bool m_analyticsMetadataHasBeenSet;

    UserContextDataType m_userContextData;
    bool m_userContextDataHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
