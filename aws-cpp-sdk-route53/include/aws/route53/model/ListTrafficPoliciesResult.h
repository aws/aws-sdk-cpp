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
#include <aws/route53/model/TrafficPolicySummary.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListTrafficPoliciesResult
  {
  public:
    ListTrafficPoliciesResult();
    ListTrafficPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTrafficPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list that contains one <code>TrafficPolicySummary</code> element for each
     * traffic policy that was created by the current AWS account.</p>
     */
    inline const Aws::Vector<TrafficPolicySummary>& GetTrafficPolicySummaries() const{ return m_trafficPolicySummaries; }

    /**
     * <p>A list that contains one <code>TrafficPolicySummary</code> element for each
     * traffic policy that was created by the current AWS account.</p>
     */
    inline void SetTrafficPolicySummaries(const Aws::Vector<TrafficPolicySummary>& value) { m_trafficPolicySummaries = value; }

    /**
     * <p>A list that contains one <code>TrafficPolicySummary</code> element for each
     * traffic policy that was created by the current AWS account.</p>
     */
    inline void SetTrafficPolicySummaries(Aws::Vector<TrafficPolicySummary>&& value) { m_trafficPolicySummaries = std::move(value); }

    /**
     * <p>A list that contains one <code>TrafficPolicySummary</code> element for each
     * traffic policy that was created by the current AWS account.</p>
     */
    inline ListTrafficPoliciesResult& WithTrafficPolicySummaries(const Aws::Vector<TrafficPolicySummary>& value) { SetTrafficPolicySummaries(value); return *this;}

    /**
     * <p>A list that contains one <code>TrafficPolicySummary</code> element for each
     * traffic policy that was created by the current AWS account.</p>
     */
    inline ListTrafficPoliciesResult& WithTrafficPolicySummaries(Aws::Vector<TrafficPolicySummary>&& value) { SetTrafficPolicySummaries(std::move(value)); return *this;}

    /**
     * <p>A list that contains one <code>TrafficPolicySummary</code> element for each
     * traffic policy that was created by the current AWS account.</p>
     */
    inline ListTrafficPoliciesResult& AddTrafficPolicySummaries(const TrafficPolicySummary& value) { m_trafficPolicySummaries.push_back(value); return *this; }

    /**
     * <p>A list that contains one <code>TrafficPolicySummary</code> element for each
     * traffic policy that was created by the current AWS account.</p>
     */
    inline ListTrafficPoliciesResult& AddTrafficPolicySummaries(TrafficPolicySummary&& value) { m_trafficPolicySummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that indicates whether there are more traffic policies to be listed.
     * If the response was truncated, you can get the next group of traffic policies by
     * submitting another <code>ListTrafficPolicies</code> request and specifying the
     * value of <code>TrafficPolicyIdMarker</code> in the
     * <code>TrafficPolicyIdMarker</code> request parameter.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more traffic policies to be listed.
     * If the response was truncated, you can get the next group of traffic policies by
     * submitting another <code>ListTrafficPolicies</code> request and specifying the
     * value of <code>TrafficPolicyIdMarker</code> in the
     * <code>TrafficPolicyIdMarker</code> request parameter.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more traffic policies to be listed.
     * If the response was truncated, you can get the next group of traffic policies by
     * submitting another <code>ListTrafficPolicies</code> request and specifying the
     * value of <code>TrafficPolicyIdMarker</code> in the
     * <code>TrafficPolicyIdMarker</code> request parameter.</p>
     */
    inline ListTrafficPoliciesResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>If the value of <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
     * next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline const Aws::String& GetTrafficPolicyIdMarker() const{ return m_trafficPolicyIdMarker; }

    /**
     * <p>If the value of <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
     * next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline void SetTrafficPolicyIdMarker(const Aws::String& value) { m_trafficPolicyIdMarker = value; }

    /**
     * <p>If the value of <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
     * next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline void SetTrafficPolicyIdMarker(Aws::String&& value) { m_trafficPolicyIdMarker = std::move(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
     * next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline void SetTrafficPolicyIdMarker(const char* value) { m_trafficPolicyIdMarker.assign(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
     * next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline ListTrafficPoliciesResult& WithTrafficPolicyIdMarker(const Aws::String& value) { SetTrafficPolicyIdMarker(value); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
     * next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline ListTrafficPoliciesResult& WithTrafficPolicyIdMarker(Aws::String&& value) { SetTrafficPolicyIdMarker(std::move(value)); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
     * next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline ListTrafficPoliciesResult& WithTrafficPolicyIdMarker(const char* value) { SetTrafficPolicyIdMarker(value); return *this;}


    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicies</code> request that produced the current response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicies</code> request that produced the current response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicies</code> request that produced the current response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicies</code> request that produced the current response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicies</code> request that produced the current response.</p>
     */
    inline ListTrafficPoliciesResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicies</code> request that produced the current response.</p>
     */
    inline ListTrafficPoliciesResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicies</code> request that produced the current response.</p>
     */
    inline ListTrafficPoliciesResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::Vector<TrafficPolicySummary> m_trafficPolicySummaries;

    bool m_isTruncated;

    Aws::String m_trafficPolicyIdMarker;

    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
