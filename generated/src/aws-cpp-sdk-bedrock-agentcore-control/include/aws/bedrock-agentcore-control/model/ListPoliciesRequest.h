/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class ListPoliciesRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListPoliciesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListPolicies"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORECONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>A pagination token returned from a previous <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/devguide/API_ListPolicies.html">ListPolicies</a>
   * call. Use this token to retrieve the next page of results when the response is
   * paginated.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPoliciesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of policies to return in a single response. If not
   * specified, the default is 10 policies per page, with a maximum of 100 per
   * page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListPoliciesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the policy engine whose policies to retrieve.</p>
   */
  inline const Aws::String& GetPolicyEngineId() const { return m_policyEngineId; }
  inline bool PolicyEngineIdHasBeenSet() const { return m_policyEngineIdHasBeenSet; }
  template <typename PolicyEngineIdT = Aws::String>
  void SetPolicyEngineId(PolicyEngineIdT&& value) {
    m_policyEngineIdHasBeenSet = true;
    m_policyEngineId = std::forward<PolicyEngineIdT>(value);
  }
  template <typename PolicyEngineIdT = Aws::String>
  ListPoliciesRequest& WithPolicyEngineId(PolicyEngineIdT&& value) {
    SetPolicyEngineId(std::forward<PolicyEngineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to list policies that apply to a specific resource scope or
   * resource type. This helps narrow down policy results to those relevant for
   * particular Amazon Web Services resources, agent tools, or operational contexts
   * within the policy engine ecosystem.</p>
   */
  inline const Aws::String& GetTargetResourceScope() const { return m_targetResourceScope; }
  inline bool TargetResourceScopeHasBeenSet() const { return m_targetResourceScopeHasBeenSet; }
  template <typename TargetResourceScopeT = Aws::String>
  void SetTargetResourceScope(TargetResourceScopeT&& value) {
    m_targetResourceScopeHasBeenSet = true;
    m_targetResourceScope = std::forward<TargetResourceScopeT>(value);
  }
  template <typename TargetResourceScopeT = Aws::String>
  ListPoliciesRequest& WithTargetResourceScope(TargetResourceScopeT&& value) {
    SetTargetResourceScope(std::forward<TargetResourceScopeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::String m_policyEngineId;

  Aws::String m_targetResourceScope;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_policyEngineIdHasBeenSet = false;
  bool m_targetResourceScopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
