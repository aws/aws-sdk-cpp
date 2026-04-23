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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/elasticloadbalancingv2/model/AuthenticateOidcActionConditionalBehaviorEnum.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Request parameters when using an identity provider (IdP) that is compliant
   * with OpenID Connect (OIDC) to authenticate users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AuthenticateOidcActionConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API AuthenticateOidcActionConfig
  {
  public:
    AuthenticateOidcActionConfig();
    AuthenticateOidcActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AuthenticateOidcActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithIssuer(const char* value) { SetIssuer(value); return *this;}


    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }

    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }

    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = value; }

    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::move(value); }

    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint.assign(value); }

    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}

    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}


    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const{ return m_tokenEndpoint; }

    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }

    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline void SetTokenEndpoint(const Aws::String& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = value; }

    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline void SetTokenEndpoint(Aws::String&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::move(value); }

    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline void SetTokenEndpoint(const char* value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint.assign(value); }

    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithTokenEndpoint(const Aws::String& value) { SetTokenEndpoint(value); return *this;}

    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithTokenEndpoint(Aws::String&& value) { SetTokenEndpoint(std::move(value)); return *this;}

    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithTokenEndpoint(const char* value) { SetTokenEndpoint(value); return *this;}


    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetUserInfoEndpoint() const{ return m_userInfoEndpoint; }

    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline bool UserInfoEndpointHasBeenSet() const { return m_userInfoEndpointHasBeenSet; }

    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline void SetUserInfoEndpoint(const Aws::String& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = value; }

    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline void SetUserInfoEndpoint(Aws::String&& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = std::move(value); }

    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline void SetUserInfoEndpoint(const char* value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint.assign(value); }

    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithUserInfoEndpoint(const Aws::String& value) { SetUserInfoEndpoint(value); return *this;}

    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithUserInfoEndpoint(Aws::String&& value) { SetUserInfoEndpoint(std::move(value)); return *this;}

    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline AuthenticateOidcActionConfig& WithUserInfoEndpoint(const char* value) { SetUserInfoEndpoint(value); return *this;}


    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline AuthenticateOidcActionConfig& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline AuthenticateOidcActionConfig& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline AuthenticateOidcActionConfig& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline AuthenticateOidcActionConfig& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline AuthenticateOidcActionConfig& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline AuthenticateOidcActionConfig& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline const Aws::String& GetSessionCookieName() const{ return m_sessionCookieName; }

    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline bool SessionCookieNameHasBeenSet() const { return m_sessionCookieNameHasBeenSet; }

    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline void SetSessionCookieName(const Aws::String& value) { m_sessionCookieNameHasBeenSet = true; m_sessionCookieName = value; }

    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline void SetSessionCookieName(Aws::String&& value) { m_sessionCookieNameHasBeenSet = true; m_sessionCookieName = std::move(value); }

    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline void SetSessionCookieName(const char* value) { m_sessionCookieNameHasBeenSet = true; m_sessionCookieName.assign(value); }

    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline AuthenticateOidcActionConfig& WithSessionCookieName(const Aws::String& value) { SetSessionCookieName(value); return *this;}

    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline AuthenticateOidcActionConfig& WithSessionCookieName(Aws::String&& value) { SetSessionCookieName(std::move(value)); return *this;}

    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline AuthenticateOidcActionConfig& WithSessionCookieName(const char* value) { SetSessionCookieName(value); return *this;}


    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }

    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }

    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline AuthenticateOidcActionConfig& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline AuthenticateOidcActionConfig& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline AuthenticateOidcActionConfig& WithScope(const char* value) { SetScope(value); return *this;}


    /**
     * <p>The maximum duration of the authentication session, in seconds. The default
     * is 604800 seconds (7 days).</p>
     */
    inline long long GetSessionTimeout() const{ return m_sessionTimeout; }

    /**
     * <p>The maximum duration of the authentication session, in seconds. The default
     * is 604800 seconds (7 days).</p>
     */
    inline bool SessionTimeoutHasBeenSet() const { return m_sessionTimeoutHasBeenSet; }

    /**
     * <p>The maximum duration of the authentication session, in seconds. The default
     * is 604800 seconds (7 days).</p>
     */
    inline void SetSessionTimeout(long long value) { m_sessionTimeoutHasBeenSet = true; m_sessionTimeout = value; }

    /**
     * <p>The maximum duration of the authentication session, in seconds. The default
     * is 604800 seconds (7 days).</p>
     */
    inline AuthenticateOidcActionConfig& WithSessionTimeout(long long value) { SetSessionTimeout(value); return *this;}


    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthenticationRequestExtraParams() const{ return m_authenticationRequestExtraParams; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline bool AuthenticationRequestExtraParamsHasBeenSet() const { return m_authenticationRequestExtraParamsHasBeenSet; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline void SetAuthenticationRequestExtraParams(const Aws::Map<Aws::String, Aws::String>& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams = value; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline void SetAuthenticationRequestExtraParams(Aws::Map<Aws::String, Aws::String>&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams = std::move(value); }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateOidcActionConfig& WithAuthenticationRequestExtraParams(const Aws::Map<Aws::String, Aws::String>& value) { SetAuthenticationRequestExtraParams(value); return *this;}

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateOidcActionConfig& WithAuthenticationRequestExtraParams(Aws::Map<Aws::String, Aws::String>&& value) { SetAuthenticationRequestExtraParams(std::move(value)); return *this;}

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(const Aws::String& key, const Aws::String& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, value); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, const Aws::String& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(const Aws::String& key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(const char* key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, const char* value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(const char* key, const char* value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, value); return *this; }


    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline const AuthenticateOidcActionConditionalBehaviorEnum& GetOnUnauthenticatedRequest() const{ return m_onUnauthenticatedRequest; }

    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline bool OnUnauthenticatedRequestHasBeenSet() const { return m_onUnauthenticatedRequestHasBeenSet; }

    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline void SetOnUnauthenticatedRequest(const AuthenticateOidcActionConditionalBehaviorEnum& value) { m_onUnauthenticatedRequestHasBeenSet = true; m_onUnauthenticatedRequest = value; }

    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline void SetOnUnauthenticatedRequest(AuthenticateOidcActionConditionalBehaviorEnum&& value) { m_onUnauthenticatedRequestHasBeenSet = true; m_onUnauthenticatedRequest = std::move(value); }

    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline AuthenticateOidcActionConfig& WithOnUnauthenticatedRequest(const AuthenticateOidcActionConditionalBehaviorEnum& value) { SetOnUnauthenticatedRequest(value); return *this;}

    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline AuthenticateOidcActionConfig& WithOnUnauthenticatedRequest(AuthenticateOidcActionConditionalBehaviorEnum&& value) { SetOnUnauthenticatedRequest(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to use the existing client secret when modifying a rule. If
     * you are creating a rule, you can omit this parameter or set it to false.</p>
     */
    inline bool GetUseExistingClientSecret() const{ return m_useExistingClientSecret; }

    /**
     * <p>Indicates whether to use the existing client secret when modifying a rule. If
     * you are creating a rule, you can omit this parameter or set it to false.</p>
     */
    inline bool UseExistingClientSecretHasBeenSet() const { return m_useExistingClientSecretHasBeenSet; }

    /**
     * <p>Indicates whether to use the existing client secret when modifying a rule. If
     * you are creating a rule, you can omit this parameter or set it to false.</p>
     */
    inline void SetUseExistingClientSecret(bool value) { m_useExistingClientSecretHasBeenSet = true; m_useExistingClientSecret = value; }

    /**
     * <p>Indicates whether to use the existing client secret when modifying a rule. If
     * you are creating a rule, you can omit this parameter or set it to false.</p>
     */
    inline AuthenticateOidcActionConfig& WithUseExistingClientSecret(bool value) { SetUseExistingClientSecret(value); return *this;}

  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet;

    Aws::String m_tokenEndpoint;
    bool m_tokenEndpointHasBeenSet;

    Aws::String m_userInfoEndpoint;
    bool m_userInfoEndpointHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet;

    Aws::String m_sessionCookieName;
    bool m_sessionCookieNameHasBeenSet;

    Aws::String m_scope;
    bool m_scopeHasBeenSet;

    long long m_sessionTimeout;
    bool m_sessionTimeoutHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_authenticationRequestExtraParams;
    bool m_authenticationRequestExtraParamsHasBeenSet;

    AuthenticateOidcActionConditionalBehaviorEnum m_onUnauthenticatedRequest;
    bool m_onUnauthenticatedRequestHasBeenSet;

    bool m_useExistingClientSecret;
    bool m_useExistingClientSecretHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
