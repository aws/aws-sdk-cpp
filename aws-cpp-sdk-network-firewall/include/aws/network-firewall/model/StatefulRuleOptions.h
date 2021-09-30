/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RuleOrder.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Additional options governing how Network Firewall handles the rule group. You
   * can only use these for stateful rule groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatefulRuleOptions">AWS
   * API Reference</a></p>
   */
  class AWS_NETWORKFIREWALL_API StatefulRuleOptions
  {
  public:
    StatefulRuleOptions();
    StatefulRuleOptions(Aws::Utils::Json::JsonView jsonValue);
    StatefulRuleOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * By default, Network Firewall leaves the rule evaluation order up to the Suricata
     * rule processing engine. If you set this to <code>STRICT_ORDER</code>, your rules
     * are evaluated in the exact order that they're listed in your Suricata rules
     * string. </p>
     */
    inline const RuleOrder& GetRuleOrder() const{ return m_ruleOrder; }

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * By default, Network Firewall leaves the rule evaluation order up to the Suricata
     * rule processing engine. If you set this to <code>STRICT_ORDER</code>, your rules
     * are evaluated in the exact order that they're listed in your Suricata rules
     * string. </p>
     */
    inline bool RuleOrderHasBeenSet() const { return m_ruleOrderHasBeenSet; }

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * By default, Network Firewall leaves the rule evaluation order up to the Suricata
     * rule processing engine. If you set this to <code>STRICT_ORDER</code>, your rules
     * are evaluated in the exact order that they're listed in your Suricata rules
     * string. </p>
     */
    inline void SetRuleOrder(const RuleOrder& value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = value; }

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * By default, Network Firewall leaves the rule evaluation order up to the Suricata
     * rule processing engine. If you set this to <code>STRICT_ORDER</code>, your rules
     * are evaluated in the exact order that they're listed in your Suricata rules
     * string. </p>
     */
    inline void SetRuleOrder(RuleOrder&& value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = std::move(value); }

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * By default, Network Firewall leaves the rule evaluation order up to the Suricata
     * rule processing engine. If you set this to <code>STRICT_ORDER</code>, your rules
     * are evaluated in the exact order that they're listed in your Suricata rules
     * string. </p>
     */
    inline StatefulRuleOptions& WithRuleOrder(const RuleOrder& value) { SetRuleOrder(value); return *this;}

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * By default, Network Firewall leaves the rule evaluation order up to the Suricata
     * rule processing engine. If you set this to <code>STRICT_ORDER</code>, your rules
     * are evaluated in the exact order that they're listed in your Suricata rules
     * string. </p>
     */
    inline StatefulRuleOptions& WithRuleOrder(RuleOrder&& value) { SetRuleOrder(std::move(value)); return *this;}

  private:

    RuleOrder m_ruleOrder;
    bool m_ruleOrderHasBeenSet;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
