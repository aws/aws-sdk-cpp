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
   * <p>To retrieve a list of your hosted zones, send a <code>GET</code> request to
   * the <code>/<i>Route 53 API version</i>/hostedzone</code> resource. The response
   * to this request includes a <code>HostedZones</code> element with zero or more
   * <code>HostedZone</code> child elements. By default, the list of hosted zones is
   * displayed on a single page. You can control the length of the page that is
   * displayed by using the <code>MaxItems</code> parameter. You can use the
   * <code>Marker</code> parameter to control the hosted zone that the list begins
   * with. For more information about listing hosted zones, see <a
   * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ListInfoOnHostedZone.html">Listing
   * the Hosted Zones for an AWS Account</a> in the <i>Amazon Route 53 Developer
   * Guide</i>.</p> <note> Amazon Route 53 returns a maximum of 100 items. If you set
   * <code>MaxItems</code> to a value greater than 100, Amazon Route 53 returns only
   * the first 100.</note>
   */
  class AWS_ROUTE53_API ListHostedZonesRequest : public Route53Request
  {
  public:
    ListHostedZonesRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline ListHostedZonesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline ListHostedZonesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextMarker</code> from the last response in the
     * <code>marker</code> parameter to get the next page of results.</p>
     */
    inline ListHostedZonesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Specify the maximum number of hosted zones to return per page of results.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Specify the maximum number of hosted zones to return per page of results.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Specify the maximum number of hosted zones to return per page of results.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Specify the maximum number of hosted zones to return per page of results.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>Specify the maximum number of hosted zones to return per page of results.</p>
     */
    inline ListHostedZonesRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>Specify the maximum number of hosted zones to return per page of results.</p>
     */
    inline ListHostedZonesRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>Specify the maximum number of hosted zones to return per page of results.</p>
     */
    inline ListHostedZonesRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

    
    inline const Aws::String& GetDelegationSetId() const{ return m_delegationSetId; }

    
    inline void SetDelegationSetId(const Aws::String& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    
    inline void SetDelegationSetId(Aws::String&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    
    inline void SetDelegationSetId(const char* value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId.assign(value); }

    
    inline ListHostedZonesRequest& WithDelegationSetId(const Aws::String& value) { SetDelegationSetId(value); return *this;}

    
    inline ListHostedZonesRequest& WithDelegationSetId(Aws::String&& value) { SetDelegationSetId(value); return *this;}

    
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
