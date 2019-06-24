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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/RuleCondition.h>
#include <aws/elasticloadbalancingv2/model/Action.h>
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
   * <p>Information about a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/Rule">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API Rule
  {
  public:
    Rule();
    Rule(const Aws::Utils::Xml::XmlNode& xmlNode);
    Rule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline Rule& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline Rule& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline Rule& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}


    /**
     * <p>The priority.</p>
     */
    inline const Aws::String& GetPriority() const{ return m_priority; }

    /**
     * <p>The priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority.</p>
     */
    inline void SetPriority(const Aws::String& value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority.</p>
     */
    inline void SetPriority(Aws::String&& value) { m_priorityHasBeenSet = true; m_priority = std::move(value); }

    /**
     * <p>The priority.</p>
     */
    inline void SetPriority(const char* value) { m_priorityHasBeenSet = true; m_priority.assign(value); }

    /**
     * <p>The priority.</p>
     */
    inline Rule& WithPriority(const Aws::String& value) { SetPriority(value); return *this;}

    /**
     * <p>The priority.</p>
     */
    inline Rule& WithPriority(Aws::String&& value) { SetPriority(std::move(value)); return *this;}

    /**
     * <p>The priority.</p>
     */
    inline Rule& WithPriority(const char* value) { SetPriority(value); return *this;}


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
    inline Rule& WithConditions(const Aws::Vector<RuleCondition>& value) { SetConditions(value); return *this;}

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline Rule& WithConditions(Aws::Vector<RuleCondition>&& value) { SetConditions(std::move(value)); return *this;}

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline Rule& AddConditions(const RuleCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>The conditions. Each rule can include zero or one of the following
     * conditions: <code>http-request-method</code>, <code>host-header</code>,
     * <code>path-pattern</code>, and <code>source-ip</code>, and zero or more of the
     * following conditions: <code>http-header</code> and
     * <code>query-string</code>.</p>
     */
    inline Rule& AddConditions(RuleCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }


    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>redirect</code>, or
     * <code>fixed-response</code>, and it must be the last action to be performed.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>redirect</code>, or
     * <code>fixed-response</code>, and it must be the last action to be performed.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>redirect</code>, or
     * <code>fixed-response</code>, and it must be the last action to be performed.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>redirect</code>, or
     * <code>fixed-response</code>, and it must be the last action to be performed.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>redirect</code>, or
     * <code>fixed-response</code>, and it must be the last action to be performed.</p>
     */
    inline Rule& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>redirect</code>, or
     * <code>fixed-response</code>, and it must be the last action to be performed.</p>
     */
    inline Rule& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>redirect</code>, or
     * <code>fixed-response</code>, and it must be the last action to be performed.</p>
     */
    inline Rule& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions. Each rule must include exactly one of the following types of
     * actions: <code>forward</code>, <code>redirect</code>, or
     * <code>fixed-response</code>, and it must be the last action to be performed.</p>
     */
    inline Rule& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether this is the default rule.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Indicates whether this is the default rule.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>Indicates whether this is the default rule.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>Indicates whether this is the default rule.</p>
     */
    inline Rule& WithIsDefault(bool value) { SetIsDefault(value); return *this;}

  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet;

    Aws::String m_priority;
    bool m_priorityHasBeenSet;

    Aws::Vector<RuleCondition> m_conditions;
    bool m_conditionsHasBeenSet;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
