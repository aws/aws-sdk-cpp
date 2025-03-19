/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class DescribeRulesRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRules"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const { return m_listenerArn; }
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
    template<typename ListenerArnT = Aws::String>
    void SetListenerArn(ListenerArnT&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::forward<ListenerArnT>(value); }
    template<typename ListenerArnT = Aws::String>
    DescribeRulesRequest& WithListenerArn(ListenerArnT&& value) { SetListenerArn(std::forward<ListenerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleArns() const { return m_ruleArns; }
    inline bool RuleArnsHasBeenSet() const { return m_ruleArnsHasBeenSet; }
    template<typename RuleArnsT = Aws::Vector<Aws::String>>
    void SetRuleArns(RuleArnsT&& value) { m_ruleArnsHasBeenSet = true; m_ruleArns = std::forward<RuleArnsT>(value); }
    template<typename RuleArnsT = Aws::Vector<Aws::String>>
    DescribeRulesRequest& WithRuleArns(RuleArnsT&& value) { SetRuleArns(std::forward<RuleArnsT>(value)); return *this;}
    template<typename RuleArnsT = Aws::String>
    DescribeRulesRequest& AddRuleArns(RuleArnsT&& value) { m_ruleArnsHasBeenSet = true; m_ruleArns.emplace_back(std::forward<RuleArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeRulesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline DescribeRulesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_ruleArns;
    bool m_ruleArnsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
