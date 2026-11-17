/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentInsightArchiveStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgentCore {
namespace Model {

/**
 */
class ListAgentInsightsRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API ListAgentInsightsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAgentInsights"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Filters the results to Agent Insights for an application.</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  ListAgentInsightsRequest& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to Agent Insights produced by a batch evaluation.</p>
   */
  inline const Aws::String& GetBatchEvaluationId() const { return m_batchEvaluationId; }
  inline bool BatchEvaluationIdHasBeenSet() const { return m_batchEvaluationIdHasBeenSet; }
  template <typename BatchEvaluationIdT = Aws::String>
  void SetBatchEvaluationId(BatchEvaluationIdT&& value) {
    m_batchEvaluationIdHasBeenSet = true;
    m_batchEvaluationId = std::forward<BatchEvaluationIdT>(value);
  }
  template <typename BatchEvaluationIdT = Aws::String>
  ListAgentInsightsRequest& WithBatchEvaluationId(BatchEvaluationIdT&& value) {
    SetBatchEvaluationId(std::forward<BatchEvaluationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results by archive status.</p>
   */
  inline AgentInsightArchiveStatus GetArchiveStatus() const { return m_archiveStatus; }
  inline bool ArchiveStatusHasBeenSet() const { return m_archiveStatusHasBeenSet; }
  inline void SetArchiveStatus(AgentInsightArchiveStatus value) {
    m_archiveStatusHasBeenSet = true;
    m_archiveStatus = value;
  }
  inline ListAgentInsightsRequest& WithArchiveStatus(AgentInsightArchiveStatus value) {
    SetArchiveStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of Agent Insight summaries to return in one response. If
   * you don't specify a value, the operation returns up to 50 summaries.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAgentInsightsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to specify where to start paginating the results. This token is
   * returned in a previous response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgentInsightsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationName;

  Aws::String m_batchEvaluationId;

  AgentInsightArchiveStatus m_archiveStatus{AgentInsightArchiveStatus::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_applicationNameHasBeenSet = false;
  bool m_batchEvaluationIdHasBeenSet = false;
  bool m_archiveStatusHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
