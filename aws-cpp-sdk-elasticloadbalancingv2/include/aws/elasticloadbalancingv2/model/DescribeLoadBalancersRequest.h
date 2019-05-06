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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class AWS_ELASTICLOADBALANCINGV2_API DescribeLoadBalancersRequest : public ElasticLoadBalancingv2Request
  {
  public:
    DescribeLoadBalancersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLoadBalancers"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers. You can specify up to
     * 20 load balancers in a single call.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerArns() const{ return m_loadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers. You can specify up to
     * 20 load balancers in a single call.</p>
     */
    inline bool LoadBalancerArnsHasBeenSet() const { return m_loadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers. You can specify up to
     * 20 load balancers in a single call.</p>
     */
    inline void SetLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers. You can specify up to
     * 20 load balancers in a single call.</p>
     */
    inline void SetLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers. You can specify up to
     * 20 load balancers in a single call.</p>
     */
    inline DescribeLoadBalancersRequest& WithLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers. You can specify up to
     * 20 load balancers in a single call.</p>
     */
    inline DescribeLoadBalancersRequest& WithLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers. You can specify up to
     * 20 load balancers in a single call.</p>
     */
    inline DescribeLoadBalancersRequest& AddLoadBalancerArns(const Aws::String& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers. You can specify up to
     * 20 load balancers in a single call.</p>
     */
    inline DescribeLoadBalancersRequest& AddLoadBalancerArns(Aws::String&& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers. You can specify up to
     * 20 load balancers in a single call.</p>
     */
    inline DescribeLoadBalancersRequest& AddLoadBalancerArns(const char* value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The names of the load balancers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>The names of the load balancers.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>The names of the load balancers.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The names of the load balancers.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>The names of the load balancers.</p>
     */
    inline DescribeLoadBalancersRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>The names of the load balancers.</p>
     */
    inline DescribeLoadBalancersRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>The names of the load balancers.</p>
     */
    inline DescribeLoadBalancersRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The names of the load balancers.</p>
     */
    inline DescribeLoadBalancersRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the load balancers.</p>
     */
    inline DescribeLoadBalancersRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


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
    inline DescribeLoadBalancersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeLoadBalancersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeLoadBalancersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


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
    inline DescribeLoadBalancersRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_loadBalancerArns;
    bool m_loadBalancerArnsHasBeenSet;

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
