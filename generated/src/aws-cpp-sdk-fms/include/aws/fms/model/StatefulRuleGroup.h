/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/NetworkFirewallStatefulRuleGroupOverride.h>
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
   * <p>Network Firewall stateful rule group, used in a
   * <a>NetworkFirewallPolicyDescription</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/StatefulRuleGroup">AWS
   * API Reference</a></p>
   */
  class StatefulRuleGroup
  {
  public:
    AWS_FMS_API StatefulRuleGroup() = default;
    AWS_FMS_API StatefulRuleGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API StatefulRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupName() const { return m_ruleGroupName; }
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }
    template<typename RuleGroupNameT = Aws::String>
    void SetRuleGroupName(RuleGroupNameT&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::forward<RuleGroupNameT>(value); }
    template<typename RuleGroupNameT = Aws::String>
    StatefulRuleGroup& WithRuleGroupName(RuleGroupNameT&& value) { SetRuleGroupName(std::forward<RuleGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the rule group.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    StatefulRuleGroup& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer setting that indicates the order in which to run the stateful rule
     * groups in a single Network Firewall firewall policy. This setting only applies
     * to firewall policies that specify the <code>STRICT_ORDER</code> rule order in
     * the stateful engine options settings.</p> <p> Network Firewall evalutes each
     * stateful rule group against a packet starting with the group that has the lowest
     * priority setting. You must ensure that the priority settings are unique within
     * each policy. For information about </p> <p> You can change the priority settings
     * of your rule groups at any time. To make it easier to insert rule groups later,
     * number them so there's a wide range in between, for example use 100, 200, and so
     * on. </p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline StatefulRuleGroup& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that allows the policy owner to override the behavior of the rule
     * group within a policy.</p>
     */
    inline const NetworkFirewallStatefulRuleGroupOverride& GetOverride() const { return m_override; }
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }
    template<typename OverrideT = NetworkFirewallStatefulRuleGroupOverride>
    void SetOverride(OverrideT&& value) { m_overrideHasBeenSet = true; m_override = std::forward<OverrideT>(value); }
    template<typename OverrideT = NetworkFirewallStatefulRuleGroupOverride>
    StatefulRuleGroup& WithOverride(OverrideT&& value) { SetOverride(std::forward<OverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    NetworkFirewallStatefulRuleGroupOverride m_override;
    bool m_overrideHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
