/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/RecommendationPriority.h>
#include <aws/devops-agent/model/RecommendationStatus.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for listing recommendations with filtering and pagination
 * support</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListRecommendationsRequest">AWS
 * API Reference</a></p>
 */
class ListRecommendationsRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API ListRecommendationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRecommendations"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing the recommendations</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  ListRecommendationsRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional task ID to filter recommendations by specific task</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  ListRecommendationsRequest& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional goal ID to filter recommendations by specific goal</p>
   */
  inline const Aws::String& GetGoalId() const { return m_goalId; }
  inline bool GoalIdHasBeenSet() const { return m_goalIdHasBeenSet; }
  template <typename GoalIdT = Aws::String>
  void SetGoalId(GoalIdT&& value) {
    m_goalIdHasBeenSet = true;
    m_goalId = std::forward<GoalIdT>(value);
  }
  template <typename GoalIdT = Aws::String>
  ListRecommendationsRequest& WithGoalId(GoalIdT&& value) {
    SetGoalId(std::forward<GoalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional status to filter recommendations by their current status</p>
   */
  inline RecommendationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommendationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListRecommendationsRequest& WithStatus(RecommendationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional priority to filter recommendations by priority level</p>
   */
  inline RecommendationPriority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(RecommendationPriority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline ListRecommendationsRequest& WithPriority(RecommendationPriority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of recommendations to return in a single response</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListRecommendationsRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for retrieving the next page of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecommendationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_taskId;

  Aws::String m_goalId;

  RecommendationStatus m_status{RecommendationStatus::NOT_SET};

  RecommendationPriority m_priority{RecommendationPriority::NOT_SET};

  int m_limit{0};

  Aws::String m_nextToken;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
  bool m_goalIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
