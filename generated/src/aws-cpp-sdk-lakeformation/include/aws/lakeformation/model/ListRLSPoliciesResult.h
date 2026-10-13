/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/RLSPolicy.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {
class ListRLSPoliciesResult {
 public:
  AWS_LAKEFORMATION_API ListRLSPoliciesResult() = default;
  AWS_LAKEFORMATION_API ListRLSPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAKEFORMATION_API ListRLSPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <code>RLSPolicy</code> structures.</p>
   */
  inline const Aws::Vector<RLSPolicy>& GetRLSPolicies() const { return m_rLSPolicies; }
  template <typename RLSPoliciesT = Aws::Vector<RLSPolicy>>
  void SetRLSPolicies(RLSPoliciesT&& value) {
    m_rLSPoliciesHasBeenSet = true;
    m_rLSPolicies = std::forward<RLSPoliciesT>(value);
  }
  template <typename RLSPoliciesT = Aws::Vector<RLSPolicy>>
  ListRLSPoliciesResult& WithRLSPolicies(RLSPoliciesT&& value) {
    SetRLSPolicies(std::forward<RLSPoliciesT>(value));
    return *this;
  }
  template <typename RLSPoliciesT = RLSPolicy>
  ListRLSPoliciesResult& AddRLSPolicies(RLSPoliciesT&& value) {
    m_rLSPoliciesHasBeenSet = true;
    m_rLSPolicies.emplace_back(std::forward<RLSPoliciesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A continuation token, if not all row-level security policies have been
   * returned.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRLSPoliciesResult& WithNextToken(NextTokenT&& value) {
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
  ListRLSPoliciesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RLSPolicy> m_rLSPolicies;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rLSPoliciesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
