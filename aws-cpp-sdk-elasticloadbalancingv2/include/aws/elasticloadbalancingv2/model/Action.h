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
     * <p>The type of action. Each rule must include one forward action.</p>
     */
    inline const ActionTypeEnum& GetType() const{ return m_type; }

    /**
     * <p>The type of action. Each rule must include one forward action.</p>
     */
    inline void SetType(const ActionTypeEnum& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of action. Each rule must include one forward action.</p>
     */
    inline void SetType(ActionTypeEnum&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of action. Each rule must include one forward action.</p>
     */
    inline Action& WithType(const ActionTypeEnum& value) { SetType(value); return *this;}

    /**
     * <p>The type of action. Each rule must include one forward action.</p>
     */
    inline Action& WithType(ActionTypeEnum&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p> <p>For a default rule, the
     * protocol of the target group must be HTTP or HTTPS for an Application Load
     * Balancer or TCP for a Network Load Balancer.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p> <p>For a default rule, the
     * protocol of the target group must be HTTP or HTTPS for an Application Load
     * Balancer or TCP for a Network Load Balancer.</p>
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p> <p>For a default rule, the
     * protocol of the target group must be HTTP or HTTPS for an Application Load
     * Balancer or TCP for a Network Load Balancer.</p>
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p> <p>For a default rule, the
     * protocol of the target group must be HTTP or HTTPS for an Application Load
     * Balancer or TCP for a Network Load Balancer.</p>
     */
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p> <p>For a default rule, the
     * protocol of the target group must be HTTP or HTTPS for an Application Load
     * Balancer or TCP for a Network Load Balancer.</p>
     */
    inline Action& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p> <p>For a default rule, the
     * protocol of the target group must be HTTP or HTTPS for an Application Load
     * Balancer or TCP for a Network Load Balancer.</p>
     */
    inline Action& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code>.</p> <p>For a default rule, the
     * protocol of the target group must be HTTP or HTTPS for an Application Load
     * Balancer or TCP for a Network Load Balancer.</p>
     */
    inline Action& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}


    /**
     * <p>[HTTPS listener] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline const AuthenticateOidcActionConfig& GetAuthenticateOidcConfig() const{ return m_authenticateOidcConfig; }

    /**
     * <p>[HTTPS listener] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline void SetAuthenticateOidcConfig(const AuthenticateOidcActionConfig& value) { m_authenticateOidcConfigHasBeenSet = true; m_authenticateOidcConfig = value; }

    /**
     * <p>[HTTPS listener] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline void SetAuthenticateOidcConfig(AuthenticateOidcActionConfig&& value) { m_authenticateOidcConfigHasBeenSet = true; m_authenticateOidcConfig = std::move(value); }

    /**
     * <p>[HTTPS listener] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline Action& WithAuthenticateOidcConfig(const AuthenticateOidcActionConfig& value) { SetAuthenticateOidcConfig(value); return *this;}

    /**
     * <p>[HTTPS listener] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline Action& WithAuthenticateOidcConfig(AuthenticateOidcActionConfig&& value) { SetAuthenticateOidcConfig(std::move(value)); return *this;}


    /**
     * <p>[HTTPS listener] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline const AuthenticateCognitoActionConfig& GetAuthenticateCognitoConfig() const{ return m_authenticateCognitoConfig; }

    /**
     * <p>[HTTPS listener] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline void SetAuthenticateCognitoConfig(const AuthenticateCognitoActionConfig& value) { m_authenticateCognitoConfigHasBeenSet = true; m_authenticateCognitoConfig = value; }

    /**
     * <p>[HTTPS listener] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline void SetAuthenticateCognitoConfig(AuthenticateCognitoActionConfig&& value) { m_authenticateCognitoConfigHasBeenSet = true; m_authenticateCognitoConfig = std::move(value); }

    /**
     * <p>[HTTPS listener] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline Action& WithAuthenticateCognitoConfig(const AuthenticateCognitoActionConfig& value) { SetAuthenticateCognitoConfig(value); return *this;}

    /**
     * <p>[HTTPS listener] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline Action& WithAuthenticateCognitoConfig(AuthenticateCognitoActionConfig&& value) { SetAuthenticateCognitoConfig(std::move(value)); return *this;}


    /**
     * <p>The order for the action. This value is required for rules with multiple
     * actions. The action with the lowest value for order is performed first. The
     * forward action must be performed last.</p>
     */
    inline int GetOrder() const{ return m_order; }

    /**
     * <p>The order for the action. This value is required for rules with multiple
     * actions. The action with the lowest value for order is performed first. The
     * forward action must be performed last.</p>
     */
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order for the action. This value is required for rules with multiple
     * actions. The action with the lowest value for order is performed first. The
     * forward action must be performed last.</p>
     */
    inline Action& WithOrder(int value) { SetOrder(value); return *this;}

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
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
