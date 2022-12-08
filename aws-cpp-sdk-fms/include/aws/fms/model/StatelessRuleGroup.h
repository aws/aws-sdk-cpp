/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Network Firewall stateless rule group, used in a
   * <a>NetworkFirewallPolicyDescription</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/StatelessRuleGroup">AWS
   * API Reference</a></p>
   */
  class StatelessRuleGroup
  {
  public:
    AWS_FMS_API StatelessRuleGroup();
    AWS_FMS_API StatelessRuleGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API StatelessRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupName() const{ return m_ruleGroupName; }

    /**
     * <p>The name of the rule group.</p>
     */
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }

    /**
     * <p>The name of the rule group.</p>
     */
    inline void SetRuleGroupName(const Aws::String& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = value; }

    /**
     * <p>The name of the rule group.</p>
     */
    inline void SetRuleGroupName(Aws::String&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::move(value); }

    /**
     * <p>The name of the rule group.</p>
     */
    inline void SetRuleGroupName(const char* value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName.assign(value); }

    /**
     * <p>The name of the rule group.</p>
     */
    inline StatelessRuleGroup& WithRuleGroupName(const Aws::String& value) { SetRuleGroupName(value); return *this;}

    /**
     * <p>The name of the rule group.</p>
     */
    inline StatelessRuleGroup& WithRuleGroupName(Aws::String&& value) { SetRuleGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule group.</p>
     */
    inline StatelessRuleGroup& WithRuleGroupName(const char* value) { SetRuleGroupName(value); return *this;}


    /**
     * <p>The resource ID of the rule group.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource ID of the rule group.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource ID of the rule group.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource ID of the rule group.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource ID of the rule group.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource ID of the rule group.</p>
     */
    inline StatelessRuleGroup& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource ID of the rule group.</p>
     */
    inline StatelessRuleGroup& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the rule group.</p>
     */
    inline StatelessRuleGroup& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The priority of the rule group. Network Firewall evaluates the stateless rule
     * groups in a firewall policy starting from the lowest priority setting. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the rule group. Network Firewall evaluates the stateless rule
     * groups in a firewall policy starting from the lowest priority setting. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority of the rule group. Network Firewall evaluates the stateless rule
     * groups in a firewall policy starting from the lowest priority setting. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the rule group. Network Firewall evaluates the stateless rule
     * groups in a firewall policy starting from the lowest priority setting. </p>
     */
    inline StatelessRuleGroup& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
