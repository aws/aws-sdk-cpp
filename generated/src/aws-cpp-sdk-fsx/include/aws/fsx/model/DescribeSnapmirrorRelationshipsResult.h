/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapmirrorRelationship.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {
class DescribeSnapmirrorRelationshipsResult {
 public:
  AWS_FSX_API DescribeSnapmirrorRelationshipsResult() = default;
  AWS_FSX_API DescribeSnapmirrorRelationshipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DescribeSnapmirrorRelationshipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Describes each SnapMirror relationship returned by the
   * <code>DescribeSnapmirrorRelationships</code> operation.</p>
   */
  inline const Aws::Vector<SnapmirrorRelationship>& GetSnapmirrorRelationships() const { return m_snapmirrorRelationships; }
  template <typename SnapmirrorRelationshipsT = Aws::Vector<SnapmirrorRelationship>>
  void SetSnapmirrorRelationships(SnapmirrorRelationshipsT&& value) {
    m_snapmirrorRelationshipsHasBeenSet = true;
    m_snapmirrorRelationships = std::forward<SnapmirrorRelationshipsT>(value);
  }
  template <typename SnapmirrorRelationshipsT = Aws::Vector<SnapmirrorRelationship>>
  DescribeSnapmirrorRelationshipsResult& WithSnapmirrorRelationships(SnapmirrorRelationshipsT&& value) {
    SetSnapmirrorRelationships(std::forward<SnapmirrorRelationshipsT>(value));
    return *this;
  }
  template <typename SnapmirrorRelationshipsT = SnapmirrorRelationship>
  DescribeSnapmirrorRelationshipsResult& AddSnapmirrorRelationships(SnapmirrorRelationshipsT&& value) {
    m_snapmirrorRelationshipsHasBeenSet = true;
    m_snapmirrorRelationships.emplace_back(std::forward<SnapmirrorRelationshipsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeSnapmirrorRelationshipsResult& WithNextToken(NextTokenT&& value) {
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
  DescribeSnapmirrorRelationshipsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SnapmirrorRelationship> m_snapmirrorRelationships;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapmirrorRelationshipsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
