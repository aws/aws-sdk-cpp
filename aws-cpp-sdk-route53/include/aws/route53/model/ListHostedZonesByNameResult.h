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
  class AWS_ROUTE53_API ListHostedZonesByNameResult
  {
  public:
    ListHostedZonesByNameResult();
    ListHostedZonesByNameResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListHostedZonesByNameResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline ListHostedZonesByNameResult& WithHostedZones(const Aws::Vector<HostedZone>& value) { SetHostedZones(value); return *this;}

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline ListHostedZonesByNameResult& WithHostedZones(Aws::Vector<HostedZone>&& value) { SetHostedZones(value); return *this;}

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline ListHostedZonesByNameResult& AddHostedZones(const HostedZone& value) { m_hostedZones.push_back(value); return *this; }

    /**
     * <p>A complex type that contains information about the hosted zones associated
     * with the current AWS account.</p>
     */
    inline ListHostedZonesByNameResult& AddHostedZones(HostedZone&& value) { m_hostedZones.push_back(value); return *this; }

    /**
     * <p>The <code>DNSName</code> value sent in the request.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    /**
     * <p>The <code>DNSName</code> value sent in the request.</p>
     */
    inline void SetDNSName(const Aws::String& value) { m_dNSName = value; }

    /**
     * <p>The <code>DNSName</code> value sent in the request.</p>
     */
    inline void SetDNSName(Aws::String&& value) { m_dNSName = value; }

    /**
     * <p>The <code>DNSName</code> value sent in the request.</p>
     */
    inline void SetDNSName(const char* value) { m_dNSName.assign(value); }

    /**
     * <p>The <code>DNSName</code> value sent in the request.</p>
     */
    inline ListHostedZonesByNameResult& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>The <code>DNSName</code> value sent in the request.</p>
     */
    inline ListHostedZonesByNameResult& WithDNSName(Aws::String&& value) { SetDNSName(value); return *this;}

    /**
     * <p>The <code>DNSName</code> value sent in the request.</p>
     */
    inline ListHostedZonesByNameResult& WithDNSName(const char* value) { SetDNSName(value); return *this;}

    /**
     * <p>The <code>HostedZoneId</code> value sent in the request.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The <code>HostedZoneId</code> value sent in the request.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneId = value; }

    /**
     * <p>The <code>HostedZoneId</code> value sent in the request.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneId = value; }

    /**
     * <p>The <code>HostedZoneId</code> value sent in the request.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneId.assign(value); }

    /**
     * <p>The <code>HostedZoneId</code> value sent in the request.</p>
     */
    inline ListHostedZonesByNameResult& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The <code>HostedZoneId</code> value sent in the request.</p>
     */
    inline ListHostedZonesByNameResult& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The <code>HostedZoneId</code> value sent in the request.</p>
     */
    inline ListHostedZonesByNameResult& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If your
     * results were truncated, you can make a follow-up request for the next page of
     * results by using the <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * elements.</p> <p>Valid Values: <code>true</code> | <code>false</code></p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If your
     * results were truncated, you can make a follow-up request for the next page of
     * results by using the <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * elements.</p> <p>Valid Values: <code>true</code> | <code>false</code></p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If your
     * results were truncated, you can make a follow-up request for the next page of
     * results by using the <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * elements.</p> <p>Valid Values: <code>true</code> | <code>false</code></p>
     */
    inline ListHostedZonesByNameResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline const Aws::String& GetNextDNSName() const{ return m_nextDNSName; }

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline void SetNextDNSName(const Aws::String& value) { m_nextDNSName = value; }

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline void SetNextDNSName(Aws::String&& value) { m_nextDNSName = value; }

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline void SetNextDNSName(const char* value) { m_nextDNSName.assign(value); }

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline ListHostedZonesByNameResult& WithNextDNSName(const Aws::String& value) { SetNextDNSName(value); return *this;}

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline ListHostedZonesByNameResult& WithNextDNSName(Aws::String&& value) { SetNextDNSName(value); return *this;}

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline ListHostedZonesByNameResult& WithNextDNSName(const char* value) { SetNextDNSName(value); return *this;}

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline const Aws::String& GetNextHostedZoneId() const{ return m_nextHostedZoneId; }

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline void SetNextHostedZoneId(const Aws::String& value) { m_nextHostedZoneId = value; }

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline void SetNextHostedZoneId(Aws::String&& value) { m_nextHostedZoneId = value; }

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline void SetNextHostedZoneId(const char* value) { m_nextHostedZoneId.assign(value); }

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline ListHostedZonesByNameResult& WithNextHostedZoneId(const Aws::String& value) { SetNextHostedZoneId(value); return *this;}

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline ListHostedZonesByNameResult& WithNextHostedZoneId(Aws::String&& value) { SetNextHostedZoneId(value); return *this;}

    /**
     * <p>If <a>ListHostedZonesByNameResponse$IsTruncated</a> is <code>true</code>,
     * there are more hosted zones associated with the current AWS account. To get the
     * next page of results, make another request to
     * <code>ListHostedZonesByName</code>. Specify the value of
     * <a>ListHostedZonesByNameResponse$NextDNSName</a> in the
     * <a>ListHostedZonesByNameRequest$DNSName</a> element and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> in the
     * <a>ListHostedZonesByNameRequest$HostedZoneId</a> element.</p>
     */
    inline ListHostedZonesByNameResult& WithNextHostedZoneId(const char* value) { SetNextHostedZoneId(value); return *this;}

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of
     * <a>ListHostedZonesByNameResponse$IsTruncated</a> in the response is
     * <code>true</code>. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <a>ListHostedZonesByNameResponse$NextDNSName</a> and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> elements respectively to
     * get the next page of results.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of
     * <a>ListHostedZonesByNameResponse$IsTruncated</a> in the response is
     * <code>true</code>. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <a>ListHostedZonesByNameResponse$NextDNSName</a> and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> elements respectively to
     * get the next page of results.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of
     * <a>ListHostedZonesByNameResponse$IsTruncated</a> in the response is
     * <code>true</code>. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <a>ListHostedZonesByNameResponse$NextDNSName</a> and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> elements respectively to
     * get the next page of results.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of
     * <a>ListHostedZonesByNameResponse$IsTruncated</a> in the response is
     * <code>true</code>. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <a>ListHostedZonesByNameResponse$NextDNSName</a> and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> elements respectively to
     * get the next page of results.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of
     * <a>ListHostedZonesByNameResponse$IsTruncated</a> in the response is
     * <code>true</code>. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <a>ListHostedZonesByNameResponse$NextDNSName</a> and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> elements respectively to
     * get the next page of results.</p>
     */
    inline ListHostedZonesByNameResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of
     * <a>ListHostedZonesByNameResponse$IsTruncated</a> in the response is
     * <code>true</code>. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <a>ListHostedZonesByNameResponse$NextDNSName</a> and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> elements respectively to
     * get the next page of results.</p>
     */
    inline ListHostedZonesByNameResult& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of hosted zones to be included in the response body. If
     * the number of hosted zones associated with this AWS account exceeds
     * <code>MaxItems</code>, the value of
     * <a>ListHostedZonesByNameResponse$IsTruncated</a> in the response is
     * <code>true</code>. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <a>ListHostedZonesByNameResponse$NextDNSName</a> and
     * <a>ListHostedZonesByNameResponse$NextHostedZoneId</a> elements respectively to
     * get the next page of results.</p>
     */
    inline ListHostedZonesByNameResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::Vector<HostedZone> m_hostedZones;
    Aws::String m_dNSName;
    Aws::String m_hostedZoneId;
    bool m_isTruncated;
    Aws::String m_nextDNSName;
    Aws::String m_nextHostedZoneId;
    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws