﻿/**
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
    AWS_ELASTICLOADBALANCINGV2_API SetRulePrioritiesRequest();

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
    inline const Aws::Vector<RulePriorityPair>& GetRulePriorities() const{ return m_rulePriorities; }
    inline bool RulePrioritiesHasBeenSet() const { return m_rulePrioritiesHasBeenSet; }
    inline void SetRulePriorities(const Aws::Vector<RulePriorityPair>& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities = value; }
    inline void SetRulePriorities(Aws::Vector<RulePriorityPair>&& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities = std::move(value); }
    inline SetRulePrioritiesRequest& WithRulePriorities(const Aws::Vector<RulePriorityPair>& value) { SetRulePriorities(value); return *this;}
    inline SetRulePrioritiesRequest& WithRulePriorities(Aws::Vector<RulePriorityPair>&& value) { SetRulePriorities(std::move(value)); return *this;}
    inline SetRulePrioritiesRequest& AddRulePriorities(const RulePriorityPair& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities.push_back(value); return *this; }
    inline SetRulePrioritiesRequest& AddRulePriorities(RulePriorityPair&& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RulePriorityPair> m_rulePriorities;
    bool m_rulePrioritiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
