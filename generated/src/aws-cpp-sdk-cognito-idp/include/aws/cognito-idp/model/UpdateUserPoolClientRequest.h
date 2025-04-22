/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/TokenValidityUnitsType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AnalyticsConfigurationType.h>
#include <aws/cognito-idp/model/PreventUserExistenceErrorTypes.h>
#include <aws/cognito-idp/model/RefreshTokenRotationType.h>
#include <aws/cognito-idp/model/ExplicitAuthFlowsType.h>
#include <aws/cognito-idp/model/OAuthFlowType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to update the user pool client.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolClientRequest">AWS
   * API Reference</a></p>
   */
  class UpdateUserPoolClientRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolClientRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserPoolClient"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to update the app client.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    UpdateUserPoolClientRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app client that you want to update.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    UpdateUserPoolClientRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the app client.</p>
     */
    inline const Aws::String& GetClientName() const { return m_clientName; }
    inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }
    template<typename ClientNameT = Aws::String>
    void SetClientName(ClientNameT&& value) { m_clientNameHasBeenSet = true; m_clientName = std::forward<ClientNameT>(value); }
    template<typename ClientNameT = Aws::String>
    UpdateUserPoolClientRequest& WithClientName(ClientNameT&& value) { SetClientName(std::forward<ClientNameT>(value)); return *this;}
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
    inline int GetRefreshTokenValidity() const { return m_refreshTokenValidity; }
    inline bool RefreshTokenValidityHasBeenSet() const { return m_refreshTokenValidityHasBeenSet; }
    inline void SetRefreshTokenValidity(int value) { m_refreshTokenValidityHasBeenSet = true; m_refreshTokenValidity = value; }
    inline UpdateUserPoolClientRequest& WithRefreshTokenValidity(int value) { SetRefreshTokenValidity(value); return *this;}
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
    inline int GetAccessTokenValidity() const { return m_accessTokenValidity; }
    inline bool AccessTokenValidityHasBeenSet() const { return m_accessTokenValidityHasBeenSet; }
    inline void SetAccessTokenValidity(int value) { m_accessTokenValidityHasBeenSet = true; m_accessTokenValidity = value; }
    inline UpdateUserPoolClientRequest& WithAccessTokenValidity(int value) { SetAccessTokenValidity(value); return *this;}
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
    inline int GetIdTokenValidity() const { return m_idTokenValidity; }
    inline bool IdTokenValidityHasBeenSet() const { return m_idTokenValidityHasBeenSet; }
    inline void SetIdTokenValidity(int value) { m_idTokenValidityHasBeenSet = true; m_idTokenValidity = value; }
    inline UpdateUserPoolClientRequest& WithIdTokenValidity(int value) { SetIdTokenValidity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The units that validity times are represented in. The default unit for
     * refresh tokens is days, and the default for ID and access tokens are hours.</p>
     */
    inline const TokenValidityUnitsType& GetTokenValidityUnits() const { return m_tokenValidityUnits; }
    inline bool TokenValidityUnitsHasBeenSet() const { return m_tokenValidityUnitsHasBeenSet; }
    template<typename TokenValidityUnitsT = TokenValidityUnitsType>
    void SetTokenValidityUnits(TokenValidityUnitsT&& value) { m_tokenValidityUnitsHasBeenSet = true; m_tokenValidityUnits = std::forward<TokenValidityUnitsT>(value); }
    template<typename TokenValidityUnitsT = TokenValidityUnitsType>
    UpdateUserPoolClientRequest& WithTokenValidityUnits(TokenValidityUnitsT&& value) { SetTokenValidityUnits(std::forward<TokenValidityUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user attributes that you want your app client to have read access
     * to. After your user authenticates in your app, their access token authorizes
     * them to read their own attribute value for any attribute in this list.</p>
     * <p>When you don't specify the <code>ReadAttributes</code> for your app client,
     * your app can read the values of <code>email_verified</code>,
     * <code>phone_number_verified</code>, and the standard attributes of your user
     * pool. When your user pool app client has read access to these default
     * attributes, <code>ReadAttributes</code> doesn't return any information. Amazon
     * Cognito only populates <code>ReadAttributes</code> in the API response if you
     * have specified your own custom set of read attributes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadAttributes() const { return m_readAttributes; }
    inline bool ReadAttributesHasBeenSet() const { return m_readAttributesHasBeenSet; }
    template<typename ReadAttributesT = Aws::Vector<Aws::String>>
    void SetReadAttributes(ReadAttributesT&& value) { m_readAttributesHasBeenSet = true; m_readAttributes = std::forward<ReadAttributesT>(value); }
    template<typename ReadAttributesT = Aws::Vector<Aws::String>>
    UpdateUserPoolClientRequest& WithReadAttributes(ReadAttributesT&& value) { SetReadAttributes(std::forward<ReadAttributesT>(value)); return *this;}
    template<typename ReadAttributesT = Aws::String>
    UpdateUserPoolClientRequest& AddReadAttributes(ReadAttributesT&& value) { m_readAttributesHasBeenSet = true; m_readAttributes.emplace_back(std::forward<ReadAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of user attributes that you want your app client to have write
     * access to. After your user authenticates in your app, their access token
     * authorizes them to set or modify their own attribute value for any attribute in
     * this list.</p> <p>When you don't specify the <code>WriteAttributes</code> for
     * your app client, your app can write the values of the Standard attributes of
     * your user pool. When your user pool has write access to these default
     * attributes, <code>WriteAttributes</code> doesn't return any information. Amazon
     * Cognito only populates <code>WriteAttributes</code> in the API response if you
     * have specified your own custom set of write attributes.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWriteAttributes() const { return m_writeAttributes; }
    inline bool WriteAttributesHasBeenSet() const { return m_writeAttributesHasBeenSet; }
    template<typename WriteAttributesT = Aws::Vector<Aws::String>>
    void SetWriteAttributes(WriteAttributesT&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes = std::forward<WriteAttributesT>(value); }
    template<typename WriteAttributesT = Aws::Vector<Aws::String>>
    UpdateUserPoolClientRequest& WithWriteAttributes(WriteAttributesT&& value) { SetWriteAttributes(std::forward<WriteAttributesT>(value)); return *this;}
    template<typename WriteAttributesT = Aws::String>
    UpdateUserPoolClientRequest& AddWriteAttributes(WriteAttributesT&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.emplace_back(std::forward<WriteAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-authentication-flow-methods.html">authentication
     * flows</a> that you want your user pool client to support. For each app client in
     * your user pool, you can sign in your users with any combination of one or more
     * flows, including with a user name and Secure Remote Password (SRP), a user name
     * and password, or a custom authentication process that you define with Lambda
     * functions.</p>  <p>If you don't specify a value for
     * <code>ExplicitAuthFlows</code>, your app client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>. </p>  <p>The values for authentication
     * flow options include the following.</p> <ul> <li> <p>
     * <code>ALLOW_USER_AUTH</code>: Enable selection-based sign-in with
     * <code>USER_AUTH</code>. This setting covers username-password, secure remote
     * password (SRP), passwordless, and passkey authentication. This authentiation
     * flow can do username-password and SRP authentication without other
     * <code>ExplicitAuthFlows</code> permitting them. For example users can complete
     * an SRP challenge through <code>USER_AUTH</code> without the flow
     * <code>USER_SRP_AUTH</code> being active for the app client. This flow doesn't
     * include <code>CUSTOM_AUTH</code>. </p> <p>To activate this setting, your user
     * pool must be in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-essentials.html">
     * Essentials tier</a> or higher.</p> </li> <li> <p>
     * <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user password
     * authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting replaces
     * the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication flow, your
     * app passes a user name and password to Amazon Cognito in the request, instead of
     * using the Secure Remote Password (SRP) protocol to securely transmit the
     * password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
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
    inline const Aws::Vector<ExplicitAuthFlowsType>& GetExplicitAuthFlows() const { return m_explicitAuthFlows; }
    inline bool ExplicitAuthFlowsHasBeenSet() const { return m_explicitAuthFlowsHasBeenSet; }
    template<typename ExplicitAuthFlowsT = Aws::Vector<ExplicitAuthFlowsType>>
    void SetExplicitAuthFlows(ExplicitAuthFlowsT&& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows = std::forward<ExplicitAuthFlowsT>(value); }
    template<typename ExplicitAuthFlowsT = Aws::Vector<ExplicitAuthFlowsType>>
    UpdateUserPoolClientRequest& WithExplicitAuthFlows(ExplicitAuthFlowsT&& value) { SetExplicitAuthFlows(std::forward<ExplicitAuthFlowsT>(value)); return *this;}
    inline UpdateUserPoolClientRequest& AddExplicitAuthFlows(ExplicitAuthFlowsType value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p> <p>This parameter sets the IdPs that <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-managed-login.html">managed
     * login</a> will display on the login page for your app client. The removal of
     * <code>COGNITO</code> from this list doesn't prevent authentication operations
     * for local users with the user pools API in an Amazon Web Services SDK. The only
     * way to prevent SDK-based authentication is to block access with a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-waf.html">WAF
     * rule</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedIdentityProviders() const { return m_supportedIdentityProviders; }
    inline bool SupportedIdentityProvidersHasBeenSet() const { return m_supportedIdentityProvidersHasBeenSet; }
    template<typename SupportedIdentityProvidersT = Aws::Vector<Aws::String>>
    void SetSupportedIdentityProviders(SupportedIdentityProvidersT&& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders = std::forward<SupportedIdentityProvidersT>(value); }
    template<typename SupportedIdentityProvidersT = Aws::Vector<Aws::String>>
    UpdateUserPoolClientRequest& WithSupportedIdentityProviders(SupportedIdentityProvidersT&& value) { SetSupportedIdentityProviders(std::forward<SupportedIdentityProvidersT>(value)); return *this;}
    template<typename SupportedIdentityProvidersT = Aws::String>
    UpdateUserPoolClientRequest& AddSupportedIdentityProviders(SupportedIdentityProvidersT&& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.emplace_back(std::forward<SupportedIdentityProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of allowed redirect, or callback, URLs for managed login
     * authentication. These URLs are the paths where you want to send your users'
     * browsers after they complete authentication with managed login or a third-party
     * IdP. Typically, callback URLs are the home of an application that uses OAuth or
     * OIDC libraries to process authentication outcomes.</p> <p>A redirect URI must
     * meet the following requirements:</p> <ul> <li> <p>Be an absolute URI.</p> </li>
     * <li> <p>Be registered with the authorization server. Amazon Cognito doesn't
     * accept authorization requests with <code>redirect_uri</code> values that aren't
     * in the list of <code>CallbackURLs</code> that you provide in this parameter.</p>
     * </li> <li> <p>Not include a fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * <code>myapp://example</code> are also supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCallbackURLs() const { return m_callbackURLs; }
    inline bool CallbackURLsHasBeenSet() const { return m_callbackURLsHasBeenSet; }
    template<typename CallbackURLsT = Aws::Vector<Aws::String>>
    void SetCallbackURLs(CallbackURLsT&& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs = std::forward<CallbackURLsT>(value); }
    template<typename CallbackURLsT = Aws::Vector<Aws::String>>
    UpdateUserPoolClientRequest& WithCallbackURLs(CallbackURLsT&& value) { SetCallbackURLs(std::forward<CallbackURLsT>(value)); return *this;}
    template<typename CallbackURLsT = Aws::String>
    UpdateUserPoolClientRequest& AddCallbackURLs(CallbackURLsT&& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.emplace_back(std::forward<CallbackURLsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of allowed logout URLs for managed login authentication. When you pass
     * <code>logout_uri</code> and <code>client_id</code> parameters to
     * <code>/logout</code>, Amazon Cognito signs out your user and redirects them to
     * the logout URL. This parameter describes the URLs that you want to be the
     * permitted targets of <code>logout_uri</code>. A typical use of these URLs is
     * when a user selects "Sign out" and you redirect them to your public homepage.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/logout-endpoint.html">Logout
     * endpoint</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogoutURLs() const { return m_logoutURLs; }
    inline bool LogoutURLsHasBeenSet() const { return m_logoutURLsHasBeenSet; }
    template<typename LogoutURLsT = Aws::Vector<Aws::String>>
    void SetLogoutURLs(LogoutURLsT&& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs = std::forward<LogoutURLsT>(value); }
    template<typename LogoutURLsT = Aws::Vector<Aws::String>>
    UpdateUserPoolClientRequest& WithLogoutURLs(LogoutURLsT&& value) { SetLogoutURLs(std::forward<LogoutURLsT>(value)); return *this;}
    template<typename LogoutURLsT = Aws::String>
    UpdateUserPoolClientRequest& AddLogoutURLs(LogoutURLsT&& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.emplace_back(std::forward<LogoutURLsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default redirect URI. In app clients with one assigned IdP, replaces
     * <code>redirect_uri</code> in authentication requests. Must be in the
     * <code>CallbackURLs</code> list.</p>
     */
    inline const Aws::String& GetDefaultRedirectURI() const { return m_defaultRedirectURI; }
    inline bool DefaultRedirectURIHasBeenSet() const { return m_defaultRedirectURIHasBeenSet; }
    template<typename DefaultRedirectURIT = Aws::String>
    void SetDefaultRedirectURI(DefaultRedirectURIT&& value) { m_defaultRedirectURIHasBeenSet = true; m_defaultRedirectURI = std::forward<DefaultRedirectURIT>(value); }
    template<typename DefaultRedirectURIT = Aws::String>
    UpdateUserPoolClientRequest& WithDefaultRedirectURI(DefaultRedirectURIT&& value) { SetDefaultRedirectURI(std::forward<DefaultRedirectURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth grant types that you want your app client to generate. To create an
     * app client that generates client credentials grants, you must add
     * <code>client_credentials</code> as the only allowed OAuth flow.</p> <dl>
     * <dt>code</dt> <dd> <p>Use a code grant flow, which provides an authorization
     * code as the response. This code can be exchanged for access tokens with the
     * <code>/oauth2/token</code> endpoint.</p> </dd> <dt>implicit</dt> <dd> <p>Issue
     * the access token (and, optionally, ID token, based on scopes) directly to your
     * user.</p> </dd> <dt>client_credentials</dt> <dd> <p>Issue the access token from
     * the <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline const Aws::Vector<OAuthFlowType>& GetAllowedOAuthFlows() const { return m_allowedOAuthFlows; }
    inline bool AllowedOAuthFlowsHasBeenSet() const { return m_allowedOAuthFlowsHasBeenSet; }
    template<typename AllowedOAuthFlowsT = Aws::Vector<OAuthFlowType>>
    void SetAllowedOAuthFlows(AllowedOAuthFlowsT&& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows = std::forward<AllowedOAuthFlowsT>(value); }
    template<typename AllowedOAuthFlowsT = Aws::Vector<OAuthFlowType>>
    UpdateUserPoolClientRequest& WithAllowedOAuthFlows(AllowedOAuthFlowsT&& value) { SetAllowedOAuthFlows(std::forward<AllowedOAuthFlowsT>(value)); return *this;}
    inline UpdateUserPoolClientRequest& AddAllowedOAuthFlows(OAuthFlowType value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The OAuth, OpenID Connect (OIDC), and custom scopes that you want to permit
     * your app client to authorize access with. Scopes govern access control to user
     * pool self-service API operations, user data from the <code>userInfo</code>
     * endpoint, and third-party APIs. Scope values include <code>phone</code>,
     * <code>email</code>, <code>openid</code>, and <code>profile</code>. The
     * <code>aws.cognito.signin.user.admin</code> scope authorizes user self-service
     * operations. Custom scopes with resource servers authorize access to external
     * APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOAuthScopes() const { return m_allowedOAuthScopes; }
    inline bool AllowedOAuthScopesHasBeenSet() const { return m_allowedOAuthScopesHasBeenSet; }
    template<typename AllowedOAuthScopesT = Aws::Vector<Aws::String>>
    void SetAllowedOAuthScopes(AllowedOAuthScopesT&& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes = std::forward<AllowedOAuthScopesT>(value); }
    template<typename AllowedOAuthScopesT = Aws::Vector<Aws::String>>
    UpdateUserPoolClientRequest& WithAllowedOAuthScopes(AllowedOAuthScopesT&& value) { SetAllowedOAuthScopes(std::forward<AllowedOAuthScopesT>(value)); return *this;}
    template<typename AllowedOAuthScopesT = Aws::String>
    UpdateUserPoolClientRequest& AddAllowedOAuthScopes(AllowedOAuthScopesT&& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.emplace_back(std::forward<AllowedOAuthScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to use OAuth 2.0 authorization server features in
     * your app client.</p> <p>This parameter must have a value of <code>true</code>
     * before you can configure the following features in your app client.</p> <ul>
     * <li> <p> <code>CallBackURLs</code>: Callback URLs.</p> </li> <li> <p>
     * <code>LogoutURLs</code>: Sign-out redirect URLs.</p> </li> <li> <p>
     * <code>AllowedOAuthScopes</code>: OAuth 2.0 scopes.</p> </li> <li> <p>
     * <code>AllowedOAuthFlows</code>: Support for authorization code, implicit, and
     * client credentials OAuth 2.0 grants.</p> </li> </ul> <p>To use authorization
     * server features, configure one of these features in the Amazon Cognito console
     * or set <code>AllowedOAuthFlowsUserPoolClient</code> to <code>true</code> in a
     * <code>CreateUserPoolClient</code> or <code>UpdateUserPoolClient</code> API
     * request. If you don't set a value for
     * <code>AllowedOAuthFlowsUserPoolClient</code> in a request with the CLI or SDKs,
     * it defaults to <code>false</code>. When <code>false</code>, only SDK-based API
     * sign-in is permitted.</p>
     */
    inline bool GetAllowedOAuthFlowsUserPoolClient() const { return m_allowedOAuthFlowsUserPoolClient; }
    inline bool AllowedOAuthFlowsUserPoolClientHasBeenSet() const { return m_allowedOAuthFlowsUserPoolClientHasBeenSet; }
    inline void SetAllowedOAuthFlowsUserPoolClient(bool value) { m_allowedOAuthFlowsUserPoolClientHasBeenSet = true; m_allowedOAuthFlowsUserPoolClient = value; }
    inline UpdateUserPoolClientRequest& WithAllowedOAuthFlowsUserPoolClient(bool value) { SetAllowedOAuthFlowsUserPoolClient(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user pool analytics configuration for collecting metrics and sending them
     * to your Amazon Pinpoint campaign.</p> <p>In Amazon Web Services Regions where
     * Amazon Pinpoint isn't available, user pools might not have access to analytics
     * or might be configurable with campaigns in the US East (N. Virginia) Region. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-pinpoint-integration.html">Using
     * Amazon Pinpoint analytics</a>.</p>
     */
    inline const AnalyticsConfigurationType& GetAnalyticsConfiguration() const { return m_analyticsConfiguration; }
    inline bool AnalyticsConfigurationHasBeenSet() const { return m_analyticsConfigurationHasBeenSet; }
    template<typename AnalyticsConfigurationT = AnalyticsConfigurationType>
    void SetAnalyticsConfiguration(AnalyticsConfigurationT&& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = std::forward<AnalyticsConfigurationT>(value); }
    template<typename AnalyticsConfigurationT = AnalyticsConfigurationType>
    UpdateUserPoolClientRequest& WithAnalyticsConfiguration(AnalyticsConfigurationT&& value) { SetAnalyticsConfiguration(std::forward<AnalyticsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>ENABLED</code>, suppresses messages that might indicate a valid
     * user exists when someone attempts sign-in. This parameters sets your preference
     * for the errors and responses that you want Amazon Cognito APIs to return during
     * authentication, account confirmation, and password recovery when the user
     * doesn't exist in the user pool. When set to <code>ENABLED</code> and the user
     * doesn't exist, authentication returns an error indicating either the username or
     * password was incorrect. Account confirmation and password recovery return a
     * response indicating a code was sent to a simulated destination. When set to
     * <code>LEGACY</code>, those APIs return a <code>UserNotFoundException</code>
     * exception if the user doesn't exist in the user pool.</p> <p>Defaults to
     * <code>LEGACY</code>.</p>
     */
    inline PreventUserExistenceErrorTypes GetPreventUserExistenceErrors() const { return m_preventUserExistenceErrors; }
    inline bool PreventUserExistenceErrorsHasBeenSet() const { return m_preventUserExistenceErrorsHasBeenSet; }
    inline void SetPreventUserExistenceErrors(PreventUserExistenceErrorTypes value) { m_preventUserExistenceErrorsHasBeenSet = true; m_preventUserExistenceErrors = value; }
    inline UpdateUserPoolClientRequest& WithPreventUserExistenceErrors(PreventUserExistenceErrorTypes value) { SetPreventUserExistenceErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Activates or deactivates <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/token-revocation.html">token
     * revocation</a> in the target app client.</p>
     */
    inline bool GetEnableTokenRevocation() const { return m_enableTokenRevocation; }
    inline bool EnableTokenRevocationHasBeenSet() const { return m_enableTokenRevocationHasBeenSet; }
    inline void SetEnableTokenRevocation(bool value) { m_enableTokenRevocationHasBeenSet = true; m_enableTokenRevocation = value; }
    inline UpdateUserPoolClientRequest& WithEnableTokenRevocation(bool value) { SetEnableTokenRevocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, your application can include additional
     * <code>UserContextData</code> in authentication requests. This data includes the
     * IP address, and contributes to analysis by threat protection features. For more
     * information about propagation of user context data, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * session data to API requests</a>. If you don’t include this parameter, you can't
     * send the source IP address to Amazon Cognito threat protection features. You can
     * only activate <code>EnablePropagateAdditionalUserContextData</code> in an app
     * client that has a client secret.</p>
     */
    inline bool GetEnablePropagateAdditionalUserContextData() const { return m_enablePropagateAdditionalUserContextData; }
    inline bool EnablePropagateAdditionalUserContextDataHasBeenSet() const { return m_enablePropagateAdditionalUserContextDataHasBeenSet; }
    inline void SetEnablePropagateAdditionalUserContextData(bool value) { m_enablePropagateAdditionalUserContextDataHasBeenSet = true; m_enablePropagateAdditionalUserContextData = value; }
    inline UpdateUserPoolClientRequest& WithEnablePropagateAdditionalUserContextData(bool value) { SetEnablePropagateAdditionalUserContextData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Cognito creates a session token for each API request in an
     * authentication flow. <code>AuthSessionValidity</code> is the duration, in
     * minutes, of that session token. Your user pool native user must respond to each
     * authentication challenge before the session expires.</p>
     */
    inline int GetAuthSessionValidity() const { return m_authSessionValidity; }
    inline bool AuthSessionValidityHasBeenSet() const { return m_authSessionValidityHasBeenSet; }
    inline void SetAuthSessionValidity(int value) { m_authSessionValidityHasBeenSet = true; m_authSessionValidity = value; }
    inline UpdateUserPoolClientRequest& WithAuthSessionValidity(int value) { SetAuthSessionValidity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of your app client for refresh token rotation. When
     * enabled, your app client issues new ID, access, and refresh tokens when users
     * renew their sessions with refresh tokens. When disabled, token refresh issues
     * only ID and access tokens.</p>
     */
    inline const RefreshTokenRotationType& GetRefreshTokenRotation() const { return m_refreshTokenRotation; }
    inline bool RefreshTokenRotationHasBeenSet() const { return m_refreshTokenRotationHasBeenSet; }
    template<typename RefreshTokenRotationT = RefreshTokenRotationType>
    void SetRefreshTokenRotation(RefreshTokenRotationT&& value) { m_refreshTokenRotationHasBeenSet = true; m_refreshTokenRotation = std::forward<RefreshTokenRotationT>(value); }
    template<typename RefreshTokenRotationT = RefreshTokenRotationType>
    UpdateUserPoolClientRequest& WithRefreshTokenRotation(RefreshTokenRotationT&& value) { SetRefreshTokenRotation(std::forward<RefreshTokenRotationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientName;
    bool m_clientNameHasBeenSet = false;

    int m_refreshTokenValidity{0};
    bool m_refreshTokenValidityHasBeenSet = false;

    int m_accessTokenValidity{0};
    bool m_accessTokenValidityHasBeenSet = false;

    int m_idTokenValidity{0};
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

    bool m_allowedOAuthFlowsUserPoolClient{false};
    bool m_allowedOAuthFlowsUserPoolClientHasBeenSet = false;

    AnalyticsConfigurationType m_analyticsConfiguration;
    bool m_analyticsConfigurationHasBeenSet = false;

    PreventUserExistenceErrorTypes m_preventUserExistenceErrors{PreventUserExistenceErrorTypes::NOT_SET};
    bool m_preventUserExistenceErrorsHasBeenSet = false;

    bool m_enableTokenRevocation{false};
    bool m_enableTokenRevocationHasBeenSet = false;

    bool m_enablePropagateAdditionalUserContextData{false};
    bool m_enablePropagateAdditionalUserContextDataHasBeenSet = false;

    int m_authSessionValidity{0};
    bool m_authSessionValidityHasBeenSet = false;

    RefreshTokenRotationType m_refreshTokenRotation;
    bool m_refreshTokenRotationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
