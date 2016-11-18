﻿/*
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
   * <p>Contains the parameters for DescribeListeners.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API DescribeListenersRequest : public ElasticLoadBalancingv2Request
  {
  public:
    DescribeListenersRequest();
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
    inline DescribeListenersRequest& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline DescribeListenersRequest& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline DescribeListenersRequest& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the listeners.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListenerArns() const{ return m_listenerArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the listeners.</p>
     */
    inline void SetListenerArns(const Aws::Vector<Aws::String>& value) { m_listenerArnsHasBeenSet = true; m_listenerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the listeners.</p>
     */
    inline void SetListenerArns(Aws::Vector<Aws::String>&& value) { m_listenerArnsHasBeenSet = true; m_listenerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the listeners.</p>
     */
    inline DescribeListenersRequest& WithListenerArns(const Aws::Vector<Aws::String>& value) { SetListenerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the listeners.</p>
     */
    inline DescribeListenersRequest& WithListenerArns(Aws::Vector<Aws::String>&& value) { SetListenerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the listeners.</p>
     */
    inline DescribeListenersRequest& AddListenerArns(const Aws::String& value) { m_listenerArnsHasBeenSet = true; m_listenerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the listeners.</p>
     */
    inline DescribeListenersRequest& AddListenerArns(Aws::String&& value) { m_listenerArnsHasBeenSet = true; m_listenerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the listeners.</p>
     */
    inline DescribeListenersRequest& AddListenerArns(const char* value) { m_listenerArnsHasBeenSet = true; m_listenerArns.push_back(value); return *this; }

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
    inline DescribeListenersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeListenersRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeListenersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

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
    inline DescribeListenersRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:
    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet;
    Aws::Vector<Aws::String> m_listenerArns;
    bool m_listenerArnsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_pageSize;
    bool m_pageSizeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
