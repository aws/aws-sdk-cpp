/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Policy.h>
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
class ListPoliciesResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListPoliciesResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of policy objects that match the specified criteria. Each policy
   * object contains the policy metadata, status, and key identifiers for further
   * operations.</p>
   */
  inline const Aws::Vector<Policy>& GetPolicies() const { return m_policies; }
  template <typename PoliciesT = Aws::Vector<Policy>>
  void SetPolicies(PoliciesT&& value) {
    m_policiesHasBeenSet = true;
    m_policies = std::forward<PoliciesT>(value);
  }
  template <typename PoliciesT = Aws::Vector<Policy>>
  ListPoliciesResult& WithPolicies(PoliciesT&& value) {
    SetPolicies(std::forward<PoliciesT>(value));
    return *this;
  }
  template <typename PoliciesT = Policy>
  ListPoliciesResult& AddPolicies(PoliciesT&& value) {
    m_policiesHasBeenSet = true;
    m_policies.emplace_back(std::forward<PoliciesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token that can be used in subsequent ListPolicies calls to
   * retrieve additional results. This token is only present when there are more
   * results available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPoliciesResult& WithNextToken(NextTokenT&& value) {
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
  ListPoliciesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Policy> m_policies;
  bool m_policiesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
