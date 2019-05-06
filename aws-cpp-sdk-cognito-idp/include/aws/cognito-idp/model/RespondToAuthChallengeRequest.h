/*
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
     * <p>The challenge name. For more information, see .</p> <p>
     * <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The challenge name. For more information, see .</p> <p>
     * <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline bool ChallengeNameHasBeenSet() const { return m_challengeNameHasBeenSet; }

    /**
     * <p>The challenge name. For more information, see .</p> <p>
     * <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }

    /**
     * <p>The challenge name. For more information, see .</p> <p>
     * <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeNameHasBeenSet = true; m_challengeName = std::move(value); }

    /**
     * <p>The challenge name. For more information, see .</p> <p>
     * <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
     */
    inline RespondToAuthChallengeRequest& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The challenge name. For more information, see .</p> <p>
     * <code>ADMIN_NO_SRP_AUTH</code> is not a valid value.</p>
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
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeResponses() const{ return m_challengeResponses; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline bool ChallengeResponsesHasBeenSet() const { return m_challengeResponsesHasBeenSet; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline void SetChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = value; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline void SetChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = std::move(value); }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline RespondToAuthChallengeRequest& WithChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeResponses(value); return *this;}

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline RespondToAuthChallengeRequest& WithChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeResponses(std::move(value)); return *this;}

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const char* key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, any other required attributes, <code>USERNAME</code>,
     * <code>SECRET_HASH</code> (if app client is configured with client secret). </p>
     * </li> </ul>
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
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
