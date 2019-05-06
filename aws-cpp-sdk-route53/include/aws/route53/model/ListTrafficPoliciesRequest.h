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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * traffic policies that are associated with the current AWS account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPoliciesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListTrafficPoliciesRequest : public Route53Request
  {
  public:
    ListTrafficPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrafficPolicies"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>,
     * don't include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you
     * have more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of policies, submit another request to
     * <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of
     * <code>TrafficPolicyIdMarker</code> that was returned in the previous
     * response.</p>
     */
    inline const Aws::String& GetTrafficPolicyIdMarker() const{ return m_trafficPolicyIdMarker; }

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>,
     * don't include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you
     * have more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of policies, submit another request to
     * <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of
     * <code>TrafficPolicyIdMarker</code> that was returned in the previous
     * response.</p>
     */
    inline bool TrafficPolicyIdMarkerHasBeenSet() const { return m_trafficPolicyIdMarkerHasBeenSet; }

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>,
     * don't include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you
     * have more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of policies, submit another request to
     * <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of
     * <code>TrafficPolicyIdMarker</code> that was returned in the previous
     * response.</p>
     */
    inline void SetTrafficPolicyIdMarker(const Aws::String& value) { m_trafficPolicyIdMarkerHasBeenSet = true; m_trafficPolicyIdMarker = value; }

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>,
     * don't include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you
     * have more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of policies, submit another request to
     * <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of
     * <code>TrafficPolicyIdMarker</code> that was returned in the previous
     * response.</p>
     */
    inline void SetTrafficPolicyIdMarker(Aws::String&& value) { m_trafficPolicyIdMarkerHasBeenSet = true; m_trafficPolicyIdMarker = std::move(value); }

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>,
     * don't include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you
     * have more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of policies, submit another request to
     * <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of
     * <code>TrafficPolicyIdMarker</code> that was returned in the previous
     * response.</p>
     */
    inline void SetTrafficPolicyIdMarker(const char* value) { m_trafficPolicyIdMarkerHasBeenSet = true; m_trafficPolicyIdMarker.assign(value); }

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>,
     * don't include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you
     * have more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of policies, submit another request to
     * <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of
     * <code>TrafficPolicyIdMarker</code> that was returned in the previous
     * response.</p>
     */
    inline ListTrafficPoliciesRequest& WithTrafficPolicyIdMarker(const Aws::String& value) { SetTrafficPolicyIdMarker(value); return *this;}

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>,
     * don't include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you
     * have more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of policies, submit another request to
     * <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of
     * <code>TrafficPolicyIdMarker</code> that was returned in the previous
     * response.</p>
     */
    inline ListTrafficPoliciesRequest& WithTrafficPolicyIdMarker(Aws::String&& value) { SetTrafficPolicyIdMarker(std::move(value)); return *this;}

    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>,
     * don't include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you
     * have more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of policies, submit another request to
     * <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of
     * <code>TrafficPolicyIdMarker</code> that was returned in the previous
     * response.</p>
     */
    inline ListTrafficPoliciesRequest& WithTrafficPolicyIdMarker(const char* value) { SetTrafficPolicyIdMarker(value); return *this;}


    /**
     * <p>(Optional) The maximum number of traffic policies that you want Amazon Route
     * 53 to return in response to this request. If you have more than
     * <code>MaxItems</code> traffic policies, the value of <code>IsTruncated</code> in
     * the response is <code>true</code>, and the value of
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy that
     * Route 53 will return if you submit another request.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) The maximum number of traffic policies that you want Amazon Route
     * 53 to return in response to this request. If you have more than
     * <code>MaxItems</code> traffic policies, the value of <code>IsTruncated</code> in
     * the response is <code>true</code>, and the value of
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy that
     * Route 53 will return if you submit another request.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>(Optional) The maximum number of traffic policies that you want Amazon Route
     * 53 to return in response to this request. If you have more than
     * <code>MaxItems</code> traffic policies, the value of <code>IsTruncated</code> in
     * the response is <code>true</code>, and the value of
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy that
     * Route 53 will return if you submit another request.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of traffic policies that you want Amazon Route
     * 53 to return in response to this request. If you have more than
     * <code>MaxItems</code> traffic policies, the value of <code>IsTruncated</code> in
     * the response is <code>true</code>, and the value of
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy that
     * Route 53 will return if you submit another request.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>(Optional) The maximum number of traffic policies that you want Amazon Route
     * 53 to return in response to this request. If you have more than
     * <code>MaxItems</code> traffic policies, the value of <code>IsTruncated</code> in
     * the response is <code>true</code>, and the value of
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy that
     * Route 53 will return if you submit another request.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>(Optional) The maximum number of traffic policies that you want Amazon Route
     * 53 to return in response to this request. If you have more than
     * <code>MaxItems</code> traffic policies, the value of <code>IsTruncated</code> in
     * the response is <code>true</code>, and the value of
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy that
     * Route 53 will return if you submit another request.</p>
     */
    inline ListTrafficPoliciesRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of traffic policies that you want Amazon Route
     * 53 to return in response to this request. If you have more than
     * <code>MaxItems</code> traffic policies, the value of <code>IsTruncated</code> in
     * the response is <code>true</code>, and the value of
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy that
     * Route 53 will return if you submit another request.</p>
     */
    inline ListTrafficPoliciesRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>(Optional) The maximum number of traffic policies that you want Amazon Route
     * 53 to return in response to this request. If you have more than
     * <code>MaxItems</code> traffic policies, the value of <code>IsTruncated</code> in
     * the response is <code>true</code>, and the value of
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy that
     * Route 53 will return if you submit another request.</p>
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
