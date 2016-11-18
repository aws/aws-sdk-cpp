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
   * <p>To retrieve a list of your public and private hosted zones, send a
   * <code>GET</code> request to the <code>/2013-04-01/hostedzone</code> resource.
   * The response to this request includes a HostedZone child element for each hosted
   * zone that was created by the current AWS account.</p> <p>Amazon Route 53 returns
   * a maximum of 100 items in each response. If you have a lot of hosted zones, you
   * can use the maxitems parameter to list them in groups of up to 100. The response
   * includes four values that help you navigate from one group of maxitems hosted
   * zones to the next:</p> <ul> <li> <p> <code>MaxItems</code> is the value that you
   * specified for the <code>maxitems</code> parameter in the request that produced
   * the current response.</p> </li> <li> <p>If the value of <code>IsTruncated</code>
   * in the response is <code>true</code>, there are more hosted zones associated
   * with the current AWS account.</p> <p>If <code>IsTruncated</code> is
   * <code>false</code>, this response includes the last hosted zone that is
   * associated with the current account.</p> </li> <li> <p> <code>NextMarker</code>
   * is the hosted zone ID of the next hosted zone that is associated with the
   * current AWS account. If you want to list more hosted zones, make another call to
   * <code>ListHostedZones</code>, and specify the value of the
   * <code>NextMarker</code> element in the marker parameter.</p> <p>If
   * <code>IsTruncated</code> is <code>false</code>, the <code>NextMarker</code>
   * element is omitted from the response.</p> </li> <li> <p>If you're making the
   * second or subsequent call to <code>ListHostedZones</code>, the
   * <code>Marker</code> element matches the value that you specified in the
   * <code>marker</code> parameter in the previous request.</p> </li> </ul>
   */
  class AWS_ROUTE53_API ListHostedZonesRequest : public Route53Request
  {
  public:
    ListHostedZonesRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>(Optional) If you have more hosted zones than the value of
     * <code>maxitems</code>, <code>ListHostedZones</code> returns only the first
     * <code>maxitems</code> hosted zones. To get the next group of
     * <code>maxitems</code> hosted zones, submit another request to
     * <code>ListHostedZones</code>. For the value of marker, specify the value of the
     * <code>NextMarker</code> element that was returned in the previous response.</p>
     * <p>Hosted zones are listed in the order in which they were created.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>(Optional) If you have more hosted zones than the value of
     * <code>maxitems</code>, <code>ListHostedZones</code> returns only the first
     * <code>maxitems</code> hosted zones. To get the next group of
     * <code>maxitems</code> hosted zones, submit another request to
     * <code>ListHostedZones</code>. For the value of marker, specify the value of the
     * <code>NextMarker</code> element that was returned in the previous response.</p>
     * <p>Hosted zones are listed in the order in which they were created.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>(Optional) If you have more hosted zones than the value of
     * <code>maxitems</code>, <code>ListHostedZones</code> returns only the first
     * <code>maxitems</code> hosted zones. To get the next group of
     * <code>maxitems</code> hosted zones, submit another request to
     * <code>ListHostedZones</code>. For the value of marker, specify the value of the
     * <code>NextMarker</code> element that was returned in the previous response.</p>
     * <p>Hosted zones are listed in the order in which they were created.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>(Optional) If you have more hosted zones than the value of
     * <code>maxitems</code>, <code>ListHostedZones</code> returns only the first
     * <code>maxitems</code> hosted zones. To get the next group of
     * <code>maxitems</code> hosted zones, submit another request to
     * <code>ListHostedZones</code>. For the value of marker, specify the value of the
     * <code>NextMarker</code> element that was returned in the previous response.</p>
     * <p>Hosted zones are listed in the order in which they were created.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>(Optional) If you have more hosted zones than the value of
     * <code>maxitems</code>, <code>ListHostedZones</code> returns only the first
     * <code>maxitems</code> hosted zones. To get the next group of
     * <code>maxitems</code> hosted zones, submit another request to
     * <code>ListHostedZones</code>. For the value of marker, specify the value of the
     * <code>NextMarker</code> element that was returned in the previous response.</p>
     * <p>Hosted zones are listed in the order in which they were created.</p>
     */
    inline ListHostedZonesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>(Optional) If you have more hosted zones than the value of
     * <code>maxitems</code>, <code>ListHostedZones</code> returns only the first
     * <code>maxitems</code> hosted zones. To get the next group of
     * <code>maxitems</code> hosted zones, submit another request to
     * <code>ListHostedZones</code>. For the value of marker, specify the value of the
     * <code>NextMarker</code> element that was returned in the previous response.</p>
     * <p>Hosted zones are listed in the order in which they were created.</p>
     */
    inline ListHostedZonesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>(Optional) If you have more hosted zones than the value of
     * <code>maxitems</code>, <code>ListHostedZones</code> returns only the first
     * <code>maxitems</code> hosted zones. To get the next group of
     * <code>maxitems</code> hosted zones, submit another request to
     * <code>ListHostedZones</code>. For the value of marker, specify the value of the
     * <code>NextMarker</code> element that was returned in the previous response.</p>
     * <p>Hosted zones are listed in the order in which they were created.</p>
     */
    inline ListHostedZonesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>(Optional) The maximum number of hosted zones to be included in the response
     * body for this request. If you have more than <code>maxitems</code> hosted zones,
     * the value of the <code>IsTruncated</code> element in the response is
     * <code>true</code>, and the value of the <code>NextMarker</code> element is the
     * hosted zone ID of the first hosted zone in the next group of
     * <code>maxitems</code> hosted zones.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) The maximum number of hosted zones to be included in the response
     * body for this request. If you have more than <code>maxitems</code> hosted zones,
     * the value of the <code>IsTruncated</code> element in the response is
     * <code>true</code>, and the value of the <code>NextMarker</code> element is the
     * hosted zone ID of the first hosted zone in the next group of
     * <code>maxitems</code> hosted zones.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of hosted zones to be included in the response
     * body for this request. If you have more than <code>maxitems</code> hosted zones,
     * the value of the <code>IsTruncated</code> element in the response is
     * <code>true</code>, and the value of the <code>NextMarker</code> element is the
     * hosted zone ID of the first hosted zone in the next group of
     * <code>maxitems</code> hosted zones.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of hosted zones to be included in the response
     * body for this request. If you have more than <code>maxitems</code> hosted zones,
     * the value of the <code>IsTruncated</code> element in the response is
     * <code>true</code>, and the value of the <code>NextMarker</code> element is the
     * hosted zone ID of the first hosted zone in the next group of
     * <code>maxitems</code> hosted zones.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>(Optional) The maximum number of hosted zones to be included in the response
     * body for this request. If you have more than <code>maxitems</code> hosted zones,
     * the value of the <code>IsTruncated</code> element in the response is
     * <code>true</code>, and the value of the <code>NextMarker</code> element is the
     * hosted zone ID of the first hosted zone in the next group of
     * <code>maxitems</code> hosted zones.</p>
     */
    inline ListHostedZonesRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of hosted zones to be included in the response
     * body for this request. If you have more than <code>maxitems</code> hosted zones,
     * the value of the <code>IsTruncated</code> element in the response is
     * <code>true</code>, and the value of the <code>NextMarker</code> element is the
     * hosted zone ID of the first hosted zone in the next group of
     * <code>maxitems</code> hosted zones.</p>
     */
    inline ListHostedZonesRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of hosted zones to be included in the response
     * body for this request. If you have more than <code>maxitems</code> hosted zones,
     * the value of the <code>IsTruncated</code> element in the response is
     * <code>true</code>, and the value of the <code>NextMarker</code> element is the
     * hosted zone ID of the first hosted zone in the next group of
     * <code>maxitems</code> hosted zones.</p>
     */
    inline ListHostedZonesRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline const Aws::String& GetDelegationSetId() const{ return m_delegationSetId; }

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline void SetDelegationSetId(const Aws::String& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline void SetDelegationSetId(Aws::String&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline void SetDelegationSetId(const char* value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId.assign(value); }

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline ListHostedZonesRequest& WithDelegationSetId(const Aws::String& value) { SetDelegationSetId(value); return *this;}

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline ListHostedZonesRequest& WithDelegationSetId(Aws::String&& value) { SetDelegationSetId(value); return *this;}

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline ListHostedZonesRequest& WithDelegationSetId(const char* value) { SetDelegationSetId(value); return *this;}

  private:
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
    Aws::String m_delegationSetId;
    bool m_delegationSetIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
