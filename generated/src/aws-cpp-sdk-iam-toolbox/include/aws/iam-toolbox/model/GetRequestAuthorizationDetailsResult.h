/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>
#include <aws/iam-toolbox/model/Evaluation.h>
#include <aws/iam-toolbox/model/PolicyInfo.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IAMToolbox {
namespace Model {
class GetRequestAuthorizationDetailsResult {
 public:
  AWS_IAMTOOLBOX_API GetRequestAuthorizationDetailsResult() = default;
  AWS_IAMTOOLBOX_API GetRequestAuthorizationDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IAMTOOLBOX_API GetRequestAuthorizationDetailsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The request context is the set of context keys and values that apply to the
   * entire request and are shared by all evaluations.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetRequestContext() const { return m_requestContext; }
  template <typename RequestContextT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetRequestContext(RequestContextT&& value) {
    m_requestContextHasBeenSet = true;
    m_requestContext = std::forward<RequestContextT>(value);
  }
  template <typename RequestContextT = Aws::Map<Aws::String, Aws::Utils::Document>>
  GetRequestAuthorizationDetailsResult& WithRequestContext(RequestContextT&& value) {
    SetRequestContext(std::forward<RequestContextT>(value));
    return *this;
  }
  template <typename RequestContextKeyT = Aws::String, typename RequestContextValueT = Aws::Utils::Document>
  GetRequestAuthorizationDetailsResult& AddRequestContext(RequestContextKeyT&& key, RequestContextValueT&& value) {
    m_requestContextHasBeenSet = true;
    m_requestContext.emplace(std::forward<RequestContextKeyT>(key), std::forward<RequestContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of evaluations for this request. Each evaluation shows how a single
   * action and resource pair was evaluated. This includes the context, the effect,
   * and any policies that matched.</p>
   */
  inline const Aws::Vector<Evaluation>& GetEvaluations() const { return m_evaluations; }
  template <typename EvaluationsT = Aws::Vector<Evaluation>>
  void SetEvaluations(EvaluationsT&& value) {
    m_evaluationsHasBeenSet = true;
    m_evaluations = std::forward<EvaluationsT>(value);
  }
  template <typename EvaluationsT = Aws::Vector<Evaluation>>
  GetRequestAuthorizationDetailsResult& WithEvaluations(EvaluationsT&& value) {
    SetEvaluations(std::forward<EvaluationsT>(value));
    return *this;
  }
  template <typename EvaluationsT = Evaluation>
  GetRequestAuthorizationDetailsResult& AddEvaluations(EvaluationsT&& value) {
    m_evaluationsHasBeenSet = true;
    m_evaluations.emplace_back(std::forward<EvaluationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of policies that were evaluated.</p>
   */
  inline const Aws::Vector<PolicyInfo>& GetPolicies() const { return m_policies; }
  template <typename PoliciesT = Aws::Vector<PolicyInfo>>
  void SetPolicies(PoliciesT&& value) {
    m_policiesHasBeenSet = true;
    m_policies = std::forward<PoliciesT>(value);
  }
  template <typename PoliciesT = Aws::Vector<PolicyInfo>>
  GetRequestAuthorizationDetailsResult& WithPolicies(PoliciesT&& value) {
    SetPolicies(std::forward<PoliciesT>(value));
    return *this;
  }
  template <typename PoliciesT = PolicyInfo>
  GetRequestAuthorizationDetailsResult& AddPolicies(PoliciesT&& value) {
    m_policiesHasBeenSet = true;
    m_policies.emplace_back(std::forward<PoliciesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token for retrieving the next page of evaluations. This value
   * is absent when there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetRequestAuthorizationDetailsResult& WithNextToken(NextTokenT&& value) {
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
  GetRequestAuthorizationDetailsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Map<Aws::String, Aws::Utils::Document> m_requestContext;

  Aws::Vector<Evaluation> m_evaluations;

  Aws::Vector<PolicyInfo> m_policies;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_requestContextHasBeenSet = false;
  bool m_evaluationsHasBeenSet = false;
  bool m_policiesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
