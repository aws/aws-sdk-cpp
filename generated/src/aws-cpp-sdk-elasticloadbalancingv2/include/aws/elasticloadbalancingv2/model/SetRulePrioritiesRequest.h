/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/RulePriorityPair.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class SetRulePrioritiesRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API SetRulePrioritiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetRulePriorities"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The rule priorities.</p>
     */
    inline const Aws::Vector<RulePriorityPair>& GetRulePriorities() const { return m_rulePriorities; }
    inline bool RulePrioritiesHasBeenSet() const { return m_rulePrioritiesHasBeenSet; }
    template<typename RulePrioritiesT = Aws::Vector<RulePriorityPair>>
    void SetRulePriorities(RulePrioritiesT&& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities = std::forward<RulePrioritiesT>(value); }
    template<typename RulePrioritiesT = Aws::Vector<RulePriorityPair>>
    SetRulePrioritiesRequest& WithRulePriorities(RulePrioritiesT&& value) { SetRulePriorities(std::forward<RulePrioritiesT>(value)); return *this;}
    template<typename RulePrioritiesT = RulePriorityPair>
    SetRulePrioritiesRequest& AddRulePriorities(RulePrioritiesT&& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities.emplace_back(std::forward<RulePrioritiesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RulePriorityPair> m_rulePriorities;
    bool m_rulePrioritiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
