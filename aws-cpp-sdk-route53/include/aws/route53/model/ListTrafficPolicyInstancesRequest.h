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
#include <aws/route53/model/RRType.h>
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
   * <p>A request to get information about the traffic policy instances that you
   * created by using the current AWS account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyInstancesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListTrafficPolicyInstancesRequest : public Route53Request
  {
  public:
    ListTrafficPolicyInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrafficPolicyInstances"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>HostedZoneId</code>, specify the value of
     * <code>HostedZoneIdMarker</code> from the previous response, which is the hosted
     * zone ID of the first traffic policy instance in the next group of traffic policy
     * instances.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>false</code>, there are no more traffic policy instances to
     * get.</p>
     */
    inline const Aws::String& GetHostedZoneIdMarker() const{ return m_hostedZoneIdMarker; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>HostedZoneId</code>, specify the value of
     * <code>HostedZoneIdMarker</code> from the previous response, which is the hosted
     * zone ID of the first traffic policy instance in the next group of traffic policy
     * instances.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>false</code>, there are no more traffic policy instances to
     * get.</p>
     */
    inline bool HostedZoneIdMarkerHasBeenSet() const { return m_hostedZoneIdMarkerHasBeenSet; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>HostedZoneId</code>, specify the value of
     * <code>HostedZoneIdMarker</code> from the previous response, which is the hosted
     * zone ID of the first traffic policy instance in the next group of traffic policy
     * instances.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>false</code>, there are no more traffic policy instances to
     * get.</p>
     */
    inline void SetHostedZoneIdMarker(const Aws::String& value) { m_hostedZoneIdMarkerHasBeenSet = true; m_hostedZoneIdMarker = value; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>HostedZoneId</code>, specify the value of
     * <code>HostedZoneIdMarker</code> from the previous response, which is the hosted
     * zone ID of the first traffic policy instance in the next group of traffic policy
     * instances.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>false</code>, there are no more traffic policy instances to
     * get.</p>
     */
    inline void SetHostedZoneIdMarker(Aws::String&& value) { m_hostedZoneIdMarkerHasBeenSet = true; m_hostedZoneIdMarker = std::move(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>HostedZoneId</code>, specify the value of
     * <code>HostedZoneIdMarker</code> from the previous response, which is the hosted
     * zone ID of the first traffic policy instance in the next group of traffic policy
     * instances.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>false</code>, there are no more traffic policy instances to
     * get.</p>
     */
    inline void SetHostedZoneIdMarker(const char* value) { m_hostedZoneIdMarkerHasBeenSet = true; m_hostedZoneIdMarker.assign(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>HostedZoneId</code>, specify the value of
     * <code>HostedZoneIdMarker</code> from the previous response, which is the hosted
     * zone ID of the first traffic policy instance in the next group of traffic policy
     * instances.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>false</code>, there are no more traffic policy instances to
     * get.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithHostedZoneIdMarker(const Aws::String& value) { SetHostedZoneIdMarker(value); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>HostedZoneId</code>, specify the value of
     * <code>HostedZoneIdMarker</code> from the previous response, which is the hosted
     * zone ID of the first traffic policy instance in the next group of traffic policy
     * instances.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>false</code>, there are no more traffic policy instances to
     * get.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithHostedZoneIdMarker(Aws::String&& value) { SetHostedZoneIdMarker(std::move(value)); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>HostedZoneId</code>, specify the value of
     * <code>HostedZoneIdMarker</code> from the previous response, which is the hosted
     * zone ID of the first traffic policy instance in the next group of traffic policy
     * instances.</p> <p>If the value of <code>IsTruncated</code> in the previous
     * response was <code>false</code>, there are no more traffic policy instances to
     * get.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithHostedZoneIdMarker(const char* value) { SetHostedZoneIdMarker(value); return *this;}


    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancename</code>, specify the
     * value of <code>TrafficPolicyInstanceNameMarker</code> from the previous
     * response, which is the name of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline const Aws::String& GetTrafficPolicyInstanceNameMarker() const{ return m_trafficPolicyInstanceNameMarker; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancename</code>, specify the
     * value of <code>TrafficPolicyInstanceNameMarker</code> from the previous
     * response, which is the name of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline bool TrafficPolicyInstanceNameMarkerHasBeenSet() const { return m_trafficPolicyInstanceNameMarkerHasBeenSet; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancename</code>, specify the
     * value of <code>TrafficPolicyInstanceNameMarker</code> from the previous
     * response, which is the name of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline void SetTrafficPolicyInstanceNameMarker(const Aws::String& value) { m_trafficPolicyInstanceNameMarkerHasBeenSet = true; m_trafficPolicyInstanceNameMarker = value; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancename</code>, specify the
     * value of <code>TrafficPolicyInstanceNameMarker</code> from the previous
     * response, which is the name of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline void SetTrafficPolicyInstanceNameMarker(Aws::String&& value) { m_trafficPolicyInstanceNameMarkerHasBeenSet = true; m_trafficPolicyInstanceNameMarker = std::move(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancename</code>, specify the
     * value of <code>TrafficPolicyInstanceNameMarker</code> from the previous
     * response, which is the name of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline void SetTrafficPolicyInstanceNameMarker(const char* value) { m_trafficPolicyInstanceNameMarkerHasBeenSet = true; m_trafficPolicyInstanceNameMarker.assign(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancename</code>, specify the
     * value of <code>TrafficPolicyInstanceNameMarker</code> from the previous
     * response, which is the name of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithTrafficPolicyInstanceNameMarker(const Aws::String& value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancename</code>, specify the
     * value of <code>TrafficPolicyInstanceNameMarker</code> from the previous
     * response, which is the name of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithTrafficPolicyInstanceNameMarker(Aws::String&& value) { SetTrafficPolicyInstanceNameMarker(std::move(value)); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancename</code>, specify the
     * value of <code>TrafficPolicyInstanceNameMarker</code> from the previous
     * response, which is the name of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithTrafficPolicyInstanceNameMarker(const char* value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}


    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancetype</code>, specify the
     * value of <code>TrafficPolicyInstanceTypeMarker</code> from the previous
     * response, which is the type of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline const RRType& GetTrafficPolicyInstanceTypeMarker() const{ return m_trafficPolicyInstanceTypeMarker; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancetype</code>, specify the
     * value of <code>TrafficPolicyInstanceTypeMarker</code> from the previous
     * response, which is the type of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline bool TrafficPolicyInstanceTypeMarkerHasBeenSet() const { return m_trafficPolicyInstanceTypeMarkerHasBeenSet; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancetype</code>, specify the
     * value of <code>TrafficPolicyInstanceTypeMarker</code> from the previous
     * response, which is the type of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline void SetTrafficPolicyInstanceTypeMarker(const RRType& value) { m_trafficPolicyInstanceTypeMarkerHasBeenSet = true; m_trafficPolicyInstanceTypeMarker = value; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancetype</code>, specify the
     * value of <code>TrafficPolicyInstanceTypeMarker</code> from the previous
     * response, which is the type of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline void SetTrafficPolicyInstanceTypeMarker(RRType&& value) { m_trafficPolicyInstanceTypeMarkerHasBeenSet = true; m_trafficPolicyInstanceTypeMarker = std::move(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancetype</code>, specify the
     * value of <code>TrafficPolicyInstanceTypeMarker</code> from the previous
     * response, which is the type of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithTrafficPolicyInstanceTypeMarker(const RRType& value) { SetTrafficPolicyInstanceTypeMarker(value); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstances</code>
     * request. For the value of <code>trafficpolicyinstancetype</code>, specify the
     * value of <code>TrafficPolicyInstanceTypeMarker</code> from the previous
     * response, which is the type of the first traffic policy instance in the next
     * group of traffic policy instances.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithTrafficPolicyInstanceTypeMarker(RRType&& value) { SetTrafficPolicyInstanceTypeMarker(std::move(value)); return *this;}


    /**
     * <p>The maximum number of traffic policy instances that you want Amazon Route 53
     * to return in response to a <code>ListTrafficPolicyInstances</code> request. If
     * you have more than <code>MaxItems</code> traffic policy instances, the value of
     * the <code>IsTruncated</code> element in the response is <code>true</code>, and
     * the values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic policy
     * instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of traffic policy instances that you want Amazon Route 53
     * to return in response to a <code>ListTrafficPolicyInstances</code> request. If
     * you have more than <code>MaxItems</code> traffic policy instances, the value of
     * the <code>IsTruncated</code> element in the response is <code>true</code>, and
     * the values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic policy
     * instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of traffic policy instances that you want Amazon Route 53
     * to return in response to a <code>ListTrafficPolicyInstances</code> request. If
     * you have more than <code>MaxItems</code> traffic policy instances, the value of
     * the <code>IsTruncated</code> element in the response is <code>true</code>, and
     * the values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic policy
     * instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of traffic policy instances that you want Amazon Route 53
     * to return in response to a <code>ListTrafficPolicyInstances</code> request. If
     * you have more than <code>MaxItems</code> traffic policy instances, the value of
     * the <code>IsTruncated</code> element in the response is <code>true</code>, and
     * the values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic policy
     * instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of traffic policy instances that you want Amazon Route 53
     * to return in response to a <code>ListTrafficPolicyInstances</code> request. If
     * you have more than <code>MaxItems</code> traffic policy instances, the value of
     * the <code>IsTruncated</code> element in the response is <code>true</code>, and
     * the values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic policy
     * instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of traffic policy instances that you want Amazon Route 53
     * to return in response to a <code>ListTrafficPolicyInstances</code> request. If
     * you have more than <code>MaxItems</code> traffic policy instances, the value of
     * the <code>IsTruncated</code> element in the response is <code>true</code>, and
     * the values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic policy
     * instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of traffic policy instances that you want Amazon Route 53
     * to return in response to a <code>ListTrafficPolicyInstances</code> request. If
     * you have more than <code>MaxItems</code> traffic policy instances, the value of
     * the <code>IsTruncated</code> element in the response is <code>true</code>, and
     * the values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic policy
     * instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of traffic policy instances that you want Amazon Route 53
     * to return in response to a <code>ListTrafficPolicyInstances</code> request. If
     * you have more than <code>MaxItems</code> traffic policy instances, the value of
     * the <code>IsTruncated</code> element in the response is <code>true</code>, and
     * the values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic policy
     * instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline ListTrafficPolicyInstancesRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

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
