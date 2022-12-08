/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/StatefulRuleGroupOverride.h>
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
   * <p>Identifier for a single stateful rule group, used in a firewall policy to
   * refer to a rule group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatefulRuleGroupReference">AWS
   * API Reference</a></p>
   */
  class StatefulRuleGroupReference
  {
  public:
    AWS_NETWORKFIREWALL_API StatefulRuleGroupReference();
    AWS_NETWORKFIREWALL_API StatefulRuleGroupReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API StatefulRuleGroupReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the stateful rule group.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateful rule group.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateful rule group.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateful rule group.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateful rule group.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateful rule group.</p>
     */
    inline StatefulRuleGroupReference& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stateful rule group.</p>
     */
    inline StatefulRuleGroupReference& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stateful rule group.</p>
     */
    inline StatefulRuleGroupReference& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>An integer setting that indicates the order in which to run the stateful rule
     * groups in a single <a>FirewallPolicy</a>. This setting only applies to firewall
     * policies that specify the <code>STRICT_ORDER</code> rule order in the stateful
     * engine options settings.</p> <p>Network Firewall evalutes each stateful rule
     * group against a packet starting with the group that has the lowest priority
     * setting. You must ensure that the priority settings are unique within each
     * policy.</p> <p>You can change the priority settings of your rule groups at any
     * time. To make it easier to insert rule groups later, number them so there's a
     * wide range in between, for example use 100, 200, and so on. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>An integer setting that indicates the order in which to run the stateful rule
     * groups in a single <a>FirewallPolicy</a>. This setting only applies to firewall
     * policies that specify the <code>STRICT_ORDER</code> rule order in the stateful
     * engine options settings.</p> <p>Network Firewall evalutes each stateful rule
     * group against a packet starting with the group that has the lowest priority
     * setting. You must ensure that the priority settings are unique within each
     * policy.</p> <p>You can change the priority settings of your rule groups at any
     * time. To make it easier to insert rule groups later, number them so there's a
     * wide range in between, for example use 100, 200, and so on. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>An integer setting that indicates the order in which to run the stateful rule
     * groups in a single <a>FirewallPolicy</a>. This setting only applies to firewall
     * policies that specify the <code>STRICT_ORDER</code> rule order in the stateful
     * engine options settings.</p> <p>Network Firewall evalutes each stateful rule
     * group against a packet starting with the group that has the lowest priority
     * setting. You must ensure that the priority settings are unique within each
     * policy.</p> <p>You can change the priority settings of your rule groups at any
     * time. To make it easier to insert rule groups later, number them so there's a
     * wide range in between, for example use 100, 200, and so on. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>An integer setting that indicates the order in which to run the stateful rule
     * groups in a single <a>FirewallPolicy</a>. This setting only applies to firewall
     * policies that specify the <code>STRICT_ORDER</code> rule order in the stateful
     * engine options settings.</p> <p>Network Firewall evalutes each stateful rule
     * group against a packet starting with the group that has the lowest priority
     * setting. You must ensure that the priority settings are unique within each
     * policy.</p> <p>You can change the priority settings of your rule groups at any
     * time. To make it easier to insert rule groups later, number them so there's a
     * wide range in between, for example use 100, 200, and so on. </p>
     */
    inline StatefulRuleGroupReference& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The action that allows the policy owner to override the behavior of the rule
     * group within a policy.</p>
     */
    inline const StatefulRuleGroupOverride& GetOverride() const{ return m_override; }

    /**
     * <p>The action that allows the policy owner to override the behavior of the rule
     * group within a policy.</p>
     */
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }

    /**
     * <p>The action that allows the policy owner to override the behavior of the rule
     * group within a policy.</p>
     */
    inline void SetOverride(const StatefulRuleGroupOverride& value) { m_overrideHasBeenSet = true; m_override = value; }

    /**
     * <p>The action that allows the policy owner to override the behavior of the rule
     * group within a policy.</p>
     */
    inline void SetOverride(StatefulRuleGroupOverride&& value) { m_overrideHasBeenSet = true; m_override = std::move(value); }

    /**
     * <p>The action that allows the policy owner to override the behavior of the rule
     * group within a policy.</p>
     */
    inline StatefulRuleGroupReference& WithOverride(const StatefulRuleGroupOverride& value) { SetOverride(value); return *this;}

    /**
     * <p>The action that allows the policy owner to override the behavior of the rule
     * group within a policy.</p>
     */
    inline StatefulRuleGroupReference& WithOverride(StatefulRuleGroupOverride&& value) { SetOverride(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    StatefulRuleGroupOverride m_override;
    bool m_overrideHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
