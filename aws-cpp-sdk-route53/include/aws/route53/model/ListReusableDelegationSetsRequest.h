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
   * <p>To retrieve a list of your reusable delegation sets, send a <code>GET</code>
   * request to the <code>/2013-04-01/delegationset</code> resource. The response to
   * this request includes a <code>DelegationSets</code> element with zero or more
   * <code>DelegationSet</code> child elements. By default, the list of reusable
   * delegation sets is displayed on a single page. You can control the length of the
   * page that is displayed by using the <code>MaxItems</code> parameter. You can use
   * the <code>Marker</code> parameter to control the delegation set that the list
   * begins with.</p> <note> <p>Amazon Route 53 returns a maximum of 100 items. If
   * you set <code>MaxItems</code> to a value greater than 100, Amazon Route 53
   * returns only the first 100.</p> </note>
   */
  class AWS_ROUTE53_API ListReusableDelegationSetsRequest : public Route53Request
  {
  public:
    ListReusableDelegationSetsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>If you're making the second or subsequent call to
     * <code>ListReusableDelegationSets</code>, the <code>Marker</code> element matches
     * the value that you specified in the <code>marker</code> parameter in the
     * previous request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>If you're making the second or subsequent call to
     * <code>ListReusableDelegationSets</code>, the <code>Marker</code> element matches
     * the value that you specified in the <code>marker</code> parameter in the
     * previous request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>If you're making the second or subsequent call to
     * <code>ListReusableDelegationSets</code>, the <code>Marker</code> element matches
     * the value that you specified in the <code>marker</code> parameter in the
     * previous request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>If you're making the second or subsequent call to
     * <code>ListReusableDelegationSets</code>, the <code>Marker</code> element matches
     * the value that you specified in the <code>marker</code> parameter in the
     * previous request.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>If you're making the second or subsequent call to
     * <code>ListReusableDelegationSets</code>, the <code>Marker</code> element matches
     * the value that you specified in the <code>marker</code> parameter in the
     * previous request.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If you're making the second or subsequent call to
     * <code>ListReusableDelegationSets</code>, the <code>Marker</code> element matches
     * the value that you specified in the <code>marker</code> parameter in the
     * previous request.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>If you're making the second or subsequent call to
     * <code>ListReusableDelegationSets</code>, the <code>Marker</code> element matches
     * the value that you specified in the <code>marker</code> parameter in the
     * previous request.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * request that produced the current response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * request that produced the current response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * request that produced the current response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * request that produced the current response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * request that produced the current response.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * request that produced the current response.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * request that produced the current response.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
