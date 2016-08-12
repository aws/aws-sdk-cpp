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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The ViewBilling request includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API ViewBillingRequest : public Route53DomainsRequest
  {
  public:
    ViewBillingRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The beginning date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p>The beginning date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The beginning date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The beginning date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline ViewBillingRequest& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p>The beginning date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline ViewBillingRequest& WithStart(Aws::Utils::DateTime&& value) { SetStart(value); return *this;}

    /**
     * <p>The end date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }

    /**
     * <p>The end date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The end date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The end date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline ViewBillingRequest& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}

    /**
     * <p>The end date and time for the time period for which you want a list of
     * billing records. Specify the date in Unix time format.</p> <p>Type: Double</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline ViewBillingRequest& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(value); return *this;}

    /**
     * <p>For an initial request for a list of billing records, omit this element. If
     * the number of billing records that are associated with the current AWS account
     * during the specified period is greater than the value that you specified for
     * <code>MaxItems</code>, you can use <code>Marker</code> to return additional
     * billing records. Get the value of <code>NextPageMarker</code> from the previous
     * response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element. </p> <p>Type:
     * String</p> <p>Default: None</p> <p>Constraints: The marker must match the value
     * of <code>NextPageMarker</code> that was returned in the previous response.</p>
     * <p>Required: No</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>For an initial request for a list of billing records, omit this element. If
     * the number of billing records that are associated with the current AWS account
     * during the specified period is greater than the value that you specified for
     * <code>MaxItems</code>, you can use <code>Marker</code> to return additional
     * billing records. Get the value of <code>NextPageMarker</code> from the previous
     * response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element. </p> <p>Type:
     * String</p> <p>Default: None</p> <p>Constraints: The marker must match the value
     * of <code>NextPageMarker</code> that was returned in the previous response.</p>
     * <p>Required: No</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>For an initial request for a list of billing records, omit this element. If
     * the number of billing records that are associated with the current AWS account
     * during the specified period is greater than the value that you specified for
     * <code>MaxItems</code>, you can use <code>Marker</code> to return additional
     * billing records. Get the value of <code>NextPageMarker</code> from the previous
     * response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element. </p> <p>Type:
     * String</p> <p>Default: None</p> <p>Constraints: The marker must match the value
     * of <code>NextPageMarker</code> that was returned in the previous response.</p>
     * <p>Required: No</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>For an initial request for a list of billing records, omit this element. If
     * the number of billing records that are associated with the current AWS account
     * during the specified period is greater than the value that you specified for
     * <code>MaxItems</code>, you can use <code>Marker</code> to return additional
     * billing records. Get the value of <code>NextPageMarker</code> from the previous
     * response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element. </p> <p>Type:
     * String</p> <p>Default: None</p> <p>Constraints: The marker must match the value
     * of <code>NextPageMarker</code> that was returned in the previous response.</p>
     * <p>Required: No</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>For an initial request for a list of billing records, omit this element. If
     * the number of billing records that are associated with the current AWS account
     * during the specified period is greater than the value that you specified for
     * <code>MaxItems</code>, you can use <code>Marker</code> to return additional
     * billing records. Get the value of <code>NextPageMarker</code> from the previous
     * response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element. </p> <p>Type:
     * String</p> <p>Default: None</p> <p>Constraints: The marker must match the value
     * of <code>NextPageMarker</code> that was returned in the previous response.</p>
     * <p>Required: No</p>
     */
    inline ViewBillingRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>For an initial request for a list of billing records, omit this element. If
     * the number of billing records that are associated with the current AWS account
     * during the specified period is greater than the value that you specified for
     * <code>MaxItems</code>, you can use <code>Marker</code> to return additional
     * billing records. Get the value of <code>NextPageMarker</code> from the previous
     * response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element. </p> <p>Type:
     * String</p> <p>Default: None</p> <p>Constraints: The marker must match the value
     * of <code>NextPageMarker</code> that was returned in the previous response.</p>
     * <p>Required: No</p>
     */
    inline ViewBillingRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>For an initial request for a list of billing records, omit this element. If
     * the number of billing records that are associated with the current AWS account
     * during the specified period is greater than the value that you specified for
     * <code>MaxItems</code>, you can use <code>Marker</code> to return additional
     * billing records. Get the value of <code>NextPageMarker</code> from the previous
     * response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element. </p> <p>Type:
     * String</p> <p>Default: None</p> <p>Constraints: The marker must match the value
     * of <code>NextPageMarker</code> that was returned in the previous response.</p>
     * <p>Required: No</p>
     */
    inline ViewBillingRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>The number of billing records to be returned.</p> <p>Type: Integer</p>
     * <p>Default: 20</p> <p>Constraints: A value between 1 and 100.</p> <p>Required:
     * No</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The number of billing records to be returned.</p> <p>Type: Integer</p>
     * <p>Default: 20</p> <p>Constraints: A value between 1 and 100.</p> <p>Required:
     * No</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The number of billing records to be returned.</p> <p>Type: Integer</p>
     * <p>Default: 20</p> <p>Constraints: A value between 1 and 100.</p> <p>Required:
     * No</p>
     */
    inline ViewBillingRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet;
    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
