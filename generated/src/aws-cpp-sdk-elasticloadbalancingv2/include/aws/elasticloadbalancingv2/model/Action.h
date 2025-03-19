/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/elasticloadbalancingv2/model/ForwardActionConfig.h>
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
   * <p>Information about an action.</p> <p>Each rule must include exactly one of the
   * following types of actions: <code>forward</code>, <code>fixed-response</code>,
   * or <code>redirect</code>, and it must be the last action to be
   * performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API Action() = default;
    AWS_ELASTICLOADBALANCINGV2_API Action(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API Action& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of action.</p>
     */
    inline ActionTypeEnum GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ActionTypeEnum value) { m_typeHasBeenSet = true; m_type = value; }
    inline Action& WithType(ActionTypeEnum value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target group. Specify only when
     * <code>Type</code> is <code>forward</code> and you want to route to a single
     * target group. To route to one or more target groups, use
     * <code>ForwardConfig</code> instead.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const { return m_targetGroupArn; }
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }
    template<typename TargetGroupArnT = Aws::String>
    void SetTargetGroupArn(TargetGroupArnT&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::forward<TargetGroupArnT>(value); }
    template<typename TargetGroupArnT = Aws::String>
    Action& WithTargetGroupArn(TargetGroupArnT&& value) { SetTargetGroupArn(std::forward<TargetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTPS listeners] Information about an identity provider that is compliant
     * with OpenID Connect (OIDC). Specify only when <code>Type</code> is
     * <code>authenticate-oidc</code>.</p>
     */
    inline const AuthenticateOidcActionConfig& GetAuthenticateOidcConfig() const { return m_authenticateOidcConfig; }
    inline bool AuthenticateOidcConfigHasBeenSet() const { return m_authenticateOidcConfigHasBeenSet; }
    template<typename AuthenticateOidcConfigT = AuthenticateOidcActionConfig>
    void SetAuthenticateOidcConfig(AuthenticateOidcConfigT&& value) { m_authenticateOidcConfigHasBeenSet = true; m_authenticateOidcConfig = std::forward<AuthenticateOidcConfigT>(value); }
    template<typename AuthenticateOidcConfigT = AuthenticateOidcActionConfig>
    Action& WithAuthenticateOidcConfig(AuthenticateOidcConfigT&& value) { SetAuthenticateOidcConfig(std::forward<AuthenticateOidcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTPS listeners] Information for using Amazon Cognito to authenticate users.
     * Specify only when <code>Type</code> is <code>authenticate-cognito</code>.</p>
     */
    inline const AuthenticateCognitoActionConfig& GetAuthenticateCognitoConfig() const { return m_authenticateCognitoConfig; }
    inline bool AuthenticateCognitoConfigHasBeenSet() const { return m_authenticateCognitoConfigHasBeenSet; }
    template<typename AuthenticateCognitoConfigT = AuthenticateCognitoActionConfig>
    void SetAuthenticateCognitoConfig(AuthenticateCognitoConfigT&& value) { m_authenticateCognitoConfigHasBeenSet = true; m_authenticateCognitoConfig = std::forward<AuthenticateCognitoConfigT>(value); }
    template<typename AuthenticateCognitoConfigT = AuthenticateCognitoActionConfig>
    Action& WithAuthenticateCognitoConfig(AuthenticateCognitoConfigT&& value) { SetAuthenticateCognitoConfig(std::forward<AuthenticateCognitoConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order for the action. This value is required for rules with multiple
     * actions. The action with the lowest value for order is performed first.</p>
     */
    inline int GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }
    inline Action& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancer] Information for creating a redirect action.
     * Specify only when <code>Type</code> is <code>redirect</code>.</p>
     */
    inline const RedirectActionConfig& GetRedirectConfig() const { return m_redirectConfig; }
    inline bool RedirectConfigHasBeenSet() const { return m_redirectConfigHasBeenSet; }
    template<typename RedirectConfigT = RedirectActionConfig>
    void SetRedirectConfig(RedirectConfigT&& value) { m_redirectConfigHasBeenSet = true; m_redirectConfig = std::forward<RedirectConfigT>(value); }
    template<typename RedirectConfigT = RedirectActionConfig>
    Action& WithRedirectConfig(RedirectConfigT&& value) { SetRedirectConfig(std::forward<RedirectConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Application Load Balancer] Information for creating an action that returns a
     * custom HTTP response. Specify only when <code>Type</code> is
     * <code>fixed-response</code>.</p>
     */
    inline const FixedResponseActionConfig& GetFixedResponseConfig() const { return m_fixedResponseConfig; }
    inline bool FixedResponseConfigHasBeenSet() const { return m_fixedResponseConfigHasBeenSet; }
    template<typename FixedResponseConfigT = FixedResponseActionConfig>
    void SetFixedResponseConfig(FixedResponseConfigT&& value) { m_fixedResponseConfigHasBeenSet = true; m_fixedResponseConfig = std::forward<FixedResponseConfigT>(value); }
    template<typename FixedResponseConfigT = FixedResponseActionConfig>
    Action& WithFixedResponseConfig(FixedResponseConfigT&& value) { SetFixedResponseConfig(std::forward<FixedResponseConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information for creating an action that distributes requests among one or
     * more target groups. For Network Load Balancers, you can specify a single target
     * group. Specify only when <code>Type</code> is <code>forward</code>. If you
     * specify both <code>ForwardConfig</code> and <code>TargetGroupArn</code>, you can
     * specify only one target group using <code>ForwardConfig</code> and it must be
     * the same target group specified in <code>TargetGroupArn</code>.</p>
     */
    inline const ForwardActionConfig& GetForwardConfig() const { return m_forwardConfig; }
    inline bool ForwardConfigHasBeenSet() const { return m_forwardConfigHasBeenSet; }
    template<typename ForwardConfigT = ForwardActionConfig>
    void SetForwardConfig(ForwardConfigT&& value) { m_forwardConfigHasBeenSet = true; m_forwardConfig = std::forward<ForwardConfigT>(value); }
    template<typename ForwardConfigT = ForwardActionConfig>
    Action& WithForwardConfig(ForwardConfigT&& value) { SetForwardConfig(std::forward<ForwardConfigT>(value)); return *this;}
    ///@}
  private:

    ActionTypeEnum m_type{ActionTypeEnum::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    AuthenticateOidcActionConfig m_authenticateOidcConfig;
    bool m_authenticateOidcConfigHasBeenSet = false;

    AuthenticateCognitoActionConfig m_authenticateCognitoConfig;
    bool m_authenticateCognitoConfigHasBeenSet = false;

    int m_order{0};
    bool m_orderHasBeenSet = false;

    RedirectActionConfig m_redirectConfig;
    bool m_redirectConfigHasBeenSet = false;

    FixedResponseActionConfig m_fixedResponseConfig;
    bool m_fixedResponseConfigHasBeenSet = false;

    ForwardActionConfig m_forwardConfig;
    bool m_forwardConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
