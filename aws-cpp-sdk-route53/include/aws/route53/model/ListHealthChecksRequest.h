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
   * <p>To retrieve a list of your health checks, send a <code>GET</code> request to
   * the <code>/2013-04-01/healthcheck</code> resource. The response to this request
   * includes a <code>HealthChecks</code> element with zero or more
   * <code>HealthCheck</code> child elements. By default, the list of health checks
   * is displayed on a single page. You can control the length of the page that is
   * displayed by using the <code>MaxItems</code> parameter. You can use the
   * <code>Marker</code> parameter to control the health check that the list begins
   * with.</p> <note> <p> Amazon Route 53 returns a maximum of 100 items. If you set
   * <code>MaxItems</code> to a value greater than 100, Amazon Route 53 returns only
   * the first 100.</p> </note>
   */
  class AWS_ROUTE53_API ListHealthChecksRequest : public Route53Request
  {
  public:
    ListHealthChecksRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>If the response to a <code>ListHealthChecks</code> is more than one page,
     * marker is the health check ID for the first health check on the next page of
     * results. For more information, see <a>ListHealthChecksResponse$MaxItems</a>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>If the response to a <code>ListHealthChecks</code> is more than one page,
     * marker is the health check ID for the first health check on the next page of
     * results. For more information, see <a>ListHealthChecksResponse$MaxItems</a>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>If the response to a <code>ListHealthChecks</code> is more than one page,
     * marker is the health check ID for the first health check on the next page of
     * results. For more information, see <a>ListHealthChecksResponse$MaxItems</a>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>If the response to a <code>ListHealthChecks</code> is more than one page,
     * marker is the health check ID for the first health check on the next page of
     * results. For more information, see <a>ListHealthChecksResponse$MaxItems</a>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>If the response to a <code>ListHealthChecks</code> is more than one page,
     * marker is the health check ID for the first health check on the next page of
     * results. For more information, see <a>ListHealthChecksResponse$MaxItems</a>.</p>
     */
    inline ListHealthChecksRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the response to a <code>ListHealthChecks</code> is more than one page,
     * marker is the health check ID for the first health check on the next page of
     * results. For more information, see <a>ListHealthChecksResponse$MaxItems</a>.</p>
     */
    inline ListHealthChecksRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>If the response to a <code>ListHealthChecks</code> is more than one page,
     * marker is the health check ID for the first health check on the next page of
     * results. For more information, see <a>ListHealthChecksResponse$MaxItems</a>.</p>
     */
    inline ListHealthChecksRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>The maximum number of <code>HealthCheck</code> elements you want
     * <code>ListHealthChecks</code> to return on each page of the response body. If
     * the AWS account includes more <code>HealthCheck</code> elements than the value
     * of <code>maxitems</code>, the response is broken into pages. Each page contains
     * the number of <code>HealthCheck</code> elements specified by
     * <code>maxitems</code>.</p> <p>For example, suppose you specify <code>10</code>
     * for <code>maxitems</code> and the current AWS account has <code>51</code> health
     * checks. In the response, <code>ListHealthChecks</code> sets
     * <a>ListHealthChecksResponse$IsTruncated</a> to true and includes the
     * <a>ListHealthChecksResponse$NextMarker</a> element. To access the second and
     * subsequent pages, you resend the <code>GET</code> <code>ListHealthChecks</code>
     * request, add the <a>ListHealthChecksResponse$Marker</a> parameter to the
     * request, and specify the value of the <a>ListHealthChecksResponse$NextMarker</a>
     * element from the previous response. On the last (sixth) page of the response,
     * which contains only one HealthCheck element:</p> <ul> <li> <p>The value of
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>false</code>.</p> </li>
     * <li> <p> <a>ListHealthChecksResponse$NextMarker</a> is omitted.</p> </li> </ul>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of <code>HealthCheck</code> elements you want
     * <code>ListHealthChecks</code> to return on each page of the response body. If
     * the AWS account includes more <code>HealthCheck</code> elements than the value
     * of <code>maxitems</code>, the response is broken into pages. Each page contains
     * the number of <code>HealthCheck</code> elements specified by
     * <code>maxitems</code>.</p> <p>For example, suppose you specify <code>10</code>
     * for <code>maxitems</code> and the current AWS account has <code>51</code> health
     * checks. In the response, <code>ListHealthChecks</code> sets
     * <a>ListHealthChecksResponse$IsTruncated</a> to true and includes the
     * <a>ListHealthChecksResponse$NextMarker</a> element. To access the second and
     * subsequent pages, you resend the <code>GET</code> <code>ListHealthChecks</code>
     * request, add the <a>ListHealthChecksResponse$Marker</a> parameter to the
     * request, and specify the value of the <a>ListHealthChecksResponse$NextMarker</a>
     * element from the previous response. On the last (sixth) page of the response,
     * which contains only one HealthCheck element:</p> <ul> <li> <p>The value of
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>false</code>.</p> </li>
     * <li> <p> <a>ListHealthChecksResponse$NextMarker</a> is omitted.</p> </li> </ul>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of <code>HealthCheck</code> elements you want
     * <code>ListHealthChecks</code> to return on each page of the response body. If
     * the AWS account includes more <code>HealthCheck</code> elements than the value
     * of <code>maxitems</code>, the response is broken into pages. Each page contains
     * the number of <code>HealthCheck</code> elements specified by
     * <code>maxitems</code>.</p> <p>For example, suppose you specify <code>10</code>
     * for <code>maxitems</code> and the current AWS account has <code>51</code> health
     * checks. In the response, <code>ListHealthChecks</code> sets
     * <a>ListHealthChecksResponse$IsTruncated</a> to true and includes the
     * <a>ListHealthChecksResponse$NextMarker</a> element. To access the second and
     * subsequent pages, you resend the <code>GET</code> <code>ListHealthChecks</code>
     * request, add the <a>ListHealthChecksResponse$Marker</a> parameter to the
     * request, and specify the value of the <a>ListHealthChecksResponse$NextMarker</a>
     * element from the previous response. On the last (sixth) page of the response,
     * which contains only one HealthCheck element:</p> <ul> <li> <p>The value of
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>false</code>.</p> </li>
     * <li> <p> <a>ListHealthChecksResponse$NextMarker</a> is omitted.</p> </li> </ul>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of <code>HealthCheck</code> elements you want
     * <code>ListHealthChecks</code> to return on each page of the response body. If
     * the AWS account includes more <code>HealthCheck</code> elements than the value
     * of <code>maxitems</code>, the response is broken into pages. Each page contains
     * the number of <code>HealthCheck</code> elements specified by
     * <code>maxitems</code>.</p> <p>For example, suppose you specify <code>10</code>
     * for <code>maxitems</code> and the current AWS account has <code>51</code> health
     * checks. In the response, <code>ListHealthChecks</code> sets
     * <a>ListHealthChecksResponse$IsTruncated</a> to true and includes the
     * <a>ListHealthChecksResponse$NextMarker</a> element. To access the second and
     * subsequent pages, you resend the <code>GET</code> <code>ListHealthChecks</code>
     * request, add the <a>ListHealthChecksResponse$Marker</a> parameter to the
     * request, and specify the value of the <a>ListHealthChecksResponse$NextMarker</a>
     * element from the previous response. On the last (sixth) page of the response,
     * which contains only one HealthCheck element:</p> <ul> <li> <p>The value of
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>false</code>.</p> </li>
     * <li> <p> <a>ListHealthChecksResponse$NextMarker</a> is omitted.</p> </li> </ul>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of <code>HealthCheck</code> elements you want
     * <code>ListHealthChecks</code> to return on each page of the response body. If
     * the AWS account includes more <code>HealthCheck</code> elements than the value
     * of <code>maxitems</code>, the response is broken into pages. Each page contains
     * the number of <code>HealthCheck</code> elements specified by
     * <code>maxitems</code>.</p> <p>For example, suppose you specify <code>10</code>
     * for <code>maxitems</code> and the current AWS account has <code>51</code> health
     * checks. In the response, <code>ListHealthChecks</code> sets
     * <a>ListHealthChecksResponse$IsTruncated</a> to true and includes the
     * <a>ListHealthChecksResponse$NextMarker</a> element. To access the second and
     * subsequent pages, you resend the <code>GET</code> <code>ListHealthChecks</code>
     * request, add the <a>ListHealthChecksResponse$Marker</a> parameter to the
     * request, and specify the value of the <a>ListHealthChecksResponse$NextMarker</a>
     * element from the previous response. On the last (sixth) page of the response,
     * which contains only one HealthCheck element:</p> <ul> <li> <p>The value of
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>false</code>.</p> </li>
     * <li> <p> <a>ListHealthChecksResponse$NextMarker</a> is omitted.</p> </li> </ul>
     */
    inline ListHealthChecksRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of <code>HealthCheck</code> elements you want
     * <code>ListHealthChecks</code> to return on each page of the response body. If
     * the AWS account includes more <code>HealthCheck</code> elements than the value
     * of <code>maxitems</code>, the response is broken into pages. Each page contains
     * the number of <code>HealthCheck</code> elements specified by
     * <code>maxitems</code>.</p> <p>For example, suppose you specify <code>10</code>
     * for <code>maxitems</code> and the current AWS account has <code>51</code> health
     * checks. In the response, <code>ListHealthChecks</code> sets
     * <a>ListHealthChecksResponse$IsTruncated</a> to true and includes the
     * <a>ListHealthChecksResponse$NextMarker</a> element. To access the second and
     * subsequent pages, you resend the <code>GET</code> <code>ListHealthChecks</code>
     * request, add the <a>ListHealthChecksResponse$Marker</a> parameter to the
     * request, and specify the value of the <a>ListHealthChecksResponse$NextMarker</a>
     * element from the previous response. On the last (sixth) page of the response,
     * which contains only one HealthCheck element:</p> <ul> <li> <p>The value of
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>false</code>.</p> </li>
     * <li> <p> <a>ListHealthChecksResponse$NextMarker</a> is omitted.</p> </li> </ul>
     */
    inline ListHealthChecksRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of <code>HealthCheck</code> elements you want
     * <code>ListHealthChecks</code> to return on each page of the response body. If
     * the AWS account includes more <code>HealthCheck</code> elements than the value
     * of <code>maxitems</code>, the response is broken into pages. Each page contains
     * the number of <code>HealthCheck</code> elements specified by
     * <code>maxitems</code>.</p> <p>For example, suppose you specify <code>10</code>
     * for <code>maxitems</code> and the current AWS account has <code>51</code> health
     * checks. In the response, <code>ListHealthChecks</code> sets
     * <a>ListHealthChecksResponse$IsTruncated</a> to true and includes the
     * <a>ListHealthChecksResponse$NextMarker</a> element. To access the second and
     * subsequent pages, you resend the <code>GET</code> <code>ListHealthChecks</code>
     * request, add the <a>ListHealthChecksResponse$Marker</a> parameter to the
     * request, and specify the value of the <a>ListHealthChecksResponse$NextMarker</a>
     * element from the previous response. On the last (sixth) page of the response,
     * which contains only one HealthCheck element:</p> <ul> <li> <p>The value of
     * <a>ListHealthChecksResponse$IsTruncated</a> is <code>false</code>.</p> </li>
     * <li> <p> <a>ListHealthChecksResponse$NextMarker</a> is omitted.</p> </li> </ul>
     */
    inline ListHealthChecksRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
