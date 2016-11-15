/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateRule.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API CreateRuleRequest : public ElasticLoadBalancingv2Request
  {
  public:
    CreateRuleRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

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
    inline CreateRuleRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateRuleRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}

    /**
     * <p>A condition. Each condition has the field <code>path-pattern</code> and
     * specifies one path pattern. A path pattern is case sensitive, can be up to 255
     * characters in length, and can contain any of the following characters:</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li>
     * <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more
     * characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline const Aws::Vector<RuleCondition>& GetConditions() const{ return m_conditions; }

    /**
     * <p>A condition. Each condition has the field <code>path-pattern</code> and
     * specifies one path pattern. A path pattern is case sensitive, can be up to 255
     * characters in length, and can contain any of the following characters:</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li>
     * <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more
     * characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline void SetConditions(const Aws::Vector<RuleCondition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>A condition. Each condition has the field <code>path-pattern</code> and
     * specifies one path pattern. A path pattern is case sensitive, can be up to 255
     * characters in length, and can contain any of the following characters:</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li>
     * <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more
     * characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline void SetConditions(Aws::Vector<RuleCondition>&& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>A condition. Each condition has the field <code>path-pattern</code> and
     * specifies one path pattern. A path pattern is case sensitive, can be up to 255
     * characters in length, and can contain any of the following characters:</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li>
     * <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more
     * characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline CreateRuleRequest& WithConditions(const Aws::Vector<RuleCondition>& value) { SetConditions(value); return *this;}

    /**
     * <p>A condition. Each condition has the field <code>path-pattern</code> and
     * specifies one path pattern. A path pattern is case sensitive, can be up to 255
     * characters in length, and can contain any of the following characters:</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li>
     * <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more
     * characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline CreateRuleRequest& WithConditions(Aws::Vector<RuleCondition>&& value) { SetConditions(value); return *this;}

    /**
     * <p>A condition. Each condition has the field <code>path-pattern</code> and
     * specifies one path pattern. A path pattern is case sensitive, can be up to 255
     * characters in length, and can contain any of the following characters:</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li>
     * <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more
     * characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline CreateRuleRequest& AddConditions(const RuleCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>A condition. Each condition has the field <code>path-pattern</code> and
     * specifies one path pattern. A path pattern is case sensitive, can be up to 255
     * characters in length, and can contain any of the following characters:</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li>
     * <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more
     * characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline CreateRuleRequest& AddConditions(RuleCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>The priority for the rule. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority for the rule. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority for the rule. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline CreateRuleRequest& WithPriority(int value) { SetPriority(value); return *this;}

    /**
     * <p>An action. Each action has the type <code>forward</code> and specifies a
     * target group.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>An action. Each action has the type <code>forward</code> and specifies a
     * target group.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>An action. Each action has the type <code>forward</code> and specifies a
     * target group.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>An action. Each action has the type <code>forward</code> and specifies a
     * target group.</p>
     */
    inline CreateRuleRequest& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>An action. Each action has the type <code>forward</code> and specifies a
     * target group.</p>
     */
    inline CreateRuleRequest& WithActions(Aws::Vector<Action>&& value) { SetActions(value); return *this;}

    /**
     * <p>An action. Each action has the type <code>forward</code> and specifies a
     * target group.</p>
     */
    inline CreateRuleRequest& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>An action. Each action has the type <code>forward</code> and specifies a
     * target group.</p>
     */
    inline CreateRuleRequest& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

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
