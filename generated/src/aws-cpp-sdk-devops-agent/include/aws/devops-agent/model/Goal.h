/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/GoalContent.h>
#include <aws/devops-agent/model/GoalSchedule.h>
#include <aws/devops-agent/model/GoalStatus.h>
#include <aws/devops-agent/model/GoalType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Represents a goal with all its properties and metadata</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/Goal">AWS
 * API Reference</a></p>
 */
class Goal {
 public:
  AWS_DEVOPSAGENT_API Goal() = default;
  AWS_DEVOPSAGENT_API Goal(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Goal& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing this goal</p>
   */
  inline const Aws::String& GetAgentSpaceArn() const { return m_agentSpaceArn; }
  inline bool AgentSpaceArnHasBeenSet() const { return m_agentSpaceArnHasBeenSet; }
  template <typename AgentSpaceArnT = Aws::String>
  void SetAgentSpaceArn(AgentSpaceArnT&& value) {
    m_agentSpaceArnHasBeenSet = true;
    m_agentSpaceArn = std::forward<AgentSpaceArnT>(value);
  }
  template <typename AgentSpaceArnT = Aws::String>
  Goal& WithAgentSpaceArn(AgentSpaceArnT&& value) {
    SetAgentSpaceArn(std::forward<AgentSpaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this goal</p>
   */
  inline const Aws::String& GetGoalId() const { return m_goalId; }
  inline bool GoalIdHasBeenSet() const { return m_goalIdHasBeenSet; }
  template <typename GoalIdT = Aws::String>
  void SetGoalId(GoalIdT&& value) {
    m_goalIdHasBeenSet = true;
    m_goalId = std::forward<GoalIdT>(value);
  }
  template <typename GoalIdT = Aws::String>
  Goal& WithGoalId(GoalIdT&& value) {
    SetGoalId(std::forward<GoalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the goal</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  Goal& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Content of the goal</p>
   */
  inline const GoalContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = GoalContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = GoalContent>
  Goal& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the goal itself</p>
   */
  inline GoalStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(GoalStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Goal& WithStatus(GoalStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of goal based on its origin</p>
   */
  inline GoalType GetGoalType() const { return m_goalType; }
  inline bool GoalTypeHasBeenSet() const { return m_goalTypeHasBeenSet; }
  inline void SetGoalType(GoalType value) {
    m_goalTypeHasBeenSet = true;
    m_goalType = value;
  }
  inline Goal& WithGoalType(GoalType value) {
    SetGoalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this goal was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Goal& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this goal was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Goal& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the goal was last evaluated</p>
   */
  inline const Aws::Utils::DateTime& GetLastEvaluatedAt() const { return m_lastEvaluatedAt; }
  inline bool LastEvaluatedAtHasBeenSet() const { return m_lastEvaluatedAtHasBeenSet; }
  template <typename LastEvaluatedAtT = Aws::Utils::DateTime>
  void SetLastEvaluatedAt(LastEvaluatedAtT&& value) {
    m_lastEvaluatedAtHasBeenSet = true;
    m_lastEvaluatedAt = std::forward<LastEvaluatedAtT>(value);
  }
  template <typename LastEvaluatedAtT = Aws::Utils::DateTime>
  Goal& WithLastEvaluatedAt(LastEvaluatedAtT&& value) {
    SetLastEvaluatedAt(std::forward<LastEvaluatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the most recent task associated with this goal</p>
   */
  inline const Aws::String& GetLastTaskId() const { return m_lastTaskId; }
  inline bool LastTaskIdHasBeenSet() const { return m_lastTaskIdHasBeenSet; }
  template <typename LastTaskIdT = Aws::String>
  void SetLastTaskId(LastTaskIdT&& value) {
    m_lastTaskIdHasBeenSet = true;
    m_lastTaskId = std::forward<LastTaskIdT>(value);
  }
  template <typename LastTaskIdT = Aws::String>
  Goal& WithLastTaskId(LastTaskIdT&& value) {
    SetLastTaskId(std::forward<LastTaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the most recent successful task associated with this goal</p>
   */
  inline const Aws::String& GetLastSuccessfulTaskId() const { return m_lastSuccessfulTaskId; }
  inline bool LastSuccessfulTaskIdHasBeenSet() const { return m_lastSuccessfulTaskIdHasBeenSet; }
  template <typename LastSuccessfulTaskIdT = Aws::String>
  void SetLastSuccessfulTaskId(LastSuccessfulTaskIdT&& value) {
    m_lastSuccessfulTaskIdHasBeenSet = true;
    m_lastSuccessfulTaskId = std::forward<LastSuccessfulTaskIdT>(value);
  }
  template <typename LastSuccessfulTaskIdT = Aws::String>
  Goal& WithLastSuccessfulTaskId(LastSuccessfulTaskIdT&& value) {
    SetLastSuccessfulTaskId(std::forward<LastSuccessfulTaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Version number for optimistic locking</p>
   */
  inline int GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(int value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline Goal& WithVersion(int value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Goal Schedule. Allows to schedule the goal to run periodically, as well as
   * disable a goal temporarily</p>
   */
  inline const GoalSchedule& GetEvaluationSchedule() const { return m_evaluationSchedule; }
  inline bool EvaluationScheduleHasBeenSet() const { return m_evaluationScheduleHasBeenSet; }
  template <typename EvaluationScheduleT = GoalSchedule>
  void SetEvaluationSchedule(EvaluationScheduleT&& value) {
    m_evaluationScheduleHasBeenSet = true;
    m_evaluationSchedule = std::forward<EvaluationScheduleT>(value);
  }
  template <typename EvaluationScheduleT = GoalSchedule>
  Goal& WithEvaluationSchedule(EvaluationScheduleT&& value) {
    SetEvaluationSchedule(std::forward<EvaluationScheduleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceArn;

  Aws::String m_goalId;

  Aws::String m_title;

  GoalContent m_content;

  GoalStatus m_status{GoalStatus::NOT_SET};

  GoalType m_goalType{GoalType::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_lastEvaluatedAt{};

  Aws::String m_lastTaskId;

  Aws::String m_lastSuccessfulTaskId;

  int m_version{0};

  GoalSchedule m_evaluationSchedule;
  bool m_agentSpaceArnHasBeenSet = false;
  bool m_goalIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_goalTypeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_lastEvaluatedAtHasBeenSet = false;
  bool m_lastTaskIdHasBeenSet = false;
  bool m_lastSuccessfulTaskIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_evaluationScheduleHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
