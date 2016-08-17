/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeTargetGroups.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API DescribeTargetGroupsRequest : public ElasticLoadBalancingv2Request
  {
  public:
    DescribeTargetGroupsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline DescribeTargetGroupsRequest& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline DescribeTargetGroupsRequest& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline DescribeTargetGroupsRequest& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetGroupArns() const{ return m_targetGroupArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline void SetTargetGroupArns(const Aws::Vector<Aws::String>& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline void SetTargetGroupArns(Aws::Vector<Aws::String>&& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& WithTargetGroupArns(const Aws::Vector<Aws::String>& value) { SetTargetGroupArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& WithTargetGroupArns(Aws::Vector<Aws::String>&& value) { SetTargetGroupArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& AddTargetGroupArns(const Aws::String& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& AddTargetGroupArns(Aws::String&& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& AddTargetGroupArns(const char* value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns.push_back(value); return *this; }

    /**
     * <p>The names of the target groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>The names of the target groups.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The names of the target groups.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The names of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>The names of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(value); return *this;}

    /**
     * <p>The names of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The names of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The names of the target groups.</p>
     */
    inline DescribeTargetGroupsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeTargetGroupsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeTargetGroupsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeTargetGroupsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline DescribeTargetGroupsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:
    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet;
    Aws::Vector<Aws::String> m_targetGroupArns;
    bool m_targetGroupArnsHasBeenSet;
    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_pageSize;
    bool m_pageSizeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
