/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/AttachPointDescriptor.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Interconnect {
namespace Model {
class ListAttachPointsResult {
 public:
  AWS_INTERCONNECT_API ListAttachPointsResult() = default;
  AWS_INTERCONNECT_API ListAttachPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_INTERCONNECT_API ListAttachPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The valid <a>AttachPoint</a> </p>
   */
  inline const Aws::Vector<AttachPointDescriptor>& GetAttachPoints() const { return m_attachPoints; }
  template <typename AttachPointsT = Aws::Vector<AttachPointDescriptor>>
  void SetAttachPoints(AttachPointsT&& value) {
    m_attachPointsHasBeenSet = true;
    m_attachPoints = std::forward<AttachPointsT>(value);
  }
  template <typename AttachPointsT = Aws::Vector<AttachPointDescriptor>>
  ListAttachPointsResult& WithAttachPoints(AttachPointsT&& value) {
    SetAttachPoints(std::forward<AttachPointsT>(value));
    return *this;
  }
  template <typename AttachPointsT = AttachPointDescriptor>
  ListAttachPointsResult& AddAttachPoints(AttachPointsT&& value) {
    m_attachPointsHasBeenSet = true;
    m_attachPoints.emplace_back(std::forward<AttachPointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token indicating that there are more results that can be
   * fetched.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAttachPointsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListAttachPointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AttachPointDescriptor> m_attachPoints;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_attachPointsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
