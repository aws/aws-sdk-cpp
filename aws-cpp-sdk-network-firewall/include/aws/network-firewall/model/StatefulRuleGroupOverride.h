/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/OverrideAction.h>
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
   * <p>The setting that allows the policy owner to change the behavior of the rule
   * group within a policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatefulRuleGroupOverride">AWS
   * API Reference</a></p>
   */
  class StatefulRuleGroupOverride
  {
  public:
    AWS_NETWORKFIREWALL_API StatefulRuleGroupOverride();
    AWS_NETWORKFIREWALL_API StatefulRuleGroupOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API StatefulRuleGroupOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline const OverrideAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline void SetAction(const OverrideAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline void SetAction(OverrideAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline StatefulRuleGroupOverride& WithAction(const OverrideAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that changes the rule group from <code>DROP</code> to
     * <code>ALERT</code>. This only applies to managed rule groups.</p>
     */
    inline StatefulRuleGroupOverride& WithAction(OverrideAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    OverrideAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
