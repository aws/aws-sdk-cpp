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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The ListOperations request includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API ListOperationsRequest : public Route53DomainsRequest
  {
  public:
    ListOperationsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Required: No</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Required: No</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Required: No</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Required: No</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Required: No</p>
     */
    inline ListOperationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Required: No</p>
     */
    inline ListOperationsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Required: No</p>
     */
    inline ListOperationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Number of domains to be returned.</p> <p>Type: Integer</p> <p>Default: 20</p>
     * <p>Constraints: A value between 1 and 100.</p> <p>Required: No</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Number of domains to be returned.</p> <p>Type: Integer</p> <p>Default: 20</p>
     * <p>Constraints: A value between 1 and 100.</p> <p>Required: No</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Number of domains to be returned.</p> <p>Type: Integer</p> <p>Default: 20</p>
     * <p>Constraints: A value between 1 and 100.</p> <p>Required: No</p>
     */
    inline ListOperationsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
