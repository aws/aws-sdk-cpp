/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/RecommendationContent.h>
#include <aws/devops-agent/model/RecommendationPriority.h>
#include <aws/devops-agent/model/RecommendationStatus.h>

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
 * <p>Represents a recommendation with all its properties and
 * metadata</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/Recommendation">AWS
 * API Reference</a></p>
 */
class Recommendation {
 public:
  AWS_DEVOPSAGENT_API Recommendation() = default;
  AWS_DEVOPSAGENT_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the agent space this recommendation belongs to</p>
   */
  inline const Aws::String& GetAgentSpaceArn() const { return m_agentSpaceArn; }
  inline bool AgentSpaceArnHasBeenSet() const { return m_agentSpaceArnHasBeenSet; }
  template <typename AgentSpaceArnT = Aws::String>
  void SetAgentSpaceArn(AgentSpaceArnT&& value) {
    m_agentSpaceArnHasBeenSet = true;
    m_agentSpaceArn = std::forward<AgentSpaceArnT>(value);
  }
  template <typename AgentSpaceArnT = Aws::String>
  Recommendation& WithAgentSpaceArn(AgentSpaceArnT&& value) {
    SetAgentSpaceArn(std::forward<AgentSpaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this recommendation</p>
   */
  inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
  inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
  template <typename RecommendationIdT = Aws::String>
  void SetRecommendationId(RecommendationIdT&& value) {
    m_recommendationIdHasBeenSet = true;
    m_recommendationId = std::forward<RecommendationIdT>(value);
  }
  template <typename RecommendationIdT = Aws::String>
  Recommendation& WithRecommendationId(RecommendationIdT&& value) {
    SetRecommendationId(std::forward<RecommendationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the task that generated the recommendation</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  Recommendation& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the goal this recommendation is associated with</p>
   */
  inline const Aws::String& GetGoalId() const { return m_goalId; }
  inline bool GoalIdHasBeenSet() const { return m_goalIdHasBeenSet; }
  template <typename GoalIdT = Aws::String>
  void SetGoalId(GoalIdT&& value) {
    m_goalIdHasBeenSet = true;
    m_goalId = std::forward<GoalIdT>(value);
  }
  template <typename GoalIdT = Aws::String>
  Recommendation& WithGoalId(GoalIdT&& value) {
    SetGoalId(std::forward<GoalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the recommendation</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  Recommendation& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Content of the recommendation</p>
   */
  inline const RecommendationContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = RecommendationContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = RecommendationContent>
  Recommendation& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the recommendation</p>
   */
  inline RecommendationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommendationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Recommendation& WithStatus(RecommendationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Priority level of the recommendation</p>
   */
  inline RecommendationPriority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(RecommendationPriority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline Recommendation& WithPriority(RecommendationPriority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Version of the goal at the time this recommendation was generated</p>
   */
  inline long long GetGoalVersion() const { return m_goalVersion; }
  inline bool GoalVersionHasBeenSet() const { return m_goalVersionHasBeenSet; }
  inline void SetGoalVersion(long long value) {
    m_goalVersionHasBeenSet = true;
    m_goalVersion = value;
  }
  inline Recommendation& WithGoalVersion(long long value) {
    SetGoalVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context for recommendation</p>
   */
  inline const Aws::String& GetAdditionalContext() const { return m_additionalContext; }
  inline bool AdditionalContextHasBeenSet() const { return m_additionalContextHasBeenSet; }
  template <typename AdditionalContextT = Aws::String>
  void SetAdditionalContext(AdditionalContextT&& value) {
    m_additionalContextHasBeenSet = true;
    m_additionalContext = std::forward<AdditionalContextT>(value);
  }
  template <typename AdditionalContextT = Aws::String>
  Recommendation& WithAdditionalContext(AdditionalContextT&& value) {
    SetAdditionalContext(std::forward<AdditionalContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this recommendation was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Recommendation& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this recommendation was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Recommendation& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Version number for optimistic locking</p>
   */
  inline long long GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(long long value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline Recommendation& WithVersion(long long value) {
    SetVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceArn;

  Aws::String m_recommendationId;

  Aws::String m_taskId;

  Aws::String m_goalId;

  Aws::String m_title;

  RecommendationContent m_content;

  RecommendationStatus m_status{RecommendationStatus::NOT_SET};

  RecommendationPriority m_priority{RecommendationPriority::NOT_SET};

  long long m_goalVersion{0};

  Aws::String m_additionalContext;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  long long m_version{0};
  bool m_agentSpaceArnHasBeenSet = false;
  bool m_recommendationIdHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
  bool m_goalIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_goalVersionHasBeenSet = false;
  bool m_additionalContextHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
