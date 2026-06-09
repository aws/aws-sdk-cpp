/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicySummary.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class ListPolicySummariesResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicySummariesResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicySummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicySummariesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of policy summary objects that match the specified criteria. Each
   * summary contains resource identifiers, status, and timestamps without
   * customer-encrypted content.</p>
   */
  inline const Aws::Vector<PolicySummary>& GetPolicies() const { return m_policies; }
  template <typename PoliciesT = Aws::Vector<PolicySummary>>
  void SetPolicies(PoliciesT&& value) {
    m_policiesHasBeenSet = true;
    m_policies = std::forward<PoliciesT>(value);
  }
  template <typename PoliciesT = Aws::Vector<PolicySummary>>
  ListPolicySummariesResult& WithPolicies(PoliciesT&& value) {
    SetPolicies(std::forward<PoliciesT>(value));
    return *this;
  }
  template <typename PoliciesT = PolicySummary>
  ListPolicySummariesResult& AddPolicies(PoliciesT&& value) {
    m_policiesHasBeenSet = true;
    m_policies.emplace_back(std::forward<PoliciesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token that can be used in subsequent <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore-control/latest/APIReference/API_ListPolicySummaries.html">ListPolicySummaries</a>
   * calls to retrieve additional results. This token is only present when there are
   * more results available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPolicySummariesResult& WithNextToken(NextTokenT&& value) {
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
  ListPolicySummariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PolicySummary> m_policies;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_policiesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
