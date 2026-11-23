/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapmirrorPolicy.h>

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
class DescribeSnapmirrorPoliciesResult {
 public:
  AWS_FSX_API DescribeSnapmirrorPoliciesResult() = default;
  AWS_FSX_API DescribeSnapmirrorPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DescribeSnapmirrorPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Describes each SnapMirror policy returned by the
   * <code>DescribeSnapmirrorPolicies</code> operation.</p>
   */
  inline const Aws::Vector<SnapmirrorPolicy>& GetSnapmirrorPolicies() const { return m_snapmirrorPolicies; }
  template <typename SnapmirrorPoliciesT = Aws::Vector<SnapmirrorPolicy>>
  void SetSnapmirrorPolicies(SnapmirrorPoliciesT&& value) {
    m_snapmirrorPoliciesHasBeenSet = true;
    m_snapmirrorPolicies = std::forward<SnapmirrorPoliciesT>(value);
  }
  template <typename SnapmirrorPoliciesT = Aws::Vector<SnapmirrorPolicy>>
  DescribeSnapmirrorPoliciesResult& WithSnapmirrorPolicies(SnapmirrorPoliciesT&& value) {
    SetSnapmirrorPolicies(std::forward<SnapmirrorPoliciesT>(value));
    return *this;
  }
  template <typename SnapmirrorPoliciesT = SnapmirrorPolicy>
  DescribeSnapmirrorPoliciesResult& AddSnapmirrorPolicies(SnapmirrorPoliciesT&& value) {
    m_snapmirrorPoliciesHasBeenSet = true;
    m_snapmirrorPolicies.emplace_back(std::forward<SnapmirrorPoliciesT>(value));
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
  DescribeSnapmirrorPoliciesResult& WithNextToken(NextTokenT&& value) {
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
  DescribeSnapmirrorPoliciesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SnapmirrorPolicy> m_snapmirrorPolicies;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapmirrorPoliciesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
