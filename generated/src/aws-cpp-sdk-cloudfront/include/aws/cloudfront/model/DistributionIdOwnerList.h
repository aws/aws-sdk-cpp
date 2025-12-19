/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DistributionIdOwner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>The list of distribution IDs and the Amazon Web Services accounts that they
 * belong to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionIdOwnerList">AWS
 * API Reference</a></p>
 */
class DistributionIdOwnerList {
 public:
  AWS_CLOUDFRONT_API DistributionIdOwnerList() = default;
  AWS_CLOUDFRONT_API DistributionIdOwnerList(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API DistributionIdOwnerList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>Use this field when paginating results to indicate where to begin in your
   * list of <code>DistributionIdOwner</code> objects. The response includes
   * distributions in the list that occur after the marker. To get the next page of
   * the list, set this field's value to the value of <code>NextMarker</code> from
   * the current page's response.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  DistributionIdOwnerList& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for pagination of results returned in the response. You can use
   * the token from the previous request to define where the current request should
   * begin.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  DistributionIdOwnerList& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of <code>DistributionIdOwner</code> objects to return.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline DistributionIdOwnerList& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A flag that indicates whether more <code>DistributionIdOwner</code> objects
   * remain to be listed. If your results were truncated, you can make a follow-up
   * pagination request using the <code>Marker</code> request parameter to retrieve
   * more results in the list.</p>
   */
  inline bool GetIsTruncated() const { return m_isTruncated; }
  inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }
  inline void SetIsTruncated(bool value) {
    m_isTruncatedHasBeenSet = true;
    m_isTruncated = value;
  }
  inline DistributionIdOwnerList& WithIsTruncated(bool value) {
    SetIsTruncated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the actual number of <code>DistributionIdOwner</code> objects
   * included in the list for the current page.</p>
   */
  inline int GetQuantity() const { return m_quantity; }
  inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
  inline void SetQuantity(int value) {
    m_quantityHasBeenSet = true;
    m_quantity = value;
  }
  inline DistributionIdOwnerList& WithQuantity(int value) {
    SetQuantity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of <code>DistributionIdOwner</code> objects.</p>
   */
  inline const Aws::Vector<DistributionIdOwner>& GetItems() const { return m_items; }
  inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
  template <typename ItemsT = Aws::Vector<DistributionIdOwner>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<DistributionIdOwner>>
  DistributionIdOwnerList& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = DistributionIdOwner>
  DistributionIdOwnerList& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_marker;

  Aws::String m_nextMarker;

  int m_maxItems{0};

  bool m_isTruncated{false};

  int m_quantity{0};

  Aws::Vector<DistributionIdOwner> m_items;
  bool m_markerHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_maxItemsHasBeenSet = false;
  bool m_isTruncatedHasBeenSet = false;
  bool m_quantityHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
