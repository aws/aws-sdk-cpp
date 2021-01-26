/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/StatelessRuleGroup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/StatefulRuleGroup.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>The definition of the AWS Network Firewall firewall policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallPolicyDescription">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API NetworkFirewallPolicyDescription
  {
  public:
    NetworkFirewallPolicyDescription();
    NetworkFirewallPolicyDescription(Aws::Utils::Json::JsonView jsonValue);
    NetworkFirewallPolicyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The stateless rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline const Aws::Vector<StatelessRuleGroup>& GetStatelessRuleGroups() const{ return m_statelessRuleGroups; }

    /**
     * <p>The stateless rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline bool StatelessRuleGroupsHasBeenSet() const { return m_statelessRuleGroupsHasBeenSet; }

    /**
     * <p>The stateless rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline void SetStatelessRuleGroups(const Aws::Vector<StatelessRuleGroup>& value) { m_statelessRuleGroupsHasBeenSet = true; m_statelessRuleGroups = value; }

    /**
     * <p>The stateless rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline void SetStatelessRuleGroups(Aws::Vector<StatelessRuleGroup>&& value) { m_statelessRuleGroupsHasBeenSet = true; m_statelessRuleGroups = std::move(value); }

    /**
     * <p>The stateless rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline NetworkFirewallPolicyDescription& WithStatelessRuleGroups(const Aws::Vector<StatelessRuleGroup>& value) { SetStatelessRuleGroups(value); return *this;}

    /**
     * <p>The stateless rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline NetworkFirewallPolicyDescription& WithStatelessRuleGroups(Aws::Vector<StatelessRuleGroup>&& value) { SetStatelessRuleGroups(std::move(value)); return *this;}

    /**
     * <p>The stateless rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessRuleGroups(const StatelessRuleGroup& value) { m_statelessRuleGroupsHasBeenSet = true; m_statelessRuleGroups.push_back(value); return *this; }

    /**
     * <p>The stateless rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessRuleGroups(StatelessRuleGroup&& value) { m_statelessRuleGroupsHasBeenSet = true; m_statelessRuleGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessDefaultActions() const{ return m_statelessDefaultActions; }

    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline bool StatelessDefaultActionsHasBeenSet() const { return m_statelessDefaultActionsHasBeenSet; }

    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline void SetStatelessDefaultActions(const Aws::Vector<Aws::String>& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions = value; }

    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline void SetStatelessDefaultActions(Aws::Vector<Aws::String>&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions = std::move(value); }

    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline NetworkFirewallPolicyDescription& WithStatelessDefaultActions(const Aws::Vector<Aws::String>& value) { SetStatelessDefaultActions(value); return *this;}

    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline NetworkFirewallPolicyDescription& WithStatelessDefaultActions(Aws::Vector<Aws::String>&& value) { SetStatelessDefaultActions(std::move(value)); return *this;}

    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessDefaultActions(const Aws::String& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.push_back(value); return *this; }

    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessDefaultActions(Aws::String&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessDefaultActions(const char* value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.push_back(value); return *this; }


    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessFragmentDefaultActions() const{ return m_statelessFragmentDefaultActions; }

    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline bool StatelessFragmentDefaultActionsHasBeenSet() const { return m_statelessFragmentDefaultActionsHasBeenSet; }

    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline void SetStatelessFragmentDefaultActions(const Aws::Vector<Aws::String>& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions = value; }

    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline void SetStatelessFragmentDefaultActions(Aws::Vector<Aws::String>&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions = std::move(value); }

    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline NetworkFirewallPolicyDescription& WithStatelessFragmentDefaultActions(const Aws::Vector<Aws::String>& value) { SetStatelessFragmentDefaultActions(value); return *this;}

    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline NetworkFirewallPolicyDescription& WithStatelessFragmentDefaultActions(Aws::Vector<Aws::String>&& value) { SetStatelessFragmentDefaultActions(std::move(value)); return *this;}

    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessFragmentDefaultActions(const Aws::String& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.push_back(value); return *this; }

    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessFragmentDefaultActions(Aws::String&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessFragmentDefaultActions(const char* value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.push_back(value); return *this; }


    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessCustomActions() const{ return m_statelessCustomActions; }

    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline bool StatelessCustomActionsHasBeenSet() const { return m_statelessCustomActionsHasBeenSet; }

    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline void SetStatelessCustomActions(const Aws::Vector<Aws::String>& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions = value; }

    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline void SetStatelessCustomActions(Aws::Vector<Aws::String>&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions = std::move(value); }

    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline NetworkFirewallPolicyDescription& WithStatelessCustomActions(const Aws::Vector<Aws::String>& value) { SetStatelessCustomActions(value); return *this;}

    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline NetworkFirewallPolicyDescription& WithStatelessCustomActions(Aws::Vector<Aws::String>&& value) { SetStatelessCustomActions(std::move(value)); return *this;}

    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessCustomActions(const Aws::String& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.push_back(value); return *this; }

    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessCustomActions(Aws::String&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.push_back(std::move(value)); return *this; }

    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline NetworkFirewallPolicyDescription& AddStatelessCustomActions(const char* value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.push_back(value); return *this; }


    /**
     * <p>The stateful rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline const Aws::Vector<StatefulRuleGroup>& GetStatefulRuleGroups() const{ return m_statefulRuleGroups; }

    /**
     * <p>The stateful rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline bool StatefulRuleGroupsHasBeenSet() const { return m_statefulRuleGroupsHasBeenSet; }

    /**
     * <p>The stateful rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline void SetStatefulRuleGroups(const Aws::Vector<StatefulRuleGroup>& value) { m_statefulRuleGroupsHasBeenSet = true; m_statefulRuleGroups = value; }

    /**
     * <p>The stateful rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline void SetStatefulRuleGroups(Aws::Vector<StatefulRuleGroup>&& value) { m_statefulRuleGroupsHasBeenSet = true; m_statefulRuleGroups = std::move(value); }

    /**
     * <p>The stateful rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline NetworkFirewallPolicyDescription& WithStatefulRuleGroups(const Aws::Vector<StatefulRuleGroup>& value) { SetStatefulRuleGroups(value); return *this;}

    /**
     * <p>The stateful rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline NetworkFirewallPolicyDescription& WithStatefulRuleGroups(Aws::Vector<StatefulRuleGroup>&& value) { SetStatefulRuleGroups(std::move(value)); return *this;}

    /**
     * <p>The stateful rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatefulRuleGroups(const StatefulRuleGroup& value) { m_statefulRuleGroupsHasBeenSet = true; m_statefulRuleGroups.push_back(value); return *this; }

    /**
     * <p>The stateful rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline NetworkFirewallPolicyDescription& AddStatefulRuleGroups(StatefulRuleGroup&& value) { m_statefulRuleGroupsHasBeenSet = true; m_statefulRuleGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StatelessRuleGroup> m_statelessRuleGroups;
    bool m_statelessRuleGroupsHasBeenSet;

    Aws::Vector<Aws::String> m_statelessDefaultActions;
    bool m_statelessDefaultActionsHasBeenSet;

    Aws::Vector<Aws::String> m_statelessFragmentDefaultActions;
    bool m_statelessFragmentDefaultActionsHasBeenSet;

    Aws::Vector<Aws::String> m_statelessCustomActions;
    bool m_statelessCustomActionsHasBeenSet;

    Aws::Vector<StatefulRuleGroup> m_statefulRuleGroups;
    bool m_statefulRuleGroupsHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
