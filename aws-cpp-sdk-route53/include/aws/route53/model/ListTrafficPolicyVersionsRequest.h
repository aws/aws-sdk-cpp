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
   * <p>A complex type that contains the information about the request to list your
   * traffic policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyVersionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListTrafficPolicyVersionsRequest : public Route53Request
  {
  public:
    ListTrafficPolicyVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrafficPolicyVersions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Specify the value of <code>Id</code> of the traffic policy for which you want
     * to list all versions.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Specify the value of <code>Id</code> of the traffic policy for which you want
     * to list all versions.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Specify the value of <code>Id</code> of the traffic policy for which you want
     * to list all versions.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Specify the value of <code>Id</code> of the traffic policy for which you want
     * to list all versions.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Specify the value of <code>Id</code> of the traffic policy for which you want
     * to list all versions.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Specify the value of <code>Id</code> of the traffic policy for which you want
     * to list all versions.</p>
     */
    inline ListTrafficPolicyVersionsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Specify the value of <code>Id</code> of the traffic policy for which you want
     * to list all versions.</p>
     */
    inline ListTrafficPolicyVersionsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Specify the value of <code>Id</code> of the traffic policy for which you want
     * to list all versions.</p>
     */
    inline ListTrafficPolicyVersionsRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>For your first request to <code>ListTrafficPolicyVersions</code>, don't
     * include the <code>TrafficPolicyVersionMarker</code> parameter.</p> <p>If you
     * have more traffic policy versions than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicyVersions</code> returns only the first group of
     * <code>MaxItems</code> versions. To get more traffic policy versions, submit
     * another <code>ListTrafficPolicyVersions</code> request. For the value of
     * <code>TrafficPolicyVersionMarker</code>, specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the previous response.</p>
     */
    inline const Aws::String& GetTrafficPolicyVersionMarker() const{ return m_trafficPolicyVersionMarker; }

    /**
     * <p>For your first request to <code>ListTrafficPolicyVersions</code>, don't
     * include the <code>TrafficPolicyVersionMarker</code> parameter.</p> <p>If you
     * have more traffic policy versions than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicyVersions</code> returns only the first group of
     * <code>MaxItems</code> versions. To get more traffic policy versions, submit
     * another <code>ListTrafficPolicyVersions</code> request. For the value of
     * <code>TrafficPolicyVersionMarker</code>, specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the previous response.</p>
     */
    inline bool TrafficPolicyVersionMarkerHasBeenSet() const { return m_trafficPolicyVersionMarkerHasBeenSet; }

    /**
     * <p>For your first request to <code>ListTrafficPolicyVersions</code>, don't
     * include the <code>TrafficPolicyVersionMarker</code> parameter.</p> <p>If you
     * have more traffic policy versions than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicyVersions</code> returns only the first group of
     * <code>MaxItems</code> versions. To get more traffic policy versions, submit
     * another <code>ListTrafficPolicyVersions</code> request. For the value of
     * <code>TrafficPolicyVersionMarker</code>, specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the previous response.</p>
     */
    inline void SetTrafficPolicyVersionMarker(const Aws::String& value) { m_trafficPolicyVersionMarkerHasBeenSet = true; m_trafficPolicyVersionMarker = value; }

    /**
     * <p>For your first request to <code>ListTrafficPolicyVersions</code>, don't
     * include the <code>TrafficPolicyVersionMarker</code> parameter.</p> <p>If you
     * have more traffic policy versions than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicyVersions</code> returns only the first group of
     * <code>MaxItems</code> versions. To get more traffic policy versions, submit
     * another <code>ListTrafficPolicyVersions</code> request. For the value of
     * <code>TrafficPolicyVersionMarker</code>, specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the previous response.</p>
     */
    inline void SetTrafficPolicyVersionMarker(Aws::String&& value) { m_trafficPolicyVersionMarkerHasBeenSet = true; m_trafficPolicyVersionMarker = std::move(value); }

    /**
     * <p>For your first request to <code>ListTrafficPolicyVersions</code>, don't
     * include the <code>TrafficPolicyVersionMarker</code> parameter.</p> <p>If you
     * have more traffic policy versions than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicyVersions</code> returns only the first group of
     * <code>MaxItems</code> versions. To get more traffic policy versions, submit
     * another <code>ListTrafficPolicyVersions</code> request. For the value of
     * <code>TrafficPolicyVersionMarker</code>, specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the previous response.</p>
     */
    inline void SetTrafficPolicyVersionMarker(const char* value) { m_trafficPolicyVersionMarkerHasBeenSet = true; m_trafficPolicyVersionMarker.assign(value); }

    /**
     * <p>For your first request to <code>ListTrafficPolicyVersions</code>, don't
     * include the <code>TrafficPolicyVersionMarker</code> parameter.</p> <p>If you
     * have more traffic policy versions than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicyVersions</code> returns only the first group of
     * <code>MaxItems</code> versions. To get more traffic policy versions, submit
     * another <code>ListTrafficPolicyVersions</code> request. For the value of
     * <code>TrafficPolicyVersionMarker</code>, specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the previous response.</p>
     */
    inline ListTrafficPolicyVersionsRequest& WithTrafficPolicyVersionMarker(const Aws::String& value) { SetTrafficPolicyVersionMarker(value); return *this;}

    /**
     * <p>For your first request to <code>ListTrafficPolicyVersions</code>, don't
     * include the <code>TrafficPolicyVersionMarker</code> parameter.</p> <p>If you
     * have more traffic policy versions than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicyVersions</code> returns only the first group of
     * <code>MaxItems</code> versions. To get more traffic policy versions, submit
     * another <code>ListTrafficPolicyVersions</code> request. For the value of
     * <code>TrafficPolicyVersionMarker</code>, specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the previous response.</p>
     */
    inline ListTrafficPolicyVersionsRequest& WithTrafficPolicyVersionMarker(Aws::String&& value) { SetTrafficPolicyVersionMarker(std::move(value)); return *this;}

    /**
     * <p>For your first request to <code>ListTrafficPolicyVersions</code>, don't
     * include the <code>TrafficPolicyVersionMarker</code> parameter.</p> <p>If you
     * have more traffic policy versions than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicyVersions</code> returns only the first group of
     * <code>MaxItems</code> versions. To get more traffic policy versions, submit
     * another <code>ListTrafficPolicyVersions</code> request. For the value of
     * <code>TrafficPolicyVersionMarker</code>, specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the previous response.</p>
     */
    inline ListTrafficPolicyVersionsRequest& WithTrafficPolicyVersionMarker(const char* value) { SetTrafficPolicyVersionMarker(value); return *this;}


    /**
     * <p>The maximum number of traffic policy versions that you want Amazon Route 53
     * to include in the response body for this request. If the specified traffic
     * policy has more than <code>MaxItems</code> versions, the value of
     * <code>IsTruncated</code> in the response is <code>true</code>, and the value of
     * the <code>TrafficPolicyVersionMarker</code> element is the ID of the first
     * version that Route 53 will return if you submit another request.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of traffic policy versions that you want Amazon Route 53
     * to include in the response body for this request. If the specified traffic
     * policy has more than <code>MaxItems</code> versions, the value of
     * <code>IsTruncated</code> in the response is <code>true</code>, and the value of
     * the <code>TrafficPolicyVersionMarker</code> element is the ID of the first
     * version that Route 53 will return if you submit another request.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of traffic policy versions that you want Amazon Route 53
     * to include in the response body for this request. If the specified traffic
     * policy has more than <code>MaxItems</code> versions, the value of
     * <code>IsTruncated</code> in the response is <code>true</code>, and the value of
     * the <code>TrafficPolicyVersionMarker</code> element is the ID of the first
     * version that Route 53 will return if you submit another request.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of traffic policy versions that you want Amazon Route 53
     * to include in the response body for this request. If the specified traffic
     * policy has more than <code>MaxItems</code> versions, the value of
     * <code>IsTruncated</code> in the response is <code>true</code>, and the value of
     * the <code>TrafficPolicyVersionMarker</code> element is the ID of the first
     * version that Route 53 will return if you submit another request.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of traffic policy versions that you want Amazon Route 53
     * to include in the response body for this request. If the specified traffic
     * policy has more than <code>MaxItems</code> versions, the value of
     * <code>IsTruncated</code> in the response is <code>true</code>, and the value of
     * the <code>TrafficPolicyVersionMarker</code> element is the ID of the first
     * version that Route 53 will return if you submit another request.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of traffic policy versions that you want Amazon Route 53
     * to include in the response body for this request. If the specified traffic
     * policy has more than <code>MaxItems</code> versions, the value of
     * <code>IsTruncated</code> in the response is <code>true</code>, and the value of
     * the <code>TrafficPolicyVersionMarker</code> element is the ID of the first
     * version that Route 53 will return if you submit another request.</p>
     */
    inline ListTrafficPolicyVersionsRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of traffic policy versions that you want Amazon Route 53
     * to include in the response body for this request. If the specified traffic
     * policy has more than <code>MaxItems</code> versions, the value of
     * <code>IsTruncated</code> in the response is <code>true</code>, and the value of
     * the <code>TrafficPolicyVersionMarker</code> element is the ID of the first
     * version that Route 53 will return if you submit another request.</p>
     */
    inline ListTrafficPolicyVersionsRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of traffic policy versions that you want Amazon Route 53
     * to include in the response body for this request. If the specified traffic
     * policy has more than <code>MaxItems</code> versions, the value of
     * <code>IsTruncated</code> in the response is <code>true</code>, and the value of
     * the <code>TrafficPolicyVersionMarker</code> element is the ID of the first
     * version that Route 53 will return if you submit another request.</p>
     */
    inline ListTrafficPolicyVersionsRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_trafficPolicyVersionMarker;
    bool m_trafficPolicyVersionMarkerHasBeenSet;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
