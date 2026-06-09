/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicyGenerationSummary.h>
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
class ListPolicyGenerationSummariesResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicyGenerationSummariesResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicyGenerationSummariesResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicyGenerationSummariesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of policy generation summary objects that match the specified
   * criteria. Each summary contains resource identifiers, status, timestamps, and
   * findings without customer-encrypted content.</p>
   */
  inline const Aws::Vector<PolicyGenerationSummary>& GetPolicyGenerations() const { return m_policyGenerations; }
  template <typename PolicyGenerationsT = Aws::Vector<PolicyGenerationSummary>>
  void SetPolicyGenerations(PolicyGenerationsT&& value) {
    m_policyGenerationsHasBeenSet = true;
    m_policyGenerations = std::forward<PolicyGenerationsT>(value);
  }
  template <typename PolicyGenerationsT = Aws::Vector<PolicyGenerationSummary>>
  ListPolicyGenerationSummariesResult& WithPolicyGenerations(PolicyGenerationsT&& value) {
    SetPolicyGenerations(std::forward<PolicyGenerationsT>(value));
    return *this;
  }
  template <typename PolicyGenerationsT = PolicyGenerationSummary>
  ListPolicyGenerationSummariesResult& AddPolicyGenerations(PolicyGenerationsT&& value) {
    m_policyGenerationsHasBeenSet = true;
    m_policyGenerations.emplace_back(std::forward<PolicyGenerationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token that can be used in subsequent <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore-control/latest/APIReference/API_ListPolicyGenerationSummaries.html">ListPolicyGenerationSummaries</a>
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
  ListPolicyGenerationSummariesResult& WithNextToken(NextTokenT&& value) {
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
  ListPolicyGenerationSummariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PolicyGenerationSummary> m_policyGenerations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_policyGenerationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
