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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/RuleCondition.h>
#include <aws/elasticloadbalancingv2/model/Action.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class AWS_ELASTICLOADBALANCINGV2_API ModifyRuleRequest : public ElasticLoadBalancingv2Request
  {
  public:
    ModifyRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyRule"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetRuleArn(const Aws::String& value) { m_ruleArnHasBeenSet = true; m_ruleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetRuleArn(Aws::String&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetRuleArn(const char* value) { m_ruleArnHasBeenSet = true; m_ruleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline ModifyRuleRequest& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline ModifyRuleRequest& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline ModifyRuleRequest& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}


    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline const Aws::Vector<RuleCondition>& GetConditions() const{ return m_conditions; }

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline void SetConditions(const Aws::Vector<RuleCondition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline void SetConditions(Aws::Vector<RuleCondition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline ModifyRuleRequest& WithConditions(const Aws::Vector<RuleCondition>& value) { SetConditions(value); return *this;}

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline ModifyRuleRequest& WithConditions(Aws::Vector<RuleCondition>&& value) { SetConditions(std::move(value)); return *this;}

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline ModifyRuleRequest& AddConditions(const RuleCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline ModifyRuleRequest& AddConditions(RuleCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }


    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP,
     * TLS, UDP, or TCP_UDP for a Network Load Balancer.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-oidc</code>, you authenticate users
     * through an identity provider that is OpenID Connect (OIDC) compliant.</p>
     * <p>[HTTPS listeners] If the action type is <code>authenticate-cognito</code>,
     * you authenticate users through the user pools supported by Amazon Cognito.</p>
     * <p>[Application Load Balancer] If the action type is <code>redirect</code>, you
     * redirect specified client requests from one URL to another.</p> <p>[Application
     * Load Balancer] If the action type is <code>fixed-response</code>, you drop
     * specified client requests and return a custom HTTP response.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP,
     * TLS, UDP, or TCP_UDP for a Network Load Balancer.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-oidc</code>, you authenticate users
     * through an identity provider that is OpenID Connect (OIDC) compliant.</p>
     * <p>[HTTPS listeners] If the action type is <code>authenticate-cognito</code>,
     * you authenticate users through the user pools supported by Amazon Cognito.</p>
     * <p>[Application Load Balancer] If the action type is <code>redirect</code>, you
     * redirect specified client requests from one URL to another.</p> <p>[Application
     * Load Balancer] If the action type is <code>fixed-response</code>, you drop
     * specified client requests and return a custom HTTP response.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP,
     * TLS, UDP, or TCP_UDP for a Network Load Balancer.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-oidc</code>, you authenticate users
     * through an identity provider that is OpenID Connect (OIDC) compliant.</p>
     * <p>[HTTPS listeners] If the action type is <code>authenticate-cognito</code>,
     * you authenticate users through the user pools supported by Amazon Cognito.</p>
     * <p>[Application Load Balancer] If the action type is <code>redirect</code>, you
     * redirect specified client requests from one URL to another.</p> <p>[Application
     * Load Balancer] If the action type is <code>fixed-response</code>, you drop
     * specified client requests and return a custom HTTP response.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP,
     * TLS, UDP, or TCP_UDP for a Network Load Balancer.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-oidc</code>, you authenticate users
     * through an identity provider that is OpenID Connect (OIDC) compliant.</p>
     * <p>[HTTPS listeners] If the action type is <code>authenticate-cognito</code>,
     * you authenticate users through the user pools supported by Amazon Cognito.</p>
     * <p>[Application Load Balancer] If the action type is <code>redirect</code>, you
     * redirect specified client requests from one URL to another.</p> <p>[Application
     * Load Balancer] If the action type is <code>fixed-response</code>, you drop
     * specified client requests and return a custom HTTP response.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP,
     * TLS, UDP, or TCP_UDP for a Network Load Balancer.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-oidc</code>, you authenticate users
     * through an identity provider that is OpenID Connect (OIDC) compliant.</p>
     * <p>[HTTPS listeners] If the action type is <code>authenticate-cognito</code>,
     * you authenticate users through the user pools supported by Amazon Cognito.</p>
     * <p>[Application Load Balancer] If the action type is <code>redirect</code>, you
     * redirect specified client requests from one URL to another.</p> <p>[Application
     * Load Balancer] If the action type is <code>fixed-response</code>, you drop
     * specified client requests and return a custom HTTP response.</p>
     */
    inline ModifyRuleRequest& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP,
     * TLS, UDP, or TCP_UDP for a Network Load Balancer.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-oidc</code>, you authenticate users
     * through an identity provider that is OpenID Connect (OIDC) compliant.</p>
     * <p>[HTTPS listeners] If the action type is <code>authenticate-cognito</code>,
     * you authenticate users through the user pools supported by Amazon Cognito.</p>
     * <p>[Application Load Balancer] If the action type is <code>redirect</code>, you
     * redirect specified client requests from one URL to another.</p> <p>[Application
     * Load Balancer] If the action type is <code>fixed-response</code>, you drop
     * specified client requests and return a custom HTTP response.</p>
     */
    inline ModifyRuleRequest& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP,
     * TLS, UDP, or TCP_UDP for a Network Load Balancer.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-oidc</code>, you authenticate users
     * through an identity provider that is OpenID Connect (OIDC) compliant.</p>
     * <p>[HTTPS listeners] If the action type is <code>authenticate-cognito</code>,
     * you authenticate users through the user pools supported by Amazon Cognito.</p>
     * <p>[Application Load Balancer] If the action type is <code>redirect</code>, you
     * redirect specified client requests from one URL to another.</p> <p>[Application
     * Load Balancer] If the action type is <code>fixed-response</code>, you drop
     * specified client requests and return a custom HTTP response.</p>
     */
    inline ModifyRuleRequest& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP,
     * TLS, UDP, or TCP_UDP for a Network Load Balancer.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-oidc</code>, you authenticate users
     * through an identity provider that is OpenID Connect (OIDC) compliant.</p>
     * <p>[HTTPS listeners] If the action type is <code>authenticate-cognito</code>,
     * you authenticate users through the user pools supported by Amazon Cognito.</p>
     * <p>[Application Load Balancer] If the action type is <code>redirect</code>, you
     * redirect specified client requests from one URL to another.</p> <p>[Application
     * Load Balancer] If the action type is <code>fixed-response</code>, you drop
     * specified client requests and return a custom HTTP response.</p>
     */
    inline ModifyRuleRequest& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet;

    Aws::Vector<RuleCondition> m_conditions;
    bool m_conditionsHasBeenSet;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
