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
#include <aws/elasticloadbalancingv2/model/ActionTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/AuthenticateOidcActionConfig.h>
#include <aws/elasticloadbalancingv2/model/AuthenticateCognitoActionConfig.h>
#include <aws/elasticloadbalancingv2/model/RedirectActionConfig.h>
#include <aws/elasticloadbalancingv2/model/FixedResponseActionConfig.h>
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
   * <p>Information about an action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/Action">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API Action
  {
  public:
    Action();
    Action(const Aws::Utils::Xml::XmlNode& xmlNode);
    Action& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of action. Each rule must include exactly one of the following types
     * of actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p>
     */
    inline const ActionTypeEnum& GetType() const{ return m_type; }

    /**
     * <p>The type of action. Each rule must include exactly one of the following types
     * of actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of action. Each rule must include exactly one of the following types
     * of actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p>
     */
    inline void SetType(const ActionTypeEnum& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of action. Each rule must include exactly one of the following types
     * of actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p>
     */
    inline void SetType(ActionTypeEnum&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of action. Each rule must include exactly one of the following types
     * of actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p>
     */
    inline Action& WithType(const ActionTypeEnum& value) { SetType(value); return *this;}

    /**
     * <p>The type of action. Each rule must include exactly one of the following types
     * of actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p>
     */
    inline Action& WithType(ActionTypeEnum&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p>
     */
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p>
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p>
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p>
     */
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p>
     */
    inline Action& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p>
     */
    inline Action& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p>
     */
    inline Action& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}


    /**
     * <p>[HTTPS listeners] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline const AuthenticateOidcActionConfig& GetAuthenticateOidcConfig() const{ return m_authenticateOidcConfig; }

    /**
     * <p>[HTTPS listeners] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline bool AuthenticateOidcConfigHasBeenSet() const { return m_authenticateOidcConfigHasBeenSet; }

    /**
     * <p>[HTTPS listeners] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline void SetAuthenticateOidcConfig(const AuthenticateOidcActionConfig& value) { m_authenticateOidcConfigHasBeenSet = true; m_authenticateOidcConfig = value; }

    /**
     * <p>[HTTPS listeners] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline void SetAuthenticateOidcConfig(AuthenticateOidcActionConfig&& value) { m_authenticateOidcConfigHasBeenSet = true; m_authenticateOidcConfig = std::move(value); }

    /**
     * <p>[HTTPS listeners] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline Action& WithAuthenticateOidcConfig(const AuthenticateOidcActionConfig& value) { SetAuthenticateOidcConfig(value); return *this;}

    /**
     * <p>[HTTPS listeners] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline Action& WithAuthenticateOidcConfig(AuthenticateOidcActionConfig&& value) { SetAuthenticateOidcConfig(std::move(value)); return *this;}


    /**
     * <p>[HTTPS listeners] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline const AuthenticateCognitoActionConfig& GetAuthenticateCognitoConfig() const{ return m_authenticateCognitoConfig; }

    /**
     * <p>[HTTPS listeners] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline bool AuthenticateCognitoConfigHasBeenSet() const { return m_authenticateCognitoConfigHasBeenSet; }

    /**
     * <p>[HTTPS listeners] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline void SetAuthenticateCognitoConfig(const AuthenticateCognitoActionConfig& value) { m_authenticateCognitoConfigHasBeenSet = true; m_authenticateCognitoConfig = value; }

    /**
     * <p>[HTTPS listeners] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline void SetAuthenticateCognitoConfig(AuthenticateCognitoActionConfig&& value) { m_authenticateCognitoConfigHasBeenSet = true; m_authenticateCognitoConfig = std::move(value); }

    /**
     * <p>[HTTPS listeners] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline Action& WithAuthenticateCognitoConfig(const AuthenticateCognitoActionConfig& value) { SetAuthenticateCognitoConfig(value); return *this;}

    /**
     * <p>[HTTPS listeners] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline Action& WithAuthenticateCognitoConfig(AuthenticateCognitoActionConfig&& value) { SetAuthenticateCognitoConfig(std::move(value)); return *this;}


    /**
     * <p>The order for the action. This value is required for rules with multiple
     * actions. The action with the lowest value for order is performed first. The
     * final action to be performed must be a <code>forward</code> or a
     * <code>fixed-response</code> action.</p>
     */
    inline int GetOrder() const{ return m_order; }

    /**
     * <p>The order for the action. This value is required for rules with multiple
     * actions. The action with the lowest value for order is performed first. The
     * final action to be performed must be a <code>forward</code> or a
     * <code>fixed-response</code> action.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order for the action. This value is required for rules with multiple
     * actions. The action with the lowest value for order is performed first. The
     * final action to be performed must be a <code>forward</code> or a
     * <code>fixed-response</code> action.</p>
     */
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order for the action. This value is required for rules with multiple
     * actions. The action with the lowest value for order is performed first. The
     * final action to be performed must be a <code>forward</code> or a
     * <code>fixed-response</code> action.</p>
     */
    inline Action& WithOrder(int value) { SetOrder(value); return *this;}


    /**
     * <p>[Application Load Balancer] Information for creating a redirect action.
     * Specify only when <code>Type</code> is <code>redirect</code>.</p>
     */
    inline const RedirectActionConfig& GetRedirectConfig() const{ return m_redirectConfig; }

    /**
     * <p>[Application Load Balancer] Information for creating a redirect action.
     * Specify only when <code>Type</code> is <code>redirect</code>.</p>
     */
    inline bool RedirectConfigHasBeenSet() const { return m_redirectConfigHasBeenSet; }

    /**
     * <p>[Application Load Balancer] Information for creating a redirect action.
     * Specify only when <code>Type</code> is <code>redirect</code>.</p>
     */
    inline void SetRedirectConfig(const RedirectActionConfig& value) { m_redirectConfigHasBeenSet = true; m_redirectConfig = value; }

    /**
     * <p>[Application Load Balancer] Information for creating a redirect action.
     * Specify only when <code>Type</code> is <code>redirect</code>.</p>
     */
    inline void SetRedirectConfig(RedirectActionConfig&& value) { m_redirectConfigHasBeenSet = true; m_redirectConfig = std::move(value); }

    /**
     * <p>[Application Load Balancer] Information for creating a redirect action.
     * Specify only when <code>Type</code> is <code>redirect</code>.</p>
     */
    inline Action& WithRedirectConfig(const RedirectActionConfig& value) { SetRedirectConfig(value); return *this;}

    /**
     * <p>[Application Load Balancer] Information for creating a redirect action.
     * Specify only when <code>Type</code> is <code>redirect</code>.</p>
     */
    inline Action& WithRedirectConfig(RedirectActionConfig&& value) { SetRedirectConfig(std::move(value)); return *this;}


    /**
     * <p>[Application Load Balancer] Information for creating an action that returns a
     * custom HTTP response. Specify only when <code>Type</code> is
     * <code>fixed-response</code>.</p>
     */
    inline const FixedResponseActionConfig& GetFixedResponseConfig() const{ return m_fixedResponseConfig; }

    /**
     * <p>[Application Load Balancer] Information for creating an action that returns a
     * custom HTTP response. Specify only when <code>Type</code> is
     * <code>fixed-response</code>.</p>
     */
    inline bool FixedResponseConfigHasBeenSet() const { return m_fixedResponseConfigHasBeenSet; }

    /**
     * <p>[Application Load Balancer] Information for creating an action that returns a
     * custom HTTP response. Specify only when <code>Type</code> is
     * <code>fixed-response</code>.</p>
     */
    inline void SetFixedResponseConfig(const FixedResponseActionConfig& value) { m_fixedResponseConfigHasBeenSet = true; m_fixedResponseConfig = value; }

    /**
     * <p>[Application Load Balancer] Information for creating an action that returns a
     * custom HTTP response. Specify only when <code>Type</code> is
     * <code>fixed-response</code>.</p>
     */
    inline void SetFixedResponseConfig(FixedResponseActionConfig&& value) { m_fixedResponseConfigHasBeenSet = true; m_fixedResponseConfig = std::move(value); }

    /**
     * <p>[Application Load Balancer] Information for creating an action that returns a
     * custom HTTP response. Specify only when <code>Type</code> is
     * <code>fixed-response</code>.</p>
     */
    inline Action& WithFixedResponseConfig(const FixedResponseActionConfig& value) { SetFixedResponseConfig(value); return *this;}

    /**
     * <p>[Application Load Balancer] Information for creating an action that returns a
     * custom HTTP response. Specify only when <code>Type</code> is
     * <code>fixed-response</code>.</p>
     */
    inline Action& WithFixedResponseConfig(FixedResponseActionConfig&& value) { SetFixedResponseConfig(std::move(value)); return *this;}

  private:

    ActionTypeEnum m_type;
    bool m_typeHasBeenSet;

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet;

    AuthenticateOidcActionConfig m_authenticateOidcConfig;
    bool m_authenticateOidcConfigHasBeenSet;

    AuthenticateCognitoActionConfig m_authenticateCognitoConfig;
    bool m_authenticateCognitoConfigHasBeenSet;

    int m_order;
    bool m_orderHasBeenSet;

    RedirectActionConfig m_redirectConfig;
    bool m_redirectConfigHasBeenSet;

    FixedResponseActionConfig m_fixedResponseConfig;
    bool m_fixedResponseConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
