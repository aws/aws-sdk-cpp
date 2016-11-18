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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/TrafficPolicy.h>

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
   * <p>A complex type that contains the response information for the request.</p>
   */
  class AWS_ROUTE53_API ListTrafficPolicyVersionsResult
  {
  public:
    ListTrafficPolicyVersionsResult();
    ListTrafficPolicyVersionsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTrafficPolicyVersionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list that contains one <code>TrafficPolicy</code> element for each traffic
     * policy version that is associated with the specified traffic policy.</p>
     */
    inline const Aws::Vector<TrafficPolicy>& GetTrafficPolicies() const{ return m_trafficPolicies; }

    /**
     * <p>A list that contains one <code>TrafficPolicy</code> element for each traffic
     * policy version that is associated with the specified traffic policy.</p>
     */
    inline void SetTrafficPolicies(const Aws::Vector<TrafficPolicy>& value) { m_trafficPolicies = value; }

    /**
     * <p>A list that contains one <code>TrafficPolicy</code> element for each traffic
     * policy version that is associated with the specified traffic policy.</p>
     */
    inline void SetTrafficPolicies(Aws::Vector<TrafficPolicy>&& value) { m_trafficPolicies = value; }

    /**
     * <p>A list that contains one <code>TrafficPolicy</code> element for each traffic
     * policy version that is associated with the specified traffic policy.</p>
     */
    inline ListTrafficPolicyVersionsResult& WithTrafficPolicies(const Aws::Vector<TrafficPolicy>& value) { SetTrafficPolicies(value); return *this;}

    /**
     * <p>A list that contains one <code>TrafficPolicy</code> element for each traffic
     * policy version that is associated with the specified traffic policy.</p>
     */
    inline ListTrafficPolicyVersionsResult& WithTrafficPolicies(Aws::Vector<TrafficPolicy>&& value) { SetTrafficPolicies(value); return *this;}

    /**
     * <p>A list that contains one <code>TrafficPolicy</code> element for each traffic
     * policy version that is associated with the specified traffic policy.</p>
     */
    inline ListTrafficPolicyVersionsResult& AddTrafficPolicies(const TrafficPolicy& value) { m_trafficPolicies.push_back(value); return *this; }

    /**
     * <p>A list that contains one <code>TrafficPolicy</code> element for each traffic
     * policy version that is associated with the specified traffic policy.</p>
     */
    inline ListTrafficPolicyVersionsResult& AddTrafficPolicies(TrafficPolicy&& value) { m_trafficPolicies.push_back(value); return *this; }

    /**
     * <p>A flag that indicates whether there are more traffic policies to be listed.
     * If the response was truncated, you can get the next group of
     * <code>maxitems</code> traffic policies by calling
     * <code>ListTrafficPolicyVersions</code> again and specifying the value of the
     * <code>NextMarker</code> element in the <code>marker</code> parameter.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more traffic policies to be listed.
     * If the response was truncated, you can get the next group of
     * <code>maxitems</code> traffic policies by calling
     * <code>ListTrafficPolicyVersions</code> again and specifying the value of the
     * <code>NextMarker</code> element in the <code>marker</code> parameter.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more traffic policies to be listed.
     * If the response was truncated, you can get the next group of
     * <code>maxitems</code> traffic policies by calling
     * <code>ListTrafficPolicyVersions</code> again and specifying the value of the
     * <code>NextMarker</code> element in the <code>marker</code> parameter.</p>
     */
    inline ListTrafficPolicyVersionsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>TrafficPolicyVersionMarker</code> identifies the first traffic policy in
     * the next group of <code>MaxItems</code> traffic policies. Call
     * <code>ListTrafficPolicyVersions</code> again and specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the
     * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>This element
     * is present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetTrafficPolicyVersionMarker() const{ return m_trafficPolicyVersionMarker; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>TrafficPolicyVersionMarker</code> identifies the first traffic policy in
     * the next group of <code>MaxItems</code> traffic policies. Call
     * <code>ListTrafficPolicyVersions</code> again and specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the
     * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>This element
     * is present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline void SetTrafficPolicyVersionMarker(const Aws::String& value) { m_trafficPolicyVersionMarker = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>TrafficPolicyVersionMarker</code> identifies the first traffic policy in
     * the next group of <code>MaxItems</code> traffic policies. Call
     * <code>ListTrafficPolicyVersions</code> again and specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the
     * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>This element
     * is present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline void SetTrafficPolicyVersionMarker(Aws::String&& value) { m_trafficPolicyVersionMarker = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>TrafficPolicyVersionMarker</code> identifies the first traffic policy in
     * the next group of <code>MaxItems</code> traffic policies. Call
     * <code>ListTrafficPolicyVersions</code> again and specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the
     * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>This element
     * is present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline void SetTrafficPolicyVersionMarker(const char* value) { m_trafficPolicyVersionMarker.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>TrafficPolicyVersionMarker</code> identifies the first traffic policy in
     * the next group of <code>MaxItems</code> traffic policies. Call
     * <code>ListTrafficPolicyVersions</code> again and specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the
     * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>This element
     * is present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline ListTrafficPolicyVersionsResult& WithTrafficPolicyVersionMarker(const Aws::String& value) { SetTrafficPolicyVersionMarker(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>TrafficPolicyVersionMarker</code> identifies the first traffic policy in
     * the next group of <code>MaxItems</code> traffic policies. Call
     * <code>ListTrafficPolicyVersions</code> again and specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the
     * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>This element
     * is present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline ListTrafficPolicyVersionsResult& WithTrafficPolicyVersionMarker(Aws::String&& value) { SetTrafficPolicyVersionMarker(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>TrafficPolicyVersionMarker</code> identifies the first traffic policy in
     * the next group of <code>MaxItems</code> traffic policies. Call
     * <code>ListTrafficPolicyVersions</code> again and specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the
     * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>This element
     * is present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline ListTrafficPolicyVersionsResult& WithTrafficPolicyVersionMarker(const char* value) { SetTrafficPolicyVersionMarker(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListTrafficPolicyVersions</code> that produced the current
     * response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListTrafficPolicyVersions</code> that produced the current
     * response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListTrafficPolicyVersions</code> that produced the current
     * response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListTrafficPolicyVersions</code> that produced the current
     * response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListTrafficPolicyVersions</code> that produced the current
     * response.</p>
     */
    inline ListTrafficPolicyVersionsResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListTrafficPolicyVersions</code> that produced the current
     * response.</p>
     */
    inline ListTrafficPolicyVersionsResult& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListTrafficPolicyVersions</code> that produced the current
     * response.</p>
     */
    inline ListTrafficPolicyVersionsResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::Vector<TrafficPolicy> m_trafficPolicies;
    bool m_isTruncated;
    Aws::String m_trafficPolicyVersionMarker;
    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws