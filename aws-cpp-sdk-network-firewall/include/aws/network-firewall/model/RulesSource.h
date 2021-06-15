/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/RulesSourceList.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/StatelessRulesAndCustomActions.h>
#include <aws/network-firewall/model/StatefulRule.h>
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
   * <p>The stateless or stateful rules definitions for use in a single rule group.
   * Each rule group requires a single <code>RulesSource</code>. You can use an
   * instance of this for either stateless rules or stateful rules. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RulesSource">AWS
   * API Reference</a></p>
   */
  class AWS_NETWORKFIREWALL_API RulesSource
  {
  public:
    RulesSource();
    RulesSource(Aws::Utils::Json::JsonView jsonValue);
    RulesSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules. Suricata is an open-source network IPS that
     * includes a standard rule-based language for network traffic inspection.</p>
     * <p>These rules contain the inspection criteria and the action to take for
     * traffic that matches the criteria, so this type of rule group doesn't have a
     * separate action setting.</p>
     */
    inline const Aws::String& GetRulesString() const{ return m_rulesString; }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules. Suricata is an open-source network IPS that
     * includes a standard rule-based language for network traffic inspection.</p>
     * <p>These rules contain the inspection criteria and the action to take for
     * traffic that matches the criteria, so this type of rule group doesn't have a
     * separate action setting.</p>
     */
    inline bool RulesStringHasBeenSet() const { return m_rulesStringHasBeenSet; }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules. Suricata is an open-source network IPS that
     * includes a standard rule-based language for network traffic inspection.</p>
     * <p>These rules contain the inspection criteria and the action to take for
     * traffic that matches the criteria, so this type of rule group doesn't have a
     * separate action setting.</p>
     */
    inline void SetRulesString(const Aws::String& value) { m_rulesStringHasBeenSet = true; m_rulesString = value; }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules. Suricata is an open-source network IPS that
     * includes a standard rule-based language for network traffic inspection.</p>
     * <p>These rules contain the inspection criteria and the action to take for
     * traffic that matches the criteria, so this type of rule group doesn't have a
     * separate action setting.</p>
     */
    inline void SetRulesString(Aws::String&& value) { m_rulesStringHasBeenSet = true; m_rulesString = std::move(value); }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules. Suricata is an open-source network IPS that
     * includes a standard rule-based language for network traffic inspection.</p>
     * <p>These rules contain the inspection criteria and the action to take for
     * traffic that matches the criteria, so this type of rule group doesn't have a
     * separate action setting.</p>
     */
    inline void SetRulesString(const char* value) { m_rulesStringHasBeenSet = true; m_rulesString.assign(value); }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules. Suricata is an open-source network IPS that
     * includes a standard rule-based language for network traffic inspection.</p>
     * <p>These rules contain the inspection criteria and the action to take for
     * traffic that matches the criteria, so this type of rule group doesn't have a
     * separate action setting.</p>
     */
    inline RulesSource& WithRulesString(const Aws::String& value) { SetRulesString(value); return *this;}

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules. Suricata is an open-source network IPS that
     * includes a standard rule-based language for network traffic inspection.</p>
     * <p>These rules contain the inspection criteria and the action to take for
     * traffic that matches the criteria, so this type of rule group doesn't have a
     * separate action setting.</p>
     */
    inline RulesSource& WithRulesString(Aws::String&& value) { SetRulesString(std::move(value)); return *this;}

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules. Suricata is an open-source network IPS that
     * includes a standard rule-based language for network traffic inspection.</p>
     * <p>These rules contain the inspection criteria and the action to take for
     * traffic that matches the criteria, so this type of rule group doesn't have a
     * separate action setting.</p>
     */
    inline RulesSource& WithRulesString(const char* value) { SetRulesString(value); return *this;}


    /**
     * <p>Stateful inspection criteria for a domain list rule group. </p>
     */
    inline const RulesSourceList& GetRulesSourceList() const{ return m_rulesSourceList; }

    /**
     * <p>Stateful inspection criteria for a domain list rule group. </p>
     */
    inline bool RulesSourceListHasBeenSet() const { return m_rulesSourceListHasBeenSet; }

    /**
     * <p>Stateful inspection criteria for a domain list rule group. </p>
     */
    inline void SetRulesSourceList(const RulesSourceList& value) { m_rulesSourceListHasBeenSet = true; m_rulesSourceList = value; }

    /**
     * <p>Stateful inspection criteria for a domain list rule group. </p>
     */
    inline void SetRulesSourceList(RulesSourceList&& value) { m_rulesSourceListHasBeenSet = true; m_rulesSourceList = std::move(value); }

    /**
     * <p>Stateful inspection criteria for a domain list rule group. </p>
     */
    inline RulesSource& WithRulesSourceList(const RulesSourceList& value) { SetRulesSourceList(value); return *this;}

    /**
     * <p>Stateful inspection criteria for a domain list rule group. </p>
     */
    inline RulesSource& WithRulesSourceList(RulesSourceList&& value) { SetRulesSourceList(std::move(value)); return *this;}


    /**
     * <p>The 5-tuple stateful inspection criteria. This contains an array of
     * individual 5-tuple stateful rules to be used together in a stateful rule group.
     * </p>
     */
    inline const Aws::Vector<StatefulRule>& GetStatefulRules() const{ return m_statefulRules; }

    /**
     * <p>The 5-tuple stateful inspection criteria. This contains an array of
     * individual 5-tuple stateful rules to be used together in a stateful rule group.
     * </p>
     */
    inline bool StatefulRulesHasBeenSet() const { return m_statefulRulesHasBeenSet; }

    /**
     * <p>The 5-tuple stateful inspection criteria. This contains an array of
     * individual 5-tuple stateful rules to be used together in a stateful rule group.
     * </p>
     */
    inline void SetStatefulRules(const Aws::Vector<StatefulRule>& value) { m_statefulRulesHasBeenSet = true; m_statefulRules = value; }

    /**
     * <p>The 5-tuple stateful inspection criteria. This contains an array of
     * individual 5-tuple stateful rules to be used together in a stateful rule group.
     * </p>
     */
    inline void SetStatefulRules(Aws::Vector<StatefulRule>&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules = std::move(value); }

    /**
     * <p>The 5-tuple stateful inspection criteria. This contains an array of
     * individual 5-tuple stateful rules to be used together in a stateful rule group.
     * </p>
     */
    inline RulesSource& WithStatefulRules(const Aws::Vector<StatefulRule>& value) { SetStatefulRules(value); return *this;}

    /**
     * <p>The 5-tuple stateful inspection criteria. This contains an array of
     * individual 5-tuple stateful rules to be used together in a stateful rule group.
     * </p>
     */
    inline RulesSource& WithStatefulRules(Aws::Vector<StatefulRule>&& value) { SetStatefulRules(std::move(value)); return *this;}

    /**
     * <p>The 5-tuple stateful inspection criteria. This contains an array of
     * individual 5-tuple stateful rules to be used together in a stateful rule group.
     * </p>
     */
    inline RulesSource& AddStatefulRules(const StatefulRule& value) { m_statefulRulesHasBeenSet = true; m_statefulRules.push_back(value); return *this; }

    /**
     * <p>The 5-tuple stateful inspection criteria. This contains an array of
     * individual 5-tuple stateful rules to be used together in a stateful rule group.
     * </p>
     */
    inline RulesSource& AddStatefulRules(StatefulRule&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules.push_back(std::move(value)); return *this; }


    /**
     * <p>Stateless inspection criteria to be used in a stateless rule group. </p>
     */
    inline const StatelessRulesAndCustomActions& GetStatelessRulesAndCustomActions() const{ return m_statelessRulesAndCustomActions; }

    /**
     * <p>Stateless inspection criteria to be used in a stateless rule group. </p>
     */
    inline bool StatelessRulesAndCustomActionsHasBeenSet() const { return m_statelessRulesAndCustomActionsHasBeenSet; }

    /**
     * <p>Stateless inspection criteria to be used in a stateless rule group. </p>
     */
    inline void SetStatelessRulesAndCustomActions(const StatelessRulesAndCustomActions& value) { m_statelessRulesAndCustomActionsHasBeenSet = true; m_statelessRulesAndCustomActions = value; }

    /**
     * <p>Stateless inspection criteria to be used in a stateless rule group. </p>
     */
    inline void SetStatelessRulesAndCustomActions(StatelessRulesAndCustomActions&& value) { m_statelessRulesAndCustomActionsHasBeenSet = true; m_statelessRulesAndCustomActions = std::move(value); }

    /**
     * <p>Stateless inspection criteria to be used in a stateless rule group. </p>
     */
    inline RulesSource& WithStatelessRulesAndCustomActions(const StatelessRulesAndCustomActions& value) { SetStatelessRulesAndCustomActions(value); return *this;}

    /**
     * <p>Stateless inspection criteria to be used in a stateless rule group. </p>
     */
    inline RulesSource& WithStatelessRulesAndCustomActions(StatelessRulesAndCustomActions&& value) { SetStatelessRulesAndCustomActions(std::move(value)); return *this;}

  private:

    Aws::String m_rulesString;
    bool m_rulesStringHasBeenSet;

    RulesSourceList m_rulesSourceList;
    bool m_rulesSourceListHasBeenSet;

    Aws::Vector<StatefulRule> m_statefulRules;
    bool m_statefulRulesHasBeenSet;

    StatelessRulesAndCustomActions m_statelessRulesAndCustomActions;
    bool m_statelessRulesAndCustomActionsHasBeenSet;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
