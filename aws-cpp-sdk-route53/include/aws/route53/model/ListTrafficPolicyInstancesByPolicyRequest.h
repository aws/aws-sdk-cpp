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
   * <p>A complex type that contains the information about the request to list your
   * traffic policy instances.</p>
   */
  class AWS_ROUTE53_API ListTrafficPolicyInstancesByPolicyRequest : public Route53Request
  {
  public:
    ListTrafficPolicyInstancesByPolicyRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The ID of the traffic policy for which you want to list traffic policy
     * instances.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }

    /**
     * <p>The ID of the traffic policy for which you want to list traffic policy
     * instances.</p>
     */
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The ID of the traffic policy for which you want to list traffic policy
     * instances.</p>
     */
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The ID of the traffic policy for which you want to list traffic policy
     * instances.</p>
     */
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }

    /**
     * <p>The ID of the traffic policy for which you want to list traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The ID of the traffic policy for which you want to list traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The ID of the traffic policy for which you want to list traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The version of the traffic policy for which you want to list traffic policy
     * instances. The version must be associated with the traffic policy that is
     * specified by <code>TrafficPolicyId</code>.</p>
     */
    inline int GetTrafficPolicyVersion() const{ return m_trafficPolicyVersion; }

    /**
     * <p>The version of the traffic policy for which you want to list traffic policy
     * instances. The version must be associated with the traffic policy that is
     * specified by <code>TrafficPolicyId</code>.</p>
     */
    inline void SetTrafficPolicyVersion(int value) { m_trafficPolicyVersionHasBeenSet = true; m_trafficPolicyVersion = value; }

    /**
     * <p>The version of the traffic policy for which you want to list traffic policy
     * instances. The version must be associated with the traffic policy that is
     * specified by <code>TrafficPolicyId</code>.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyVersion(int value) { SetTrafficPolicyVersion(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>HostedZoneIdMarker</code> is the ID of the
     * hosted zone for the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline const Aws::String& GetHostedZoneIdMarker() const{ return m_hostedZoneIdMarker; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>HostedZoneIdMarker</code> is the ID of the
     * hosted zone for the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline void SetHostedZoneIdMarker(const Aws::String& value) { m_hostedZoneIdMarkerHasBeenSet = true; m_hostedZoneIdMarker = value; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>HostedZoneIdMarker</code> is the ID of the
     * hosted zone for the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline void SetHostedZoneIdMarker(Aws::String&& value) { m_hostedZoneIdMarkerHasBeenSet = true; m_hostedZoneIdMarker = value; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>HostedZoneIdMarker</code> is the ID of the
     * hosted zone for the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline void SetHostedZoneIdMarker(const char* value) { m_hostedZoneIdMarkerHasBeenSet = true; m_hostedZoneIdMarker.assign(value); }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>HostedZoneIdMarker</code> is the ID of the
     * hosted zone for the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithHostedZoneIdMarker(const Aws::String& value) { SetHostedZoneIdMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>HostedZoneIdMarker</code> is the ID of the
     * hosted zone for the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithHostedZoneIdMarker(Aws::String&& value) { SetHostedZoneIdMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>HostedZoneIdMarker</code> is the ID of the
     * hosted zone for the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithHostedZoneIdMarker(const char* value) { SetHostedZoneIdMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
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
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
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
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
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
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
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
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyInstanceNameMarker(const Aws::String& value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyInstanceNameMarker(Aws::String&& value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceNameMarker</code> is
     * the name of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p> <p>If the
     * value of <code>IsTruncated</code> in the previous response was
     * <code>false</code>, omit this value.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyInstanceNameMarker(const char* value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline const RRType& GetTrafficPolicyInstanceTypeMarker() const{ return m_trafficPolicyInstanceTypeMarker; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline void SetTrafficPolicyInstanceTypeMarker(const RRType& value) { m_trafficPolicyInstanceTypeMarkerHasBeenSet = true; m_trafficPolicyInstanceTypeMarker = value; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline void SetTrafficPolicyInstanceTypeMarker(RRType&& value) { m_trafficPolicyInstanceTypeMarkerHasBeenSet = true; m_trafficPolicyInstanceTypeMarker = value; }

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyInstanceTypeMarker(const RRType& value) { SetTrafficPolicyInstanceTypeMarker(value); return *this;}

    /**
     * <p>For the first request to <code>ListTrafficPolicyInstancesByPolicy</code>,
     * omit this value.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>true</code>, <code>TrafficPolicyInstanceTypeMarker</code> is
     * the DNS type of the first traffic policy instance in the next group of
     * <code>MaxItems</code> traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get for this hosted zone.</p>
     */
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyInstanceTypeMarker(RRType&& value) { SetTrafficPolicyInstanceTypeMarker(value); return *this;}

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
    inline ListTrafficPolicyInstancesByPolicyRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

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
    inline ListTrafficPolicyInstancesByPolicyRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

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
    inline ListTrafficPolicyInstancesByPolicyRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet;
    int m_trafficPolicyVersion;
    bool m_trafficPolicyVersionHasBeenSet;
    Aws::String m_hostedZoneIdMarker;
    bool m_hostedZoneIdMarkerHasBeenSet;
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
