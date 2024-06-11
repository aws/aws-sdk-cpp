/**
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
    AWS_COGNITOIDENTITYPROVIDER_API InitiateAuthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitiateAuth"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The authentication flow for this call to run. The API action will depend on
     * this value. For example:</p> <ul> <li> <p> <code>REFRESH_TOKEN_AUTH</code> takes
     * in a valid refresh token and returns new tokens.</p> </li> <li> <p>
     * <code>USER_SRP_AUTH</code> takes in <code>USERNAME</code> and <code>SRP_A</code>
     * and returns the SRP variables to be used for next challenge execution.</p> </li>
     * <li> <p> <code>USER_PASSWORD_AUTH</code> takes in <code>USERNAME</code> and
     * <code>PASSWORD</code> and returns the next challenge or tokens.</p> </li> </ul>
     * <p>Valid values include:</p> <ul> <li> <p> <code>USER_SRP_AUTH</code>:
     * Authentication flow for the Secure Remote Password (SRP) protocol.</p> </li>
     * <li> <p> <code>REFRESH_TOKEN_AUTH</code>/<code>REFRESH_TOKEN</code>:
     * Authentication flow for refreshing the access token and ID token by supplying a
     * valid refresh token.</p> </li> <li> <p> <code>CUSTOM_AUTH</code>: Custom
     * authentication flow.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code>: Non-SRP
     * authentication flow; user name and password are passed directly. If a user
     * migration Lambda trigger is set, this flow will invoke the user migration Lambda
     * if it doesn't find the user name in the user pool. </p> </li> </ul> <p>
     * <code>ADMIN_NO_SRP_AUTH</code> isn't a valid value.</p>
     */
    inline const AuthFlowType& GetAuthFlow() const{ return m_authFlow; }
    inline bool AuthFlowHasBeenSet() const { return m_authFlowHasBeenSet; }
    inline void SetAuthFlow(const AuthFlowType& value) { m_authFlowHasBeenSet = true; m_authFlow = value; }
    inline void SetAuthFlow(AuthFlowType&& value) { m_authFlowHasBeenSet = true; m_authFlow = std::move(value); }
    inline InitiateAuthRequest& WithAuthFlow(const AuthFlowType& value) { SetAuthFlow(value); return *this;}
    inline InitiateAuthRequest& WithAuthFlow(AuthFlowType&& value) { SetAuthFlow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you're invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code>.</p> </li> <li> <p>For
     * <code>USER_PASSWORD_AUTH</code>: <code>USERNAME</code> (required),
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
    inline InitiateAuthRequest& WithAuthParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAuthParameters(value); return *this;}
    inline InitiateAuthRequest& WithAuthParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAuthParameters(std::move(value)); return *this;}
    inline InitiateAuthRequest& AddAuthParameters(const Aws::String& key, const Aws::String& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, value); return *this; }
    inline InitiateAuthRequest& AddAuthParameters(Aws::String&& key, const Aws::String& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(std::move(key), value); return *this; }
    inline InitiateAuthRequest& AddAuthParameters(const Aws::String& key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, std::move(value)); return *this; }
    inline InitiateAuthRequest& AddAuthParameters(Aws::String&& key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline InitiateAuthRequest& AddAuthParameters(const char* key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, std::move(value)); return *this; }
    inline InitiateAuthRequest& AddAuthParameters(Aws::String&& key, const char* value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(std::move(key), value); return *this; }
    inline InitiateAuthRequest& AddAuthParameters(const char* key, const char* value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of custom key-value pairs that you can provide as input for certain
     * custom workflows that this action triggers.</p> <p>You create custom workflows
     * by assigning Lambda functions to user pool triggers. When you use the
     * InitiateAuth API action, Amazon Cognito invokes the Lambda functions that are
     * specified for various triggers. The ClientMetadata value is passed as input to
     * the functions for only the following triggers:</p> <ul> <li> <p>Pre signup</p>
     * </li> <li> <p>Pre authentication</p> </li> <li> <p>User migration</p> </li>
     * </ul> <p>When Amazon Cognito invokes the functions for these triggers, it passes
     * a JSON payload, which the function receives as input. This payload contains a
     * <code>validationData</code> attribute, which provides the data that you assigned
     * to the ClientMetadata parameter in your InitiateAuth request. In your function
     * code in Lambda, you can process the <code>validationData</code> value to enhance
     * your workflow for your specific needs.</p> <p>When you use the InitiateAuth API
     * action, Amazon Cognito also invokes the functions for the following triggers,
     * but it doesn't provide the ClientMetadata value as input:</p> <ul> <li> <p>Post
     * authentication</p> </li> <li> <p>Custom message</p> </li> <li> <p>Pre token
     * generation</p> </li> <li> <p>Create auth challenge</p> </li> <li> <p>Define auth
     * challenge</p> </li> </ul> <p>For more information, see <a
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
    inline InitiateAuthRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}
    inline InitiateAuthRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}
    inline InitiateAuthRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
    inline InitiateAuthRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline InitiateAuthRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline InitiateAuthRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline InitiateAuthRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }
    inline InitiateAuthRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }
    inline InitiateAuthRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }
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
    inline InitiateAuthRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline InitiateAuthRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline InitiateAuthRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Pinpoint analytics metadata that contributes to your metrics for
     * <code>InitiateAuth</code> calls.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const{ return m_analyticsMetadata; }
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }
    inline void SetAnalyticsMetadata(const AnalyticsMetadataType& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = value; }
    inline void SetAnalyticsMetadata(AnalyticsMetadataType&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::move(value); }
    inline InitiateAuthRequest& WithAnalyticsMetadata(const AnalyticsMetadataType& value) { SetAnalyticsMetadata(value); return *this;}
    inline InitiateAuthRequest& WithAnalyticsMetadata(AnalyticsMetadataType&& value) { SetAnalyticsMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contextual data about your user session, such as the device fingerprint, IP
     * address, or location. Amazon Cognito advanced security evaluates the risk of an
     * authentication event based on the context that your app generates and passes to
     * Amazon Cognito when it makes API requests.</p>
     */
    inline const UserContextDataType& GetUserContextData() const{ return m_userContextData; }
    inline bool UserContextDataHasBeenSet() const { return m_userContextDataHasBeenSet; }
    inline void SetUserContextData(const UserContextDataType& value) { m_userContextDataHasBeenSet = true; m_userContextData = value; }
    inline void SetUserContextData(UserContextDataType&& value) { m_userContextDataHasBeenSet = true; m_userContextData = std::move(value); }
    inline InitiateAuthRequest& WithUserContextData(const UserContextDataType& value) { SetUserContextData(value); return *this;}
    inline InitiateAuthRequest& WithUserContextData(UserContextDataType&& value) { SetUserContextData(std::move(value)); return *this;}
    ///@}
  private:

    AuthFlowType m_authFlow;
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
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
