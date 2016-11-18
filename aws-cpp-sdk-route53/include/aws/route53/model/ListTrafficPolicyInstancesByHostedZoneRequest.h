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
#include <aws/route53/model/RRType.h>

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
   * <p>A request for the traffic policy instances that you created in a specified
   * hosted zone.</p>
   */
  class AWS_ROUTE53_API ListTrafficPolicyInstancesByHostedZoneRequest : public Route53Request
  {
  public:
    ListTrafficPolicyInstancesByHostedZoneRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The ID of the hosted zone for which you want to list traffic policy
     * instances.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone for which you want to list traffic policy
     * instances.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone for which you want to list traffic policy
     * instances.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone for which you want to list traffic policy
     * instances.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone for which you want to list traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone for which you want to list traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone for which you want to list traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline const Aws::String& GetTrafficPolicyInstanceNameMarker() const{ return m_trafficPolicyInstanceNameMarker; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline void SetTrafficPolicyInstanceNameMarker(const Aws::String& value) { m_trafficPolicyInstanceNameMarkerHasBeenSet = true; m_trafficPolicyInstanceNameMarker = value; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline void SetTrafficPolicyInstanceNameMarker(Aws::String&& value) { m_trafficPolicyInstanceNameMarkerHasBeenSet = true; m_trafficPolicyInstanceNameMarker = value; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline void SetTrafficPolicyInstanceNameMarker(const char* value) { m_trafficPolicyInstanceNameMarkerHasBeenSet = true; m_trafficPolicyInstanceNameMarker.assign(value); }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithTrafficPolicyInstanceNameMarker(const Aws::String& value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithTrafficPolicyInstanceNameMarker(Aws::String&& value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithTrafficPolicyInstanceNameMarker(const char* value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline const RRType& GetTrafficPolicyInstanceTypeMarker() const{ return m_trafficPolicyInstanceTypeMarker; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline void SetTrafficPolicyInstanceTypeMarker(const RRType& value) { m_trafficPolicyInstanceTypeMarkerHasBeenSet = true; m_trafficPolicyInstanceTypeMarker = value; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline void SetTrafficPolicyInstanceTypeMarker(RRType&& value) { m_trafficPolicyInstanceTypeMarkerHasBeenSet = true; m_trafficPolicyInstanceTypeMarker = value; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithTrafficPolicyInstanceTypeMarker(const RRType& value) { SetTrafficPolicyInstanceTypeMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByHostedZone</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithTrafficPolicyInstanceTypeMarker(RRType&& value) { SetTrafficPolicyInstanceTypeMarker(value); return *this;}

    /**
     * <p>The maximum number of traffic policy instances to be included in the response
     * body for this request. If you have more than <code>MaxItems</code> traffic
     * policy instances, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the values of
     * <code>HostedZoneIdMarker</code>, <code>TrafficPolicyInstanceNameMarker</code>,
     * and <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic
     * policy instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of traffic policy instances to be included in the response
     * body for this request. If you have more than <code>MaxItems</code> traffic
     * policy instances, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the values of
     * <code>HostedZoneIdMarker</code>, <code>TrafficPolicyInstanceNameMarker</code>,
     * and <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic
     * policy instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of traffic policy instances to be included in the response
     * body for this request. If you have more than <code>MaxItems</code> traffic
     * policy instances, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the values of
     * <code>HostedZoneIdMarker</code>, <code>TrafficPolicyInstanceNameMarker</code>,
     * and <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic
     * policy instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of traffic policy instances to be included in the response
     * body for this request. If you have more than <code>MaxItems</code> traffic
     * policy instances, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the values of
     * <code>HostedZoneIdMarker</code>, <code>TrafficPolicyInstanceNameMarker</code>,
     * and <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic
     * policy instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of traffic policy instances to be included in the response
     * body for this request. If you have more than <code>MaxItems</code> traffic
     * policy instances, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the values of
     * <code>HostedZoneIdMarker</code>, <code>TrafficPolicyInstanceNameMarker</code>,
     * and <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic
     * policy instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of traffic policy instances to be included in the response
     * body for this request. If you have more than <code>MaxItems</code> traffic
     * policy instances, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the values of
     * <code>HostedZoneIdMarker</code>, <code>TrafficPolicyInstanceNameMarker</code>,
     * and <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic
     * policy instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of traffic policy instances to be included in the response
     * body for this request. If you have more than <code>MaxItems</code> traffic
     * policy instances, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the values of
     * <code>HostedZoneIdMarker</code>, <code>TrafficPolicyInstanceNameMarker</code>,
     * and <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic
     * policy instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
    Aws::String m_trafficPolicyInstanceNameMarker;
    bool m_trafficPolicyInstanceNameMarkerHasBeenSet;
    RRType m_trafficPolicyInstanceTypeMarker;
    bool m_trafficPolicyInstanceTypeMarkerHasBeenSet;
    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
