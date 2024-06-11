﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/DistributionSummary.h>
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
   * <p>A distribution list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionList">AWS
   * API Reference</a></p>
   */
  class DistributionList
  {
  public:
    AWS_CLOUDFRONT_API DistributionList();
    AWS_CLOUDFRONT_API DistributionList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The value you provided for the <code>Marker</code> request parameter.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DistributionList& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DistributionList& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DistributionList& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, this element is present and
     * contains the value you can use for the <code>Marker</code> request parameter to
     * continue listing your distributions where they left off.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }
    inline DistributionList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline DistributionList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline DistributionList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value you provided for the <code>MaxItems</code> request parameter.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline DistributionList& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether more distributions remain to be listed. If your
     * results were truncated, you can make a follow-up pagination request using the
     * <code>Marker</code> request parameter to retrieve more distributions in the
     * list.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }
    inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline DistributionList& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distributions that were created by the current Amazon Web
     * Services account.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline DistributionList& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains one <code>DistributionSummary</code> element for
     * each distribution that was created by the current Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<DistributionSummary>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<DistributionSummary>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<DistributionSummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline DistributionList& WithItems(const Aws::Vector<DistributionSummary>& value) { SetItems(value); return *this;}
    inline DistributionList& WithItems(Aws::Vector<DistributionSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline DistributionList& AddItems(const DistributionSummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline DistributionList& AddItems(DistributionSummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
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

    Aws::Vector<DistributionSummary> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
