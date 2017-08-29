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
  class AWS_ROUTE53_API ListHostedZonesResult
  {
  public:
    ListHostedZonesResult();
    ListHostedZonesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListHostedZonesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline ListHostedZonesResult& WithHostedZones(const Aws::Vector<HostedZone>& value) { SetHostedZones(value); return *this;}

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline ListHostedZonesResult& WithHostedZones(Aws::Vector<HostedZone>&& value) { SetHostedZones(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline ListHostedZonesResult& AddHostedZones(const HostedZone& value) { m_hostedZones.push_back(value); return *this; }

    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline ListHostedZonesResult& AddHostedZones(HostedZone&& value) { m_hostedZones.push_back(std::move(value)); return *this; }


    /**
     * <p>For the second and subsequent calls to <code>ListHostedZones</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the request that produced the current response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZones</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the request that produced the current response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZones</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the request that produced the current response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZones</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the request that produced the current response.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZones</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the request that produced the current response.</p>
     */
    inline ListHostedZonesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZones</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the request that produced the current response.</p>
     */
    inline ListHostedZonesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>For the second and subsequent calls to <code>ListHostedZones</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the request that produced the current response.</p>
     */
    inline ListHostedZonesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If the
     * response was truncated, you can get more hosted zones by submitting another
     * <code>ListHostedZones</code> request and specifying the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If the
     * response was truncated, you can get more hosted zones by submitting another
     * <code>ListHostedZones</code> request and specifying the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If the
     * response was truncated, you can get more hosted zones by submitting another
     * <code>ListHostedZones</code> request and specifying the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline ListHostedZonesResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first hosted zone in the next group of
     * hosted zones. Submit another <code>ListHostedZones</code> request, and specify
     * the value of <code>NextMarker</code> from the response in the
     * <code>marker</code> parameter.</p> <p>This element is present only if
     * <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first hosted zone in the next group of
     * hosted zones. Submit another <code>ListHostedZones</code> request, and specify
     * the value of <code>NextMarker</code> from the response in the
     * <code>marker</code> parameter.</p> <p>This element is present only if
     * <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first hosted zone in the next group of
     * hosted zones. Submit another <code>ListHostedZones</code> request, and specify
     * the value of <code>NextMarker</code> from the response in the
     * <code>marker</code> parameter.</p> <p>This element is present only if
     * <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first hosted zone in the next group of
     * hosted zones. Submit another <code>ListHostedZones</code> request, and specify
     * the value of <code>NextMarker</code> from the response in the
     * <code>marker</code> parameter.</p> <p>This element is present only if
     * <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first hosted zone in the next group of
     * hosted zones. Submit another <code>ListHostedZones</code> request, and specify
     * the value of <code>NextMarker</code> from the response in the
     * <code>marker</code> parameter.</p> <p>This element is present only if
     * <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline ListHostedZonesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first hosted zone in the next group of
     * hosted zones. Submit another <code>ListHostedZones</code> request, and specify
     * the value of <code>NextMarker</code> from the response in the
     * <code>marker</code> parameter.</p> <p>This element is present only if
     * <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline ListHostedZonesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first hosted zone in the next group of
     * hosted zones. Submit another <code>ListHostedZones</code> request, and specify
     * the value of <code>NextMarker</code> from the response in the
     * <code>marker</code> parameter.</p> <p>This element is present only if
     * <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline ListHostedZonesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZones</code> that produced the current response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZones</code> that produced the current response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZones</code> that produced the current response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZones</code> that produced the current response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZones</code> that produced the current response.</p>
     */
    inline ListHostedZonesResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZones</code> that produced the current response.</p>
     */
    inline ListHostedZonesResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZones</code> that produced the current response.</p>
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
