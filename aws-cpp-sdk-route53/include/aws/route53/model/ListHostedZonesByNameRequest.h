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
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>Retrieves a list of the public and private hosted zones that are associated
   * with the current AWS account in ASCII order by domain name. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZonesByNameRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListHostedZonesByNameRequest : public Route53Request
  {
  public:
    ListHostedZonesByNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHostedZonesByName"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>,
     * include the <code>dnsname</code> parameter only if you want to specify the name
     * of the first hosted zone in the response. If you don't include the
     * <code>dnsname</code> parameter, Amazon Route 53 returns all of the hosted zones
     * that were created by the current AWS account, in ASCII order. For subsequent
     * requests, include both <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters. For <code>dnsname</code>, specify the value of
     * <code>NextDNSName</code> from the previous response.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>,
     * include the <code>dnsname</code> parameter only if you want to specify the name
     * of the first hosted zone in the response. If you don't include the
     * <code>dnsname</code> parameter, Amazon Route 53 returns all of the hosted zones
     * that were created by the current AWS account, in ASCII order. For subsequent
     * requests, include both <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters. For <code>dnsname</code>, specify the value of
     * <code>NextDNSName</code> from the previous response.</p>
     */
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>,
     * include the <code>dnsname</code> parameter only if you want to specify the name
     * of the first hosted zone in the response. If you don't include the
     * <code>dnsname</code> parameter, Amazon Route 53 returns all of the hosted zones
     * that were created by the current AWS account, in ASCII order. For subsequent
     * requests, include both <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters. For <code>dnsname</code>, specify the value of
     * <code>NextDNSName</code> from the previous response.</p>
     */
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>,
     * include the <code>dnsname</code> parameter only if you want to specify the name
     * of the first hosted zone in the response. If you don't include the
     * <code>dnsname</code> parameter, Amazon Route 53 returns all of the hosted zones
     * that were created by the current AWS account, in ASCII order. For subsequent
     * requests, include both <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters. For <code>dnsname</code>, specify the value of
     * <code>NextDNSName</code> from the previous response.</p>
     */
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>,
     * include the <code>dnsname</code> parameter only if you want to specify the name
     * of the first hosted zone in the response. If you don't include the
     * <code>dnsname</code> parameter, Amazon Route 53 returns all of the hosted zones
     * that were created by the current AWS account, in ASCII order. For subsequent
     * requests, include both <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters. For <code>dnsname</code>, specify the value of
     * <code>NextDNSName</code> from the previous response.</p>
     */
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>,
     * include the <code>dnsname</code> parameter only if you want to specify the name
     * of the first hosted zone in the response. If you don't include the
     * <code>dnsname</code> parameter, Amazon Route 53 returns all of the hosted zones
     * that were created by the current AWS account, in ASCII order. For subsequent
     * requests, include both <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters. For <code>dnsname</code>, specify the value of
     * <code>NextDNSName</code> from the previous response.</p>
     */
    inline ListHostedZonesByNameRequest& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>,
     * include the <code>dnsname</code> parameter only if you want to specify the name
     * of the first hosted zone in the response. If you don't include the
     * <code>dnsname</code> parameter, Amazon Route 53 returns all of the hosted zones
     * that were created by the current AWS account, in ASCII order. For subsequent
     * requests, include both <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters. For <code>dnsname</code>, specify the value of
     * <code>NextDNSName</code> from the previous response.</p>
     */
    inline ListHostedZonesByNameRequest& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>,
     * include the <code>dnsname</code> parameter only if you want to specify the name
     * of the first hosted zone in the response. If you don't include the
     * <code>dnsname</code> parameter, Amazon Route 53 returns all of the hosted zones
     * that were created by the current AWS account, in ASCII order. For subsequent
     * requests, include both <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters. For <code>dnsname</code>, specify the value of
     * <code>NextDNSName</code> from the previous response.</p>
     */
    inline ListHostedZonesByNameRequest& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>, do
     * not include the <code>hostedzoneid</code> parameter.</p> <p>If you have more
     * hosted zones than the value of <code>maxitems</code>,
     * <code>ListHostedZonesByName</code> returns only the first <code>maxitems</code>
     * hosted zones. To get the next group of <code>maxitems</code> hosted zones,
     * submit another request to <code>ListHostedZonesByName</code> and include both
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters. For the value of
     * <code>hostedzoneid</code>, specify the value of the
     * <code>NextHostedZoneId</code> element from the previous response.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>, do
     * not include the <code>hostedzoneid</code> parameter.</p> <p>If you have more
     * hosted zones than the value of <code>maxitems</code>,
     * <code>ListHostedZonesByName</code> returns only the first <code>maxitems</code>
     * hosted zones. To get the next group of <code>maxitems</code> hosted zones,
     * submit another request to <code>ListHostedZonesByName</code> and include both
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters. For the value of
     * <code>hostedzoneid</code>, specify the value of the
     * <code>NextHostedZoneId</code> element from the previous response.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>, do
     * not include the <code>hostedzoneid</code> parameter.</p> <p>If you have more
     * hosted zones than the value of <code>maxitems</code>,
     * <code>ListHostedZonesByName</code> returns only the first <code>maxitems</code>
     * hosted zones. To get the next group of <code>maxitems</code> hosted zones,
     * submit another request to <code>ListHostedZonesByName</code> and include both
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters. For the value of
     * <code>hostedzoneid</code>, specify the value of the
     * <code>NextHostedZoneId</code> element from the previous response.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>, do
     * not include the <code>hostedzoneid</code> parameter.</p> <p>If you have more
     * hosted zones than the value of <code>maxitems</code>,
     * <code>ListHostedZonesByName</code> returns only the first <code>maxitems</code>
     * hosted zones. To get the next group of <code>maxitems</code> hosted zones,
     * submit another request to <code>ListHostedZonesByName</code> and include both
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters. For the value of
     * <code>hostedzoneid</code>, specify the value of the
     * <code>NextHostedZoneId</code> element from the previous response.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>, do
     * not include the <code>hostedzoneid</code> parameter.</p> <p>If you have more
     * hosted zones than the value of <code>maxitems</code>,
     * <code>ListHostedZonesByName</code> returns only the first <code>maxitems</code>
     * hosted zones. To get the next group of <code>maxitems</code> hosted zones,
     * submit another request to <code>ListHostedZonesByName</code> and include both
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters. For the value of
     * <code>hostedzoneid</code>, specify the value of the
     * <code>NextHostedZoneId</code> element from the previous response.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>, do
     * not include the <code>hostedzoneid</code> parameter.</p> <p>If you have more
     * hosted zones than the value of <code>maxitems</code>,
     * <code>ListHostedZonesByName</code> returns only the first <code>maxitems</code>
     * hosted zones. To get the next group of <code>maxitems</code> hosted zones,
     * submit another request to <code>ListHostedZonesByName</code> and include both
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters. For the value of
     * <code>hostedzoneid</code>, specify the value of the
     * <code>NextHostedZoneId</code> element from the previous response.</p>
     */
    inline ListHostedZonesByNameRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>, do
     * not include the <code>hostedzoneid</code> parameter.</p> <p>If you have more
     * hosted zones than the value of <code>maxitems</code>,
     * <code>ListHostedZonesByName</code> returns only the first <code>maxitems</code>
     * hosted zones. To get the next group of <code>maxitems</code> hosted zones,
     * submit another request to <code>ListHostedZonesByName</code> and include both
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters. For the value of
     * <code>hostedzoneid</code>, specify the value of the
     * <code>NextHostedZoneId</code> element from the previous response.</p>
     */
    inline ListHostedZonesByNameRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>, do
     * not include the <code>hostedzoneid</code> parameter.</p> <p>If you have more
     * hosted zones than the value of <code>maxitems</code>,
     * <code>ListHostedZonesByName</code> returns only the first <code>maxitems</code>
     * hosted zones. To get the next group of <code>maxitems</code> hosted zones,
     * submit another request to <code>ListHostedZonesByName</code> and include both
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters. For the value of
     * <code>hostedzoneid</code>, specify the value of the
     * <code>NextHostedZoneId</code> element from the previous response.</p>
     */
    inline ListHostedZonesByNameRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>The maximum number of hosted zones to be included in the response body for
     * this request. If you have more than <code>maxitems</code> hosted zones, then the
     * value of the <code>IsTruncated</code> element in the response is true, and the
     * values of <code>NextDNSName</code> and <code>NextHostedZoneId</code> specify the
     * first hosted zone in the next group of <code>maxitems</code> hosted zones. </p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of hosted zones to be included in the response body for
     * this request. If you have more than <code>maxitems</code> hosted zones, then the
     * value of the <code>IsTruncated</code> element in the response is true, and the
     * values of <code>NextDNSName</code> and <code>NextHostedZoneId</code> specify the
     * first hosted zone in the next group of <code>maxitems</code> hosted zones. </p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of hosted zones to be included in the response body for
     * this request. If you have more than <code>maxitems</code> hosted zones, then the
     * value of the <code>IsTruncated</code> element in the response is true, and the
     * values of <code>NextDNSName</code> and <code>NextHostedZoneId</code> specify the
     * first hosted zone in the next group of <code>maxitems</code> hosted zones. </p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of hosted zones to be included in the response body for
     * this request. If you have more than <code>maxitems</code> hosted zones, then the
     * value of the <code>IsTruncated</code> element in the response is true, and the
     * values of <code>NextDNSName</code> and <code>NextHostedZoneId</code> specify the
     * first hosted zone in the next group of <code>maxitems</code> hosted zones. </p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of hosted zones to be included in the response body for
     * this request. If you have more than <code>maxitems</code> hosted zones, then the
     * value of the <code>IsTruncated</code> element in the response is true, and the
     * values of <code>NextDNSName</code> and <code>NextHostedZoneId</code> specify the
     * first hosted zone in the next group of <code>maxitems</code> hosted zones. </p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of hosted zones to be included in the response body for
     * this request. If you have more than <code>maxitems</code> hosted zones, then the
     * value of the <code>IsTruncated</code> element in the response is true, and the
     * values of <code>NextDNSName</code> and <code>NextHostedZoneId</code> specify the
     * first hosted zone in the next group of <code>maxitems</code> hosted zones. </p>
     */
    inline ListHostedZonesByNameRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of hosted zones to be included in the response body for
     * this request. If you have more than <code>maxitems</code> hosted zones, then the
     * value of the <code>IsTruncated</code> element in the response is true, and the
     * values of <code>NextDNSName</code> and <code>NextHostedZoneId</code> specify the
     * first hosted zone in the next group of <code>maxitems</code> hosted zones. </p>
     */
    inline ListHostedZonesByNameRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of hosted zones to be included in the response body for
     * this request. If you have more than <code>maxitems</code> hosted zones, then the
     * value of the <code>IsTruncated</code> element in the response is true, and the
     * values of <code>NextDNSName</code> and <code>NextHostedZoneId</code> specify the
     * first hosted zone in the next group of <code>maxitems</code> hosted zones. </p>
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
