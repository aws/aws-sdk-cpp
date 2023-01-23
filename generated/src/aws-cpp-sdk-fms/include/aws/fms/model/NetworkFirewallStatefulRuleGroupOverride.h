/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/NetworkFirewallOverrideAction.h>
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
   * <p>The setting that allows the policy owner to change the behavior of the rule
   * group within a policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallStatefulRuleGroupOverride">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallStatefulRuleGroupOverride
  {
  public:
    AWS_FMS_API NetworkFirewallStatefulRuleGroupOverride();
    AWS_FMS_API NetworkFirewallStatefulRuleGroupOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallStatefulRuleGroupOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline const NetworkFirewallOverrideAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline void SetAction(const NetworkFirewallOverrideAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline void SetAction(NetworkFirewallOverrideAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline NetworkFirewallStatefulRuleGroupOverride& WithAction(const NetworkFirewallOverrideAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline NetworkFirewallStatefulRuleGroupOverride& WithAction(NetworkFirewallOverrideAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    NetworkFirewallOverrideAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
