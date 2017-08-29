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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <aws/route53/model/TrafficPolicyInstance.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response information for the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyInstancesByHostedZoneResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListTrafficPolicyInstancesByHostedZoneResult
  {
  public:
    ListTrafficPolicyInstancesByHostedZoneResult();
    ListTrafficPolicyInstancesByHostedZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTrafficPolicyInstancesByHostedZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list that contains one <code>TrafficPolicyInstance</code> element for each
     * traffic policy instance that matches the elements in the request. </p>
     */
    inline const Aws::Vector<TrafficPolicyInstance>& GetTrafficPolicyInstances() const{ return m_trafficPolicyInstances; }

    /**
     * <p>A list that contains one <code>TrafficPolicyInstance</code> element for each
     * traffic policy instance that matches the elements in the request. </p>
     */
    inline void SetTrafficPolicyInstances(const Aws::Vector<TrafficPolicyInstance>& value) { m_trafficPolicyInstances = value; }

    /**
     * <p>A list that contains one <code>TrafficPolicyInstance</code> element for each
     * traffic policy instance that matches the elements in the request. </p>
     */
    inline void SetTrafficPolicyInstances(Aws::Vector<TrafficPolicyInstance>&& value) { m_trafficPolicyInstances = std::move(value); }

    /**
     * <p>A list that contains one <code>TrafficPolicyInstance</code> element for each
     * traffic policy instance that matches the elements in the request. </p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstances(const Aws::Vector<TrafficPolicyInstance>& value) { SetTrafficPolicyInstances(value); return *this;}

    /**
     * <p>A list that contains one <code>TrafficPolicyInstance</code> element for each
     * traffic policy instance that matches the elements in the request. </p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstances(Aws::Vector<TrafficPolicyInstance>&& value) { SetTrafficPolicyInstances(std::move(value)); return *this;}

    /**
     * <p>A list that contains one <code>TrafficPolicyInstance</code> element for each
     * traffic policy instance that matches the elements in the request. </p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& AddTrafficPolicyInstances(const TrafficPolicyInstance& value) { m_trafficPolicyInstances.push_back(value); return *this; }

    /**
     * <p>A list that contains one <code>TrafficPolicyInstance</code> element for each
     * traffic policy instance that matches the elements in the request. </p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& AddTrafficPolicyInstances(TrafficPolicyInstance&& value) { m_trafficPolicyInstances.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceNameMarker</code> is the name of the first traffic
     * policy instance in the next group of traffic policy instances.</p>
     */
    inline const Aws::String& GetTrafficPolicyInstanceNameMarker() const{ return m_trafficPolicyInstanceNameMarker; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceNameMarker</code> is the name of the first traffic
     * policy instance in the next group of traffic policy instances.</p>
     */
    inline void SetTrafficPolicyInstanceNameMarker(const Aws::String& value) { m_trafficPolicyInstanceNameMarker = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceNameMarker</code> is the name of the first traffic
     * policy instance in the next group of traffic policy instances.</p>
     */
    inline void SetTrafficPolicyInstanceNameMarker(Aws::String&& value) { m_trafficPolicyInstanceNameMarker = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceNameMarker</code> is the name of the first traffic
     * policy instance in the next group of traffic policy instances.</p>
     */
    inline void SetTrafficPolicyInstanceNameMarker(const char* value) { m_trafficPolicyInstanceNameMarker.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceNameMarker</code> is the name of the first traffic
     * policy instance in the next group of traffic policy instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceNameMarker(const Aws::String& value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceNameMarker</code> is the name of the first traffic
     * policy instance in the next group of traffic policy instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceNameMarker(Aws::String&& value) { SetTrafficPolicyInstanceNameMarker(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceNameMarker</code> is the name of the first traffic
     * policy instance in the next group of traffic policy instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceNameMarker(const char* value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is true,
     * <code>TrafficPolicyInstanceTypeMarker</code> is the DNS type of the resource
     * record sets that are associated with the first traffic policy instance in the
     * next group of traffic policy instances.</p>
     */
    inline const RRType& GetTrafficPolicyInstanceTypeMarker() const{ return m_trafficPolicyInstanceTypeMarker; }

    /**
     * <p>If <code>IsTruncated</code> is true,
     * <code>TrafficPolicyInstanceTypeMarker</code> is the DNS type of the resource
     * record sets that are associated with the first traffic policy instance in the
     * next group of traffic policy instances.</p>
     */
    inline void SetTrafficPolicyInstanceTypeMarker(const RRType& value) { m_trafficPolicyInstanceTypeMarker = value; }

    /**
     * <p>If <code>IsTruncated</code> is true,
     * <code>TrafficPolicyInstanceTypeMarker</code> is the DNS type of the resource
     * record sets that are associated with the first traffic policy instance in the
     * next group of traffic policy instances.</p>
     */
    inline void SetTrafficPolicyInstanceTypeMarker(RRType&& value) { m_trafficPolicyInstanceTypeMarker = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is true,
     * <code>TrafficPolicyInstanceTypeMarker</code> is the DNS type of the resource
     * record sets that are associated with the first traffic policy instance in the
     * next group of traffic policy instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceTypeMarker(const RRType& value) { SetTrafficPolicyInstanceTypeMarker(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is true,
     * <code>TrafficPolicyInstanceTypeMarker</code> is the DNS type of the resource
     * record sets that are associated with the first traffic policy instance in the
     * next group of traffic policy instances.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceTypeMarker(RRType&& value) { SetTrafficPolicyInstanceTypeMarker(std::move(value)); return *this;}


    /**
     * <p>A flag that indicates whether there are more traffic policy instances to be
     * listed. If the response was truncated, you can get the next group of traffic
     * policy instances by submitting another
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request and specifying the
     * values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> in the corresponding request
     * parameters.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more traffic policy instances to be
     * listed. If the response was truncated, you can get the next group of traffic
     * policy instances by submitting another
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request and specifying the
     * values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> in the corresponding request
     * parameters.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more traffic policy instances to be
     * listed. If the response was truncated, you can get the next group of traffic
     * policy instances by submitting another
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request and specifying the
     * values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> in the corresponding request
     * parameters.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request that produced the
     * current response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request that produced the
     * current response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request that produced the
     * current response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request that produced the
     * current response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request that produced the
     * current response.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request that produced the
     * current response.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request that produced the
     * current response.</p>
     */
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::Vector<TrafficPolicyInstance> m_trafficPolicyInstances;

    Aws::String m_trafficPolicyInstanceNameMarker;

    RRType m_trafficPolicyInstanceTypeMarker;

    bool m_isTruncated;

    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
