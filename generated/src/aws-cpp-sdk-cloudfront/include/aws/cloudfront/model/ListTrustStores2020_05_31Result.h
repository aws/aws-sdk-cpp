/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/TrustStoreSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {
class ListTrustStores2020_05_31Result {
 public:
  AWS_CLOUDFRONT_API ListTrustStores2020_05_31Result() = default;
  AWS_CLOUDFRONT_API ListTrustStores2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_CLOUDFRONT_API ListTrustStores2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Indicates the next page of trust stores. To get the next page of the list,
   * use this value in the <code>Marker</code> field of your request.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListTrustStores2020_05_31Result& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust store list.</p>
   */
  inline const Aws::Vector<TrustStoreSummary>& GetTrustStoreList() const { return m_trustStoreList; }
  template <typename TrustStoreListT = Aws::Vector<TrustStoreSummary>>
  void SetTrustStoreList(TrustStoreListT&& value) {
    m_trustStoreListHasBeenSet = true;
    m_trustStoreList = std::forward<TrustStoreListT>(value);
  }
  template <typename TrustStoreListT = Aws::Vector<TrustStoreSummary>>
  ListTrustStores2020_05_31Result& WithTrustStoreList(TrustStoreListT&& value) {
    SetTrustStoreList(std::forward<TrustStoreListT>(value));
    return *this;
  }
  template <typename TrustStoreListT = TrustStoreSummary>
  ListTrustStores2020_05_31Result& AddTrustStoreList(TrustStoreListT&& value) {
    m_trustStoreListHasBeenSet = true;
    m_trustStoreList.emplace_back(std::forward<TrustStoreListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListTrustStores2020_05_31Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextMarker;
  bool m_nextMarkerHasBeenSet = false;

  Aws::Vector<TrustStoreSummary> m_trustStoreList;
  bool m_trustStoreListHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
