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
#include <aws/route53/model/HostedZone.h>

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
  class AWS_ROUTE53_API ListHostedZonesResult
  {
  public:
    ListHostedZonesResult();
    ListHostedZonesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListHostedZonesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline const Aws::Vector<HostedZone>& GetHostedZones() const{ return m_hostedZones; }

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline void SetHostedZones(const Aws::Vector<HostedZone>& value) { m_hostedZones = value; }

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline void SetHostedZones(Aws::Vector<HostedZone>&& value) { m_hostedZones = value; }

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline ListHostedZonesResult& WithHostedZones(const Aws::Vector<HostedZone>& value) { SetHostedZones(value); return *this;}

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline ListHostedZonesResult& WithHostedZones(Aws::Vector<HostedZone>&& value) { SetHostedZones(value); return *this;}

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline ListHostedZonesResult& AddHostedZones(const HostedZone& value) { m_hostedZones.push_back(value); return *this; }

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline ListHostedZonesResult& AddHostedZones(HostedZone&& value) { m_hostedZones.push_back(value); return *this; }

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
    inline ListHostedZonesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline ListHostedZonesResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline ListHostedZonesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If your
     * results were truncated, you can make a follow-up request for the next page of
     * results by using the <code>Marker</code> element.</p> <p>Valid Values:
     * <code>true</code> | <code>false</code></p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If your
     * results were truncated, you can make a follow-up request for the next page of
     * results by using the <code>Marker</code> element.</p> <p>Valid Values:
     * <code>true</code> | <code>false</code></p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If your
     * results were truncated, you can make a follow-up request for the next page of
     * results by using the <code>Marker</code> element.</p> <p>Valid Values:
     * <code>true</code> | <code>false</code></p>
     */
    inline ListHostedZonesResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /**
     * <p>Indicates where to continue listing hosted zones. If
     * <a>ListHostedZonesResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHostedZones</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>Indicates where to continue listing hosted zones. If
     * <a>ListHostedZonesResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHostedZones</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>Indicates where to continue listing hosted zones. If
     * <a>ListHostedZonesResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHostedZones</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>Indicates where to continue listing hosted zones. If
     * <a>ListHostedZonesResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHostedZones</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>Indicates where to continue listing hosted zones. If
     * <a>ListHostedZonesResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHostedZones</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline ListHostedZonesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>Indicates where to continue listing hosted zones. If
     * <a>ListHostedZonesResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHostedZones</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline ListHostedZonesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>Indicates where to continue listing hosted zones. If
     * <a>ListHostedZonesResponse$IsTruncated</a> is <code>true</code>, make another
     * request to <code>ListHostedZones</code> and include the value of the
     * <code>NextMarker</code> element in the <code>Marker</code> element to get the
     * next page of results.</p>
     */
    inline ListHostedZonesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHostedZonesResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHostedZones</code> again
     * and specify the value of <a>ListHostedZonesResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHostedZonesResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHostedZones</code> again
     * and specify the value of <a>ListHostedZonesResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHostedZonesResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHostedZones</code> again
     * and specify the value of <a>ListHostedZonesResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHostedZonesResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHostedZones</code> again
     * and specify the value of <a>ListHostedZonesResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHostedZonesResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHostedZones</code> again
     * and specify the value of <a>ListHostedZonesResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline ListHostedZonesResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHostedZonesResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHostedZones</code> again
     * and specify the value of <a>ListHostedZonesResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline ListHostedZonesResult& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of <a>ListHostedZonesResponse$IsTruncated</a>
     * in the response is <code>true</code>. Call <code>ListHostedZones</code> again
     * and specify the value of <a>ListHostedZonesResponse$NextMarker</a> in the
     * <a>ListHostedZonesRequest$Marker</a> element to get the next page of
     * results.</p>
     */
    inline ListHostedZonesResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::Vector<HostedZone> m_hostedZones;
    Aws::String m_marker;
    bool m_isTruncated;
    Aws::String m_nextMarker;
    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws