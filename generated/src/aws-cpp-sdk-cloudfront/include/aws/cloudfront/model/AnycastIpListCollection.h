﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/AnycastIpListSummary.h>
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
   * <p>The Anycast static IP list collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/AnycastIpListCollection">AWS
   * API Reference</a></p>
   */
  class AnycastIpListCollection
  {
  public:
    AWS_CLOUDFRONT_API AnycastIpListCollection();
    AWS_CLOUDFRONT_API AnycastIpListCollection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API AnycastIpListCollection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Items in the Anycast static IP list collection. Each item is of the
     * <a>AnycastIpListSummary</a> structure type.</p>
     */
    inline const Aws::Vector<AnycastIpListSummary>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<AnycastIpListSummary>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<AnycastIpListSummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline AnycastIpListCollection& WithItems(const Aws::Vector<AnycastIpListSummary>& value) { SetItems(value); return *this;}
    inline AnycastIpListCollection& WithItems(Aws::Vector<AnycastIpListSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline AnycastIpListCollection& AddItems(const AnycastIpListSummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline AnycastIpListCollection& AddItems(AnycastIpListSummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list. The response includes items in the list that occur after the marker. To
     * get the next page of the list, set this field's value to the value of
     * <code>NextMarker</code> from the current page's response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline AnycastIpListCollection& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline AnycastIpListCollection& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline AnycastIpListCollection& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the next page of the Anycast static IP list collection. To get the
     * next page of the list, use this value in the <code>Marker</code> field of your
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }
    inline AnycastIpListCollection& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline AnycastIpListCollection& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline AnycastIpListCollection& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Anycast static IP list collections that you want
     * returned in the response.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline AnycastIpListCollection& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there are more items in the list collection than are in this response,
     * this value is <code>true</code>.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }
    inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline AnycastIpListCollection& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantity of Anycast static IP lists in the collection.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline AnycastIpListCollection& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}
  private:

    Aws::Vector<AnycastIpListSummary> m_items;
    bool m_itemsHasBeenSet = false;

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
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
