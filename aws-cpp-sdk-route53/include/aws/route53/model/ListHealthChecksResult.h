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
#include <aws/route53/model/HealthCheck.h>

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
   * <p>A complex type that contains the response for the request.</p>
   */
  class AWS_ROUTE53_API ListHealthChecksResult
  {
  public:
    ListHealthChecksResult();
    ListHealthChecksResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListHealthChecksResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains information about the health checks associated
     * with the current AWS account.</p>
     */
    inline const Aws::Vector<HealthCheck>& GetHealthChecks() const{ return m_healthChecks; }

    /**
     * <p>A complex type that contains information about the health checks associated
     * with the current AWS account.</p>
     */
    inline void SetHealthChecks(const Aws::Vector<HealthCheck>& value) { m_healthChecks = value; }

    /**
     * <p>A complex type that contains information about the health checks associated
     * with the current AWS account.</p>
     */
    inline void SetHealthChecks(Aws::Vector<HealthCheck>&& value) { m_healthChecks = value; }

    /**
     * <p>A complex type that contains information about the health checks associated
     * with the current AWS account.</p>
     */
    inline ListHealthChecksResult& WithHealthChecks(const Aws::Vector<HealthCheck>& value) { SetHealthChecks(value); return *this;}

    /**
     * <p>A complex type that contains information about the health checks associated
     * with the current AWS account.</p>
     */
    inline ListHealthChecksResult& WithHealthChecks(Aws::Vector<HealthCheck>&& value) { SetHealthChecks(value); return *this;}

    /**
     * <p>A complex type that contains information about the health checks associated
     * with the current AWS account.</p>
     */
    inline ListHealthChecksResult& AddHealthChecks(const HealthCheck& value) { m_healthChecks.push_back(value); return *this; }

    /**
     * <p>A complex type that contains information about the health checks associated
     * with the current AWS account.</p>
     */
    inline ListHealthChecksResult& AddHealthChecks(HealthCheck&& value) { m_healthChecks.push_back(value); return *this; }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline ListHealthChecksResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline ListHealthChecksResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline ListHealthChecksResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>A flag indicating whether there are more health checks to be listed. If your
     * results were truncated, you can make a follow-up request for the next page of
     * results by using the <code>Marker</code> element.</p> <p>Valid Values:
     * <code>true</code> | <code>false</code></p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag indicating whether there are more health checks to be listed. If your
     * results were truncated, you can make a follow-up request for the next page of
     * results by using the <code>Marker</code> element.</p> <p>Valid Values:
     * <code>true</code> | <code>false</code></p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag indicating whether there are more health checks to be listed. If your
     * results were truncated, you can make a follow-up request for the next page of
     * results by using the <code>Marker</code> element.</p> <p>Valid Values:
     * <code>true</code> | <code>false</code></p>
     */
    inline ListHealthChecksResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /**
     * <p>Indicates where to continue listing health checks. If
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHealthChecks</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>Indicates where to continue listing health checks. If
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHealthChecks</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>Indicates where to continue listing health checks. If
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHealthChecks</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>Indicates where to continue listing health checks. If
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHealthChecks</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>Indicates where to continue listing health checks. If
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHealthChecks</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline ListHealthChecksResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>Indicates where to continue listing health checks. If
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHealthChecks</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline ListHealthChecksResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>Indicates where to continue listing health checks. If
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHealthChecks</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline ListHealthChecksResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    /**
     * <p>The maximum number of health checks to be included in the response body. If
     * the number of health checks associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHealthChecksResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHealthChecks</code> again
     * and specify the value of <a>ListHealthChecksResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of health checks to be included in the response body. If
     * the number of health checks associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHealthChecksResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHealthChecks</code> again
     * and specify the value of <a>ListHealthChecksResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of health checks to be included in the response body. If
     * the number of health checks associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHealthChecksResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHealthChecks</code> again
     * and specify the value of <a>ListHealthChecksResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of health checks to be included in the response body. If
     * the number of health checks associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHealthChecksResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHealthChecks</code> again
     * and specify the value of <a>ListHealthChecksResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The maximum number of health checks to be included in the response body. If
     * the number of health checks associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHealthChecksResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHealthChecks</code> again
     * and specify the value of <a>ListHealthChecksResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline ListHealthChecksResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of health checks to be included in the response body. If
     * the number of health checks associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHealthChecksResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHealthChecks</code> again
     * and specify the value of <a>ListHealthChecksResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline ListHealthChecksResult& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of health checks to be included in the response body. If
     * the number of health checks associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHealthChecksResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHealthChecks</code> again
     * and specify the value of <a>ListHealthChecksResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline ListHealthChecksResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::Vector<HealthCheck> m_healthChecks;
    Aws::String m_marker;
    bool m_isTruncated;
    Aws::String m_nextMarker;
    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws