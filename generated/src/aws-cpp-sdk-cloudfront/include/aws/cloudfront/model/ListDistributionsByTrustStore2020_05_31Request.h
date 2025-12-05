/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace CloudFront {
namespace Model {

/**
 */
class ListDistributionsByTrustStore2020_05_31Request : public CloudFrontRequest {
 public:
  AWS_CLOUDFRONT_API ListDistributionsByTrustStore2020_05_31Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDistributionsByTrustStore"; }

  AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

  AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The distributions by trust store identifier.</p>
   */
  inline const Aws::String& GetTrustStoreIdentifier() const { return m_trustStoreIdentifier; }
  inline bool TrustStoreIdentifierHasBeenSet() const { return m_trustStoreIdentifierHasBeenSet; }
  template <typename TrustStoreIdentifierT = Aws::String>
  void SetTrustStoreIdentifier(TrustStoreIdentifierT&& value) {
    m_trustStoreIdentifierHasBeenSet = true;
    m_trustStoreIdentifier = std::forward<TrustStoreIdentifierT>(value);
  }
  template <typename TrustStoreIdentifierT = Aws::String>
  ListDistributionsByTrustStore2020_05_31Request& WithTrustStoreIdentifier(TrustStoreIdentifierT&& value) {
    SetTrustStoreIdentifier(std::forward<TrustStoreIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this field when paginating results to indicate where to begin in your
   * list. The response includes items in the list that occur after the marker. To
   * get the next page of the list, set this field's value to the value of
   * <code>NextMarker</code> from the current page's response.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListDistributionsByTrustStore2020_05_31Request& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of distributions that you want returned in the
   * response.</p>
   */
  inline const Aws::String& GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  template <typename MaxItemsT = Aws::String>
  void SetMaxItems(MaxItemsT&& value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = std::forward<MaxItemsT>(value);
  }
  template <typename MaxItemsT = Aws::String>
  ListDistributionsByTrustStore2020_05_31Request& WithMaxItems(MaxItemsT&& value) {
    SetMaxItems(std::forward<MaxItemsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trustStoreIdentifier;

  Aws::String m_marker;

  Aws::String m_maxItems;
  bool m_trustStoreIdentifierHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_maxItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
