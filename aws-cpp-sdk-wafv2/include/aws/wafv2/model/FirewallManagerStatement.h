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
   * <p>The processing guidance for an AWS Firewall Manager rule. This is like a
   * regular rule <a>Statement</a>, but it can only contain a rule group
   * reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FirewallManagerStatement">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API FirewallManagerStatement
  {
  public:
    FirewallManagerStatement();
    FirewallManagerStatement(Aws::Utils::Json::JsonView jsonValue);
    FirewallManagerStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ManagedRuleGroupStatement& GetManagedRuleGroupStatement() const{ return m_managedRuleGroupStatement; }

    
    inline bool ManagedRuleGroupStatementHasBeenSet() const { return m_managedRuleGroupStatementHasBeenSet; }

    
    inline void SetManagedRuleGroupStatement(const ManagedRuleGroupStatement& value) { m_managedRuleGroupStatementHasBeenSet = true; m_managedRuleGroupStatement = value; }

    
    inline void SetManagedRuleGroupStatement(ManagedRuleGroupStatement&& value) { m_managedRuleGroupStatementHasBeenSet = true; m_managedRuleGroupStatement = std::move(value); }

    
    inline FirewallManagerStatement& WithManagedRuleGroupStatement(const ManagedRuleGroupStatement& value) { SetManagedRuleGroupStatement(value); return *this;}

    
    inline FirewallManagerStatement& WithManagedRuleGroupStatement(ManagedRuleGroupStatement&& value) { SetManagedRuleGroupStatement(std::move(value)); return *this;}


    
    inline const RuleGroupReferenceStatement& GetRuleGroupReferenceStatement() const{ return m_ruleGroupReferenceStatement; }

    
    inline bool RuleGroupReferenceStatementHasBeenSet() const { return m_ruleGroupReferenceStatementHasBeenSet; }

    
    inline void SetRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = value; }

    
    inline void SetRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = std::move(value); }

    
    inline FirewallManagerStatement& WithRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { SetRuleGroupReferenceStatement(value); return *this;}

    
    inline FirewallManagerStatement& WithRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { SetRuleGroupReferenceStatement(std::move(value)); return *this;}

  private:

    ManagedRuleGroupStatement m_managedRuleGroupStatement;
    bool m_managedRuleGroupStatementHasBeenSet;

    RuleGroupReferenceStatement m_ruleGroupReferenceStatement;
    bool m_ruleGroupReferenceStatementHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
