/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AuthenticateOidcActionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API AuthenticateOidcActionConfig();
    AWS_ELASTICLOADBALANCINGV2_API AuthenticateOidcActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API AuthenticateOidcActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline AuthenticateOidcActionConfig& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline AuthenticateOidcActionConfig& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline AuthenticateOidcActionConfig& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = value; }
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::move(value); }
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint.assign(value); }
    inline AuthenticateOidcActionConfig& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}
    inline AuthenticateOidcActionConfig& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}
    inline AuthenticateOidcActionConfig& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const{ return m_tokenEndpoint; }
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
    inline void SetTokenEndpoint(const Aws::String& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = value; }
    inline void SetTokenEndpoint(Aws::String&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::move(value); }
    inline void SetTokenEndpoint(const char* value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint.assign(value); }
    inline AuthenticateOidcActionConfig& WithTokenEndpoint(const Aws::String& value) { SetTokenEndpoint(value); return *this;}
    inline AuthenticateOidcActionConfig& WithTokenEndpoint(Aws::String&& value) { SetTokenEndpoint(std::move(value)); return *this;}
    inline AuthenticateOidcActionConfig& WithTokenEndpoint(const char* value) { SetTokenEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetUserInfoEndpoint() const{ return m_userInfoEndpoint; }
    inline bool UserInfoEndpointHasBeenSet() const { return m_userInfoEndpointHasBeenSet; }
    inline void SetUserInfoEndpoint(const Aws::String& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = value; }
    inline void SetUserInfoEndpoint(Aws::String&& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = std::move(value); }
    inline void SetUserInfoEndpoint(const char* value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint.assign(value); }
    inline AuthenticateOidcActionConfig& WithUserInfoEndpoint(const Aws::String& value) { SetUserInfoEndpoint(value); return *this;}
    inline AuthenticateOidcActionConfig& WithUserInfoEndpoint(Aws::String&& value) { SetUserInfoEndpoint(std::move(value)); return *this;}
    inline AuthenticateOidcActionConfig& WithUserInfoEndpoint(const char* value) { SetUserInfoEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline AuthenticateOidcActionConfig& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline AuthenticateOidcActionConfig& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline AuthenticateOidcActionConfig& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }
    inline AuthenticateOidcActionConfig& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}
    inline AuthenticateOidcActionConfig& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}
    inline AuthenticateOidcActionConfig& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline const Aws::String& GetSessionCookieName() const{ return m_sessionCookieName; }
    inline bool SessionCookieNameHasBeenSet() const { return m_sessionCookieNameHasBeenSet; }
    inline void SetSessionCookieName(const Aws::String& value) { m_sessionCookieNameHasBeenSet = true; m_sessionCookieName = value; }
    inline void SetSessionCookieName(Aws::String&& value) { m_sessionCookieNameHasBeenSet = true; m_sessionCookieName = std::move(value); }
    inline void SetSessionCookieName(const char* value) { m_sessionCookieNameHasBeenSet = true; m_sessionCookieName.assign(value); }
    inline AuthenticateOidcActionConfig& WithSessionCookieName(const Aws::String& value) { SetSessionCookieName(value); return *this;}
    inline AuthenticateOidcActionConfig& WithSessionCookieName(Aws::String&& value) { SetSessionCookieName(std::move(value)); return *this;}
    inline AuthenticateOidcActionConfig& WithSessionCookieName(const char* value) { SetSessionCookieName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }
    inline AuthenticateOidcActionConfig& WithScope(const Aws::String& value) { SetScope(value); return *this;}
    inline AuthenticateOidcActionConfig& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}
    inline AuthenticateOidcActionConfig& WithScope(const char* value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration of the authentication session, in seconds. The default
     * is 604800 seconds (7 days).</p>
     */
    inline long long GetSessionTimeout() const{ return m_sessionTimeout; }
    inline bool SessionTimeoutHasBeenSet() const { return m_sessionTimeoutHasBeenSet; }
    inline void SetSessionTimeout(long long value) { m_sessionTimeoutHasBeenSet = true; m_sessionTimeout = value; }
    inline AuthenticateOidcActionConfig& WithSessionTimeout(long long value) { SetSessionTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthenticationRequestExtraParams() const{ return m_authenticationRequestExtraParams; }
    inline bool AuthenticationRequestExtraParamsHasBeenSet() const { return m_authenticationRequestExtraParamsHasBeenSet; }
    inline void SetAuthenticationRequestExtraParams(const Aws::Map<Aws::String, Aws::String>& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams = value; }
    inline void SetAuthenticationRequestExtraParams(Aws::Map<Aws::String, Aws::String>&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams = std::move(value); }
    inline AuthenticateOidcActionConfig& WithAuthenticationRequestExtraParams(const Aws::Map<Aws::String, Aws::String>& value) { SetAuthenticationRequestExtraParams(value); return *this;}
    inline AuthenticateOidcActionConfig& WithAuthenticationRequestExtraParams(Aws::Map<Aws::String, Aws::String>&& value) { SetAuthenticationRequestExtraParams(std::move(value)); return *this;}
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(const Aws::String& key, const Aws::String& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, value); return *this; }
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, const Aws::String& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), value); return *this; }
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(const Aws::String& key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, std::move(value)); return *this; }
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), std::move(value)); return *this; }
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(const char* key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, std::move(value)); return *this; }
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, const char* value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), value); return *this; }
    inline AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(const char* key, const char* value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline const AuthenticateOidcActionConditionalBehaviorEnum& GetOnUnauthenticatedRequest() const{ return m_onUnauthenticatedRequest; }
    inline bool OnUnauthenticatedRequestHasBeenSet() const { return m_onUnauthenticatedRequestHasBeenSet; }
    inline void SetOnUnauthenticatedRequest(const AuthenticateOidcActionConditionalBehaviorEnum& value) { m_onUnauthenticatedRequestHasBeenSet = true; m_onUnauthenticatedRequest = value; }
    inline void SetOnUnauthenticatedRequest(AuthenticateOidcActionConditionalBehaviorEnum&& value) { m_onUnauthenticatedRequestHasBeenSet = true; m_onUnauthenticatedRequest = std::move(value); }
    inline AuthenticateOidcActionConfig& WithOnUnauthenticatedRequest(const AuthenticateOidcActionConditionalBehaviorEnum& value) { SetOnUnauthenticatedRequest(value); return *this;}
    inline AuthenticateOidcActionConfig& WithOnUnauthenticatedRequest(AuthenticateOidcActionConditionalBehaviorEnum&& value) { SetOnUnauthenticatedRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use the existing client secret when modifying a rule. If
     * you are creating a rule, you can omit this parameter or set it to false.</p>
     */
    inline bool GetUseExistingClientSecret() const{ return m_useExistingClientSecret; }
    inline bool UseExistingClientSecretHasBeenSet() const { return m_useExistingClientSecretHasBeenSet; }
    inline void SetUseExistingClientSecret(bool value) { m_useExistingClientSecretHasBeenSet = true; m_useExistingClientSecret = value; }
    inline AuthenticateOidcActionConfig& WithUseExistingClientSecret(bool value) { SetUseExistingClientSecret(value); return *this;}
    ///@}
  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet = false;

    Aws::String m_tokenEndpoint;
    bool m_tokenEndpointHasBeenSet = false;

    Aws::String m_userInfoEndpoint;
    bool m_userInfoEndpointHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    Aws::String m_sessionCookieName;
    bool m_sessionCookieNameHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    long long m_sessionTimeout;
    bool m_sessionTimeoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_authenticationRequestExtraParams;
    bool m_authenticationRequestExtraParamsHasBeenSet = false;

    AuthenticateOidcActionConditionalBehaviorEnum m_onUnauthenticatedRequest;
    bool m_onUnauthenticatedRequestHasBeenSet = false;

    bool m_useExistingClientSecret;
    bool m_useExistingClientSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
