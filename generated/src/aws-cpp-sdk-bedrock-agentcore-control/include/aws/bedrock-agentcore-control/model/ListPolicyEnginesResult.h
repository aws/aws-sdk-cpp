/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicyEngine.h>
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
class ListPolicyEnginesResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicyEnginesResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicyEnginesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListPolicyEnginesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of policy engine objects that exist in the account. Each policy
   * engine object contains the engine metadata, status, and key identifiers for
   * further operations.</p>
   */
  inline const Aws::Vector<PolicyEngine>& GetPolicyEngines() const { return m_policyEngines; }
  template <typename PolicyEnginesT = Aws::Vector<PolicyEngine>>
  void SetPolicyEngines(PolicyEnginesT&& value) {
    m_policyEnginesHasBeenSet = true;
    m_policyEngines = std::forward<PolicyEnginesT>(value);
  }
  template <typename PolicyEnginesT = Aws::Vector<PolicyEngine>>
  ListPolicyEnginesResult& WithPolicyEngines(PolicyEnginesT&& value) {
    SetPolicyEngines(std::forward<PolicyEnginesT>(value));
    return *this;
  }
  template <typename PolicyEnginesT = PolicyEngine>
  ListPolicyEnginesResult& AddPolicyEngines(PolicyEnginesT&& value) {
    m_policyEnginesHasBeenSet = true;
    m_policyEngines.emplace_back(std::forward<PolicyEnginesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token that can be used in subsequent <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore-control/latest/APIReference/API_ListPolicyEngines.html">ListPolicyEngines</a>
   * calls to retrieve additional results. This token is only present when there are
   * more results available. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPolicyEnginesResult& WithNextToken(NextTokenT&& value) {
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
  ListPolicyEnginesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PolicyEngine> m_policyEngines;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_policyEnginesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
