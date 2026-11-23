/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapshotPolicy.h>

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
class DescribeSnapshotPoliciesResult {
 public:
  AWS_FSX_API DescribeSnapshotPoliciesResult() = default;
  AWS_FSX_API DescribeSnapshotPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DescribeSnapshotPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Describes each snapshot policy returned by the
   * <code>DescribeSnapshotPolicies</code> operation.</p>
   */
  inline const Aws::Vector<SnapshotPolicy>& GetSnapshotPolicies() const { return m_snapshotPolicies; }
  template <typename SnapshotPoliciesT = Aws::Vector<SnapshotPolicy>>
  void SetSnapshotPolicies(SnapshotPoliciesT&& value) {
    m_snapshotPoliciesHasBeenSet = true;
    m_snapshotPolicies = std::forward<SnapshotPoliciesT>(value);
  }
  template <typename SnapshotPoliciesT = Aws::Vector<SnapshotPolicy>>
  DescribeSnapshotPoliciesResult& WithSnapshotPolicies(SnapshotPoliciesT&& value) {
    SetSnapshotPolicies(std::forward<SnapshotPoliciesT>(value));
    return *this;
  }
  template <typename SnapshotPoliciesT = SnapshotPolicy>
  DescribeSnapshotPoliciesResult& AddSnapshotPolicies(SnapshotPoliciesT&& value) {
    m_snapshotPoliciesHasBeenSet = true;
    m_snapshotPolicies.emplace_back(std::forward<SnapshotPoliciesT>(value));
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
  DescribeSnapshotPoliciesResult& WithNextToken(NextTokenT&& value) {
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
  DescribeSnapshotPoliciesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SnapshotPolicy> m_snapshotPolicies;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapshotPoliciesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
