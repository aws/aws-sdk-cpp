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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the information about the request to list the
   * traffic policies that are associated with the current AWS account.</p>
   */
  class AWS_ROUTE53_API ListTrafficPoliciesRequest : public Route53Request
  {
  public:
    ListTrafficPoliciesRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>, do
     * not include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you have
     * more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of <code>MaxItems</code> policies,
     * submit another request to <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of the
     * <code>TrafficPolicyIdMarker</code> element that was returned in the previous
     * response.</p> <p>Policies are listed in the order in which they were
     * created.</p>
     */
    inline const Aws::String& GetTrafficPolicyIdMarker() const{ return m_trafficPolicyIdMarker; }

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>, do
     * not include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you have
     * more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of <code>MaxItems</code> policies,
     * submit another request to <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of the
     * <code>TrafficPolicyIdMarker</code> element that was returned in the previous
     * response.</p> <p>Policies are listed in the order in which they were
     * created.</p>
     */
    inline void SetTrafficPolicyIdMarker(const Aws::String& value) { m_trafficPolicyIdMarkerHasBeenSet = true; m_trafficPolicyIdMarker = value; }

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>, do
     * not include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you have
     * more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of <code>MaxItems</code> policies,
     * submit another request to <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of the
     * <code>TrafficPolicyIdMarker</code> element that was returned in the previous
     * response.</p> <p>Policies are listed in the order in which they were
     * created.</p>
     */
    inline void SetTrafficPolicyIdMarker(Aws::String&& value) { m_trafficPolicyIdMarkerHasBeenSet = true; m_trafficPolicyIdMarker = value; }

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>, do
     * not include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you have
     * more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of <code>MaxItems</code> policies,
     * submit another request to <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of the
     * <code>TrafficPolicyIdMarker</code> element that was returned in the previous
     * response.</p> <p>Policies are listed in the order in which they were
     * created.</p>
     */
    inline void SetTrafficPolicyIdMarker(const char* value) { m_trafficPolicyIdMarkerHasBeenSet = true; m_trafficPolicyIdMarker.assign(value); }

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>, do
     * not include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you have
     * more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of <code>MaxItems</code> policies,
     * submit another request to <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of the
     * <code>TrafficPolicyIdMarker</code> element that was returned in the previous
     * response.</p> <p>Policies are listed in the order in which they were
     * created.</p>
     */
    inline ListTrafficPoliciesRequest& WithTrafficPolicyIdMarker(const Aws::String& value) { SetTrafficPolicyIdMarker(value); return *this;}

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>, do
     * not include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you have
     * more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of <code>MaxItems</code> policies,
     * submit another request to <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of the
     * <code>TrafficPolicyIdMarker</code> element that was returned in the previous
     * response.</p> <p>Policies are listed in the order in which they were
     * created.</p>
     */
    inline ListTrafficPoliciesRequest& WithTrafficPolicyIdMarker(Aws::String&& value) { SetTrafficPolicyIdMarker(value); return *this;}

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>, do
     * not include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you have
     * more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of <code>MaxItems</code> policies,
     * submit another request to <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of the
     * <code>TrafficPolicyIdMarker</code> element that was returned in the previous
     * response.</p> <p>Policies are listed in the order in which they were
     * created.</p>
     */
    inline ListTrafficPoliciesRequest& WithTrafficPolicyIdMarker(const char* value) { SetTrafficPolicyIdMarker(value); return *this;}

    /**
     * <p>(Optional) The maximum number of traffic policies to be included in the
     * response body for this request. If you have more than <code>MaxItems</code>
     * traffic policies, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the value of the
     * <code>TrafficPolicyIdMarker</code> element is the ID of the first traffic policy
     * in the next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) The maximum number of traffic policies to be included in the
     * response body for this request. If you have more than <code>MaxItems</code>
     * traffic policies, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the value of the
     * <code>TrafficPolicyIdMarker</code> element is the ID of the first traffic policy
     * in the next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of traffic policies to be included in the
     * response body for this request. If you have more than <code>MaxItems</code>
     * traffic policies, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the value of the
     * <code>TrafficPolicyIdMarker</code> element is the ID of the first traffic policy
     * in the next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of traffic policies to be included in the
     * response body for this request. If you have more than <code>MaxItems</code>
     * traffic policies, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the value of the
     * <code>TrafficPolicyIdMarker</code> element is the ID of the first traffic policy
     * in the next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>(Optional) The maximum number of traffic policies to be included in the
     * response body for this request. If you have more than <code>MaxItems</code>
     * traffic policies, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the value of the
     * <code>TrafficPolicyIdMarker</code> element is the ID of the first traffic policy
     * in the next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline ListTrafficPoliciesRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of traffic policies to be included in the
     * response body for this request. If you have more than <code>MaxItems</code>
     * traffic policies, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the value of the
     * <code>TrafficPolicyIdMarker</code> element is the ID of the first traffic policy
     * in the next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline ListTrafficPoliciesRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of traffic policies to be included in the
     * response body for this request. If you have more than <code>MaxItems</code>
     * traffic policies, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the value of the
     * <code>TrafficPolicyIdMarker</code> element is the ID of the first traffic policy
     * in the next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline ListTrafficPoliciesRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_trafficPolicyIdMarker;
    bool m_trafficPolicyIdMarkerHasBeenSet;
    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
