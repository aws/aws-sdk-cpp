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
  class AWS_COGNITOIDENTITYPROVIDER_API AdminInitiateAuthRequest : public CognitoIdentityProviderRequest
  {
  public:
    AdminInitiateAuthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminInitiateAuth"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline AdminInitiateAuthRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline AdminInitiateAuthRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline AdminInitiateAuthRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


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
    inline AdminInitiateAuthRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline AdminInitiateAuthRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline AdminInitiateAuthRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The authentication flow for this call to execute. The API action will depend
     * on this value. For example:</p> <ul> <li> <p> <code>REFRESH_TOKEN_AUTH</code>
     * will take in a valid refresh token and return new tokens.</p> </li> <li> <p>
     * <code>USER_SRP_AUTH</code> will take in <code>USERNAME</code> and
     * <code>SRP_A</code> and return the SRP variables to be used for next challenge
     * execution.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code> will take in
     * <code>USERNAME</code> and <code>PASSWORD</code> and return the next challenge or
     * tokens.</p> </li> </ul> <p>Valid values include:</p> <ul> <li> <p>
     * <code>USER_SRP_AUTH</code>: Authentication flow for the Secure Remote Password
     * (SRP) protocol.</p> </li> <li> <p>
     * <code>REFRESH_TOKEN_AUTH</code>/<code>REFRESH_TOKEN</code>: Authentication flow
     * for refreshing the access token and ID token by supplying a valid refresh
     * token.</p> </li> <li> <p> <code>CUSTOM_AUTH</code>: Custom authentication
     * flow.</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: Non-SRP authentication
     * flow; you can pass in the USERNAME and PASSWORD directly if the flow is enabled
     * for calling the app client.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code>:
     * Non-SRP authentication flow; USERNAME and PASSWORD are passed directly. If a
     * user migration Lambda trigger is set, this flow will invoke the user migration
     * Lambda if the USERNAME is not found in the user pool. </p> </li> </ul>
     */
    inline const AuthFlowType& GetAuthFlow() const{ return m_authFlow; }

    /**
     * <p>The authentication flow for this call to execute. The API action will depend
     * on this value. For example:</p> <ul> <li> <p> <code>REFRESH_TOKEN_AUTH</code>
     * will take in a valid refresh token and return new tokens.</p> </li> <li> <p>
     * <code>USER_SRP_AUTH</code> will take in <code>USERNAME</code> and
     * <code>SRP_A</code> and return the SRP variables to be used for next challenge
     * execution.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code> will take in
     * <code>USERNAME</code> and <code>PASSWORD</code> and return the next challenge or
     * tokens.</p> </li> </ul> <p>Valid values include:</p> <ul> <li> <p>
     * <code>USER_SRP_AUTH</code>: Authentication flow for the Secure Remote Password
     * (SRP) protocol.</p> </li> <li> <p>
     * <code>REFRESH_TOKEN_AUTH</code>/<code>REFRESH_TOKEN</code>: Authentication flow
     * for refreshing the access token and ID token by supplying a valid refresh
     * token.</p> </li> <li> <p> <code>CUSTOM_AUTH</code>: Custom authentication
     * flow.</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: Non-SRP authentication
     * flow; you can pass in the USERNAME and PASSWORD directly if the flow is enabled
     * for calling the app client.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code>:
     * Non-SRP authentication flow; USERNAME and PASSWORD are passed directly. If a
     * user migration Lambda trigger is set, this flow will invoke the user migration
     * Lambda if the USERNAME is not found in the user pool. </p> </li> </ul>
     */
    inline bool AuthFlowHasBeenSet() const { return m_authFlowHasBeenSet; }

    /**
     * <p>The authentication flow for this call to execute. The API action will depend
     * on this value. For example:</p> <ul> <li> <p> <code>REFRESH_TOKEN_AUTH</code>
     * will take in a valid refresh token and return new tokens.</p> </li> <li> <p>
     * <code>USER_SRP_AUTH</code> will take in <code>USERNAME</code> and
     * <code>SRP_A</code> and return the SRP variables to be used for next challenge
     * execution.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code> will take in
     * <code>USERNAME</code> and <code>PASSWORD</code> and return the next challenge or
     * tokens.</p> </li> </ul> <p>Valid values include:</p> <ul> <li> <p>
     * <code>USER_SRP_AUTH</code>: Authentication flow for the Secure Remote Password
     * (SRP) protocol.</p> </li> <li> <p>
     * <code>REFRESH_TOKEN_AUTH</code>/<code>REFRESH_TOKEN</code>: Authentication flow
     * for refreshing the access token and ID token by supplying a valid refresh
     * token.</p> </li> <li> <p> <code>CUSTOM_AUTH</code>: Custom authentication
     * flow.</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: Non-SRP authentication
     * flow; you can pass in the USERNAME and PASSWORD directly if the flow is enabled
     * for calling the app client.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code>:
     * Non-SRP authentication flow; USERNAME and PASSWORD are passed directly. If a
     * user migration Lambda trigger is set, this flow will invoke the user migration
     * Lambda if the USERNAME is not found in the user pool. </p> </li> </ul>
     */
    inline void SetAuthFlow(const AuthFlowType& value) { m_authFlowHasBeenSet = true; m_authFlow = value; }

    /**
     * <p>The authentication flow for this call to execute. The API action will depend
     * on this value. For example:</p> <ul> <li> <p> <code>REFRESH_TOKEN_AUTH</code>
     * will take in a valid refresh token and return new tokens.</p> </li> <li> <p>
     * <code>USER_SRP_AUTH</code> will take in <code>USERNAME</code> and
     * <code>SRP_A</code> and return the SRP variables to be used for next challenge
     * execution.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code> will take in
     * <code>USERNAME</code> and <code>PASSWORD</code> and return the next challenge or
     * tokens.</p> </li> </ul> <p>Valid values include:</p> <ul> <li> <p>
     * <code>USER_SRP_AUTH</code>: Authentication flow for the Secure Remote Password
     * (SRP) protocol.</p> </li> <li> <p>
     * <code>REFRESH_TOKEN_AUTH</code>/<code>REFRESH_TOKEN</code>: Authentication flow
     * for refreshing the access token and ID token by supplying a valid refresh
     * token.</p> </li> <li> <p> <code>CUSTOM_AUTH</code>: Custom authentication
     * flow.</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: Non-SRP authentication
     * flow; you can pass in the USERNAME and PASSWORD directly if the flow is enabled
     * for calling the app client.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code>:
     * Non-SRP authentication flow; USERNAME and PASSWORD are passed directly. If a
     * user migration Lambda trigger is set, this flow will invoke the user migration
     * Lambda if the USERNAME is not found in the user pool. </p> </li> </ul>
     */
    inline void SetAuthFlow(AuthFlowType&& value) { m_authFlowHasBeenSet = true; m_authFlow = std::move(value); }

    /**
     * <p>The authentication flow for this call to execute. The API action will depend
     * on this value. For example:</p> <ul> <li> <p> <code>REFRESH_TOKEN_AUTH</code>
     * will take in a valid refresh token and return new tokens.</p> </li> <li> <p>
     * <code>USER_SRP_AUTH</code> will take in <code>USERNAME</code> and
     * <code>SRP_A</code> and return the SRP variables to be used for next challenge
     * execution.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code> will take in
     * <code>USERNAME</code> and <code>PASSWORD</code> and return the next challenge or
     * tokens.</p> </li> </ul> <p>Valid values include:</p> <ul> <li> <p>
     * <code>USER_SRP_AUTH</code>: Authentication flow for the Secure Remote Password
     * (SRP) protocol.</p> </li> <li> <p>
     * <code>REFRESH_TOKEN_AUTH</code>/<code>REFRESH_TOKEN</code>: Authentication flow
     * for refreshing the access token and ID token by supplying a valid refresh
     * token.</p> </li> <li> <p> <code>CUSTOM_AUTH</code>: Custom authentication
     * flow.</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: Non-SRP authentication
     * flow; you can pass in the USERNAME and PASSWORD directly if the flow is enabled
     * for calling the app client.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code>:
     * Non-SRP authentication flow; USERNAME and PASSWORD are passed directly. If a
     * user migration Lambda trigger is set, this flow will invoke the user migration
     * Lambda if the USERNAME is not found in the user pool. </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& WithAuthFlow(const AuthFlowType& value) { SetAuthFlow(value); return *this;}

    /**
     * <p>The authentication flow for this call to execute. The API action will depend
     * on this value. For example:</p> <ul> <li> <p> <code>REFRESH_TOKEN_AUTH</code>
     * will take in a valid refresh token and return new tokens.</p> </li> <li> <p>
     * <code>USER_SRP_AUTH</code> will take in <code>USERNAME</code> and
     * <code>SRP_A</code> and return the SRP variables to be used for next challenge
     * execution.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code> will take in
     * <code>USERNAME</code> and <code>PASSWORD</code> and return the next challenge or
     * tokens.</p> </li> </ul> <p>Valid values include:</p> <ul> <li> <p>
     * <code>USER_SRP_AUTH</code>: Authentication flow for the Secure Remote Password
     * (SRP) protocol.</p> </li> <li> <p>
     * <code>REFRESH_TOKEN_AUTH</code>/<code>REFRESH_TOKEN</code>: Authentication flow
     * for refreshing the access token and ID token by supplying a valid refresh
     * token.</p> </li> <li> <p> <code>CUSTOM_AUTH</code>: Custom authentication
     * flow.</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>: Non-SRP authentication
     * flow; you can pass in the USERNAME and PASSWORD directly if the flow is enabled
     * for calling the app client.</p> </li> <li> <p> <code>USER_PASSWORD_AUTH</code>:
     * Non-SRP authentication flow; USERNAME and PASSWORD are passed directly. If a
     * user migration Lambda trigger is set, this flow will invoke the user migration
     * Lambda if the USERNAME is not found in the user pool. </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& WithAuthFlow(AuthFlowType&& value) { SetAuthFlow(std::move(value)); return *this;}


    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthParameters() const{ return m_authParameters; }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline void SetAuthParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_authParametersHasBeenSet = true; m_authParameters = value; }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline void SetAuthParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::move(value); }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& WithAuthParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAuthParameters(value); return *this;}

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& WithAuthParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAuthParameters(std::move(value)); return *this;}

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& AddAuthParameters(const Aws::String& key, const Aws::String& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, value); return *this; }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& AddAuthParameters(Aws::String&& key, const Aws::String& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& AddAuthParameters(const Aws::String& key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& AddAuthParameters(Aws::String&& key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& AddAuthParameters(const char* key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& AddAuthParameters(Aws::String&& key, const char* value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The authentication parameters. These are inputs corresponding to the
     * <code>AuthFlow</code> that you are invoking. The required values depend on the
     * value of <code>AuthFlow</code>:</p> <ul> <li> <p>For <code>USER_SRP_AUTH</code>:
     * <code>USERNAME</code> (required), <code>SRP_A</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>REFRESH_TOKEN_AUTH/REFRESH_TOKEN</code>: <code>REFRESH_TOKEN</code>
     * (required), <code>SECRET_HASH</code> (required if the app client is configured
     * with a client secret), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>ADMIN_NO_SRP_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>PASSWORD</code> (required), <code>DEVICE_KEY</code> </p> </li> <li> <p>For
     * <code>CUSTOM_AUTH</code>: <code>USERNAME</code> (required),
     * <code>SECRET_HASH</code> (if app client is configured with client secret),
     * <code>DEVICE_KEY</code> </p> </li> </ul>
     */
    inline AdminInitiateAuthRequest& AddAuthParameters(const char* key, const char* value) { m_authParametersHasBeenSet = true; m_authParameters.emplace(key, value); return *this; }


    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const{ return m_clientMetadata; }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::move(value); }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline AdminInitiateAuthRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline AdminInitiateAuthRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline AdminInitiateAuthRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline AdminInitiateAuthRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline AdminInitiateAuthRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline AdminInitiateAuthRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline AdminInitiateAuthRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline AdminInitiateAuthRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>This is a random key-value pair map which can contain any key and will be
     * passed to your PreAuthentication Lambda trigger as-is. It can be used to
     * implement additional validations around authentication.</p>
     */
    inline AdminInitiateAuthRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }


    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminInitiateAuth</code> calls.</p>
     */
    inline const AnalyticsMetadataType& GetAnalyticsMetadata() const{ return m_analyticsMetadata; }

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminInitiateAuth</code> calls.</p>
     */
    inline bool AnalyticsMetadataHasBeenSet() const { return m_analyticsMetadataHasBeenSet; }

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminInitiateAuth</code> calls.</p>
     */
    inline void SetAnalyticsMetadata(const AnalyticsMetadataType& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = value; }

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminInitiateAuth</code> calls.</p>
     */
    inline void SetAnalyticsMetadata(AnalyticsMetadataType&& value) { m_analyticsMetadataHasBeenSet = true; m_analyticsMetadata = std::move(value); }

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminInitiateAuth</code> calls.</p>
     */
    inline AdminInitiateAuthRequest& WithAnalyticsMetadata(const AnalyticsMetadataType& value) { SetAnalyticsMetadata(value); return *this;}

    /**
     * <p>The analytics metadata for collecting Amazon Pinpoint metrics for
     * <code>AdminInitiateAuth</code> calls.</p>
     */
    inline AdminInitiateAuthRequest& WithAnalyticsMetadata(AnalyticsMetadataType&& value) { SetAnalyticsMetadata(std::move(value)); return *this;}


    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline const ContextDataType& GetContextData() const{ return m_contextData; }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline bool ContextDataHasBeenSet() const { return m_contextDataHasBeenSet; }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline void SetContextData(const ContextDataType& value) { m_contextDataHasBeenSet = true; m_contextData = value; }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline void SetContextData(ContextDataType&& value) { m_contextDataHasBeenSet = true; m_contextData = std::move(value); }

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline AdminInitiateAuthRequest& WithContextData(const ContextDataType& value) { SetContextData(value); return *this;}

    /**
     * <p>Contextual data such as the user's device fingerprint, IP address, or
     * location used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline AdminInitiateAuthRequest& WithContextData(ContextDataType&& value) { SetContextData(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    AuthFlowType m_authFlow;
    bool m_authFlowHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_authParameters;
    bool m_authParametersHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet;

    AnalyticsMetadataType m_analyticsMetadata;
    bool m_analyticsMetadataHasBeenSet;

    ContextDataType m_contextData;
    bool m_contextDataHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
