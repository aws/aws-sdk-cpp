/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICLOADBALANCINGV2_API SetRulePrioritiesRequest : public ElasticLoadBalancingv2Request
  {
  public:
    SetRulePrioritiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetRulePriorities"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The rule priorities.</p>
     */
    inline const Aws::Vector<RulePriorityPair>& GetRulePriorities() const{ return m_rulePriorities; }

    /**
     * <p>The rule priorities.</p>
     */
    inline bool RulePrioritiesHasBeenSet() const { return m_rulePrioritiesHasBeenSet; }

    /**
     * <p>The rule priorities.</p>
     */
    inline void SetRulePriorities(const Aws::Vector<RulePriorityPair>& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities = value; }

    /**
     * <p>The rule priorities.</p>
     */
    inline void SetRulePriorities(Aws::Vector<RulePriorityPair>&& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities = std::move(value); }

    /**
     * <p>The rule priorities.</p>
     */
    inline SetRulePrioritiesRequest& WithRulePriorities(const Aws::Vector<RulePriorityPair>& value) { SetRulePriorities(value); return *this;}

    /**
     * <p>The rule priorities.</p>
     */
    inline SetRulePrioritiesRequest& WithRulePriorities(Aws::Vector<RulePriorityPair>&& value) { SetRulePriorities(std::move(value)); return *this;}

    /**
     * <p>The rule priorities.</p>
     */
    inline SetRulePrioritiesRequest& AddRulePriorities(const RulePriorityPair& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities.push_back(value); return *this; }

    /**
     * <p>The rule priorities.</p>
     */
    inline SetRulePrioritiesRequest& AddRulePriorities(RulePriorityPair&& value) { m_rulePrioritiesHasBeenSet = true; m_rulePriorities.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RulePriorityPair> m_rulePriorities;
    bool m_rulePrioritiesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
