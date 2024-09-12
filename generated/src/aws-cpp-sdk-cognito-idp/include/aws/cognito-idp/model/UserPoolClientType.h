/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-idp/model/TokenValidityUnitsType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AnalyticsConfigurationType.h>
#include <aws/cognito-idp/model/PreventUserExistenceErrorTypes.h>
#include <aws/cognito-idp/model/ExplicitAuthFlowsType.h>
#include <aws/cognito-idp/model/OAuthFlowType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Contains information about a user pool client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolClientType">AWS
   * API Reference</a></p>
   */
  class UserPoolClientType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolClientType();
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolClientType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolClientType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user pool ID for the user pool client.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline UserPoolClientType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline UserPoolClientType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline UserPoolClientType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client name from the user pool request of the client type.</p>
     */
    inline const Aws::String& GetClientName() const{ return m_clientName; }
    inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }
    inline void SetClientName(const Aws::String& value) { m_clientNameHasBeenSet = true; m_clientName = value; }
    inline void SetClientName(Aws::String&& value) { m_clientNameHasBeenSet = true; m_clientName = std::move(value); }
    inline void SetClientName(const char* value) { m_clientNameHasBeenSet = true; m_clientName.assign(value); }
    inline UserPoolClientType& WithClientName(const Aws::String& value) { SetClientName(value); return *this;}
    inline UserPoolClientType& WithClientName(Aws::String&& value) { SetClientName(std::move(value)); return *this;}
    inline UserPoolClientType& WithClientName(const char* value) { SetClientName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline UserPoolClientType& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline UserPoolClientType& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline UserPoolClientType& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client secret from the user pool request of the client type.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }
    inline UserPoolClientType& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}
    inline UserPoolClientType& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}
    inline UserPoolClientType& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline UserPoolClientType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline UserPoolClientType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline UserPoolClientType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline UserPoolClientType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The refresh token time limit. After this limit expires, your user can't use
     * their refresh token. To specify the time unit for
     * <code>RefreshTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>RefreshTokenValidity</code> as <code>10</code> and
     * <code>TokenValidityUnits</code> as <code>days</code>, your user can refresh
     * their session and retrieve new access and ID tokens for 10 days.</p> <p>The
     * default time unit for <code>RefreshTokenValidity</code> in an API request is
     * days. You can't set <code>RefreshTokenValidity</code> to 0. If you do, Amazon
     * Cognito overrides the value with the default value of 30 days. <i>Valid
     * range</i> is displayed below in seconds.</p> <p>If you don't specify otherwise
     * in the configuration of your app client, your refresh tokens are valid for 30
     * days.</p>
     */
    inline int GetRefreshTokenValidity() const{ return m_refreshTokenValidity; }
    inline bool RefreshTokenValidityHasBeenSet() const { return m_refreshTokenValidityHasBeenSet; }
    inline void SetRefreshTokenValidity(int value) { m_refreshTokenValidityHasBeenSet = true; m_refreshTokenValidity = value; }
    inline UserPoolClientType& WithRefreshTokenValidity(int value) { SetRefreshTokenValidity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access token time limit. After this limit expires, your user can't use
     * their access token. To specify the time unit for
     * <code>AccessTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>AccessTokenValidity</code> to <code>10</code> and
     * <code>TokenValidityUnits</code> to <code>hours</code>, your user can authorize
     * access with their access token for 10 hours.</p> <p>The default time unit for
     * <code>AccessTokenValidity</code> in an API request is hours. <i>Valid range</i>
     * is displayed below in seconds.</p> <p>If you don't specify otherwise in the
     * configuration of your app client, your access tokens are valid for one hour.</p>
     */
    inline int GetAccessTokenValidity() const{ return m_accessTokenValidity; }
    inline bool AccessTokenValidityHasBeenSet() const { return m_accessTokenValidityHasBeenSet; }
    inline void SetAccessTokenValidity(int value) { m_accessTokenValidityHasBeenSet = true; m_accessTokenValidity = value; }
    inline UserPoolClientType& WithAccessTokenValidity(int value) { SetAccessTokenValidity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID token time limit. After this limit expires, your user can't use their
     * ID token. To specify the time unit for <code>IdTokenValidity</code> as
     * <code>seconds</code>, <code>minutes</code>, <code>hours</code>, or
     * <code>days</code>, set a <code>TokenValidityUnits</code> value in your API
     * request.</p> <p>For example, when you set <code>IdTokenValidity</code> as
     * <code>10</code> and <code>TokenValidityUnits</code> as <code>hours</code>, your
     * user can authenticate their session with their ID token for 10 hours.</p> <p>The
     * default time unit for <code>IdTokenValidity</code> in an API request is hours.
     * <i>Valid range</i> is displayed below in seconds.</p> <p>If you don't specify
     * otherwise in the configuration of your app client, your ID tokens are valid for
     * one hour.</p>
     */
    inline int GetIdTokenValidity() const{ return m_idTokenValidity; }
    inline bool IdTokenValidityHasBeenSet() const { return m_idTokenValidityHasBeenSet; }
    inline void SetIdTokenValidity(int value) { m_idTokenValidityHasBeenSet = true; m_idTokenValidity = value; }
    inline UserPoolClientType& WithIdTokenValidity(int value) { SetIdTokenValidity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time units used to specify the token validity times of each token type:
     * ID, access, and refresh.</p>
     */
    inline const TokenValidityUnitsType& GetTokenValidityUnits() const{ return m_tokenValidityUnits; }
    inline bool TokenValidityUnitsHasBeenSet() const { return m_tokenValidityUnitsHasBeenSet; }
    inline void SetTokenValidityUnits(const TokenValidityUnitsType& value) { m_tokenValidityUnitsHasBeenSet = true; m_tokenValidityUnits = value; }
    inline void SetTokenValidityUnits(TokenValidityUnitsType&& value) { m_tokenValidityUnitsHasBeenSet = true; m_tokenValidityUnits = std::move(value); }
    inline UserPoolClientType& WithTokenValidityUnits(const TokenValidityUnitsType& value) { SetTokenValidityUnits(value); return *this;}
    inline UserPoolClientType& WithTokenValidityUnits(TokenValidityUnitsType&& value) { SetTokenValidityUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user attributes that you want your app client to have read access
     * to. After your user authenticates in your app, their access token authorizes
     * them to read their own attribute value for any attribute in this list. An
     * example of this kind of activity is when your user selects a link to view their
     * profile information. Your app makes a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_GetUser.html">GetUser</a>
     * API request to retrieve and display your user's profile data.</p> <p>When you
     * don't specify the <code>ReadAttributes</code> for your app client, your app can
     * read the values of <code>email_verified</code>,
     * <code>phone_number_verified</code>, and the Standard attributes of your user
     * pool. When your user pool app client has read access to these default
     * attributes, <code>ReadAttributes</code> doesn't return any information. Amazon
     * Cognito only populates <code>ReadAttributes</code> in the API response if you
     * have specified your own custom set of read attributes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadAttributes() const{ return m_readAttributes; }
    inline bool ReadAttributesHasBeenSet() const { return m_readAttributesHasBeenSet; }
    inline void SetReadAttributes(const Aws::Vector<Aws::String>& value) { m_readAttributesHasBeenSet = true; m_readAttributes = value; }
    inline void SetReadAttributes(Aws::Vector<Aws::String>&& value) { m_readAttributesHasBeenSet = true; m_readAttributes = std::move(value); }
    inline UserPoolClientType& WithReadAttributes(const Aws::Vector<Aws::String>& value) { SetReadAttributes(value); return *this;}
    inline UserPoolClientType& WithReadAttributes(Aws::Vector<Aws::String>&& value) { SetReadAttributes(std::move(value)); return *this;}
    inline UserPoolClientType& AddReadAttributes(const Aws::String& value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(value); return *this; }
    inline UserPoolClientType& AddReadAttributes(Aws::String&& value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(std::move(value)); return *this; }
    inline UserPoolClientType& AddReadAttributes(const char* value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of user attributes that you want your app client to have write
     * access to. After your user authenticates in your app, their access token
     * authorizes them to set or modify their own attribute value for any attribute in
     * this list. An example of this kind of activity is when you present your user
     * with a form to update their profile information and they change their last name.
     * Your app then makes an <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateUserAttributes.html">UpdateUserAttributes</a>
     * API request and sets <code>family_name</code> to the new value. </p> <p>When you
     * don't specify the <code>WriteAttributes</code> for your app client, your app can
     * write the values of the Standard attributes of your user pool. When your user
     * pool has write access to these default attributes, <code>WriteAttributes</code>
     * doesn't return any information. Amazon Cognito only populates
     * <code>WriteAttributes</code> in the API response if you have specified your own
     * custom set of write attributes.</p> <p>If your app client allows users to sign
     * in through an IdP, this array must include all attributes that you have mapped
     * to IdP attributes. Amazon Cognito updates mapped attributes when users sign in
     * to your application through an IdP. If your app client does not have write
     * access to a mapped attribute, Amazon Cognito throws an error when it tries to
     * update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWriteAttributes() const{ return m_writeAttributes; }
    inline bool WriteAttributesHasBeenSet() const { return m_writeAttributesHasBeenSet; }
    inline void SetWriteAttributes(const Aws::Vector<Aws::String>& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes = value; }
    inline void SetWriteAttributes(Aws::Vector<Aws::String>&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes = std::move(value); }
    inline UserPoolClientType& WithWriteAttributes(const Aws::Vector<Aws::String>& value) { SetWriteAttributes(value); return *this;}
    inline UserPoolClientType& WithWriteAttributes(Aws::Vector<Aws::String>&& value) { SetWriteAttributes(std::move(value)); return *this;}
    inline UserPoolClientType& AddWriteAttributes(const Aws::String& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(value); return *this; }
    inline UserPoolClientType& AddWriteAttributes(Aws::String&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(std::move(value)); return *this; }
    inline UserPoolClientType& AddWriteAttributes(const char* value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication flows that you want your user pool client to support. For
     * each app client in your user pool, you can sign in your users with any
     * combination of one or more flows, including with a user name and Secure Remote
     * Password (SRP), a user name and password, or a custom authentication process
     * that you define with Lambda functions.</p>  <p>If you don't specify a
     * value for <code>ExplicitAuthFlows</code>, your user client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>.</p>  <p>Valid values include:</p> <ul>
     * <li> <p> <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user
     * password authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting
     * replaces the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication
     * flow, your app passes a user name and password to Amazon Cognito in the request,
     * instead of using the Secure Remote Password (SRP) protocol to securely transmit
     * the password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
     * trigger based authentication.</p> </li> <li> <p>
     * <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Amazon Cognito receives the password in the
     * request instead of using the SRP protocol to verify passwords.</p> </li> <li>
     * <p> <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP-based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul> <p>In some environments, you will see the values
     * <code>ADMIN_NO_SRP_AUTH</code>, <code>CUSTOM_AUTH_FLOW_ONLY</code>, or
     * <code>USER_PASSWORD_AUTH</code>. You can't assign these legacy
     * <code>ExplicitAuthFlows</code> values to user pool clients at the same time as
     * values that begin with <code>ALLOW_</code>, like
     * <code>ALLOW_USER_SRP_AUTH</code>.</p>
     */
    inline const Aws::Vector<ExplicitAuthFlowsType>& GetExplicitAuthFlows() const{ return m_explicitAuthFlows; }
    inline bool ExplicitAuthFlowsHasBeenSet() const { return m_explicitAuthFlowsHasBeenSet; }
    inline void SetExplicitAuthFlows(const Aws::Vector<ExplicitAuthFlowsType>& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows = value; }
    inline void SetExplicitAuthFlows(Aws::Vector<ExplicitAuthFlowsType>&& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows = std::move(value); }
    inline UserPoolClientType& WithExplicitAuthFlows(const Aws::Vector<ExplicitAuthFlowsType>& value) { SetExplicitAuthFlows(value); return *this;}
    inline UserPoolClientType& WithExplicitAuthFlows(Aws::Vector<ExplicitAuthFlowsType>&& value) { SetExplicitAuthFlows(std::move(value)); return *this;}
    inline UserPoolClientType& AddExplicitAuthFlows(const ExplicitAuthFlowsType& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows.push_back(value); return *this; }
    inline UserPoolClientType& AddExplicitAuthFlows(ExplicitAuthFlowsType&& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of provider names for the IdPs that this client supports. The
     * following are supported: <code>COGNITO</code>, <code>Facebook</code>,
     * <code>Google</code>, <code>SignInWithApple</code>, <code>LoginWithAmazon</code>,
     * and the names of your own SAML and OIDC providers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedIdentityProviders() const{ return m_supportedIdentityProviders; }
    inline bool SupportedIdentityProvidersHasBeenSet() const { return m_supportedIdentityProvidersHasBeenSet; }
    inline void SetSupportedIdentityProviders(const Aws::Vector<Aws::String>& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders = value; }
    inline void SetSupportedIdentityProviders(Aws::Vector<Aws::String>&& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders = std::move(value); }
    inline UserPoolClientType& WithSupportedIdentityProviders(const Aws::Vector<Aws::String>& value) { SetSupportedIdentityProviders(value); return *this;}
    inline UserPoolClientType& WithSupportedIdentityProviders(Aws::Vector<Aws::String>&& value) { SetSupportedIdentityProviders(std::move(value)); return *this;}
    inline UserPoolClientType& AddSupportedIdentityProviders(const Aws::String& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(value); return *this; }
    inline UserPoolClientType& AddSupportedIdentityProviders(Aws::String&& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(std::move(value)); return *this; }
    inline UserPoolClientType& AddSupportedIdentityProviders(const char* value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCallbackURLs() const{ return m_callbackURLs; }
    inline bool CallbackURLsHasBeenSet() const { return m_callbackURLsHasBeenSet; }
    inline void SetCallbackURLs(const Aws::Vector<Aws::String>& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs = value; }
    inline void SetCallbackURLs(Aws::Vector<Aws::String>&& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs = std::move(value); }
    inline UserPoolClientType& WithCallbackURLs(const Aws::Vector<Aws::String>& value) { SetCallbackURLs(value); return *this;}
    inline UserPoolClientType& WithCallbackURLs(Aws::Vector<Aws::String>&& value) { SetCallbackURLs(std::move(value)); return *this;}
    inline UserPoolClientType& AddCallbackURLs(const Aws::String& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(value); return *this; }
    inline UserPoolClientType& AddCallbackURLs(Aws::String&& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(std::move(value)); return *this; }
    inline UserPoolClientType& AddCallbackURLs(const char* value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogoutURLs() const{ return m_logoutURLs; }
    inline bool LogoutURLsHasBeenSet() const { return m_logoutURLsHasBeenSet; }
    inline void SetLogoutURLs(const Aws::Vector<Aws::String>& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs = value; }
    inline void SetLogoutURLs(Aws::Vector<Aws::String>&& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs = std::move(value); }
    inline UserPoolClientType& WithLogoutURLs(const Aws::Vector<Aws::String>& value) { SetLogoutURLs(value); return *this;}
    inline UserPoolClientType& WithLogoutURLs(Aws::Vector<Aws::String>&& value) { SetLogoutURLs(std::move(value)); return *this;}
    inline UserPoolClientType& AddLogoutURLs(const Aws::String& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(value); return *this; }
    inline UserPoolClientType& AddLogoutURLs(Aws::String&& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(std::move(value)); return *this; }
    inline UserPoolClientType& AddLogoutURLs(const char* value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default redirect URI. Must be in the <code>CallbackURLs</code> list.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline const Aws::String& GetDefaultRedirectURI() const{ return m_defaultRedirectURI; }
    inline bool DefaultRedirectURIHasBeenSet() const { return m_defaultRedirectURIHasBeenSet; }
    inline void SetDefaultRedirectURI(const Aws::String& value) { m_defaultRedirectURIHasBeenSet = true; m_defaultRedirectURI = value; }
    inline void SetDefaultRedirectURI(Aws::String&& value) { m_defaultRedirectURIHasBeenSet = true; m_defaultRedirectURI = std::move(value); }
    inline void SetDefaultRedirectURI(const char* value) { m_defaultRedirectURIHasBeenSet = true; m_defaultRedirectURI.assign(value); }
    inline UserPoolClientType& WithDefaultRedirectURI(const Aws::String& value) { SetDefaultRedirectURI(value); return *this;}
    inline UserPoolClientType& WithDefaultRedirectURI(Aws::String&& value) { SetDefaultRedirectURI(std::move(value)); return *this;}
    inline UserPoolClientType& WithDefaultRedirectURI(const char* value) { SetDefaultRedirectURI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed OAuth flows.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant
     * flow, which provides an authorization code as the response. This code can be
     * exchanged for access tokens with the <code>/oauth2/token</code> endpoint.</p>
     * </dd> <dt>implicit</dt> <dd> <p>Issue the access token (and, optionally, ID
     * token, based on scopes) directly to your user.</p> </dd>
     * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
     * <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline const Aws::Vector<OAuthFlowType>& GetAllowedOAuthFlows() const{ return m_allowedOAuthFlows; }
    inline bool AllowedOAuthFlowsHasBeenSet() const { return m_allowedOAuthFlowsHasBeenSet; }
    inline void SetAllowedOAuthFlows(const Aws::Vector<OAuthFlowType>& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows = value; }
    inline void SetAllowedOAuthFlows(Aws::Vector<OAuthFlowType>&& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows = std::move(value); }
    inline UserPoolClientType& WithAllowedOAuthFlows(const Aws::Vector<OAuthFlowType>& value) { SetAllowedOAuthFlows(value); return *this;}
    inline UserPoolClientType& WithAllowedOAuthFlows(Aws::Vector<OAuthFlowType>&& value) { SetAllowedOAuthFlows(std::move(value)); return *this;}
    inline UserPoolClientType& AddAllowedOAuthFlows(const OAuthFlowType& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows.push_back(value); return *this; }
    inline UserPoolClientType& AddAllowedOAuthFlows(OAuthFlowType&& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The OAuth scopes that your app client supports. Possible values that OAuth
     * provides are <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values that Amazon Web Services provides are
     * <code>aws.cognito.signin.user.admin</code>. Amazon Cognito also supports custom
     * scopes that you create in Resource Servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOAuthScopes() const{ return m_allowedOAuthScopes; }
    inline bool AllowedOAuthScopesHasBeenSet() const { return m_allowedOAuthScopesHasBeenSet; }
    inline void SetAllowedOAuthScopes(const Aws::Vector<Aws::String>& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes = value; }
    inline void SetAllowedOAuthScopes(Aws::Vector<Aws::String>&& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes = std::move(value); }
    inline UserPoolClientType& WithAllowedOAuthScopes(const Aws::Vector<Aws::String>& value) { SetAllowedOAuthScopes(value); return *this;}
    inline UserPoolClientType& WithAllowedOAuthScopes(Aws::Vector<Aws::String>&& value) { SetAllowedOAuthScopes(std::move(value)); return *this;}
    inline UserPoolClientType& AddAllowedOAuthScopes(const Aws::String& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(value); return *this; }
    inline UserPoolClientType& AddAllowedOAuthScopes(Aws::String&& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(std::move(value)); return *this; }
    inline UserPoolClientType& AddAllowedOAuthScopes(const char* value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to use OAuth 2.0 features in your user pool app
     * client.</p> <p> <code>AllowedOAuthFlowsUserPoolClient</code> must be
     * <code>true</code> before you can configure the following features in your app
     * client.</p> <ul> <li> <p> <code>CallBackURLs</code>: Callback URLs.</p> </li>
     * <li> <p> <code>LogoutURLs</code>: Sign-out redirect URLs.</p> </li> <li> <p>
     * <code>AllowedOAuthScopes</code>: OAuth 2.0 scopes.</p> </li> <li> <p>
     * <code>AllowedOAuthFlows</code>: Support for authorization code, implicit, and
     * client credentials OAuth 2.0 grants.</p> </li> </ul> <p>To use OAuth 2.0
     * features, configure one of these features in the Amazon Cognito console or set
     * <code>AllowedOAuthFlowsUserPoolClient</code> to <code>true</code> in a
     * <code>CreateUserPoolClient</code> or <code>UpdateUserPoolClient</code> API
     * request. If you don't set a value for
     * <code>AllowedOAuthFlowsUserPoolClient</code> in a request with the CLI or SDKs,
     * it defaults to <code>false</code>.</p>
     */
    inline bool GetAllowedOAuthFlowsUserPoolClient() const{ return m_allowedOAuthFlowsUserPoolClient; }
    inline bool AllowedOAuthFlowsUserPoolClientHasBeenSet() const { return m_allowedOAuthFlowsUserPoolClientHasBeenSet; }
    inline void SetAllowedOAuthFlowsUserPoolClient(bool value) { m_allowedOAuthFlowsUserPoolClientHasBeenSet = true; m_allowedOAuthFlowsUserPoolClient = value; }
    inline UserPoolClientType& WithAllowedOAuthFlowsUserPoolClient(bool value) { SetAllowedOAuthFlowsUserPoolClient(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Pinpoint analytics configuration for the user pool client.</p>
     *  <p>Amazon Cognito user pools only support sending events to Amazon
     * Pinpoint projects in the US East (N. Virginia) us-east-1 Region, regardless of
     * the Region where the user pool resides.</p> 
     */
    inline const AnalyticsConfigurationType& GetAnalyticsConfiguration() const{ return m_analyticsConfiguration; }
    inline bool AnalyticsConfigurationHasBeenSet() const { return m_analyticsConfigurationHasBeenSet; }
    inline void SetAnalyticsConfiguration(const AnalyticsConfigurationType& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = value; }
    inline void SetAnalyticsConfiguration(AnalyticsConfigurationType&& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = std::move(value); }
    inline UserPoolClientType& WithAnalyticsConfiguration(const AnalyticsConfigurationType& value) { SetAnalyticsConfiguration(value); return *this;}
    inline UserPoolClientType& WithAnalyticsConfiguration(AnalyticsConfigurationType&& value) { SetAnalyticsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Errors and responses that you want Amazon Cognito APIs to return during
     * authentication, account confirmation, and password recovery when the user
     * doesn't exist in the user pool. When set to <code>ENABLED</code> and the user
     * doesn't exist, authentication returns an error indicating either the username or
     * password was incorrect. Account confirmation and password recovery return a
     * response indicating a code was sent to a simulated destination. When set to
     * <code>LEGACY</code>, those APIs return a <code>UserNotFoundException</code>
     * exception if the user doesn't exist in the user pool.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>ENABLED</code> - This prevents user
     * existence-related errors.</p> </li> <li> <p> <code>LEGACY</code> - This
     * represents the early behavior of Amazon Cognito where user existence related
     * errors aren't prevented.</p> </li> </ul> <p>Defaults to <code>LEGACY</code> when
     * you don't provide a value.</p>
     */
    inline const PreventUserExistenceErrorTypes& GetPreventUserExistenceErrors() const{ return m_preventUserExistenceErrors; }
    inline bool PreventUserExistenceErrorsHasBeenSet() const { return m_preventUserExistenceErrorsHasBeenSet; }
    inline void SetPreventUserExistenceErrors(const PreventUserExistenceErrorTypes& value) { m_preventUserExistenceErrorsHasBeenSet = true; m_preventUserExistenceErrors = value; }
    inline void SetPreventUserExistenceErrors(PreventUserExistenceErrorTypes&& value) { m_preventUserExistenceErrorsHasBeenSet = true; m_preventUserExistenceErrors = std::move(value); }
    inline UserPoolClientType& WithPreventUserExistenceErrors(const PreventUserExistenceErrorTypes& value) { SetPreventUserExistenceErrors(value); return *this;}
    inline UserPoolClientType& WithPreventUserExistenceErrors(PreventUserExistenceErrorTypes&& value) { SetPreventUserExistenceErrors(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether token revocation is activated for the user pool client.
     * When you create a new user pool client, token revocation is activated by
     * default. For more information about revoking tokens, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RevokeToken.html">RevokeToken</a>.</p>
     */
    inline bool GetEnableTokenRevocation() const{ return m_enableTokenRevocation; }
    inline bool EnableTokenRevocationHasBeenSet() const { return m_enableTokenRevocationHasBeenSet; }
    inline void SetEnableTokenRevocation(bool value) { m_enableTokenRevocationHasBeenSet = true; m_enableTokenRevocation = value; }
    inline UserPoolClientType& WithEnableTokenRevocation(bool value) { SetEnableTokenRevocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>EnablePropagateAdditionalUserContextData</code> is true, Amazon
     * Cognito accepts an <code>IpAddress</code> value that you send in the
     * <code>UserContextData</code> parameter. The <code>UserContextData</code>
     * parameter sends information to Amazon Cognito advanced security for risk
     * analysis. You can send <code>UserContextData</code> when you sign in Amazon
     * Cognito native users with the <code>InitiateAuth</code> and
     * <code>RespondToAuthChallenge</code> API operations.</p> <p>When
     * <code>EnablePropagateAdditionalUserContextData</code> is false, you can't send
     * your user's source IP address to Amazon Cognito advanced security with
     * unauthenticated API operations.
     * <code>EnablePropagateAdditionalUserContextData</code> doesn't affect whether you
     * can send a source IP address in a <code>ContextData</code> parameter with the
     * authenticated API operations <code>AdminInitiateAuth</code> and
     * <code>AdminRespondToAuthChallenge</code>.</p> <p>You can only activate
     * <code>EnablePropagateAdditionalUserContextData</code> in an app client that has
     * a client secret. For more information about propagation of user context data,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline bool GetEnablePropagateAdditionalUserContextData() const{ return m_enablePropagateAdditionalUserContextData; }
    inline bool EnablePropagateAdditionalUserContextDataHasBeenSet() const { return m_enablePropagateAdditionalUserContextDataHasBeenSet; }
    inline void SetEnablePropagateAdditionalUserContextData(bool value) { m_enablePropagateAdditionalUserContextDataHasBeenSet = true; m_enablePropagateAdditionalUserContextData = value; }
    inline UserPoolClientType& WithEnablePropagateAdditionalUserContextData(bool value) { SetEnablePropagateAdditionalUserContextData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Cognito creates a session token for each API request in an
     * authentication flow. <code>AuthSessionValidity</code> is the duration, in
     * minutes, of that session token. Your user pool native user must respond to each
     * authentication challenge before the session expires.</p>
     */
    inline int GetAuthSessionValidity() const{ return m_authSessionValidity; }
    inline bool AuthSessionValidityHasBeenSet() const { return m_authSessionValidityHasBeenSet; }
    inline void SetAuthSessionValidity(int value) { m_authSessionValidityHasBeenSet = true; m_authSessionValidity = value; }
    inline UserPoolClientType& WithAuthSessionValidity(int value) { SetAuthSessionValidity(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientName;
    bool m_clientNameHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    int m_refreshTokenValidity;
    bool m_refreshTokenValidityHasBeenSet = false;

    int m_accessTokenValidity;
    bool m_accessTokenValidityHasBeenSet = false;

    int m_idTokenValidity;
    bool m_idTokenValidityHasBeenSet = false;

    TokenValidityUnitsType m_tokenValidityUnits;
    bool m_tokenValidityUnitsHasBeenSet = false;

    Aws::Vector<Aws::String> m_readAttributes;
    bool m_readAttributesHasBeenSet = false;

    Aws::Vector<Aws::String> m_writeAttributes;
    bool m_writeAttributesHasBeenSet = false;

    Aws::Vector<ExplicitAuthFlowsType> m_explicitAuthFlows;
    bool m_explicitAuthFlowsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedIdentityProviders;
    bool m_supportedIdentityProvidersHasBeenSet = false;

    Aws::Vector<Aws::String> m_callbackURLs;
    bool m_callbackURLsHasBeenSet = false;

    Aws::Vector<Aws::String> m_logoutURLs;
    bool m_logoutURLsHasBeenSet = false;

    Aws::String m_defaultRedirectURI;
    bool m_defaultRedirectURIHasBeenSet = false;

    Aws::Vector<OAuthFlowType> m_allowedOAuthFlows;
    bool m_allowedOAuthFlowsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedOAuthScopes;
    bool m_allowedOAuthScopesHasBeenSet = false;

    bool m_allowedOAuthFlowsUserPoolClient;
    bool m_allowedOAuthFlowsUserPoolClientHasBeenSet = false;

    AnalyticsConfigurationType m_analyticsConfiguration;
    bool m_analyticsConfigurationHasBeenSet = false;

    PreventUserExistenceErrorTypes m_preventUserExistenceErrors;
    bool m_preventUserExistenceErrorsHasBeenSet = false;

    bool m_enableTokenRevocation;
    bool m_enableTokenRevocationHasBeenSet = false;

    bool m_enablePropagateAdditionalUserContextData;
    bool m_enablePropagateAdditionalUserContextDataHasBeenSet = false;

    int m_authSessionValidity;
    bool m_authSessionValidityHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
