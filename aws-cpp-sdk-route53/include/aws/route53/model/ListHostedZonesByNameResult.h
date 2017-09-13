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
#include <aws/route53/model/HostedZone.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZonesByNameResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListHostedZonesByNameResult
  {
  public:
    ListHostedZonesByNameResult();
    ListHostedZonesByNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListHostedZonesByNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline const Aws::Vector<HostedZone>& GetHostedZones() const{ return m_hostedZones; }

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline void SetHostedZones(const Aws::Vector<HostedZone>& value) { m_hostedZones = value; }

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline void SetHostedZones(Aws::Vector<HostedZone>&& value) { m_hostedZones = std::move(value); }

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline ListHostedZonesByNameResult& WithHostedZones(const Aws::Vector<HostedZone>& value) { SetHostedZones(value); return *this;}

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline ListHostedZonesByNameResult& WithHostedZones(Aws::Vector<HostedZone>&& value) { SetHostedZones(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline ListHostedZonesByNameResult& AddHostedZones(const HostedZone& value) { m_hostedZones.push_back(value); return *this; }

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline ListHostedZonesByNameResult& AddHostedZones(HostedZone&& value) { m_hostedZones.push_back(std::move(value)); return *this; }


    /**
     * <p>For the second and subsequent calls to <code>ListHostedZonesByName</code>,
     * <code>DNSName</code> is the value that you specified for the
     * <code>dnsname</code> parameter in the request that produced the current
     * response.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZonesByName</code>,
     * <code>DNSName</code> is the value that you specified for the
     * <code>dnsname</code> parameter in the request that produced the current
     * response.</p>
     */
    inline void SetDNSName(const Aws::String& value) { m_dNSName = value; }

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZonesByName</code>,
     * <code>DNSName</code> is the value that you specified for the
     * <code>dnsname</code> parameter in the request that produced the current
     * response.</p>
     */
    inline void SetDNSName(Aws::String&& value) { m_dNSName = std::move(value); }

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZonesByName</code>,
     * <code>DNSName</code> is the value that you specified for the
     * <code>dnsname</code> parameter in the request that produced the current
     * response.</p>
     */
    inline void SetDNSName(const char* value) { m_dNSName.assign(value); }

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZonesByName</code>,
     * <code>DNSName</code> is the value that you specified for the
     * <code>dnsname</code> parameter in the request that produced the current
     * response.</p>
     */
    inline ListHostedZonesByNameResult& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZonesByName</code>,
     * <code>DNSName</code> is the value that you specified for the
     * <code>dnsname</code> parameter in the request that produced the current
     * response.</p>
     */
    inline ListHostedZonesByNameResult& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZonesByName</code>,
     * <code>DNSName</code> is the value that you specified for the
     * <code>dnsname</code> parameter in the request that produced the current
     * response.</p>
     */
    inline ListHostedZonesByNameResult& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneId = value; }

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneId = std::move(value); }

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneId.assign(value); }

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline ListHostedZonesByNameResult& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline ListHostedZonesByNameResult& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline ListHostedZonesByNameResult& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>A flag that indicates whether there are more hosted zones to be listed. If
     * the response was truncated, you can get the next group of <code>maxitems</code>
     * hosted zones by calling <code>ListHostedZonesByName</code> again and specifying
     * the values of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * elements in the <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more hosted zones to be listed. If
     * the response was truncated, you can get the next group of <code>maxitems</code>
     * hosted zones by calling <code>ListHostedZonesByName</code> again and specifying
     * the values of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * elements in the <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more hosted zones to be listed. If
     * the response was truncated, you can get the next group of <code>maxitems</code>
     * hosted zones by calling <code>ListHostedZonesByName</code> again and specifying
     * the values of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * elements in the <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters.</p>
     */
    inline ListHostedZonesByNameResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is true, the value of <code>NextDNSName</code> is
     * the name of the first hosted zone in the next group of <code>maxitems</code>
     * hosted zones. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
     * <p>This element is present only if <code>IsTruncated</code> is
     * <code>true</code>.</p>
     */
    inline const Aws::String& GetNextDNSName() const{ return m_nextDNSName; }

    /**
     * <p>If <code>IsTruncated</code> is true, the value of <code>NextDNSName</code> is
     * the name of the first hosted zone in the next group of <code>maxitems</code>
     * hosted zones. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
     * <p>This element is present only if <code>IsTruncated</code> is
     * <code>true</code>.</p>
     */
    inline void SetNextDNSName(const Aws::String& value) { m_nextDNSName = value; }

    /**
     * <p>If <code>IsTruncated</code> is true, the value of <code>NextDNSName</code> is
     * the name of the first hosted zone in the next group of <code>maxitems</code>
     * hosted zones. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
     * <p>This element is present only if <code>IsTruncated</code> is
     * <code>true</code>.</p>
     */
    inline void SetNextDNSName(Aws::String&& value) { m_nextDNSName = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is true, the value of <code>NextDNSName</code> is
     * the name of the first hosted zone in the next group of <code>maxitems</code>
     * hosted zones. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
     * <p>This element is present only if <code>IsTruncated</code> is
     * <code>true</code>.</p>
     */
    inline void SetNextDNSName(const char* value) { m_nextDNSName.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is true, the value of <code>NextDNSName</code> is
     * the name of the first hosted zone in the next group of <code>maxitems</code>
     * hosted zones. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
     * <p>This element is present only if <code>IsTruncated</code> is
     * <code>true</code>.</p>
     */
    inline ListHostedZonesByNameResult& WithNextDNSName(const Aws::String& value) { SetNextDNSName(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is true, the value of <code>NextDNSName</code> is
     * the name of the first hosted zone in the next group of <code>maxitems</code>
     * hosted zones. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
     * <p>This element is present only if <code>IsTruncated</code> is
     * <code>true</code>.</p>
     */
    inline ListHostedZonesByNameResult& WithNextDNSName(Aws::String&& value) { SetNextDNSName(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is true, the value of <code>NextDNSName</code> is
     * the name of the first hosted zone in the next group of <code>maxitems</code>
     * hosted zones. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
     * <p>This element is present only if <code>IsTruncated</code> is
     * <code>true</code>.</p>
     */
    inline ListHostedZonesByNameResult& WithNextDNSName(const char* value) { SetNextDNSName(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextHostedZoneId</code> identifies the first hosted zone in the next group
     * of <code>maxitems</code> hosted zones. Call <code>ListHostedZonesByName</code>
     * again and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> in the <code>dnsname</code> and
     * <code>hostedzoneid</code> parameters, respectively.</p> <p>This element is
     * present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetNextHostedZoneId() const{ return m_nextHostedZoneId; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextHostedZoneId</code> identifies the first hosted zone in the next group
     * of <code>maxitems</code> hosted zones. Call <code>ListHostedZonesByName</code>
     * again and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> in the <code>dnsname</code> and
     * <code>hostedzoneid</code> parameters, respectively.</p> <p>This element is
     * present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline void SetNextHostedZoneId(const Aws::String& value) { m_nextHostedZoneId = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextHostedZoneId</code> identifies the first hosted zone in the next group
     * of <code>maxitems</code> hosted zones. Call <code>ListHostedZonesByName</code>
     * again and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> in the <code>dnsname</code> and
     * <code>hostedzoneid</code> parameters, respectively.</p> <p>This element is
     * present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline void SetNextHostedZoneId(Aws::String&& value) { m_nextHostedZoneId = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextHostedZoneId</code> identifies the first hosted zone in the next group
     * of <code>maxitems</code> hosted zones. Call <code>ListHostedZonesByName</code>
     * again and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> in the <code>dnsname</code> and
     * <code>hostedzoneid</code> parameters, respectively.</p> <p>This element is
     * present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline void SetNextHostedZoneId(const char* value) { m_nextHostedZoneId.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextHostedZoneId</code> identifies the first hosted zone in the next group
     * of <code>maxitems</code> hosted zones. Call <code>ListHostedZonesByName</code>
     * again and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> in the <code>dnsname</code> and
     * <code>hostedzoneid</code> parameters, respectively.</p> <p>This element is
     * present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline ListHostedZonesByNameResult& WithNextHostedZoneId(const Aws::String& value) { SetNextHostedZoneId(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextHostedZoneId</code> identifies the first hosted zone in the next group
     * of <code>maxitems</code> hosted zones. Call <code>ListHostedZonesByName</code>
     * again and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> in the <code>dnsname</code> and
     * <code>hostedzoneid</code> parameters, respectively.</p> <p>This element is
     * present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline ListHostedZonesByNameResult& WithNextHostedZoneId(Aws::String&& value) { SetNextHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextHostedZoneId</code> identifies the first hosted zone in the next group
     * of <code>maxitems</code> hosted zones. Call <code>ListHostedZonesByName</code>
     * again and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> in the <code>dnsname</code> and
     * <code>hostedzoneid</code> parameters, respectively.</p> <p>This element is
     * present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline ListHostedZonesByNameResult& WithNextHostedZoneId(const char* value) { SetNextHostedZoneId(value); return *this;}


    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZonesByName</code> that produced the current
     * response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZonesByName</code> that produced the current
     * response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZonesByName</code> that produced the current
     * response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZonesByName</code> that produced the current
     * response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZonesByName</code> that produced the current
     * response.</p>
     */
    inline ListHostedZonesByNameResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZonesByName</code> that produced the current
     * response.</p>
     */
    inline ListHostedZonesByNameResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZonesByName</code> that produced the current
     * response.</p>
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
