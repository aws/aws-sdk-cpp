﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/model/AuthFlowType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Initiates the authentication request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InitiateAuthRequest">AWS
   * API Reference</a></p>
   */
  class InitiateAuthRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API InitiateAuthRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitiateAuth"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The authentication flow that you want to initiate. Each <code>AuthFlow</code>
     * has linked <code>AuthParameters</code> that you must submit. The following are
     * some example flows.</p> <dl> <dt>USER_AUTH</dt> <dd> <p>The entry point for <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flows-selection-sdk.html#authentication-flows-selection-choice">choice-based
     * authentication</a> with passwords, one-time passwords, and WebAuthn
     * authenticators. Request a preferred authentication type or review available
     * authentication types. From the offered authentication types, select one in a
     * challenge response and then authenticate with that method in an additional
     * challenge response. To activate this setting, your user pool must be in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-essentials.html">
     * Essentials tier</a> or higher.</p> </dd> <dt>USER_SRP_AUTH</dt> <dd>
     * <p>Username-password authentication with the Secure Remote Password (SRP)
     * protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-authentication-flow.html#Using-SRP-password-verification-in-custom-authentication-flow">Use
     * SRP password verification in custom authentication flow</a>.</p> </dd>
     * <dt>REFRESH_TOKEN_AUTH and REFRESH_TOKEN</dt> <dd> <p>Receive new ID and access
     * tokens when you pass a <code>REFRESH_TOKEN</code> parameter with a valid refresh
     * token as the value. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-using-the-refresh-token.html">Using
     * the refresh token</a>.</p> </dd> <dt>CUSTOM_AUTH</dt> <dd> <p>Custom
     * authentication with Lambda triggers. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">Custom
     * authentication challenge Lambda triggers</a>.</p> </dd>
     * <dt>USER_PASSWORD_AUTH</dt> <dd> <p>Client-side username-password authentication
     * with the password sent directly in the request. For more information about
     * client-side and server-side authentication, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flows-public-server-side.html">SDK
     * authorization models</a>.</p> </dd> </dl> <p>
     * <code>ADMIN_USER_PASSWORD_AUTH</code> is a flow type of
     * <code>AdminInitiateAuth</code> and isn't valid for InitiateAuth.
     * <code>ADMIN_NO_SRP_AUTH</code> is a legacy server-side username-password flow
     * and isn't valid for InitiateAuth.</p>
     */
    inline AuthFlowType GetAuthFlow() const { return m_authFlow; }
    inline bool AuthFlowHasBeenSet() const { return m_authFlowHasBeenSet; }
    inline void SetAuthFlow(AuthFlowType value) { m_authFlowHasBeenSet = true; m_authFlow = value; }
    inline InitiateAuthRequest& WithAuthFlow(AuthFlowType value) { SetAuthFlow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you're invoking.</p> <p>The required values are
     * specific to the <a>InitiateAuthRequest$AuthFlow</a>.</p> <p>The following are
     * some authentication flows and their parameters. Add a <code>SECRET_HASH</code>
     * parameter if your app client has a client secret.</p> <ul> <li> <p>
     * <code>USER_AUTH</code>: <code>USERNAME</code> (required),
     * <code>PREFERRED_CHALLENGE</code>. If you don't provide a value for
     * <code>PREFERRED_CHALLENGE</code>, Amazon Cognito responds with the
     * <code>AvailableChallenges</code> parameter that specifies the available sign-in
     * methods.</p> </li> <li> <p> <code>USER_SRP_AUTH</code>: <code>USERNAME</code>
     * (required), <code>SRP_A</code> (required), <code>DEVICE_KEY</code>.</p> </li>
     * <li> <p> <code>USER_PASSWORD_AUTH</code>: <code>USERNAME</code> (required),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code>.</p> </li> <li> <p>
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>DEVICE_KEY</code>.</p> </li> <li> <p>
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code>. To start the authentication flow with password
     * verification, include <code>ChallengeName: SRP_A</code> and <code>SRP_A: (The
     * SRP_A Value)</code>.</p> </li> </ul> <p>For more information about
     * <code>SECRET_HASH</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#cognito-user-pools-computing-secret-hash">Computing
     * secret hash values</a>. For information about <code>DEVICE_KEY</code>, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthParameters() const { return m_authParameters; }
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }
    template<typename AuthParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetAuthParameters(AuthParametersT&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::forward<AuthParametersT>(value); }
    template<typename AuthParametersT = Aws::Map<Aws::String, Aws::String>>
    InitiateAuthRequest& WithAuthParameters(AuthParametersT&& value) { SetAuthParameters(std::forward<AuthParametersT>(value)); return *this;}
    template<typename AuthParametersKeyT = Aws::String, typename AuthParametersValueT = Aws::String>
    InitiateAuthRequest& AddAuthParameters(AuthParametersKeyT&& key, AuthParametersValueT&& value) {
      m_authParametersHasBeenSet = true; m_authParameters.emplace(std::forward<AuthParametersKeyT>(key), std::forward<AuthParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of custom key-value pairs that you can provide as input for certain
     * custom workflows that this action triggers.</p> <p>You create custom workflows
     * by assigning Lambda functions to user pool triggers. When you send an
     * <code>InitiateAuth</code> request, Amazon Cognito invokes the Lambda functions
     * that are specified for various triggers. The <code>ClientMetadata</code> value
     * is passed as input to the functions for only the following triggers.</p> <ul>
     * <li> <p>Pre sign-up</p> </li> <li> <p>Pre authentication</p> </li> <li> <p>User
     * migration</p> </li> </ul> <p>When Amazon Cognito invokes the functions for these
     * triggers, it passes a JSON payload as input to the function. This payload
     * contains a <code>validationData</code> attribute with the data that you assigned
     * to the <code>ClientMetadata</code> parameter in your <code>InitiateAuth</code>
     * request. In your function, <code>validationData</code> can contribute to
     * operations that require data that isn't in the default payload.</p> <p>
     * <code>InitiateAuth</code> requests invokes the following triggers without
     * <code>ClientMetadata</code> as input.</p> <ul> <li> <p>Post authentication</p>
     * </li> <li> <p>Custom message</p> </li> <li> <p>Pre token generation</p> </li>
     * <li> <p>Create auth challenge</p> </li> <li> <p>Define auth challenge</p> </li>
     * <li> <p>Custom email sender</p> </li> <li> <p>Custom SMS sender</p> </li> </ul>
     * <p>For more information, see <a
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
    InitiateAuthRequest& WithClientMetadata(ClientMetadataT&& value) { SetClientMetadata(std::forward<ClientMetadataT>(value)); return *this;}
    template<typename ClientMetadataKeyT = Aws::String, typename ClientMetadataValueT = Aws::String>
    InitiateAuthRequest& AddClientMetadata(ClientMetadataKeyT&& key, ClientMetadataValueT&& value) {
      m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::forward<ClientMetadataKeyT>(key), std::forward<ClientMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the app client that your user wants to sign in to.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    InitiateAuthRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
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
    InitiateAuthRequest& WithAnalyticsMetadata(AnalyticsMetadataT&& value) { SetAnalyticsMetadata(std::forward<AnalyticsMetadataT>(value)); return *this;}
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
    inline const UserContextDataType& GetUserContextData() const { return m_userContextData; }
    inline bool UserContextDataHasBeenSet() const { return m_userContextDataHasBeenSet; }
    template<typename UserContextDataT = UserContextDataType>
    void SetUserContextData(UserContextDataT&& value) { m_userContextDataHasBeenSet = true; m_userContextData = std::forward<UserContextDataT>(value); }
    template<typename UserContextDataT = UserContextDataType>
    InitiateAuthRequest& WithUserContextData(UserContextDataT&& value) { SetUserContextData(std::forward<UserContextDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional session ID from a <code>ConfirmSignUp</code> API request. You
     * can sign in a user directly from the sign-up process with the
     * <code>USER_AUTH</code> authentication flow. When you pass the session ID to
     * <code>InitiateAuth</code>, Amazon Cognito assumes the SMS or email message
     * one-time verification password from <code>ConfirmSignUp</code> as the primary
     * authentication factor. You're not required to submit this code a second time.
     * This option is only valid for users who have confirmed their sign-up and are
     * signing in for the first time within the authentication flow session duration of
     * the session ID.</p>
     */
    inline const Aws::String& GetSession() const { return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    InitiateAuthRequest& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}
  private:

    AuthFlowType m_authFlow{AuthFlowType::NOT_SET};
    bool m_authFlowHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_authParameters;
    bool m_authParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    AnalyticsMetadataType m_analyticsMetadata;
    bool m_analyticsMetadataHasBeenSet = false;

    UserContextDataType m_userContextData;
    bool m_userContextDataHasBeenSet = false;

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
