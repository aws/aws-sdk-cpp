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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentitySummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Lists the origin access identities for CloudFront.Send a <code>GET</code>
   * request to the <code>/<i>CloudFront API
   * version</i>/origin-access-identity/cloudfront</code> resource. The response
   * includes a <code>CloudFrontOriginAccessIdentityList</code> element with zero or
   * more <code>CloudFrontOriginAccessIdentitySummary</code> child elements. By
   * default, your entire list of origin access identities is returned in one single
   * page. If the list is long, you can paginate it using the <code>MaxItems</code>
   * and <code>Marker</code> parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CloudFrontOriginAccessIdentityList">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentityList
  {
  public:
    CloudFrontOriginAccessIdentityList();
    CloudFrontOriginAccessIdentityList(const Aws::Utils::Xml::XmlNode& xmlNode);
    CloudFrontOriginAccessIdentityList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * origin access identities. The results include identities in the list that occur
     * after the marker. To get the next page of results, set the <code>Marker</code>
     * to the value of the <code>NextMarker</code> from the current page's response
     * (which is also the ID of the last identity on that page). </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * origin access identities. The results include identities in the list that occur
     * after the marker. To get the next page of results, set the <code>Marker</code>
     * to the value of the <code>NextMarker</code> from the current page's response
     * (which is also the ID of the last identity on that page). </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * origin access identities. The results include identities in the list that occur
     * after the marker. To get the next page of results, set the <code>Marker</code>
     * to the value of the <code>NextMarker</code> from the current page's response
     * (which is also the ID of the last identity on that page). </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * origin access identities. The results include identities in the list that occur
     * after the marker. To get the next page of results, set the <code>Marker</code>
     * to the value of the <code>NextMarker</code> from the current page's response
     * (which is also the ID of the last identity on that page). </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * origin access identities. The results include identities in the list that occur
     * after the marker. To get the next page of results, set the <code>Marker</code>
     * to the value of the <code>NextMarker</code> from the current page's response
     * (which is also the ID of the last identity on that page). </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * origin access identities. The results include identities in the list that occur
     * after the marker. To get the next page of results, set the <code>Marker</code>
     * to the value of the <code>NextMarker</code> from the current page's response
     * (which is also the ID of the last identity on that page). </p>
     */
    inline CloudFrontOriginAccessIdentityList& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * origin access identities. The results include identities in the list that occur
     * after the marker. To get the next page of results, set the <code>Marker</code>
     * to the value of the <code>NextMarker</code> from the current page's response
     * (which is also the ID of the last identity on that page). </p>
     */
    inline CloudFrontOriginAccessIdentityList& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * origin access identities. The results include identities in the list that occur
     * after the marker. To get the next page of results, set the <code>Marker</code>
     * to the value of the <code>NextMarker</code> from the current page's response
     * (which is also the ID of the last identity on that page). </p>
     */
    inline CloudFrontOriginAccessIdentityList& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your origin access identities where they left off. </p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your origin access identities where they left off. </p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your origin access identities where they left off. </p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your origin access identities where they left off. </p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your origin access identities where they left off. </p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your origin access identities where they left off. </p>
     */
    inline CloudFrontOriginAccessIdentityList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your origin access identities where they left off. </p>
     */
    inline CloudFrontOriginAccessIdentityList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your origin access identities where they left off. </p>
     */
    inline CloudFrontOriginAccessIdentityList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The maximum number of origin access identities you want in the response body.
     * </p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of origin access identities you want in the response body.
     * </p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of origin access identities you want in the response body.
     * </p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of origin access identities you want in the response body.
     * </p>
     */
    inline CloudFrontOriginAccessIdentityList& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>A flag that indicates whether more origin access identities remain to be
     * listed. If your results were truncated, you can make a follow-up pagination
     * request using the <code>Marker</code> request parameter to retrieve more items
     * in the list.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether more origin access identities remain to be
     * listed. If your results were truncated, you can make a follow-up pagination
     * request using the <code>Marker</code> request parameter to retrieve more items
     * in the list.</p>
     */
    inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }

    /**
     * <p>A flag that indicates whether more origin access identities remain to be
     * listed. If your results were truncated, you can make a follow-up pagination
     * request using the <code>Marker</code> request parameter to retrieve more items
     * in the list.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether more origin access identities remain to be
     * listed. If your results were truncated, you can make a follow-up pagination
     * request using the <code>Marker</code> request parameter to retrieve more items
     * in the list.</p>
     */
    inline CloudFrontOriginAccessIdentityList& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>The number of CloudFront origin access identities that were created by the
     * current AWS account. </p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of CloudFront origin access identities that were created by the
     * current AWS account. </p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of CloudFront origin access identities that were created by the
     * current AWS account. </p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of CloudFront origin access identities that were created by the
     * current AWS account. </p>
     */
    inline CloudFrontOriginAccessIdentityList& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A complex type that contains one
     * <code>CloudFrontOriginAccessIdentitySummary</code> element for each origin
     * access identity that was created by the current AWS account.</p>
     */
    inline const Aws::Vector<CloudFrontOriginAccessIdentitySummary>& GetItems() const{ return m_items; }

    /**
     * <p>A complex type that contains one
     * <code>CloudFrontOriginAccessIdentitySummary</code> element for each origin
     * access identity that was created by the current AWS account.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A complex type that contains one
     * <code>CloudFrontOriginAccessIdentitySummary</code> element for each origin
     * access identity that was created by the current AWS account.</p>
     */
    inline void SetItems(const Aws::Vector<CloudFrontOriginAccessIdentitySummary>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A complex type that contains one
     * <code>CloudFrontOriginAccessIdentitySummary</code> element for each origin
     * access identity that was created by the current AWS account.</p>
     */
    inline void SetItems(Aws::Vector<CloudFrontOriginAccessIdentitySummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A complex type that contains one
     * <code>CloudFrontOriginAccessIdentitySummary</code> element for each origin
     * access identity that was created by the current AWS account.</p>
     */
    inline CloudFrontOriginAccessIdentityList& WithItems(const Aws::Vector<CloudFrontOriginAccessIdentitySummary>& value) { SetItems(value); return *this;}

    /**
     * <p>A complex type that contains one
     * <code>CloudFrontOriginAccessIdentitySummary</code> element for each origin
     * access identity that was created by the current AWS account.</p>
     */
    inline CloudFrontOriginAccessIdentityList& WithItems(Aws::Vector<CloudFrontOriginAccessIdentitySummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains one
     * <code>CloudFrontOriginAccessIdentitySummary</code> element for each origin
     * access identity that was created by the current AWS account.</p>
     */
    inline CloudFrontOriginAccessIdentityList& AddItems(const CloudFrontOriginAccessIdentitySummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one
     * <code>CloudFrontOriginAccessIdentitySummary</code> element for each origin
     * access identity that was created by the current AWS account.</p>
     */
    inline CloudFrontOriginAccessIdentityList& AddItems(CloudFrontOriginAccessIdentitySummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet;

    int m_maxItems;
    bool m_maxItemsHasBeenSet;

    bool m_isTruncated;
    bool m_isTruncatedHasBeenSet;

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<CloudFrontOriginAccessIdentitySummary> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
