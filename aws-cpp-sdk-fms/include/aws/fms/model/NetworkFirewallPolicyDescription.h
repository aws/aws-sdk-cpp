/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/StatefulEngineOptions.h>
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
   * <p>The definition of the Network Firewall firewall policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallPolicyDescription">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallPolicyDescription
  {
  public:
    AWS_FMS_API NetworkFirewallPolicyDescription();
    AWS_FMS_API NetworkFirewallPolicyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallPolicyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetStatefulDefaultActions() const{ return m_statefulDefaultActions; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline bool StatefulDefaultActionsHasBeenSet() const { return m_statefulDefaultActionsHasBeenSet; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline void SetStatefulDefaultActions(const Aws::Vector<Aws::String>& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions = value; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline void SetStatefulDefaultActions(Aws::Vector<Aws::String>&& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions = std::move(value); }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline NetworkFirewallPolicyDescription& WithStatefulDefaultActions(const Aws::Vector<Aws::String>& value) { SetStatefulDefaultActions(value); return *this;}

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline NetworkFirewallPolicyDescription& WithStatefulDefaultActions(Aws::Vector<Aws::String>&& value) { SetStatefulDefaultActions(std::move(value)); return *this;}

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline NetworkFirewallPolicyDescription& AddStatefulDefaultActions(const Aws::String& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions.push_back(value); return *this; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline NetworkFirewallPolicyDescription& AddStatefulDefaultActions(Aws::String&& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline NetworkFirewallPolicyDescription& AddStatefulDefaultActions(const char* value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions.push_back(value); return *this; }


    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline const StatefulEngineOptions& GetStatefulEngineOptions() const{ return m_statefulEngineOptions; }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline bool StatefulEngineOptionsHasBeenSet() const { return m_statefulEngineOptionsHasBeenSet; }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline void SetStatefulEngineOptions(const StatefulEngineOptions& value) { m_statefulEngineOptionsHasBeenSet = true; m_statefulEngineOptions = value; }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline void SetStatefulEngineOptions(StatefulEngineOptions&& value) { m_statefulEngineOptionsHasBeenSet = true; m_statefulEngineOptions = std::move(value); }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline NetworkFirewallPolicyDescription& WithStatefulEngineOptions(const StatefulEngineOptions& value) { SetStatefulEngineOptions(value); return *this;}

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline NetworkFirewallPolicyDescription& WithStatefulEngineOptions(StatefulEngineOptions&& value) { SetStatefulEngineOptions(std::move(value)); return *this;}

  private:

    Aws::Vector<StatelessRuleGroup> m_statelessRuleGroups;
    bool m_statelessRuleGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_statelessDefaultActions;
    bool m_statelessDefaultActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_statelessFragmentDefaultActions;
    bool m_statelessFragmentDefaultActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_statelessCustomActions;
    bool m_statelessCustomActionsHasBeenSet = false;

    Aws::Vector<StatefulRuleGroup> m_statefulRuleGroups;
    bool m_statefulRuleGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_statefulDefaultActions;
    bool m_statefulDefaultActionsHasBeenSet = false;

    StatefulEngineOptions m_statefulEngineOptions;
    bool m_statefulEngineOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
