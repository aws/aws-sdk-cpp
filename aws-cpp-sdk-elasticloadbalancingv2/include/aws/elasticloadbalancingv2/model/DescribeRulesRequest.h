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
  class AWS_ELASTICLOADBALANCINGV2_API DescribeRulesRequest : public ElasticLoadBalancingv2Request
  {
  public:
    DescribeRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRules"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline DescribeRulesRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline DescribeRulesRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline DescribeRulesRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleArns() const{ return m_ruleArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline bool RuleArnsHasBeenSet() const { return m_ruleArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline void SetRuleArns(const Aws::Vector<Aws::String>& value) { m_ruleArnsHasBeenSet = true; m_ruleArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline void SetRuleArns(Aws::Vector<Aws::String>&& value) { m_ruleArnsHasBeenSet = true; m_ruleArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& WithRuleArns(const Aws::Vector<Aws::String>& value) { SetRuleArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& WithRuleArns(Aws::Vector<Aws::String>&& value) { SetRuleArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& AddRuleArns(const Aws::String& value) { m_ruleArnsHasBeenSet = true; m_ruleArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& AddRuleArns(Aws::String&& value) { m_ruleArnsHasBeenSet = true; m_ruleArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the rules.</p>
     */
    inline DescribeRulesRequest& AddRuleArns(const char* value) { m_ruleArnsHasBeenSet = true; m_ruleArns.push_back(value); return *this; }


    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeRulesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeRulesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeRulesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline DescribeRulesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet;

    Aws::Vector<Aws::String> m_ruleArns;
    bool m_ruleArnsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
