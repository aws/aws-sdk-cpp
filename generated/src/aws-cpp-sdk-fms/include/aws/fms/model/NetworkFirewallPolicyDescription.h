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
    AWS_FMS_API NetworkFirewallPolicyDescription() = default;
    AWS_FMS_API NetworkFirewallPolicyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallPolicyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stateless rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline const Aws::Vector<StatelessRuleGroup>& GetStatelessRuleGroups() const { return m_statelessRuleGroups; }
    inline bool StatelessRuleGroupsHasBeenSet() const { return m_statelessRuleGroupsHasBeenSet; }
    template<typename StatelessRuleGroupsT = Aws::Vector<StatelessRuleGroup>>
    void SetStatelessRuleGroups(StatelessRuleGroupsT&& value) { m_statelessRuleGroupsHasBeenSet = true; m_statelessRuleGroups = std::forward<StatelessRuleGroupsT>(value); }
    template<typename StatelessRuleGroupsT = Aws::Vector<StatelessRuleGroup>>
    NetworkFirewallPolicyDescription& WithStatelessRuleGroups(StatelessRuleGroupsT&& value) { SetStatelessRuleGroups(std::forward<StatelessRuleGroupsT>(value)); return *this;}
    template<typename StatelessRuleGroupsT = StatelessRuleGroup>
    NetworkFirewallPolicyDescription& AddStatelessRuleGroups(StatelessRuleGroupsT&& value) { m_statelessRuleGroupsHasBeenSet = true; m_statelessRuleGroups.emplace_back(std::forward<StatelessRuleGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to take on packets that don't match any of the stateless rule
     * groups. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessDefaultActions() const { return m_statelessDefaultActions; }
    inline bool StatelessDefaultActionsHasBeenSet() const { return m_statelessDefaultActionsHasBeenSet; }
    template<typename StatelessDefaultActionsT = Aws::Vector<Aws::String>>
    void SetStatelessDefaultActions(StatelessDefaultActionsT&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions = std::forward<StatelessDefaultActionsT>(value); }
    template<typename StatelessDefaultActionsT = Aws::Vector<Aws::String>>
    NetworkFirewallPolicyDescription& WithStatelessDefaultActions(StatelessDefaultActionsT&& value) { SetStatelessDefaultActions(std::forward<StatelessDefaultActionsT>(value)); return *this;}
    template<typename StatelessDefaultActionsT = Aws::String>
    NetworkFirewallPolicyDescription& AddStatelessDefaultActions(StatelessDefaultActionsT&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.emplace_back(std::forward<StatelessDefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to take on packet fragments that don't match any of the stateless
     * rule groups. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessFragmentDefaultActions() const { return m_statelessFragmentDefaultActions; }
    inline bool StatelessFragmentDefaultActionsHasBeenSet() const { return m_statelessFragmentDefaultActionsHasBeenSet; }
    template<typename StatelessFragmentDefaultActionsT = Aws::Vector<Aws::String>>
    void SetStatelessFragmentDefaultActions(StatelessFragmentDefaultActionsT&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions = std::forward<StatelessFragmentDefaultActionsT>(value); }
    template<typename StatelessFragmentDefaultActionsT = Aws::Vector<Aws::String>>
    NetworkFirewallPolicyDescription& WithStatelessFragmentDefaultActions(StatelessFragmentDefaultActionsT&& value) { SetStatelessFragmentDefaultActions(std::forward<StatelessFragmentDefaultActionsT>(value)); return *this;}
    template<typename StatelessFragmentDefaultActionsT = Aws::String>
    NetworkFirewallPolicyDescription& AddStatelessFragmentDefaultActions(StatelessFragmentDefaultActionsT&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.emplace_back(std::forward<StatelessFragmentDefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Names of custom actions that are available for use in the stateless default
     * actions settings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessCustomActions() const { return m_statelessCustomActions; }
    inline bool StatelessCustomActionsHasBeenSet() const { return m_statelessCustomActionsHasBeenSet; }
    template<typename StatelessCustomActionsT = Aws::Vector<Aws::String>>
    void SetStatelessCustomActions(StatelessCustomActionsT&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions = std::forward<StatelessCustomActionsT>(value); }
    template<typename StatelessCustomActionsT = Aws::Vector<Aws::String>>
    NetworkFirewallPolicyDescription& WithStatelessCustomActions(StatelessCustomActionsT&& value) { SetStatelessCustomActions(std::forward<StatelessCustomActionsT>(value)); return *this;}
    template<typename StatelessCustomActionsT = Aws::String>
    NetworkFirewallPolicyDescription& AddStatelessCustomActions(StatelessCustomActionsT&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.emplace_back(std::forward<StatelessCustomActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stateful rule groups that are used in the Network Firewall firewall
     * policy. </p>
     */
    inline const Aws::Vector<StatefulRuleGroup>& GetStatefulRuleGroups() const { return m_statefulRuleGroups; }
    inline bool StatefulRuleGroupsHasBeenSet() const { return m_statefulRuleGroupsHasBeenSet; }
    template<typename StatefulRuleGroupsT = Aws::Vector<StatefulRuleGroup>>
    void SetStatefulRuleGroups(StatefulRuleGroupsT&& value) { m_statefulRuleGroupsHasBeenSet = true; m_statefulRuleGroups = std::forward<StatefulRuleGroupsT>(value); }
    template<typename StatefulRuleGroupsT = Aws::Vector<StatefulRuleGroup>>
    NetworkFirewallPolicyDescription& WithStatefulRuleGroups(StatefulRuleGroupsT&& value) { SetStatefulRuleGroups(std::forward<StatefulRuleGroupsT>(value)); return *this;}
    template<typename StatefulRuleGroupsT = StatefulRuleGroup>
    NetworkFirewallPolicyDescription& AddStatefulRuleGroups(StatefulRuleGroupsT&& value) { m_statefulRuleGroupsHasBeenSet = true; m_statefulRuleGroups.emplace_back(std::forward<StatefulRuleGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p> Valid values of the stateful default action: </p>
     * <ul> <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li>
     * <li> <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetStatefulDefaultActions() const { return m_statefulDefaultActions; }
    inline bool StatefulDefaultActionsHasBeenSet() const { return m_statefulDefaultActionsHasBeenSet; }
    template<typename StatefulDefaultActionsT = Aws::Vector<Aws::String>>
    void SetStatefulDefaultActions(StatefulDefaultActionsT&& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions = std::forward<StatefulDefaultActionsT>(value); }
    template<typename StatefulDefaultActionsT = Aws::Vector<Aws::String>>
    NetworkFirewallPolicyDescription& WithStatefulDefaultActions(StatefulDefaultActionsT&& value) { SetStatefulDefaultActions(std::forward<StatefulDefaultActionsT>(value)); return *this;}
    template<typename StatefulDefaultActionsT = Aws::String>
    NetworkFirewallPolicyDescription& AddStatefulDefaultActions(StatefulDefaultActionsT&& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions.emplace_back(std::forward<StatefulDefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline const StatefulEngineOptions& GetStatefulEngineOptions() const { return m_statefulEngineOptions; }
    inline bool StatefulEngineOptionsHasBeenSet() const { return m_statefulEngineOptionsHasBeenSet; }
    template<typename StatefulEngineOptionsT = StatefulEngineOptions>
    void SetStatefulEngineOptions(StatefulEngineOptionsT&& value) { m_statefulEngineOptionsHasBeenSet = true; m_statefulEngineOptions = std::forward<StatefulEngineOptionsT>(value); }
    template<typename StatefulEngineOptionsT = StatefulEngineOptions>
    NetworkFirewallPolicyDescription& WithStatefulEngineOptions(StatefulEngineOptionsT&& value) { SetStatefulEngineOptions(std::forward<StatefulEngineOptionsT>(value)); return *this;}
    ///@}
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
