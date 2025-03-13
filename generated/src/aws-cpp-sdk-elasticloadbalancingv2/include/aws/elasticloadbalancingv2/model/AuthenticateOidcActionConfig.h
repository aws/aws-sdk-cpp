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
    AWS_ELASTICLOADBALANCINGV2_API AuthenticateOidcActionConfig() = default;
    AWS_ELASTICLOADBALANCINGV2_API AuthenticateOidcActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API AuthenticateOidcActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The OIDC issuer identifier of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    AuthenticateOidcActionConfig& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const { return m_authorizationEndpoint; }
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
    template<typename AuthorizationEndpointT = Aws::String>
    void SetAuthorizationEndpoint(AuthorizationEndpointT&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::forward<AuthorizationEndpointT>(value); }
    template<typename AuthorizationEndpointT = Aws::String>
    AuthenticateOidcActionConfig& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) { SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token endpoint of the IdP. This must be a full URL, including the HTTPS
     * protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const { return m_tokenEndpoint; }
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
    template<typename TokenEndpointT = Aws::String>
    void SetTokenEndpoint(TokenEndpointT&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::forward<TokenEndpointT>(value); }
    template<typename TokenEndpointT = Aws::String>
    AuthenticateOidcActionConfig& WithTokenEndpoint(TokenEndpointT&& value) { SetTokenEndpoint(std::forward<TokenEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user info endpoint of the IdP. This must be a full URL, including the
     * HTTPS protocol, the domain, and the path.</p>
     */
    inline const Aws::String& GetUserInfoEndpoint() const { return m_userInfoEndpoint; }
    inline bool UserInfoEndpointHasBeenSet() const { return m_userInfoEndpointHasBeenSet; }
    template<typename UserInfoEndpointT = Aws::String>
    void SetUserInfoEndpoint(UserInfoEndpointT&& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = std::forward<UserInfoEndpointT>(value); }
    template<typename UserInfoEndpointT = Aws::String>
    AuthenticateOidcActionConfig& WithUserInfoEndpoint(UserInfoEndpointT&& value) { SetUserInfoEndpoint(std::forward<UserInfoEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    AuthenticateOidcActionConfig& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 client secret. This parameter is required if you are creating a
     * rule. If you are modifying a rule, you can omit this parameter if you set
     * <code>UseExistingClientSecret</code> to true.</p>
     */
    inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    template<typename ClientSecretT = Aws::String>
    void SetClientSecret(ClientSecretT&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::forward<ClientSecretT>(value); }
    template<typename ClientSecretT = Aws::String>
    AuthenticateOidcActionConfig& WithClientSecret(ClientSecretT&& value) { SetClientSecret(std::forward<ClientSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline const Aws::String& GetSessionCookieName() const { return m_sessionCookieName; }
    inline bool SessionCookieNameHasBeenSet() const { return m_sessionCookieNameHasBeenSet; }
    template<typename SessionCookieNameT = Aws::String>
    void SetSessionCookieName(SessionCookieNameT&& value) { m_sessionCookieNameHasBeenSet = true; m_sessionCookieName = std::forward<SessionCookieNameT>(value); }
    template<typename SessionCookieNameT = Aws::String>
    AuthenticateOidcActionConfig& WithSessionCookieName(SessionCookieNameT&& value) { SetSessionCookieName(std::forward<SessionCookieNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    AuthenticateOidcActionConfig& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration of the authentication session, in seconds. The default
     * is 604800 seconds (7 days).</p>
     */
    inline long long GetSessionTimeout() const { return m_sessionTimeout; }
    inline bool SessionTimeoutHasBeenSet() const { return m_sessionTimeoutHasBeenSet; }
    inline void SetSessionTimeout(long long value) { m_sessionTimeoutHasBeenSet = true; m_sessionTimeout = value; }
    inline AuthenticateOidcActionConfig& WithSessionTimeout(long long value) { SetSessionTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthenticationRequestExtraParams() const { return m_authenticationRequestExtraParams; }
    inline bool AuthenticationRequestExtraParamsHasBeenSet() const { return m_authenticationRequestExtraParamsHasBeenSet; }
    template<typename AuthenticationRequestExtraParamsT = Aws::Map<Aws::String, Aws::String>>
    void SetAuthenticationRequestExtraParams(AuthenticationRequestExtraParamsT&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams = std::forward<AuthenticationRequestExtraParamsT>(value); }
    template<typename AuthenticationRequestExtraParamsT = Aws::Map<Aws::String, Aws::String>>
    AuthenticateOidcActionConfig& WithAuthenticationRequestExtraParams(AuthenticationRequestExtraParamsT&& value) { SetAuthenticationRequestExtraParams(std::forward<AuthenticationRequestExtraParamsT>(value)); return *this;}
    template<typename AuthenticationRequestExtraParamsKeyT = Aws::String, typename AuthenticationRequestExtraParamsValueT = Aws::String>
    AuthenticateOidcActionConfig& AddAuthenticationRequestExtraParams(AuthenticationRequestExtraParamsKeyT&& key, AuthenticationRequestExtraParamsValueT&& value) {
      m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::forward<AuthenticationRequestExtraParamsKeyT>(key), std::forward<AuthenticationRequestExtraParamsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline AuthenticateOidcActionConditionalBehaviorEnum GetOnUnauthenticatedRequest() const { return m_onUnauthenticatedRequest; }
    inline bool OnUnauthenticatedRequestHasBeenSet() const { return m_onUnauthenticatedRequestHasBeenSet; }
    inline void SetOnUnauthenticatedRequest(AuthenticateOidcActionConditionalBehaviorEnum value) { m_onUnauthenticatedRequestHasBeenSet = true; m_onUnauthenticatedRequest = value; }
    inline AuthenticateOidcActionConfig& WithOnUnauthenticatedRequest(AuthenticateOidcActionConditionalBehaviorEnum value) { SetOnUnauthenticatedRequest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use the existing client secret when modifying a rule. If
     * you are creating a rule, you can omit this parameter or set it to false.</p>
     */
    inline bool GetUseExistingClientSecret() const { return m_useExistingClientSecret; }
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

    long long m_sessionTimeout{0};
    bool m_sessionTimeoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_authenticationRequestExtraParams;
    bool m_authenticationRequestExtraParamsHasBeenSet = false;

    AuthenticateOidcActionConditionalBehaviorEnum m_onUnauthenticatedRequest{AuthenticateOidcActionConditionalBehaviorEnum::NOT_SET};
    bool m_onUnauthenticatedRequestHasBeenSet = false;

    bool m_useExistingClientSecret{false};
    bool m_useExistingClientSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
