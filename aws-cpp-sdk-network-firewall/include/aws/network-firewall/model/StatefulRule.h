/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/StatefulAction.h>
#include <aws/network-firewall/model/Header.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/RuleOption.h>
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
   * <p>A single 5-tuple stateful rule, for use in a stateful rule
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatefulRule">AWS
   * API Reference</a></p>
   */
  class AWS_NETWORKFIREWALL_API StatefulRule
  {
  public:
    StatefulRule();
    StatefulRule(Aws::Utils::Json::JsonView jsonValue);
    StatefulRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria. For all actions, Network
     * Firewall performs the specified action and discontinues stateful inspection of
     * the traffic flow. </p> <p>The actions for a stateful rule are defined as
     * follows: </p> <ul> <li> <p> <b>PASS</b> - Permits the packets to go to the
     * intended destination.</p> </li> <li> <p> <b>DROP</b> - Blocks the packets from
     * going to the intended destination and sends an alert log message, if alert
     * logging is configured in the <a>Firewall</a> <a>LoggingConfiguration</a>. </p>
     * </li> <li> <p> <b>ALERT</b> - Permits the packets to go to the intended
     * destination and sends an alert log message, if alert logging is configured in
     * the <a>Firewall</a> <a>LoggingConfiguration</a>. </p> <p>You can use this action
     * to test a rule that you intend to use to drop traffic. You can enable the rule
     * with <code>ALERT</code> action, verify in the logs that the rule is filtering as
     * you want, then change the action to <code>DROP</code>.</p> </li> </ul>
     */
    inline const StatefulAction& GetAction() const{ return m_action; }

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria. For all actions, Network
     * Firewall performs the specified action and discontinues stateful inspection of
     * the traffic flow. </p> <p>The actions for a stateful rule are defined as
     * follows: </p> <ul> <li> <p> <b>PASS</b> - Permits the packets to go to the
     * intended destination.</p> </li> <li> <p> <b>DROP</b> - Blocks the packets from
     * going to the intended destination and sends an alert log message, if alert
     * logging is configured in the <a>Firewall</a> <a>LoggingConfiguration</a>. </p>
     * </li> <li> <p> <b>ALERT</b> - Permits the packets to go to the intended
     * destination and sends an alert log message, if alert logging is configured in
     * the <a>Firewall</a> <a>LoggingConfiguration</a>. </p> <p>You can use this action
     * to test a rule that you intend to use to drop traffic. You can enable the rule
     * with <code>ALERT</code> action, verify in the logs that the rule is filtering as
     * you want, then change the action to <code>DROP</code>.</p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria. For all actions, Network
     * Firewall performs the specified action and discontinues stateful inspection of
     * the traffic flow. </p> <p>The actions for a stateful rule are defined as
     * follows: </p> <ul> <li> <p> <b>PASS</b> - Permits the packets to go to the
     * intended destination.</p> </li> <li> <p> <b>DROP</b> - Blocks the packets from
     * going to the intended destination and sends an alert log message, if alert
     * logging is configured in the <a>Firewall</a> <a>LoggingConfiguration</a>. </p>
     * </li> <li> <p> <b>ALERT</b> - Permits the packets to go to the intended
     * destination and sends an alert log message, if alert logging is configured in
     * the <a>Firewall</a> <a>LoggingConfiguration</a>. </p> <p>You can use this action
     * to test a rule that you intend to use to drop traffic. You can enable the rule
     * with <code>ALERT</code> action, verify in the logs that the rule is filtering as
     * you want, then change the action to <code>DROP</code>.</p> </li> </ul>
     */
    inline void SetAction(const StatefulAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria. For all actions, Network
     * Firewall performs the specified action and discontinues stateful inspection of
     * the traffic flow. </p> <p>The actions for a stateful rule are defined as
     * follows: </p> <ul> <li> <p> <b>PASS</b> - Permits the packets to go to the
     * intended destination.</p> </li> <li> <p> <b>DROP</b> - Blocks the packets from
     * going to the intended destination and sends an alert log message, if alert
     * logging is configured in the <a>Firewall</a> <a>LoggingConfiguration</a>. </p>
     * </li> <li> <p> <b>ALERT</b> - Permits the packets to go to the intended
     * destination and sends an alert log message, if alert logging is configured in
     * the <a>Firewall</a> <a>LoggingConfiguration</a>. </p> <p>You can use this action
     * to test a rule that you intend to use to drop traffic. You can enable the rule
     * with <code>ALERT</code> action, verify in the logs that the rule is filtering as
     * you want, then change the action to <code>DROP</code>.</p> </li> </ul>
     */
    inline void SetAction(StatefulAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria. For all actions, Network
     * Firewall performs the specified action and discontinues stateful inspection of
     * the traffic flow. </p> <p>The actions for a stateful rule are defined as
     * follows: </p> <ul> <li> <p> <b>PASS</b> - Permits the packets to go to the
     * intended destination.</p> </li> <li> <p> <b>DROP</b> - Blocks the packets from
     * going to the intended destination and sends an alert log message, if alert
     * logging is configured in the <a>Firewall</a> <a>LoggingConfiguration</a>. </p>
     * </li> <li> <p> <b>ALERT</b> - Permits the packets to go to the intended
     * destination and sends an alert log message, if alert logging is configured in
     * the <a>Firewall</a> <a>LoggingConfiguration</a>. </p> <p>You can use this action
     * to test a rule that you intend to use to drop traffic. You can enable the rule
     * with <code>ALERT</code> action, verify in the logs that the rule is filtering as
     * you want, then change the action to <code>DROP</code>.</p> </li> </ul>
     */
    inline StatefulRule& WithAction(const StatefulAction& value) { SetAction(value); return *this;}

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria. For all actions, Network
     * Firewall performs the specified action and discontinues stateful inspection of
     * the traffic flow. </p> <p>The actions for a stateful rule are defined as
     * follows: </p> <ul> <li> <p> <b>PASS</b> - Permits the packets to go to the
     * intended destination.</p> </li> <li> <p> <b>DROP</b> - Blocks the packets from
     * going to the intended destination and sends an alert log message, if alert
     * logging is configured in the <a>Firewall</a> <a>LoggingConfiguration</a>. </p>
     * </li> <li> <p> <b>ALERT</b> - Permits the packets to go to the intended
     * destination and sends an alert log message, if alert logging is configured in
     * the <a>Firewall</a> <a>LoggingConfiguration</a>. </p> <p>You can use this action
     * to test a rule that you intend to use to drop traffic. You can enable the rule
     * with <code>ALERT</code> action, verify in the logs that the rule is filtering as
     * you want, then change the action to <code>DROP</code>.</p> </li> </ul>
     */
    inline StatefulRule& WithAction(StatefulAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The stateful 5-tuple inspection criteria for this rule, used to inspect
     * traffic flows. </p>
     */
    inline const Header& GetHeader() const{ return m_header; }

    /**
     * <p>The stateful 5-tuple inspection criteria for this rule, used to inspect
     * traffic flows. </p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>The stateful 5-tuple inspection criteria for this rule, used to inspect
     * traffic flows. </p>
     */
    inline void SetHeader(const Header& value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>The stateful 5-tuple inspection criteria for this rule, used to inspect
     * traffic flows. </p>
     */
    inline void SetHeader(Header&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }

    /**
     * <p>The stateful 5-tuple inspection criteria for this rule, used to inspect
     * traffic flows. </p>
     */
    inline StatefulRule& WithHeader(const Header& value) { SetHeader(value); return *this;}

    /**
     * <p>The stateful 5-tuple inspection criteria for this rule, used to inspect
     * traffic flows. </p>
     */
    inline StatefulRule& WithHeader(Header&& value) { SetHeader(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<RuleOption>& GetRuleOptions() const{ return m_ruleOptions; }

    /**
     * <p/>
     */
    inline bool RuleOptionsHasBeenSet() const { return m_ruleOptionsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRuleOptions(const Aws::Vector<RuleOption>& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = value; }

    /**
     * <p/>
     */
    inline void SetRuleOptions(Aws::Vector<RuleOption>&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = std::move(value); }

    /**
     * <p/>
     */
    inline StatefulRule& WithRuleOptions(const Aws::Vector<RuleOption>& value) { SetRuleOptions(value); return *this;}

    /**
     * <p/>
     */
    inline StatefulRule& WithRuleOptions(Aws::Vector<RuleOption>&& value) { SetRuleOptions(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline StatefulRule& AddRuleOptions(const RuleOption& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline StatefulRule& AddRuleOptions(RuleOption&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.push_back(std::move(value)); return *this; }

  private:

    StatefulAction m_action;
    bool m_actionHasBeenSet;

    Header m_header;
    bool m_headerHasBeenSet;

    Aws::Vector<RuleOption> m_ruleOptions;
    bool m_ruleOptionsHasBeenSet;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
