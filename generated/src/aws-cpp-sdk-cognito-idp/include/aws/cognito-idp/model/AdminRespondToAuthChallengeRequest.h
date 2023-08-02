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


    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


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
    inline AdminRespondToAuthChallengeRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline bool ChallengeNameHasBeenSet() const { return m_challengeNameHasBeenSet; }

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeNameHasBeenSet = true; m_challengeName = std::move(value); }

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The challenge name. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}


    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
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
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
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
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
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
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
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
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeResponses(value); return *this;}

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeResponses(std::move(value)); return *this;}

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const char* key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p>  <p> <code>PASSWORD_VERIFIER</code> requires
     * <code>DEVICE_KEY</code> when signing in with a remembered device.</p> 
     * </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: <code>PASSWORD</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret). </p> </li> <li> <p> <code>NEW_PASSWORD_REQUIRED</code>:
     * <code>NEW_PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret). To set any required attributes
     * that Amazon Cognito returned as <code>requiredAttributes</code> in the
     * <code>AdminInitiateAuth</code> response, add a
     * <code>userAttributes.<i>attributename</i> </code> parameter. This parameter can
     * also set values for writable attributes that aren't required by your user
     * pool.</p>  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response,
     * you can't modify a required attribute that already has a value. In
     * <code>AdminRespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>AdminUpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>
     * requires <code>USERNAME</code>, plus you must use the session value returned by
     * <code>VerifySoftwareToken</code> in the <code>Session</code> parameter.</p>
     * </li> </ul> <p>The value of the <code>USERNAME</code> attribute must be the
     * user's actual username, not an alias (such as an email address or phone number).
     * To make this simpler, the <code>AdminInitiateAuth</code> response includes the
     * actual username value in the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute.
     * This happens even if you specified an alias in your call to
     * <code>AdminInitiateAuth</code>.</p> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const char* key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, value); return *this; }


    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If an <code>InitiateAuth</code> or
     * <code>RespondToAuthChallenge</code> API call determines that the caller must
     * pass another challenge, it returns a session with other challenge parameters.
     * This session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If an <code>InitiateAuth</code> or
     * <code>RespondToAuthChallenge</code> API call determines that the caller must
     * pass another challenge, it returns a session with other challenge parameters.
     * This session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If an <code>InitiateAuth</code> or
     * <code>RespondToAuthChallenge</code> API call determines that the caller must
     * pass another challenge, it returns a session with other challenge parameters.
     * This session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const Aws::String& value) { m_sessionHasBeenSet = true; m_session = value; }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If an <code>InitiateAuth</code> or
     * <code>RespondToAuthChallenge</code> API call determines that the caller must
     * pass another challenge, it returns a session with other challenge parameters.
     * This session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(Aws::String&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If an <code>InitiateAuth</code> or
     * <code>RespondToAuthChallenge</code> API call determines that the caller must
     * pass another challenge, it returns a session with other challenge parameters.
     * This session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const char* value) { m_sessionHasBeenSet = true; m_session.assign(value); }

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If an <code>InitiateAuth</code> or
     * <code>RespondToAuthChallenge</code> API call determines that the caller must
     * pass another challenge, it returns a session with other challenge parameters.
     * This session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If an <code>InitiateAuth</code> or
     * <code>RespondToAuthChallenge</code> API call determines that the caller must
     * pass another challenge, it returns a session with other challenge parameters.
     * This session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}

    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service. If an <code>InitiateAuth</code> or
     * <code>RespondToAuthChallenge</code> API call determines that the caller must
     * pass another challenge, it returns a session with other challenge parameters.
     * This session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithSession(const char* value) { SetSession(value); return *this;}


    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminRespondToAuthChallenge</code> calls.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const{ return m_analyticsMetadata; }

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminRespondToAuthChallenge</code> calls.</p>
     */
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminRespondToAuthChallenge</code> calls.</p>
     */
    inline void SetAnalyticsMetadata(const AnalyticsMetadataType& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = value; }

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminRespondToAuthChallenge</code> calls.</p>
     */
    inline void SetAnalyticsMetadata(AnalyticsMetadataType&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::move(value); }

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminRespondToAuthChallenge</code> calls.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithAnalyticsMetadata(const AnalyticsMetadataType& value) { SetAnalyticsMetadata(value); return *this;}

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminRespondToAuthChallenge</code> calls.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithAnalyticsMetadata(AnalyticsMetadataType&& value) { SetAnalyticsMetadata(std::move(value)); return *this;}


    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p>
     */
    inline const ContextDataType& GetContextData() const{ return m_contextData; }

    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p>
     */
    inline bool ContextDataHasBeenSet() const { return m_contextDataHasBeenSet; }

    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p>
     */
    inline void SetContextData(const ContextDataType& value) { m_contextDataHasBeenSet = true; m_contextData = value; }

    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p>
     */
    inline void SetContextData(ContextDataType&& value) { m_contextDataHasBeenSet = true; m_contextData = std::move(value); }

    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithContextData(const ContextDataType& value) { SetContextData(value); return *this;}

    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithContextData(ContextDataType&& value) { SetContextData(std::move(value)); return *this;}


    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const{ return m_clientMetadata; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::move(value); }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminRespondToAuthChallengeRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminRespondToAuthChallengeRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminRespondToAuthChallenge API action, Amazon Cognito invokes any functions
     * that you have assigned to the following triggers: </p> <ul> <li> <p>pre
     * sign-up</p> </li> <li> <p>custom message</p> </li> <li> <p>post
     * authentication</p> </li> <li> <p>user migration</p> </li> <li> <p>pre token
     * generation</p> </li> <li> <p>define auth challenge</p> </li> <li> <p>create auth
     * challenge</p> </li> <li> <p>verify auth challenge response</p> </li> </ul>
     * <p>When Amazon Cognito invokes any of these functions, it passes a JSON payload,
     * which the function receives as input. This payload contains a
     * <code>clientMetadata</code> attribute that provides the data that you assigned
     * to the ClientMetadata parameter in your AdminRespondToAuthChallenge request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminRespondToAuthChallengeRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

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
