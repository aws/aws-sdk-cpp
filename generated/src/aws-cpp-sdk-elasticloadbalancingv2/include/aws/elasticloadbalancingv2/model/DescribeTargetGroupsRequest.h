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
  class DescribeTargetGroupsRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTargetGroups"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }
    inline DescribeTargetGroupsRequest& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}
    inline DescribeTargetGroupsRequest& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}
    inline DescribeTargetGroupsRequest& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetGroupArns() const{ return m_targetGroupArns; }
    inline bool TargetGroupArnsHasBeenSet() const { return m_targetGroupArnsHasBeenSet; }
    inline void SetTargetGroupArns(const Aws::Vector<Aws::String>& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns = value; }
    inline void SetTargetGroupArns(Aws::Vector<Aws::String>&& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns = std::move(value); }
    inline DescribeTargetGroupsRequest& WithTargetGroupArns(const Aws::Vector<Aws::String>& value) { SetTargetGroupArns(value); return *this;}
    inline DescribeTargetGroupsRequest& WithTargetGroupArns(Aws::Vector<Aws::String>&& value) { SetTargetGroupArns(std::move(value)); return *this;}
    inline DescribeTargetGroupsRequest& AddTargetGroupArns(const Aws::String& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns.push_back(value); return *this; }
    inline DescribeTargetGroupsRequest& AddTargetGroupArns(Aws::String&& value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns.push_back(std::move(value)); return *this; }
    inline DescribeTargetGroupsRequest& AddTargetGroupArns(const char* value) { m_targetGroupArnsHasBeenSet = true; m_targetGroupArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the target groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }
    inline DescribeTargetGroupsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}
    inline DescribeTargetGroupsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}
    inline DescribeTargetGroupsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    inline DescribeTargetGroupsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }
    inline DescribeTargetGroupsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeTargetGroupsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeTargetGroupsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeTargetGroupsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline DescribeTargetGroupsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetGroupArns;
    bool m_targetGroupArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
