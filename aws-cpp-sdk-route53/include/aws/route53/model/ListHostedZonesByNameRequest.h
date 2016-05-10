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
   * <p>To retrieve a list of your hosted zones in lexicographic order, send a
   * <code>GET</code> request to the <code>/<i>Route 53 API
   * version</i>/hostedzonesbyname</code> resource. The response to this request
   * includes a <code>HostedZones</code> element with zero or more
   * <code>HostedZone</code> child elements lexicographically ordered by DNS name. By
   * default, the list of hosted zones is displayed on a single page. You can control
   * the length of the page that is displayed by using the <code>MaxItems</code>
   * parameter. You can use the <code>DNSName</code> and <code>HostedZoneId</code>
   * parameters to control the hosted zone that the list begins with.</p> <p>For more
   * information about listing hosted zones, see <a
   * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ListInfoOnHostedZone.html">Listing
   * the Hosted Zones for an AWS Account</a> in the <i>Amazon Route 53 Developer
   * Guide</i>.</p>
   */
  class AWS_ROUTE53_API ListHostedZonesByNameRequest : public Route53Request
  {
  public:
    ListHostedZonesByNameRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListHostedZonesByNameRequest</code> request to list.</p> <p>If the
     * request returned more than one page of results, submit another request and
     * specify the value of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * from the last response in the <code>DNSName</code> and <code>HostedZoneId</code>
     * parameters to get the next page of results.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListHostedZonesByNameRequest</code> request to list.</p> <p>If the
     * request returned more than one page of results, submit another request and
     * specify the value of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * from the last response in the <code>DNSName</code> and <code>HostedZoneId</code>
     * parameters to get the next page of results.</p>
     */
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListHostedZonesByNameRequest</code> request to list.</p> <p>If the
     * request returned more than one page of results, submit another request and
     * specify the value of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * from the last response in the <code>DNSName</code> and <code>HostedZoneId</code>
     * parameters to get the next page of results.</p>
     */
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListHostedZonesByNameRequest</code> request to list.</p> <p>If the
     * request returned more than one page of results, submit another request and
     * specify the value of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * from the last response in the <code>DNSName</code> and <code>HostedZoneId</code>
     * parameters to get the next page of results.</p>
     */
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListHostedZonesByNameRequest</code> request to list.</p> <p>If the
     * request returned more than one page of results, submit another request and
     * specify the value of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * from the last response in the <code>DNSName</code> and <code>HostedZoneId</code>
     * parameters to get the next page of results.</p>
     */
    inline ListHostedZonesByNameRequest& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListHostedZonesByNameRequest</code> request to list.</p> <p>If the
     * request returned more than one page of results, submit another request and
     * specify the value of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * from the last response in the <code>DNSName</code> and <code>HostedZoneId</code>
     * parameters to get the next page of results.</p>
     */
    inline ListHostedZonesByNameRequest& WithDNSName(Aws::String&& value) { SetDNSName(value); return *this;}

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListHostedZonesByNameRequest</code> request to list.</p> <p>If the
     * request returned more than one page of results, submit another request and
     * specify the value of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * from the last response in the <code>DNSName</code> and <code>HostedZoneId</code>
     * parameters to get the next page of results.</p>
     */
    inline ListHostedZonesByNameRequest& WithDNSName(const char* value) { SetDNSName(value); return *this;}

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> from the last response in the <code>DNSName</code>
     * and <code>HostedZoneId</code> parameters to get the next page of results.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> from the last response in the <code>DNSName</code>
     * and <code>HostedZoneId</code> parameters to get the next page of results.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> from the last response in the <code>DNSName</code>
     * and <code>HostedZoneId</code> parameters to get the next page of results.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> from the last response in the <code>DNSName</code>
     * and <code>HostedZoneId</code> parameters to get the next page of results.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> from the last response in the <code>DNSName</code>
     * and <code>HostedZoneId</code> parameters to get the next page of results.</p>
     */
    inline ListHostedZonesByNameRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> from the last response in the <code>DNSName</code>
     * and <code>HostedZoneId</code> parameters to get the next page of results.</p>
     */
    inline ListHostedZonesByNameRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>If the request returned more than one page of results, submit another request
     * and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> from the last response in the <code>DNSName</code>
     * and <code>HostedZoneId</code> parameters to get the next page of results.</p>
     */
    inline ListHostedZonesByNameRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

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
    inline ListHostedZonesByNameRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>Specify the maximum number of hosted zones to return per page of results.</p>
     */
    inline ListHostedZonesByNameRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>Specify the maximum number of hosted zones to return per page of results.</p>
     */
    inline ListHostedZonesByNameRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet;
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
