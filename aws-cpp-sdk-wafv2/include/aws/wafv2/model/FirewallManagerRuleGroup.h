/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/FirewallManagerStatement.h>
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
   * <p>A rule group that's defined for an AWS Firewall Manager WAF
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FirewallManagerRuleGroup">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API FirewallManagerRuleGroup
  {
  public:
    FirewallManagerRuleGroup();
    FirewallManagerRuleGroup(Aws::Utils::Json::JsonView jsonValue);
    FirewallManagerRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline FirewallManagerRuleGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline FirewallManagerRuleGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline FirewallManagerRuleGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If you define more than one rule group in the first or last Firewall Manager
     * rule groups, AWS WAF evaluates each request against the rule groups in order,
     * starting from the lowest priority setting. The priorities don't need to be
     * consecutive, but they must all be different.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>If you define more than one rule group in the first or last Firewall Manager
     * rule groups, AWS WAF evaluates each request against the rule groups in order,
     * starting from the lowest priority setting. The priorities don't need to be
     * consecutive, but they must all be different.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>If you define more than one rule group in the first or last Firewall Manager
     * rule groups, AWS WAF evaluates each request against the rule groups in order,
     * starting from the lowest priority setting. The priorities don't need to be
     * consecutive, but they must all be different.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>If you define more than one rule group in the first or last Firewall Manager
     * rule groups, AWS WAF evaluates each request against the rule groups in order,
     * starting from the lowest priority setting. The priorities don't need to be
     * consecutive, but they must all be different.</p>
     */
    inline FirewallManagerRuleGroup& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The processing guidance for an AWS Firewall Manager rule. This is like a
     * regular rule <a>Statement</a>, but it can only contain a rule group
     * reference.</p>
     */
    inline const FirewallManagerStatement& GetFirewallManagerStatement() const{ return m_firewallManagerStatement; }

    /**
     * <p>The processing guidance for an AWS Firewall Manager rule. This is like a
     * regular rule <a>Statement</a>, but it can only contain a rule group
     * reference.</p>
     */
    inline bool FirewallManagerStatementHasBeenSet() const { return m_firewallManagerStatementHasBeenSet; }

    /**
     * <p>The processing guidance for an AWS Firewall Manager rule. This is like a
     * regular rule <a>Statement</a>, but it can only contain a rule group
     * reference.</p>
     */
    inline void SetFirewallManagerStatement(const FirewallManagerStatement& value) { m_firewallManagerStatementHasBeenSet = true; m_firewallManagerStatement = value; }

    /**
     * <p>The processing guidance for an AWS Firewall Manager rule. This is like a
     * regular rule <a>Statement</a>, but it can only contain a rule group
     * reference.</p>
     */
    inline void SetFirewallManagerStatement(FirewallManagerStatement&& value) { m_firewallManagerStatementHasBeenSet = true; m_firewallManagerStatement = std::move(value); }

    /**
     * <p>The processing guidance for an AWS Firewall Manager rule. This is like a
     * regular rule <a>Statement</a>, but it can only contain a rule group
     * reference.</p>
     */
    inline FirewallManagerRuleGroup& WithFirewallManagerStatement(const FirewallManagerStatement& value) { SetFirewallManagerStatement(value); return *this;}

    /**
     * <p>The processing guidance for an AWS Firewall Manager rule. This is like a
     * regular rule <a>Statement</a>, but it can only contain a rule group
     * reference.</p>
     */
    inline FirewallManagerRuleGroup& WithFirewallManagerStatement(FirewallManagerStatement&& value) { SetFirewallManagerStatement(std::move(value)); return *this;}


    
    inline const OverrideAction& GetOverrideAction() const{ return m_overrideAction; }

    
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }

    
    inline void SetOverrideAction(const OverrideAction& value) { m_overrideActionHasBeenSet = true; m_overrideAction = value; }

    
    inline void SetOverrideAction(OverrideAction&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::move(value); }

    
    inline FirewallManagerRuleGroup& WithOverrideAction(const OverrideAction& value) { SetOverrideAction(value); return *this;}

    
    inline FirewallManagerRuleGroup& WithOverrideAction(OverrideAction&& value) { SetOverrideAction(std::move(value)); return *this;}


    
    inline const VisibilityConfig& GetVisibilityConfig() const{ return m_visibilityConfig; }

    
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }

    
    inline void SetVisibilityConfig(const VisibilityConfig& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }

    
    inline void SetVisibilityConfig(VisibilityConfig&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }

    
    inline FirewallManagerRuleGroup& WithVisibilityConfig(const VisibilityConfig& value) { SetVisibilityConfig(value); return *this;}

    
    inline FirewallManagerRuleGroup& WithVisibilityConfig(VisibilityConfig&& value) { SetVisibilityConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    FirewallManagerStatement m_firewallManagerStatement;
    bool m_firewallManagerStatementHasBeenSet;

    OverrideAction m_overrideAction;
    bool m_overrideActionHasBeenSet;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
