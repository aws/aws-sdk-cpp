/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/Priority.h>
#include <aws/devops-agent/model/ReferenceOutput.h>
#include <aws/devops-agent/model/TaskStatus.h>
#include <aws/devops-agent/model/TaskType.h>

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
 * <p>Represents a backlog task with all its properties and metadata</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/Task">AWS
 * API Reference</a></p>
 */
class Task {
 public:
  AWS_DEVOPSAGENT_API Task() = default;
  AWS_DEVOPSAGENT_API Task(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Task& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing this task</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  Task& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this task</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  Task& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution ID associated with this task, if any</p>
   */
  inline const Aws::String& GetExecutionId() const { return m_executionId; }
  inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
  template <typename ExecutionIdT = Aws::String>
  void SetExecutionId(ExecutionIdT&& value) {
    m_executionIdHasBeenSet = true;
    m_executionId = std::forward<ExecutionIdT>(value);
  }
  template <typename ExecutionIdT = Aws::String>
  Task& WithExecutionId(ExecutionIdT&& value) {
    SetExecutionId(std::forward<ExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the task</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  Task& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional detailed description of the task</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Task& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional reference information linking this task to external systems</p>
   */
  inline const ReferenceOutput& GetReference() const { return m_reference; }
  inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
  template <typename ReferenceT = ReferenceOutput>
  void SetReference(ReferenceT&& value) {
    m_referenceHasBeenSet = true;
    m_reference = std::forward<ReferenceT>(value);
  }
  template <typename ReferenceT = ReferenceOutput>
  Task& WithReference(ReferenceT&& value) {
    SetReference(std::forward<ReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of this task</p>
   */
  inline TaskType GetTaskType() const { return m_taskType; }
  inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }
  inline void SetTaskType(TaskType value) {
    m_taskTypeHasBeenSet = true;
    m_taskType = value;
  }
  inline Task& WithTaskType(TaskType value) {
    SetTaskType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority level of this task</p>
   */
  inline Priority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(Priority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline Task& WithPriority(Priority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of this task</p>
   */
  inline TaskStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TaskStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Task& WithStatus(TaskStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this task was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Task& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this task was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Task& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  inline Task& WithVersion(int value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional support metadata for the task</p>
   */
  inline Aws::Utils::DocumentView GetSupportMetadata() const { return m_supportMetadata; }
  inline bool SupportMetadataHasBeenSet() const { return m_supportMetadataHasBeenSet; }
  template <typename SupportMetadataT = Aws::Utils::Document>
  void SetSupportMetadata(SupportMetadataT&& value) {
    m_supportMetadataHasBeenSet = true;
    m_supportMetadata = std::forward<SupportMetadataT>(value);
  }
  template <typename SupportMetadataT = Aws::Utils::Document>
  Task& WithSupportMetadata(SupportMetadataT&& value) {
    SetSupportMetadata(std::forward<SupportMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional metadata for the task</p>
   */
  inline Aws::Utils::DocumentView GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Utils::Document>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Utils::Document>
  Task& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task ID of the primary investigation this task is linked to</p>
   */
  inline const Aws::String& GetPrimaryTaskId() const { return m_primaryTaskId; }
  inline bool PrimaryTaskIdHasBeenSet() const { return m_primaryTaskIdHasBeenSet; }
  template <typename PrimaryTaskIdT = Aws::String>
  void SetPrimaryTaskId(PrimaryTaskIdT&& value) {
    m_primaryTaskIdHasBeenSet = true;
    m_primaryTaskId = std::forward<PrimaryTaskIdT>(value);
  }
  template <typename PrimaryTaskIdT = Aws::String>
  Task& WithPrimaryTaskId(PrimaryTaskIdT&& value) {
    SetPrimaryTaskId(std::forward<PrimaryTaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Explanation for why the task status was changed (e.g., linked reason)</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  Task& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if this task has other tasks linked to it</p>
   */
  inline bool GetHasLinkedTasks() const { return m_hasLinkedTasks; }
  inline bool HasLinkedTasksHasBeenSet() const { return m_hasLinkedTasksHasBeenSet; }
  inline void SetHasLinkedTasks(bool value) {
    m_hasLinkedTasksHasBeenSet = true;
    m_hasLinkedTasks = value;
  }
  inline Task& WithHasLinkedTasks(bool value) {
    SetHasLinkedTasks(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_taskId;

  Aws::String m_executionId;

  Aws::String m_title;

  Aws::String m_description;

  ReferenceOutput m_reference;

  TaskType m_taskType{TaskType::NOT_SET};

  Priority m_priority{Priority::NOT_SET};

  TaskStatus m_status{TaskStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  int m_version{0};

  Aws::Utils::Document m_supportMetadata;

  Aws::Utils::Document m_metadata;

  Aws::String m_primaryTaskId;

  Aws::String m_statusReason;

  bool m_hasLinkedTasks{false};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
  bool m_executionIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_referenceHasBeenSet = false;
  bool m_taskTypeHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_supportMetadataHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_primaryTaskIdHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_hasLinkedTasksHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
