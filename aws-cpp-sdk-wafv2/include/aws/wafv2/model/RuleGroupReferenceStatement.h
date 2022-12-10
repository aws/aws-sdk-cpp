/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ExcludedRule.h>
#include <aws/wafv2/model/RuleActionOverride.h>
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
   * <p>A rule statement used to run the rules that are defined in a
   * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
   * the ARN of the rule group in this statement.</p> <p>You cannot nest a
   * <code>RuleGroupReferenceStatement</code>, for example for use inside a
   * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
   * group reference statement at the top level inside a web ACL. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleGroupReferenceStatement">AWS
   * API Reference</a></p>
   */
  class RuleGroupReferenceStatement
  {
  public:
    AWS_WAFV2_API RuleGroupReferenceStatement();
    AWS_WAFV2_API RuleGroupReferenceStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RuleGroupReferenceStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RuleGroupReferenceStatement& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RuleGroupReferenceStatement& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RuleGroupReferenceStatement& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline const Aws::Vector<ExcludedRule>& GetExcludedRules() const{ return m_excludedRules; }

    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline bool ExcludedRulesHasBeenSet() const { return m_excludedRulesHasBeenSet; }

    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline void SetExcludedRules(const Aws::Vector<ExcludedRule>& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = value; }

    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline void SetExcludedRules(Aws::Vector<ExcludedRule>&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = std::move(value); }

    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline RuleGroupReferenceStatement& WithExcludedRules(const Aws::Vector<ExcludedRule>& value) { SetExcludedRules(value); return *this;}

    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline RuleGroupReferenceStatement& WithExcludedRules(Aws::Vector<ExcludedRule>&& value) { SetExcludedRules(std::move(value)); return *this;}

    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline RuleGroupReferenceStatement& AddExcludedRules(const ExcludedRule& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(value); return *this; }

    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline RuleGroupReferenceStatement& AddExcludedRules(ExcludedRule&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(std::move(value)); return *this; }


    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p> <p>You can use overrides for testing, for example you can
     * override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline const Aws::Vector<RuleActionOverride>& GetRuleActionOverrides() const{ return m_ruleActionOverrides; }

    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p> <p>You can use overrides for testing, for example you can
     * override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline bool RuleActionOverridesHasBeenSet() const { return m_ruleActionOverridesHasBeenSet; }

    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p> <p>You can use overrides for testing, for example you can
     * override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline void SetRuleActionOverrides(const Aws::Vector<RuleActionOverride>& value) { m_ruleActionOverridesHasBeenSet = true; m_ruleActionOverrides = value; }

    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p> <p>You can use overrides for testing, for example you can
     * override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline void SetRuleActionOverrides(Aws::Vector<RuleActionOverride>&& value) { m_ruleActionOverridesHasBeenSet = true; m_ruleActionOverrides = std::move(value); }

    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p> <p>You can use overrides for testing, for example you can
     * override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline RuleGroupReferenceStatement& WithRuleActionOverrides(const Aws::Vector<RuleActionOverride>& value) { SetRuleActionOverrides(value); return *this;}

    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p> <p>You can use overrides for testing, for example you can
     * override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline RuleGroupReferenceStatement& WithRuleActionOverrides(Aws::Vector<RuleActionOverride>&& value) { SetRuleActionOverrides(std::move(value)); return *this;}

    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p> <p>You can use overrides for testing, for example you can
     * override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline RuleGroupReferenceStatement& AddRuleActionOverrides(const RuleActionOverride& value) { m_ruleActionOverridesHasBeenSet = true; m_ruleActionOverrides.push_back(value); return *this; }

    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p> <p>You can use overrides for testing, for example you can
     * override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline RuleGroupReferenceStatement& AddRuleActionOverrides(RuleActionOverride&& value) { m_ruleActionOverridesHasBeenSet = true; m_ruleActionOverrides.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<ExcludedRule> m_excludedRules;
    bool m_excludedRulesHasBeenSet = false;

    Aws::Vector<RuleActionOverride> m_ruleActionOverrides;
    bool m_ruleActionOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
