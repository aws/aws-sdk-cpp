/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/OriginAccessControlSummary.h>
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
   * <p>A list of CloudFront origin access controls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginAccessControlList">AWS
   * API Reference</a></p>
   */
  class OriginAccessControlList
  {
  public:
    AWS_CLOUDFRONT_API OriginAccessControlList();
    AWS_CLOUDFRONT_API OriginAccessControlList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginAccessControlList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The value of the <code>Marker</code> field that was provided in the
     * request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The value of the <code>Marker</code> field that was provided in the
     * request.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The value of the <code>Marker</code> field that was provided in the
     * request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The value of the <code>Marker</code> field that was provided in the
     * request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The value of the <code>Marker</code> field that was provided in the
     * request.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The value of the <code>Marker</code> field that was provided in the
     * request.</p>
     */
    inline OriginAccessControlList& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The value of the <code>Marker</code> field that was provided in the
     * request.</p>
     */
    inline OriginAccessControlList& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>Marker</code> field that was provided in the
     * request.</p>
     */
    inline OriginAccessControlList& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value to use in the <code>Marker</code> field of
     * another request to continue listing origin access controls.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value to use in the <code>Marker</code> field of
     * another request to continue listing origin access controls.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value to use in the <code>Marker</code> field of
     * another request to continue listing origin access controls.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value to use in the <code>Marker</code> field of
     * another request to continue listing origin access controls.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value to use in the <code>Marker</code> field of
     * another request to continue listing origin access controls.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value to use in the <code>Marker</code> field of
     * another request to continue listing origin access controls.</p>
     */
    inline OriginAccessControlList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value to use in the <code>Marker</code> field of
     * another request to continue listing origin access controls.</p>
     */
    inline OriginAccessControlList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value to use in the <code>Marker</code> field of
     * another request to continue listing origin access controls.</p>
     */
    inline OriginAccessControlList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The maximum number of origin access controls requested.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of origin access controls requested.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of origin access controls requested.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of origin access controls requested.</p>
     */
    inline OriginAccessControlList& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>If there are more items in the list than are in this response, this value is
     * <code>true</code>.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>If there are more items in the list than are in this response, this value is
     * <code>true</code>.</p>
     */
    inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }

    /**
     * <p>If there are more items in the list than are in this response, this value is
     * <code>true</code>.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }

    /**
     * <p>If there are more items in the list than are in this response, this value is
     * <code>true</code>.</p>
     */
    inline OriginAccessControlList& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>The number of origin access controls returned in the response.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of origin access controls returned in the response.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of origin access controls returned in the response.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of origin access controls returned in the response.</p>
     */
    inline OriginAccessControlList& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>Contains the origin access controls in the list.</p>
     */
    inline const Aws::Vector<OriginAccessControlSummary>& GetItems() const{ return m_items; }

    /**
     * <p>Contains the origin access controls in the list.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Contains the origin access controls in the list.</p>
     */
    inline void SetItems(const Aws::Vector<OriginAccessControlSummary>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Contains the origin access controls in the list.</p>
     */
    inline void SetItems(Aws::Vector<OriginAccessControlSummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Contains the origin access controls in the list.</p>
     */
    inline OriginAccessControlList& WithItems(const Aws::Vector<OriginAccessControlSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>Contains the origin access controls in the list.</p>
     */
    inline OriginAccessControlList& WithItems(Aws::Vector<OriginAccessControlSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Contains the origin access controls in the list.</p>
     */
    inline OriginAccessControlList& AddItems(const OriginAccessControlSummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Contains the origin access controls in the list.</p>
     */
    inline OriginAccessControlList& AddItems(OriginAccessControlSummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

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

    Aws::Vector<OriginAccessControlSummary> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
