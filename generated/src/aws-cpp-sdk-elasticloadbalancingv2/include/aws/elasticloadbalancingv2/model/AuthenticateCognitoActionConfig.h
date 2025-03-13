/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/elasticloadbalancingv2/model/AuthenticateCognitoActionConditionalBehaviorEnum.h>
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
   * <p>Request parameters to use when integrating with Amazon Cognito to
   * authenticate users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AuthenticateCognitoActionConfig">AWS
   * API Reference</a></p>
   */
  class AuthenticateCognitoActionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API AuthenticateCognitoActionConfig() = default;
    AWS_ELASTICLOADBALANCINGV2_API AuthenticateCognitoActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API AuthenticateCognitoActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Cognito user pool.</p>
     */
    inline const Aws::String& GetUserPoolArn() const { return m_userPoolArn; }
    inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }
    template<typename UserPoolArnT = Aws::String>
    void SetUserPoolArn(UserPoolArnT&& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = std::forward<UserPoolArnT>(value); }
    template<typename UserPoolArnT = Aws::String>
    AuthenticateCognitoActionConfig& WithUserPoolArn(UserPoolArnT&& value) { SetUserPoolArn(std::forward<UserPoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Cognito user pool client.</p>
     */
    inline const Aws::String& GetUserPoolClientId() const { return m_userPoolClientId; }
    inline bool UserPoolClientIdHasBeenSet() const { return m_userPoolClientIdHasBeenSet; }
    template<typename UserPoolClientIdT = Aws::String>
    void SetUserPoolClientId(UserPoolClientIdT&& value) { m_userPoolClientIdHasBeenSet = true; m_userPoolClientId = std::forward<UserPoolClientIdT>(value); }
    template<typename UserPoolClientIdT = Aws::String>
    AuthenticateCognitoActionConfig& WithUserPoolClientId(UserPoolClientIdT&& value) { SetUserPoolClientId(std::forward<UserPoolClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain prefix or fully-qualified domain name of the Amazon Cognito user
     * pool.</p>
     */
    inline const Aws::String& GetUserPoolDomain() const { return m_userPoolDomain; }
    inline bool UserPoolDomainHasBeenSet() const { return m_userPoolDomainHasBeenSet; }
    template<typename UserPoolDomainT = Aws::String>
    void SetUserPoolDomain(UserPoolDomainT&& value) { m_userPoolDomainHasBeenSet = true; m_userPoolDomain = std::forward<UserPoolDomainT>(value); }
    template<typename UserPoolDomainT = Aws::String>
    AuthenticateCognitoActionConfig& WithUserPoolDomain(UserPoolDomainT&& value) { SetUserPoolDomain(std::forward<UserPoolDomainT>(value)); return *this;}
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
    AuthenticateCognitoActionConfig& WithSessionCookieName(SessionCookieNameT&& value) { SetSessionCookieName(std::forward<SessionCookieNameT>(value)); return *this;}
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
    AuthenticateCognitoActionConfig& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration of the authentication session, in seconds. The default
     * is 604800 seconds (7 days).</p>
     */
    inline long long GetSessionTimeout() const { return m_sessionTimeout; }
    inline bool SessionTimeoutHasBeenSet() const { return m_sessionTimeoutHasBeenSet; }
    inline void SetSessionTimeout(long long value) { m_sessionTimeoutHasBeenSet = true; m_sessionTimeout = value; }
    inline AuthenticateCognitoActionConfig& WithSessionTimeout(long long value) { SetSessionTimeout(value); return *this;}
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
    AuthenticateCognitoActionConfig& WithAuthenticationRequestExtraParams(AuthenticationRequestExtraParamsT&& value) { SetAuthenticationRequestExtraParams(std::forward<AuthenticationRequestExtraParamsT>(value)); return *this;}
    template<typename AuthenticationRequestExtraParamsKeyT = Aws::String, typename AuthenticationRequestExtraParamsValueT = Aws::String>
    AuthenticateCognitoActionConfig& AddAuthenticationRequestExtraParams(AuthenticationRequestExtraParamsKeyT&& key, AuthenticationRequestExtraParamsValueT&& value) {
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
    inline AuthenticateCognitoActionConditionalBehaviorEnum GetOnUnauthenticatedRequest() const { return m_onUnauthenticatedRequest; }
    inline bool OnUnauthenticatedRequestHasBeenSet() const { return m_onUnauthenticatedRequestHasBeenSet; }
    inline void SetOnUnauthenticatedRequest(AuthenticateCognitoActionConditionalBehaviorEnum value) { m_onUnauthenticatedRequestHasBeenSet = true; m_onUnauthenticatedRequest = value; }
    inline AuthenticateCognitoActionConfig& WithOnUnauthenticatedRequest(AuthenticateCognitoActionConditionalBehaviorEnum value) { SetOnUnauthenticatedRequest(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolArn;
    bool m_userPoolArnHasBeenSet = false;

    Aws::String m_userPoolClientId;
    bool m_userPoolClientIdHasBeenSet = false;

    Aws::String m_userPoolDomain;
    bool m_userPoolDomainHasBeenSet = false;

    Aws::String m_sessionCookieName;
    bool m_sessionCookieNameHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    long long m_sessionTimeout{0};
    bool m_sessionTimeoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_authenticationRequestExtraParams;
    bool m_authenticationRequestExtraParamsHasBeenSet = false;

    AuthenticateCognitoActionConditionalBehaviorEnum m_onUnauthenticatedRequest{AuthenticateCognitoActionConditionalBehaviorEnum::NOT_SET};
    bool m_onUnauthenticatedRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
