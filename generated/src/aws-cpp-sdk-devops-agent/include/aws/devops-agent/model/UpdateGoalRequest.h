/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/GoalScheduleInput.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for updating a goal</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateGoalRequest">AWS
 * API Reference</a></p>
 */
class UpdateGoalRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API UpdateGoalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateGoal"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing the goal</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  UpdateGoalRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the goal to update</p>
   */
  inline const Aws::String& GetGoalId() const { return m_goalId; }
  inline bool GoalIdHasBeenSet() const { return m_goalIdHasBeenSet; }
  template <typename GoalIdT = Aws::String>
  void SetGoalId(GoalIdT&& value) {
    m_goalIdHasBeenSet = true;
    m_goalId = std::forward<GoalIdT>(value);
  }
  template <typename GoalIdT = Aws::String>
  UpdateGoalRequest& WithGoalId(GoalIdT&& value) {
    SetGoalId(std::forward<GoalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Update goal schedule state</p>
   */
  inline const GoalScheduleInput& GetEvaluationSchedule() const { return m_evaluationSchedule; }
  inline bool EvaluationScheduleHasBeenSet() const { return m_evaluationScheduleHasBeenSet; }
  template <typename EvaluationScheduleT = GoalScheduleInput>
  void SetEvaluationSchedule(EvaluationScheduleT&& value) {
    m_evaluationScheduleHasBeenSet = true;
    m_evaluationSchedule = std::forward<EvaluationScheduleT>(value);
  }
  template <typename EvaluationScheduleT = GoalScheduleInput>
  UpdateGoalRequest& WithEvaluationSchedule(EvaluationScheduleT&& value) {
    SetEvaluationSchedule(std::forward<EvaluationScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Client-provided token for idempotent operations</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateGoalRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_goalId;

  GoalScheduleInput m_evaluationSchedule;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_goalIdHasBeenSet = false;
  bool m_evaluationScheduleHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
