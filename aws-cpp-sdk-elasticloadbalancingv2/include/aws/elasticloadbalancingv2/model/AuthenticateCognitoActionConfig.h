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
  class AWS_ELASTICLOADBALANCINGV2_API AuthenticateCognitoActionConfig
  {
  public:
    AuthenticateCognitoActionConfig();
    AuthenticateCognitoActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AuthenticateCognitoActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Cognito user pool.</p>
     */
    inline const Aws::String& GetUserPoolArn() const{ return m_userPoolArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Cognito user pool.</p>
     */
    inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolArn(const Aws::String& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolArn(Aws::String&& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolArn(const char* value) { m_userPoolArnHasBeenSet = true; m_userPoolArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Cognito user pool.</p>
     */
    inline AuthenticateCognitoActionConfig& WithUserPoolArn(const Aws::String& value) { SetUserPoolArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Cognito user pool.</p>
     */
    inline AuthenticateCognitoActionConfig& WithUserPoolArn(Aws::String&& value) { SetUserPoolArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Cognito user pool.</p>
     */
    inline AuthenticateCognitoActionConfig& WithUserPoolArn(const char* value) { SetUserPoolArn(value); return *this;}


    /**
     * <p>The ID of the Amazon Cognito user pool client.</p>
     */
    inline const Aws::String& GetUserPoolClientId() const{ return m_userPoolClientId; }

    /**
     * <p>The ID of the Amazon Cognito user pool client.</p>
     */
    inline bool UserPoolClientIdHasBeenSet() const { return m_userPoolClientIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Cognito user pool client.</p>
     */
    inline void SetUserPoolClientId(const Aws::String& value) { m_userPoolClientIdHasBeenSet = true; m_userPoolClientId = value; }

    /**
     * <p>The ID of the Amazon Cognito user pool client.</p>
     */
    inline void SetUserPoolClientId(Aws::String&& value) { m_userPoolClientIdHasBeenSet = true; m_userPoolClientId = std::move(value); }

    /**
     * <p>The ID of the Amazon Cognito user pool client.</p>
     */
    inline void SetUserPoolClientId(const char* value) { m_userPoolClientIdHasBeenSet = true; m_userPoolClientId.assign(value); }

    /**
     * <p>The ID of the Amazon Cognito user pool client.</p>
     */
    inline AuthenticateCognitoActionConfig& WithUserPoolClientId(const Aws::String& value) { SetUserPoolClientId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool client.</p>
     */
    inline AuthenticateCognitoActionConfig& WithUserPoolClientId(Aws::String&& value) { SetUserPoolClientId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool client.</p>
     */
    inline AuthenticateCognitoActionConfig& WithUserPoolClientId(const char* value) { SetUserPoolClientId(value); return *this;}


    /**
     * <p>The domain prefix or fully-qualified domain name of the Amazon Cognito user
     * pool.</p>
     */
    inline const Aws::String& GetUserPoolDomain() const{ return m_userPoolDomain; }

    /**
     * <p>The domain prefix or fully-qualified domain name of the Amazon Cognito user
     * pool.</p>
     */
    inline bool UserPoolDomainHasBeenSet() const { return m_userPoolDomainHasBeenSet; }

    /**
     * <p>The domain prefix or fully-qualified domain name of the Amazon Cognito user
     * pool.</p>
     */
    inline void SetUserPoolDomain(const Aws::String& value) { m_userPoolDomainHasBeenSet = true; m_userPoolDomain = value; }

    /**
     * <p>The domain prefix or fully-qualified domain name of the Amazon Cognito user
     * pool.</p>
     */
    inline void SetUserPoolDomain(Aws::String&& value) { m_userPoolDomainHasBeenSet = true; m_userPoolDomain = std::move(value); }

    /**
     * <p>The domain prefix or fully-qualified domain name of the Amazon Cognito user
     * pool.</p>
     */
    inline void SetUserPoolDomain(const char* value) { m_userPoolDomainHasBeenSet = true; m_userPoolDomain.assign(value); }

    /**
     * <p>The domain prefix or fully-qualified domain name of the Amazon Cognito user
     * pool.</p>
     */
    inline AuthenticateCognitoActionConfig& WithUserPoolDomain(const Aws::String& value) { SetUserPoolDomain(value); return *this;}

    /**
     * <p>The domain prefix or fully-qualified domain name of the Amazon Cognito user
     * pool.</p>
     */
    inline AuthenticateCognitoActionConfig& WithUserPoolDomain(Aws::String&& value) { SetUserPoolDomain(std::move(value)); return *this;}

    /**
     * <p>The domain prefix or fully-qualified domain name of the Amazon Cognito user
     * pool.</p>
     */
    inline AuthenticateCognitoActionConfig& WithUserPoolDomain(const char* value) { SetUserPoolDomain(value); return *this;}


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
    inline AuthenticateCognitoActionConfig& WithSessionCookieName(const Aws::String& value) { SetSessionCookieName(value); return *this;}

    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline AuthenticateCognitoActionConfig& WithSessionCookieName(Aws::String&& value) { SetSessionCookieName(std::move(value)); return *this;}

    /**
     * <p>The name of the cookie used to maintain session information. The default is
     * AWSELBAuthSessionCookie.</p>
     */
    inline AuthenticateCognitoActionConfig& WithSessionCookieName(const char* value) { SetSessionCookieName(value); return *this;}


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
    inline AuthenticateCognitoActionConfig& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline AuthenticateCognitoActionConfig& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>The set of user claims to be requested from the IdP. The default is
     * <code>openid</code>.</p> <p>To verify which scope values your IdP supports and
     * how to separate multiple values, see the documentation for your IdP.</p>
     */
    inline AuthenticateCognitoActionConfig& WithScope(const char* value) { SetScope(value); return *this;}


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
    inline AuthenticateCognitoActionConfig& WithSessionTimeout(long long value) { SetSessionTimeout(value); return *this;}


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
    inline AuthenticateCognitoActionConfig& WithAuthenticationRequestExtraParams(const Aws::Map<Aws::String, Aws::String>& value) { SetAuthenticationRequestExtraParams(value); return *this;}

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateCognitoActionConfig& WithAuthenticationRequestExtraParams(Aws::Map<Aws::String, Aws::String>&& value) { SetAuthenticationRequestExtraParams(std::move(value)); return *this;}

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateCognitoActionConfig& AddAuthenticationRequestExtraParams(const Aws::String& key, const Aws::String& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, value); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateCognitoActionConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, const Aws::String& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateCognitoActionConfig& AddAuthenticationRequestExtraParams(const Aws::String& key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateCognitoActionConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateCognitoActionConfig& AddAuthenticationRequestExtraParams(const char* key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateCognitoActionConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, const char* value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>The query parameters (up to 10) to include in the redirect request to the
     * authorization endpoint.</p>
     */
    inline AuthenticateCognitoActionConfig& AddAuthenticationRequestExtraParams(const char* key, const char* value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, value); return *this; }


    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline const AuthenticateCognitoActionConditionalBehaviorEnum& GetOnUnauthenticatedRequest() const{ return m_onUnauthenticatedRequest; }

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
    inline void SetOnUnauthenticatedRequest(const AuthenticateCognitoActionConditionalBehaviorEnum& value) { m_onUnauthenticatedRequestHasBeenSet = true; m_onUnauthenticatedRequest = value; }

    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline void SetOnUnauthenticatedRequest(AuthenticateCognitoActionConditionalBehaviorEnum&& value) { m_onUnauthenticatedRequestHasBeenSet = true; m_onUnauthenticatedRequest = std::move(value); }

    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline AuthenticateCognitoActionConfig& WithOnUnauthenticatedRequest(const AuthenticateCognitoActionConditionalBehaviorEnum& value) { SetOnUnauthenticatedRequest(value); return *this;}

    /**
     * <p>The behavior if the user is not authenticated. The following are possible
     * values:</p> <ul> <li> <p>deny<code/> - Return an HTTP 401 Unauthorized
     * error.</p> </li> <li> <p>allow<code/> - Allow the request to be forwarded to the
     * target.</p> </li> <li> <p>authenticate<code/> - Redirect the request to the IdP
     * authorization endpoint. This is the default value.</p> </li> </ul>
     */
    inline AuthenticateCognitoActionConfig& WithOnUnauthenticatedRequest(AuthenticateCognitoActionConditionalBehaviorEnum&& value) { SetOnUnauthenticatedRequest(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolArn;
    bool m_userPoolArnHasBeenSet;

    Aws::String m_userPoolClientId;
    bool m_userPoolClientIdHasBeenSet;

    Aws::String m_userPoolDomain;
    bool m_userPoolDomainHasBeenSet;

    Aws::String m_sessionCookieName;
    bool m_sessionCookieNameHasBeenSet;

    Aws::String m_scope;
    bool m_scopeHasBeenSet;

    long long m_sessionTimeout;
    bool m_sessionTimeoutHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_authenticationRequestExtraParams;
    bool m_authenticationRequestExtraParamsHasBeenSet;

    AuthenticateCognitoActionConditionalBehaviorEnum m_onUnauthenticatedRequest;
    bool m_onUnauthenticatedRequestHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
