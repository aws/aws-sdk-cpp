/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Statement.h>
#include <aws/wafv2/model/RuleAction.h>
#include <aws/wafv2/model/OverrideAction.h>
#include <aws/wafv2/model/VisibilityConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>A single rule, which you can use in a
   * <a>WebACL</a> or <a>RuleGroup</a> to identify web requests that you want to
   * allow, block, or count. Each rule includes one top-level <a>Statement</a> that
   * AWS WAF uses to identify matching web requests, and parameters that govern how
   * AWS WAF handles them. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Rule">AWS API
   * Reference</a></p>
   */
  class AWS_WAFV2_API Rule
  {
  public:
    Rule();
    Rule(Aws::Utils::Json::JsonView jsonValue);
    Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline Rule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline Rule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline Rule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If you define more than one <code>Rule</code> in a <code>WebACL</code>, AWS
     * WAF evaluates each request against the <code>Rules</code> in order based on the
     * value of <code>Priority</code>. AWS WAF processes rules with lower priority
     * first. The priorities don't need to be consecutive, but they must all be
     * different.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>If you define more than one <code>Rule</code> in a <code>WebACL</code>, AWS
     * WAF evaluates each request against the <code>Rules</code> in order based on the
     * value of <code>Priority</code>. AWS WAF processes rules with lower priority
     * first. The priorities don't need to be consecutive, but they must all be
     * different.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>If you define more than one <code>Rule</code> in a <code>WebACL</code>, AWS
     * WAF evaluates each request against the <code>Rules</code> in order based on the
     * value of <code>Priority</code>. AWS WAF processes rules with lower priority
     * first. The priorities don't need to be consecutive, but they must all be
     * different.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>If you define more than one <code>Rule</code> in a <code>WebACL</code>, AWS
     * WAF evaluates each request against the <code>Rules</code> in order based on the
     * value of <code>Priority</code>. AWS WAF processes rules with lower priority
     * first. The priorities don't need to be consecutive, but they must all be
     * different.</p>
     */
    inline Rule& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The AWS WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline const Statement& GetStatement() const{ return m_statement; }

    /**
     * <p>The AWS WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }

    /**
     * <p>The AWS WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline void SetStatement(const Statement& value) { m_statementHasBeenSet = true; m_statement = value; }

    /**
     * <p>The AWS WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline void SetStatement(Statement&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }

    /**
     * <p>The AWS WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline Rule& WithStatement(const Statement& value) { SetStatement(value); return *this;}

    /**
     * <p>The AWS WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline Rule& WithStatement(Statement&& value) { SetStatement(std::move(value)); return *this;}


    /**
     * <p>The action that AWS WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p> <p>This is used only for rules whose statements do not reference a rule
     * group. Rule statements that reference a rule group include
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>You must specify either this
     * <code>Action</code> setting or the rule <code>OverrideAction</code> setting, but
     * not both:</p> <ul> <li> <p>If the rule statement does not reference a rule
     * group, use this rule action setting and not the rule override action setting.
     * </p> </li> <li> <p>If the rule statement references a rule group, use the
     * override action setting and not this action setting. </p> </li> </ul>
     */
    inline const RuleAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that AWS WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p> <p>This is used only for rules whose statements do not reference a rule
     * group. Rule statements that reference a rule group include
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>You must specify either this
     * <code>Action</code> setting or the rule <code>OverrideAction</code> setting, but
     * not both:</p> <ul> <li> <p>If the rule statement does not reference a rule
     * group, use this rule action setting and not the rule override action setting.
     * </p> </li> <li> <p>If the rule statement references a rule group, use the
     * override action setting and not this action setting. </p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that AWS WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p> <p>This is used only for rules whose statements do not reference a rule
     * group. Rule statements that reference a rule group include
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>You must specify either this
     * <code>Action</code> setting or the rule <code>OverrideAction</code> setting, but
     * not both:</p> <ul> <li> <p>If the rule statement does not reference a rule
     * group, use this rule action setting and not the rule override action setting.
     * </p> </li> <li> <p>If the rule statement references a rule group, use the
     * override action setting and not this action setting. </p> </li> </ul>
     */
    inline void SetAction(const RuleAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that AWS WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p> <p>This is used only for rules whose statements do not reference a rule
     * group. Rule statements that reference a rule group include
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>You must specify either this
     * <code>Action</code> setting or the rule <code>OverrideAction</code> setting, but
     * not both:</p> <ul> <li> <p>If the rule statement does not reference a rule
     * group, use this rule action setting and not the rule override action setting.
     * </p> </li> <li> <p>If the rule statement references a rule group, use the
     * override action setting and not this action setting. </p> </li> </ul>
     */
    inline void SetAction(RuleAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that AWS WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p> <p>This is used only for rules whose statements do not reference a rule
     * group. Rule statements that reference a rule group include
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>You must specify either this
     * <code>Action</code> setting or the rule <code>OverrideAction</code> setting, but
     * not both:</p> <ul> <li> <p>If the rule statement does not reference a rule
     * group, use this rule action setting and not the rule override action setting.
     * </p> </li> <li> <p>If the rule statement references a rule group, use the
     * override action setting and not this action setting. </p> </li> </ul>
     */
    inline Rule& WithAction(const RuleAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that AWS WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p> <p>This is used only for rules whose statements do not reference a rule
     * group. Rule statements that reference a rule group include
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>You must specify either this
     * <code>Action</code> setting or the rule <code>OverrideAction</code> setting, but
     * not both:</p> <ul> <li> <p>If the rule statement does not reference a rule
     * group, use this rule action setting and not the rule override action setting.
     * </p> </li> <li> <p>If the rule statement references a rule group, use the
     * override action setting and not this action setting. </p> </li> </ul>
     */
    inline Rule& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The override action to apply to the rules in a rule group. Used only for rule
     * statements that reference a rule group, like
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>Set the override action to none
     * to leave the rule actions in effect. Set it to count to only count matches,
     * regardless of the rule action settings. </p> <p>In a <a>Rule</a>, you must
     * specify either this <code>OverrideAction</code> setting or the rule
     * <code>Action</code> setting, but not both:</p> <ul> <li> <p>If the rule
     * statement references a rule group, use this override action setting and not the
     * action setting. </p> </li> <li> <p>If the rule statement does not reference a
     * rule group, use the rule action setting and not this rule override action
     * setting. </p> </li> </ul>
     */
    inline const OverrideAction& GetOverrideAction() const{ return m_overrideAction; }

    /**
     * <p>The override action to apply to the rules in a rule group. Used only for rule
     * statements that reference a rule group, like
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>Set the override action to none
     * to leave the rule actions in effect. Set it to count to only count matches,
     * regardless of the rule action settings. </p> <p>In a <a>Rule</a>, you must
     * specify either this <code>OverrideAction</code> setting or the rule
     * <code>Action</code> setting, but not both:</p> <ul> <li> <p>If the rule
     * statement references a rule group, use this override action setting and not the
     * action setting. </p> </li> <li> <p>If the rule statement does not reference a
     * rule group, use the rule action setting and not this rule override action
     * setting. </p> </li> </ul>
     */
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }

    /**
     * <p>The override action to apply to the rules in a rule group. Used only for rule
     * statements that reference a rule group, like
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>Set the override action to none
     * to leave the rule actions in effect. Set it to count to only count matches,
     * regardless of the rule action settings. </p> <p>In a <a>Rule</a>, you must
     * specify either this <code>OverrideAction</code> setting or the rule
     * <code>Action</code> setting, but not both:</p> <ul> <li> <p>If the rule
     * statement references a rule group, use this override action setting and not the
     * action setting. </p> </li> <li> <p>If the rule statement does not reference a
     * rule group, use the rule action setting and not this rule override action
     * setting. </p> </li> </ul>
     */
    inline void SetOverrideAction(const OverrideAction& value) { m_overrideActionHasBeenSet = true; m_overrideAction = value; }

    /**
     * <p>The override action to apply to the rules in a rule group. Used only for rule
     * statements that reference a rule group, like
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>Set the override action to none
     * to leave the rule actions in effect. Set it to count to only count matches,
     * regardless of the rule action settings. </p> <p>In a <a>Rule</a>, you must
     * specify either this <code>OverrideAction</code> setting or the rule
     * <code>Action</code> setting, but not both:</p> <ul> <li> <p>If the rule
     * statement references a rule group, use this override action setting and not the
     * action setting. </p> </li> <li> <p>If the rule statement does not reference a
     * rule group, use the rule action setting and not this rule override action
     * setting. </p> </li> </ul>
     */
    inline void SetOverrideAction(OverrideAction&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::move(value); }

    /**
     * <p>The override action to apply to the rules in a rule group. Used only for rule
     * statements that reference a rule group, like
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>Set the override action to none
     * to leave the rule actions in effect. Set it to count to only count matches,
     * regardless of the rule action settings. </p> <p>In a <a>Rule</a>, you must
     * specify either this <code>OverrideAction</code> setting or the rule
     * <code>Action</code> setting, but not both:</p> <ul> <li> <p>If the rule
     * statement references a rule group, use this override action setting and not the
     * action setting. </p> </li> <li> <p>If the rule statement does not reference a
     * rule group, use the rule action setting and not this rule override action
     * setting. </p> </li> </ul>
     */
    inline Rule& WithOverrideAction(const OverrideAction& value) { SetOverrideAction(value); return *this;}

    /**
     * <p>The override action to apply to the rules in a rule group. Used only for rule
     * statements that reference a rule group, like
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>Set the override action to none
     * to leave the rule actions in effect. Set it to count to only count matches,
     * regardless of the rule action settings. </p> <p>In a <a>Rule</a>, you must
     * specify either this <code>OverrideAction</code> setting or the rule
     * <code>Action</code> setting, but not both:</p> <ul> <li> <p>If the rule
     * statement references a rule group, use this override action setting and not the
     * action setting. </p> </li> <li> <p>If the rule statement does not reference a
     * rule group, use the rule action setting and not this rule override action
     * setting. </p> </li> </ul>
     */
    inline Rule& WithOverrideAction(OverrideAction&& value) { SetOverrideAction(std::move(value)); return *this;}


    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const VisibilityConfig& GetVisibilityConfig() const{ return m_visibilityConfig; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(const VisibilityConfig& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(VisibilityConfig&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline Rule& WithVisibilityConfig(const VisibilityConfig& value) { SetVisibilityConfig(value); return *this;}

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline Rule& WithVisibilityConfig(VisibilityConfig&& value) { SetVisibilityConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    Statement m_statement;
    bool m_statementHasBeenSet;

    RuleAction m_action;
    bool m_actionHasBeenSet;

    OverrideAction m_overrideAction;
    bool m_overrideActionHasBeenSet;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
