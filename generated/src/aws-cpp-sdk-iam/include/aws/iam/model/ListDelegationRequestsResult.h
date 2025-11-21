/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/DelegationRequest.h>
#include <aws/iam/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {
class ListDelegationRequestsResult {
 public:
  AWS_IAM_API ListDelegationRequestsResult() = default;
  AWS_IAM_API ListDelegationRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_IAM_API ListDelegationRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A list of delegation requests that match the specified criteria.</p>
   */
  inline const Aws::Vector<DelegationRequest>& GetDelegationRequests() const { return m_delegationRequests; }
  template <typename DelegationRequestsT = Aws::Vector<DelegationRequest>>
  void SetDelegationRequests(DelegationRequestsT&& value) {
    m_delegationRequestsHasBeenSet = true;
    m_delegationRequests = std::forward<DelegationRequestsT>(value);
  }
  template <typename DelegationRequestsT = Aws::Vector<DelegationRequest>>
  ListDelegationRequestsResult& WithDelegationRequests(DelegationRequestsT&& value) {
    SetDelegationRequests(std::forward<DelegationRequestsT>(value));
    return *this;
  }
  template <typename DelegationRequestsT = DelegationRequest>
  ListDelegationRequestsResult& AddDelegationRequests(DelegationRequestsT&& value) {
    m_delegationRequestsHasBeenSet = true;
    m_delegationRequests.emplace_back(std::forward<DelegationRequestsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When <code>isTruncated</code> is <code>true</code>, this element is present
   * and contains the value to use for the <code>Marker</code> parameter in a
   * subsequent pagination request.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListDelegationRequestsResult& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A flag that indicates whether there are more items to return. If your results
   * were truncated, you can make a subsequent pagination request using the
   * <code>Marker</code> request parameter to retrieve more items.</p>
   */
  inline bool GetIsTruncated() const { return m_isTruncated; }
  inline void SetIsTruncated(bool value) {
    m_isTruncatedHasBeenSet = true;
    m_isTruncated = value;
  }
  inline ListDelegationRequestsResult& WithIsTruncated(bool value) {
    SetIsTruncated(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  ListDelegationRequestsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DelegationRequest> m_delegationRequests;
  bool m_delegationRequestsHasBeenSet = false;

  Aws::String m_marker;
  bool m_markerHasBeenSet = false;

  bool m_isTruncated{false};
  bool m_isTruncatedHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
