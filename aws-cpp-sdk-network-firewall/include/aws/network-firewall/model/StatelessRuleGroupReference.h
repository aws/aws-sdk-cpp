/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Identifier for a single stateless rule group, used in a firewall policy to
   * refer to the rule group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatelessRuleGroupReference">AWS
   * API Reference</a></p>
   */
  class StatelessRuleGroupReference
  {
  public:
    AWS_NETWORKFIREWALL_API StatelessRuleGroupReference();
    AWS_NETWORKFIREWALL_API StatelessRuleGroupReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API StatelessRuleGroupReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the stateless rule group.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateless rule group.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateless rule group.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateless rule group.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateless rule group.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stateless rule group.</p>
     */
    inline StatelessRuleGroupReference& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stateless rule group.</p>
     */
    inline StatelessRuleGroupReference& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stateless rule group.</p>
     */
    inline StatelessRuleGroupReference& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>An integer setting that indicates the order in which to run the stateless
     * rule groups in a single <a>FirewallPolicy</a>. Network Firewall applies each
     * stateless rule group to a packet starting with the group that has the lowest
     * priority setting. You must ensure that the priority settings are unique within
     * each policy.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>An integer setting that indicates the order in which to run the stateless
     * rule groups in a single <a>FirewallPolicy</a>. Network Firewall applies each
     * stateless rule group to a packet starting with the group that has the lowest
     * priority setting. You must ensure that the priority settings are unique within
     * each policy.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>An integer setting that indicates the order in which to run the stateless
     * rule groups in a single <a>FirewallPolicy</a>. Network Firewall applies each
     * stateless rule group to a packet starting with the group that has the lowest
     * priority setting. You must ensure that the priority settings are unique within
     * each policy.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>An integer setting that indicates the order in which to run the stateless
     * rule groups in a single <a>FirewallPolicy</a>. Network Firewall applies each
     * stateless rule group to a packet starting with the group that has the lowest
     * priority setting. You must ensure that the priority settings are unique within
     * each policy.</p>
     */
    inline StatelessRuleGroupReference& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
