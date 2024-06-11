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
    AWS_COGNITOIDENTITYPROVIDER_API AdminInitiateAuthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminInitiateAuth"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline AdminInitiateAuthRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline AdminInitiateAuthRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline AdminInitiateAuthRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app client ID.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline AdminInitiateAuthRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline AdminInitiateAuthRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline AdminInitiateAuthRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication flow for this call to run. The API action will depend on
     * this value. For example:</p> <ul> <li> <p> <code>REFRESH_TOKEN_AUTH</code> will
     * take in a valid refresh token and return new tokens.</p> </li> <li> <p>
     * <code>USER_SRP_AUTH</code> will take in <code>USERNAME</code> and
     * <code>SRP_A</code> and return the Secure Remote Password (SRP) protocol
     * variables to be used for next challenge execution.</p> </li> <li> <p>
     * <code>ADMIN_USER_PASSWORD_AUTH</code> will take in <code>USERNAME</code> and
     * <code>PASSWORD</code> and return the next challenge or tokens.</p> </li> </ul>
     * <p>Valid values include:</p> <ul> <li> <p> <code>USER_SRP_AUTH</code>:
     * Authentication flow for the Secure Remote Password (SRP) protocol.</p> </li>
     * <li> <p> <code>REFRESH_TOKEN_AUTH</code>/<code>REFRESH_TOKEN</code>:
     * Authentication flow for refreshing the access token and ID token by supplying a
     * valid refresh token.</p> </li> <li> <p> <code>CUSTOM_AUTH</code>: Custom
     * authentication flow.</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: Non-SRP
     * authentication flow; you can pass in the USERNAME and PASSWORD directly if the
     * flow is enabled for calling the app client.</p> </li> <li> <p>
     * <code>ADMIN_USER_PASSWORD_AUTH</code>: Admin-based user password authentication.
     * This replaces the <code>ADMIN_NO_SRP_AUTH</code> authentication flow. In this
     * flow, Amazon Cognito receives the password in the request instead of using the
     * SRP process to verify passwords.</p> </li> </ul>
     */
    inline const AuthFlowType& GetAuthFlow() const{ return m_authFlow; }
    inline bool AuthFlowHasBeenSet() const { return m_authFlowHasBeenSet; }
    inline void SetAuthFlow(const AuthFlowType& value) { m_authFlowHasBeenSet = true; m_authFlow = value; }
    inline void SetAuthFlow(AuthFlowType&& value) { m_authFlowHasBeenSet = true; m_authFlow = std::move(value); }
    inline AdminInitiateAuthRequest& WithAuthFlow(const AuthFlowType& value) { SetAuthFlow(value); return *this;}
    inline AdminInitiateAuthRequest& WithAuthFlow(AuthFlowType&& value) { SetAuthFlow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you're invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code>.</p> </li> <li> <p>For
     * <code>ADMIN_USER_PASSWORD_AUTH</code>: <code>USERNAME</code> (required),
     * <code>PASSWORD</code> (required), <code>SECRET_HASH</code> (required if the app
     * client is configured with a client secret), <code>DEVICE_KEY</code>.</p> </li>
     * <li> <p>For <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>:
     * <code>REFRESH_TOKEN</code> (required), <code>SECRET_HASH</code> (required if the
     * app client is configured with a client secret), <code>DEVICE_KEY</code>.</p>
     * </li> <li> <p>For <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
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
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthParameters() const{ return m_authParameters; }
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }
    inline void SetAuthParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_authParametersHasBeenSet = true; m_authParameters = value; }
    inline void SetAuthParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::move(value); }
    inline AdminInitiateAuthRequest& WithAuthParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAuthParameters(value); return *this;}
    inline AdminInitiateAuthRequest& WithAuthParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAuthParameters(std::move(value)); return *this;}
    inline AdminInitiateAuthRequest& AddAuthParameters(const Aws::String& key, const Aws::String& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, value); return *this; }
    inline AdminInitiateAuthRequest& AddAuthParameters(Aws::String&& key, const Aws::String& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(std::move(key), value); return *this; }
    inline AdminInitiateAuthRequest& AddAuthParameters(const Aws::String& key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, std::move(value)); return *this; }
    inline AdminInitiateAuthRequest& AddAuthParameters(Aws::String&& key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline AdminInitiateAuthRequest& AddAuthParameters(const char* key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, std::move(value)); return *this; }
    inline AdminInitiateAuthRequest& AddAuthParameters(Aws::String&& key, const char* value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(std::move(key), value); return *this; }
    inline AdminInitiateAuthRequest& AddAuthParameters(const char* key, const char* value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, value); return *this; }
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
     * </li> <li> <p>Define auth challenge</p> </li> </ul> <p>For more information, see
     * <a
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
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::move(value); }
    inline AdminInitiateAuthRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}
    inline AdminInitiateAuthRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}
    inline AdminInitiateAuthRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
    inline AdminInitiateAuthRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline AdminInitiateAuthRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline AdminInitiateAuthRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline AdminInitiateAuthRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline AdminInitiateAuthRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline AdminInitiateAuthRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminInitiateAuth</code> calls.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const{ return m_analyticsMetadata; }
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }
    inline void SetAnalyticsMetadata(const AnalyticsMetadataType& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = value; }
    inline void SetAnalyticsMetadata(AnalyticsMetadataType&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::move(value); }
    inline AdminInitiateAuthRequest& WithAnalyticsMetadata(const AnalyticsMetadataType& value) { SetAnalyticsMetadata(value); return *this;}
    inline AdminInitiateAuthRequest& WithAnalyticsMetadata(AnalyticsMetadataType&& value) { SetAnalyticsMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p>
     */
    inline const ContextDataType& GetContextData() const{ return m_contextData; }
    inline bool ContextDataHasBeenSet() const { return m_contextDataHasBeenSet; }
    inline void SetContextData(const ContextDataType& value) { m_contextDataHasBeenSet = true; m_contextData = value; }
    inline void SetContextData(ContextDataType&& value) { m_contextDataHasBeenSet = true; m_contextData = std::move(value); }
    inline AdminInitiateAuthRequest& WithContextData(const ContextDataType& value) { SetContextData(value); return *this;}
    inline AdminInitiateAuthRequest& WithContextData(ContextDataType&& value) { SetContextData(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    AuthFlowType m_authFlow;
    bool m_authFlowHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_authParameters;
    bool m_authParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;

    AnalyticsMetadataType m_analyticsMetadata;
    bool m_analyticsMetadataHasBeenSet = false;

    ContextDataType m_contextData;
    bool m_contextDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
