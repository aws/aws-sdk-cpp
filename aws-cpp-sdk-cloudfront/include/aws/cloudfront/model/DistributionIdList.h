/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A list of distribution IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionIdList">AWS
   * API Reference</a></p>
   */
  class DistributionIdList
  {
  public:
    AWS_CLOUDFRONT_API DistributionIdList();
    AWS_CLOUDFRONT_API DistributionIdList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionIdList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The value provided in the <code>Marker</code> request field.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The value provided in the <code>Marker</code> request field.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The value provided in the <code>Marker</code> request field.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The value provided in the <code>Marker</code> request field.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The value provided in the <code>Marker</code> request field.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The value provided in the <code>Marker</code> request field.</p>
     */
    inline DistributionIdList& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The value provided in the <code>Marker</code> request field.</p>
     */
    inline DistributionIdList& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The value provided in the <code>Marker</code> request field.</p>
     */
    inline DistributionIdList& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Contains the value that you should use in the <code>Marker</code> field of a
     * subsequent request to continue listing distribution IDs where you left off.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>Contains the value that you should use in the <code>Marker</code> field of a
     * subsequent request to continue listing distribution IDs where you left off.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>Contains the value that you should use in the <code>Marker</code> field of a
     * subsequent request to continue listing distribution IDs where you left off.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>Contains the value that you should use in the <code>Marker</code> field of a
     * subsequent request to continue listing distribution IDs where you left off.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>Contains the value that you should use in the <code>Marker</code> field of a
     * subsequent request to continue listing distribution IDs where you left off.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>Contains the value that you should use in the <code>Marker</code> field of a
     * subsequent request to continue listing distribution IDs where you left off.</p>
     */
    inline DistributionIdList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>Contains the value that you should use in the <code>Marker</code> field of a
     * subsequent request to continue listing distribution IDs where you left off.</p>
     */
    inline DistributionIdList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>Contains the value that you should use in the <code>Marker</code> field of a
     * subsequent request to continue listing distribution IDs where you left off.</p>
     */
    inline DistributionIdList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The maximum number of distribution IDs requested.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of distribution IDs requested.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of distribution IDs requested.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of distribution IDs requested.</p>
     */
    inline DistributionIdList& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>A flag that indicates whether more distribution IDs remain to be listed. If
     * your results were truncated, you can make a subsequent request using the
     * <code>Marker</code> request field to retrieve more distribution IDs in the
     * list.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether more distribution IDs remain to be listed. If
     * your results were truncated, you can make a subsequent request using the
     * <code>Marker</code> request field to retrieve more distribution IDs in the
     * list.</p>
     */
    inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }

    /**
     * <p>A flag that indicates whether more distribution IDs remain to be listed. If
     * your results were truncated, you can make a subsequent request using the
     * <code>Marker</code> request field to retrieve more distribution IDs in the
     * list.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether more distribution IDs remain to be listed. If
     * your results were truncated, you can make a subsequent request using the
     * <code>Marker</code> request field to retrieve more distribution IDs in the
     * list.</p>
     */
    inline DistributionIdList& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>The total number of distribution IDs returned in the response.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The total number of distribution IDs returned in the response.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The total number of distribution IDs returned in the response.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The total number of distribution IDs returned in the response.</p>
     */
    inline DistributionIdList& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>Contains the distribution IDs in the list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p>Contains the distribution IDs in the list.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Contains the distribution IDs in the list.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Contains the distribution IDs in the list.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Contains the distribution IDs in the list.</p>
     */
    inline DistributionIdList& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p>Contains the distribution IDs in the list.</p>
     */
    inline DistributionIdList& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Contains the distribution IDs in the list.</p>
     */
    inline DistributionIdList& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Contains the distribution IDs in the list.</p>
     */
    inline DistributionIdList& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains the distribution IDs in the list.</p>
     */
    inline DistributionIdList& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

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

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
