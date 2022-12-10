/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ManagedRuleGroupStatement.h>
#include <aws/wafv2/model/RuleGroupReferenceStatement.h>
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
   * <p>The processing guidance for an Firewall Manager rule. This is like a regular
   * rule <a>Statement</a>, but it can only contain a rule group
   * reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FirewallManagerStatement">AWS
   * API Reference</a></p>
   */
  class FirewallManagerStatement
  {
  public:
    AWS_WAFV2_API FirewallManagerStatement();
    AWS_WAFV2_API FirewallManagerStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API FirewallManagerStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    inline const ManagedRuleGroupStatement& GetManagedRuleGroupStatement() const{ return m_managedRuleGroupStatement; }

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    inline bool ManagedRuleGroupStatementHasBeenSet() const { return m_managedRuleGroupStatementHasBeenSet; }

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    inline void SetManagedRuleGroupStatement(const ManagedRuleGroupStatement& value) { m_managedRuleGroupStatementHasBeenSet = true; m_managedRuleGroupStatement = value; }

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    inline void SetManagedRuleGroupStatement(ManagedRuleGroupStatement&& value) { m_managedRuleGroupStatementHasBeenSet = true; m_managedRuleGroupStatement = std::move(value); }

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    inline FirewallManagerStatement& WithManagedRuleGroupStatement(const ManagedRuleGroupStatement& value) { SetManagedRuleGroupStatement(value); return *this;}

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    inline FirewallManagerStatement& WithManagedRuleGroupStatement(ManagedRuleGroupStatement&& value) { SetManagedRuleGroupStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline const RuleGroupReferenceStatement& GetRuleGroupReferenceStatement() const{ return m_ruleGroupReferenceStatement; }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline bool RuleGroupReferenceStatementHasBeenSet() const { return m_ruleGroupReferenceStatementHasBeenSet; }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline void SetRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = value; }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline void SetRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = std::move(value); }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline FirewallManagerStatement& WithRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { SetRuleGroupReferenceStatement(value); return *this;}

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline FirewallManagerStatement& WithRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { SetRuleGroupReferenceStatement(std::move(value)); return *this;}

  private:

    ManagedRuleGroupStatement m_managedRuleGroupStatement;
    bool m_managedRuleGroupStatementHasBeenSet = false;

    RuleGroupReferenceStatement m_ruleGroupReferenceStatement;
    bool m_ruleGroupReferenceStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
