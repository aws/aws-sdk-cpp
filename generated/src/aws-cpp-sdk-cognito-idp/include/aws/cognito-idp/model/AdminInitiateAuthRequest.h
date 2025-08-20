/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/AuthFlowType.h>
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
   * <p>Initiates the authorization request, as an administrator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminInitiateAuthRequest">AWS
   * API Reference</a></p>
   */
  class AdminInitiateAuthRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminInitiateAuthRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminInitiateAuth"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where the user wants to sign in.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    AdminInitiateAuthRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app client where the user wants to sign in.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    AdminInitiateAuthRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

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
     * <dt>ADMIN_USER_PASSWORD_AUTH</dt> <dd> <p>Server-side username-password
     * authentication with the password sent directly in the request. For more
     * information about client-side and server-side authentication, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flows-public-server-side.html">SDK
     * authorization models</a>.</p> </dd> </dl>
     */
    inline AuthFlowType GetAuthFlow() const { return m_authFlow; }
    inline bool AuthFlowHasBeenSet() const { return m_authFlowHasBeenSet; }
    inline void SetAuthFlow(AuthFlowType value) { m_authFlowHasBeenSet = true; m_authFlow = value; }
    inline AdminInitiateAuthRequest& WithAuthFlow(AuthFlowType value) { SetAuthFlow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you're invoking.</p> <p>The following are some
     * authentication flows and their parameters. Add a <code>SECRET_HASH</code>
     * parameter if your app client has a client secret. Add <code>DEVICE_KEY</code> if
     * you want to bypass multi-factor authentication with a remembered device. </p>
     * <dl> <dt>USER_AUTH</dt> <dd> <ul> <li> <p> <code>USERNAME</code> (required)</p>
     * </li> <li> <p> <code>PREFERRED_CHALLENGE</code>. If you don't provide a value
     * for <code>PREFERRED_CHALLENGE</code>, Amazon Cognito responds with the
     * <code>AvailableChallenges</code> parameter that specifies the available sign-in
     * methods.</p> </li> </ul> </dd> <dt>USER_SRP_AUTH</dt> <dd> <ul> <li> <p>
     * <code>USERNAME</code> (required)</p> </li> <li> <p> <code>SRP_A</code>
     * (required)</p> </li> </ul> </dd> <dt>ADMIN_USER_PASSWORD_AUTH</dt> <dd> <ul>
     * <li> <p> <code>USERNAME</code> (required)</p> </li> <li> <p>
     * <code>PASSWORD</code> (required)</p> </li> </ul> </dd>
     * <dt>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</dt> <dd> <ul> <li> <p>
     * <code>REFRESH_TOKEN</code>(required)</p> </li> </ul> </dd> <dt>CUSTOM_AUTH</dt>
     * <dd> <ul> <li> <p> <code>USERNAME</code> (required)</p> </li> <li> <p>
     * <code>ChallengeName: SRP_A</code> (when preceding custom authentication with SRP
     * authentication)</p> </li> <li> <p> <code>SRP_A: (An SRP_A value)</code> (when
     * preceding custom authentication with SRP authentication)</p> </li> </ul> </dd>
     * </dl> <p>For more information about <code>SECRET_HASH</code>, see <a
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
    AdminInitiateAuthRequest& WithAuthParameters(AuthParametersT&& value) { SetAuthParameters(std::forward<AuthParametersT>(value)); return *this;}
    template<typename AuthParametersKeyT = Aws::String, typename AuthParametersValueT = Aws::String>
    AdminInitiateAuthRequest& AddAuthParameters(AuthParametersKeyT&& key, AuthParametersValueT&& value) {
      m_authParametersHasBeenSet = true; m_authParameters.emplace(std::forward<AuthParametersKeyT>(key), std::forward<AuthParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of custom key-value pairs that you can provide as input for certain
     * custom workflows that this action triggers.</p> <p>You create custom workflows
     * by assigning Lambda functions to user pool triggers. When you use the
     * AdminInitiateAuth API action, Amazon Cognito invokes the Lambda functions that
     * are specified for various triggers. The ClientMetadata value is passed as input
     * to the functions for only the following triggers:</p> <ul> <li> <p>Pre
     * signup</p> </li> <li> <p>Pre authentication</p> </li> <li> <p>User migration</p>
     * </li> </ul> <p>When Amazon Cognito invokes the functions for these triggers, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>validationData</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminInitiateAuth request.
     * In your function code in Lambda, you can process the <code>validationData</code>
     * value to enhance your workflow for your specific needs.</p> <p>When you use the
     * AdminInitiateAuth API action, Amazon Cognito also invokes the functions for the
     * following triggers, but it doesn't provide the ClientMetadata value as
     * input:</p> <ul> <li> <p>Post authentication</p> </li> <li> <p>Custom message</p>
     * </li> <li> <p>Pre token generation</p> </li> <li> <p>Create auth challenge</p>
     * </li> <li> <p>Define auth challenge</p> </li> <li> <p>Custom email sender</p>
     * </li> <li> <p>Custom SMS sender</p> </li> </ul> <p>For more information, see <a
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
    AdminInitiateAuthRequest& WithClientMetadata(ClientMetadataT&& value) { SetClientMetadata(std::forward<ClientMetadataT>(value)); return *this;}
    template<typename ClientMetadataKeyT = Aws::String, typename ClientMetadataValueT = Aws::String>
    AdminInitiateAuthRequest& AddClientMetadata(ClientMetadataKeyT&& key, ClientMetadataValueT&& value) {
      m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::forward<ClientMetadataKeyT>(key), std::forward<ClientMetadataValueT>(value)); return *this;
    }
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
    AdminInitiateAuthRequest& WithAnalyticsMetadata(AnalyticsMetadataT&& value) { SetAnalyticsMetadata(std::forward<AnalyticsMetadataT>(value)); return *this;}
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
    inline const ContextDataType& GetContextData() const { return m_contextData; }
    inline bool ContextDataHasBeenSet() const { return m_contextDataHasBeenSet; }
    template<typename ContextDataT = ContextDataType>
    void SetContextData(ContextDataT&& value) { m_contextDataHasBeenSet = true; m_contextData = std::forward<ContextDataT>(value); }
    template<typename ContextDataT = ContextDataType>
    AdminInitiateAuthRequest& WithContextData(ContextDataT&& value) { SetContextData(std::forward<ContextDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional session ID from a <code>ConfirmSignUp</code> API request. You
     * can sign in a user directly from the sign-up process with an
     * <code>AuthFlow</code> of <code>USER_AUTH</code> and <code>AuthParameters</code>
     * of <code>EMAIL_OTP</code> or <code>SMS_OTP</code>, depending on how your user
     * pool sent the confirmation-code message.</p>
     */
    inline const Aws::String& GetSession() const { return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    AdminInitiateAuthRequest& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    AuthFlowType m_authFlow{AuthFlowType::NOT_SET};
    bool m_authFlowHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_authParameters;
    bool m_authParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;

    AnalyticsMetadataType m_analyticsMetadata;
    bool m_analyticsMetadataHasBeenSet = false;

    ContextDataType m_contextData;
    bool m_contextDataHasBeenSet = false;

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
