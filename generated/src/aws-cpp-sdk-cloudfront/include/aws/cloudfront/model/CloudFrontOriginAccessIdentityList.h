﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CloudFrontOriginAccessIdentityList">AWS
   * API Reference</a></p>
   */
  class CloudFrontOriginAccessIdentityList
  {
  public:
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentityList();
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentityList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentityList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * origin access identities. The results include identities in the list that occur
     * after the marker. To get the next page of results, set the <code>Marker</code>
     * to the value of the <code>NextMarker</code> from the current page's response
     * (which is also the ID of the last identity on that page).</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline CloudFrontOriginAccessIdentityList& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline CloudFrontOriginAccessIdentityList& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline CloudFrontOriginAccessIdentityList& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your origin access identities where they left off.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }
    inline CloudFrontOriginAccessIdentityList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline CloudFrontOriginAccessIdentityList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline CloudFrontOriginAccessIdentityList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of origin access identities you want in the response
     * body.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline CloudFrontOriginAccessIdentityList& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether more origin access identities remain to be
     * listed. If your results were truncated, you can make a follow-up pagination
     * request using the <code>Marker</code> request parameter to retrieve more items
     * in the list.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }
    inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline CloudFrontOriginAccessIdentityList& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CloudFront origin access identities that were created by the
     * current Amazon Web Services account.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline CloudFrontOriginAccessIdentityList& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains one
     * <code>CloudFrontOriginAccessIdentitySummary</code> element for each origin
     * access identity that was created by the current Amazon Web Services account.</p>
     */
    inline const Aws::Vector<CloudFrontOriginAccessIdentitySummary>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<CloudFrontOriginAccessIdentitySummary>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<CloudFrontOriginAccessIdentitySummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline CloudFrontOriginAccessIdentityList& WithItems(const Aws::Vector<CloudFrontOriginAccessIdentitySummary>& value) { SetItems(value); return *this;}
    inline CloudFrontOriginAccessIdentityList& WithItems(Aws::Vector<CloudFrontOriginAccessIdentitySummary>&& value) { SetItems(std::move(value)); return *this;}
    inline CloudFrontOriginAccessIdentityList& AddItems(const CloudFrontOriginAccessIdentitySummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline CloudFrontOriginAccessIdentityList& AddItems(CloudFrontOriginAccessIdentitySummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    bool m_isTruncated;
    bool m_isTruncatedHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<CloudFrontOriginAccessIdentitySummary> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
