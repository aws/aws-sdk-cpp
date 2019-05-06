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
  class AWS_ELASTICLOADBALANCINGV2_API CreateRuleRequest : public ElasticLoadBalancingv2Request
  {
  public:
    CreateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRule"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateRuleRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateRuleRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateRuleRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}


    /**
     * <p>The conditions. Each condition specifies a field name and a single value.</p>
     * <p>If the field name is <code>host-header</code>, you can specify a single host
     * name (for example, my.example.com). A host name is case insensitive, can be up
     * to 128 characters in length, and can contain any of the following characters.
     * You can include up to three wildcard characters.</p> <ul> <li> <p>A-Z, a-z,
     * 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or more characters)</p>
     * </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul> <p>If the field
     * name is <code>path-pattern</code>, you can specify a single path pattern. A path
     * pattern is case-sensitive, can be up to 128 characters in length, and can
     * contain any of the following characters. You can include up to three wildcard
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline const Aws::Vector<RuleCondition>& GetConditions() const{ return m_conditions; }

    /**
     * <p>The conditions. Each condition specifies a field name and a single value.</p>
     * <p>If the field name is <code>host-header</code>, you can specify a single host
     * name (for example, my.example.com). A host name is case insensitive, can be up
     * to 128 characters in length, and can contain any of the following characters.
     * You can include up to three wildcard characters.</p> <ul> <li> <p>A-Z, a-z,
     * 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or more characters)</p>
     * </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul> <p>If the field
     * name is <code>path-pattern</code>, you can specify a single path pattern. A path
     * pattern is case-sensitive, can be up to 128 characters in length, and can
     * contain any of the following characters. You can include up to three wildcard
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }

    /**
     * <p>The conditions. Each condition specifies a field name and a single value.</p>
     * <p>If the field name is <code>host-header</code>, you can specify a single host
     * name (for example, my.example.com). A host name is case insensitive, can be up
     * to 128 characters in length, and can contain any of the following characters.
     * You can include up to three wildcard characters.</p> <ul> <li> <p>A-Z, a-z,
     * 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or more characters)</p>
     * </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul> <p>If the field
     * name is <code>path-pattern</code>, you can specify a single path pattern. A path
     * pattern is case-sensitive, can be up to 128 characters in length, and can
     * contain any of the following characters. You can include up to three wildcard
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline void SetConditions(const Aws::Vector<RuleCondition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>The conditions. Each condition specifies a field name and a single value.</p>
     * <p>If the field name is <code>host-header</code>, you can specify a single host
     * name (for example, my.example.com). A host name is case insensitive, can be up
     * to 128 characters in length, and can contain any of the following characters.
     * You can include up to three wildcard characters.</p> <ul> <li> <p>A-Z, a-z,
     * 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or more characters)</p>
     * </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul> <p>If the field
     * name is <code>path-pattern</code>, you can specify a single path pattern. A path
     * pattern is case-sensitive, can be up to 128 characters in length, and can
     * contain any of the following characters. You can include up to three wildcard
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline void SetConditions(Aws::Vector<RuleCondition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }

    /**
     * <p>The conditions. Each condition specifies a field name and a single value.</p>
     * <p>If the field name is <code>host-header</code>, you can specify a single host
     * name (for example, my.example.com). A host name is case insensitive, can be up
     * to 128 characters in length, and can contain any of the following characters.
     * You can include up to three wildcard characters.</p> <ul> <li> <p>A-Z, a-z,
     * 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or more characters)</p>
     * </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul> <p>If the field
     * name is <code>path-pattern</code>, you can specify a single path pattern. A path
     * pattern is case-sensitive, can be up to 128 characters in length, and can
     * contain any of the following characters. You can include up to three wildcard
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline CreateRuleRequest& WithConditions(const Aws::Vector<RuleCondition>& value) { SetConditions(value); return *this;}

    /**
     * <p>The conditions. Each condition specifies a field name and a single value.</p>
     * <p>If the field name is <code>host-header</code>, you can specify a single host
     * name (for example, my.example.com). A host name is case insensitive, can be up
     * to 128 characters in length, and can contain any of the following characters.
     * You can include up to three wildcard characters.</p> <ul> <li> <p>A-Z, a-z,
     * 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or more characters)</p>
     * </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul> <p>If the field
     * name is <code>path-pattern</code>, you can specify a single path pattern. A path
     * pattern is case-sensitive, can be up to 128 characters in length, and can
     * contain any of the following characters. You can include up to three wildcard
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline CreateRuleRequest& WithConditions(Aws::Vector<RuleCondition>&& value) { SetConditions(std::move(value)); return *this;}

    /**
     * <p>The conditions. Each condition specifies a field name and a single value.</p>
     * <p>If the field name is <code>host-header</code>, you can specify a single host
     * name (for example, my.example.com). A host name is case insensitive, can be up
     * to 128 characters in length, and can contain any of the following characters.
     * You can include up to three wildcard characters.</p> <ul> <li> <p>A-Z, a-z,
     * 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or more characters)</p>
     * </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul> <p>If the field
     * name is <code>path-pattern</code>, you can specify a single path pattern. A path
     * pattern is case-sensitive, can be up to 128 characters in length, and can
     * contain any of the following characters. You can include up to three wildcard
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline CreateRuleRequest& AddConditions(const RuleCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>The conditions. Each condition specifies a field name and a single value.</p>
     * <p>If the field name is <code>host-header</code>, you can specify a single host
     * name (for example, my.example.com). A host name is case insensitive, can be up
     * to 128 characters in length, and can contain any of the following characters.
     * You can include up to three wildcard characters.</p> <ul> <li> <p>A-Z, a-z,
     * 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or more characters)</p>
     * </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul> <p>If the field
     * name is <code>path-pattern</code>, you can specify a single path pattern. A path
     * pattern is case-sensitive, can be up to 128 characters in length, and can
     * contain any of the following characters. You can include up to three wildcard
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline CreateRuleRequest& AddConditions(RuleCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }


    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline CreateRuleRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP
     * or TLS for a Network Load Balancer.</p> <p>[HTTPS listeners] If the action type
     * is <code>authenticate-oidc</code>, you authenticate users through an identity
     * provider that is OpenID Connect (OIDC) compliant.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-cognito</code>, you authenticate users
     * through the user pools supported by Amazon Cognito.</p> <p>[Application Load
     * Balancer] If the action type is <code>redirect</code>, you redirect specified
     * client requests from one URL to another.</p> <p>[Application Load Balancer] If
     * the action type is <code>fixed-response</code>, you drop specified client
     * requests and return a custom HTTP response.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP
     * or TLS for a Network Load Balancer.</p> <p>[HTTPS listeners] If the action type
     * is <code>authenticate-oidc</code>, you authenticate users through an identity
     * provider that is OpenID Connect (OIDC) compliant.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-cognito</code>, you authenticate users
     * through the user pools supported by Amazon Cognito.</p> <p>[Application Load
     * Balancer] If the action type is <code>redirect</code>, you redirect specified
     * client requests from one URL to another.</p> <p>[Application Load Balancer] If
     * the action type is <code>fixed-response</code>, you drop specified client
     * requests and return a custom HTTP response.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP
     * or TLS for a Network Load Balancer.</p> <p>[HTTPS listeners] If the action type
     * is <code>authenticate-oidc</code>, you authenticate users through an identity
     * provider that is OpenID Connect (OIDC) compliant.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-cognito</code>, you authenticate users
     * through the user pools supported by Amazon Cognito.</p> <p>[Application Load
     * Balancer] If the action type is <code>redirect</code>, you redirect specified
     * client requests from one URL to another.</p> <p>[Application Load Balancer] If
     * the action type is <code>fixed-response</code>, you drop specified client
     * requests and return a custom HTTP response.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP
     * or TLS for a Network Load Balancer.</p> <p>[HTTPS listeners] If the action type
     * is <code>authenticate-oidc</code>, you authenticate users through an identity
     * provider that is OpenID Connect (OIDC) compliant.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-cognito</code>, you authenticate users
     * through the user pools supported by Amazon Cognito.</p> <p>[Application Load
     * Balancer] If the action type is <code>redirect</code>, you redirect specified
     * client requests from one URL to another.</p> <p>[Application Load Balancer] If
     * the action type is <code>fixed-response</code>, you drop specified client
     * requests and return a custom HTTP response.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP
     * or TLS for a Network Load Balancer.</p> <p>[HTTPS listeners] If the action type
     * is <code>authenticate-oidc</code>, you authenticate users through an identity
     * provider that is OpenID Connect (OIDC) compliant.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-cognito</code>, you authenticate users
     * through the user pools supported by Amazon Cognito.</p> <p>[Application Load
     * Balancer] If the action type is <code>redirect</code>, you redirect specified
     * client requests from one URL to another.</p> <p>[Application Load Balancer] If
     * the action type is <code>fixed-response</code>, you drop specified client
     * requests and return a custom HTTP response.</p>
     */
    inline CreateRuleRequest& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP
     * or TLS for a Network Load Balancer.</p> <p>[HTTPS listeners] If the action type
     * is <code>authenticate-oidc</code>, you authenticate users through an identity
     * provider that is OpenID Connect (OIDC) compliant.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-cognito</code>, you authenticate users
     * through the user pools supported by Amazon Cognito.</p> <p>[Application Load
     * Balancer] If the action type is <code>redirect</code>, you redirect specified
     * client requests from one URL to another.</p> <p>[Application Load Balancer] If
     * the action type is <code>fixed-response</code>, you drop specified client
     * requests and return a custom HTTP response.</p>
     */
    inline CreateRuleRequest& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP
     * or TLS for a Network Load Balancer.</p> <p>[HTTPS listeners] If the action type
     * is <code>authenticate-oidc</code>, you authenticate users through an identity
     * provider that is OpenID Connect (OIDC) compliant.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-cognito</code>, you authenticate users
     * through the user pools supported by Amazon Cognito.</p> <p>[Application Load
     * Balancer] If the action type is <code>redirect</code>, you redirect specified
     * client requests from one URL to another.</p> <p>[Application Load Balancer] If
     * the action type is <code>fixed-response</code>, you drop specified client
     * requests and return a custom HTTP response.</p>
     */
    inline CreateRuleRequest& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>fixed-response</code>, or
     * <code>redirect</code>.</p> <p>If the action type is <code>forward</code>, you
     * specify a target group. The protocol of the target group must be HTTP or HTTPS
     * for an Application Load Balancer. The protocol of the target group must be TCP
     * or TLS for a Network Load Balancer.</p> <p>[HTTPS listeners] If the action type
     * is <code>authenticate-oidc</code>, you authenticate users through an identity
     * provider that is OpenID Connect (OIDC) compliant.</p> <p>[HTTPS listeners] If
     * the action type is <code>authenticate-cognito</code>, you authenticate users
     * through the user pools supported by Amazon Cognito.</p> <p>[Application Load
     * Balancer] If the action type is <code>redirect</code>, you redirect specified
     * client requests from one URL to another.</p> <p>[Application Load Balancer] If
     * the action type is <code>fixed-response</code>, you drop specified client
     * requests and return a custom HTTP response.</p>
     */
    inline CreateRuleRequest& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet;

    Aws::Vector<RuleCondition> m_conditions;
    bool m_conditionsHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
