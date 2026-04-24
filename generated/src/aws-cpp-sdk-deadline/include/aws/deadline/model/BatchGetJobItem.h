/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/Attachments.h>
#include <aws/deadline/model/JobLifecycleStatus.h>
#include <aws/deadline/model/JobParameter.h>
#include <aws/deadline/model/JobTargetTaskRunStatus.h>
#include <aws/deadline/model/TaskRunStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>The details of a job returned in a batch get operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchGetJobItem">AWS
 * API Reference</a></p>
 */
class BatchGetJobItem {
 public:
  AWS_DEADLINE_API BatchGetJobItem() = default;
  AWS_DEADLINE_API BatchGetJobItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API BatchGetJobItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The farm ID of the job.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  BatchGetJobItem& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The queue ID of the job.</p>
   */
  inline const Aws::String& GetQueueId() const { return m_queueId; }
  inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
  template <typename QueueIdT = Aws::String>
  void SetQueueId(QueueIdT&& value) {
    m_queueIdHasBeenSet = true;
    m_queueId = std::forward<QueueIdT>(value);
  }
  template <typename QueueIdT = Aws::String>
  BatchGetJobItem& WithQueueId(QueueIdT&& value) {
    SetQueueId(std::forward<QueueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job ID.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  BatchGetJobItem& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the job.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BatchGetJobItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The life cycle status of the job.</p>
   */
  inline JobLifecycleStatus GetLifecycleStatus() const { return m_lifecycleStatus; }
  inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }
  inline void SetLifecycleStatus(JobLifecycleStatus value) {
    m_lifecycleStatusHasBeenSet = true;
    m_lifecycleStatus = value;
  }
  inline BatchGetJobItem& WithLifecycleStatus(JobLifecycleStatus value) {
    SetLifecycleStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that communicates the status of the life cycle.</p>
   */
  inline const Aws::String& GetLifecycleStatusMessage() const { return m_lifecycleStatusMessage; }
  inline bool LifecycleStatusMessageHasBeenSet() const { return m_lifecycleStatusMessageHasBeenSet; }
  template <typename LifecycleStatusMessageT = Aws::String>
  void SetLifecycleStatusMessage(LifecycleStatusMessageT&& value) {
    m_lifecycleStatusMessageHasBeenSet = true;
    m_lifecycleStatusMessage = std::forward<LifecycleStatusMessageT>(value);
  }
  template <typename LifecycleStatusMessageT = Aws::String>
  BatchGetJobItem& WithLifecycleStatusMessage(LifecycleStatusMessageT&& value) {
    SetLifecycleStatusMessage(std::forward<LifecycleStatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job priority.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline BatchGetJobItem& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  BatchGetJobItem& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user or system that created this resource.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  BatchGetJobItem& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  BatchGetJobItem& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user or system that updated this resource.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  BatchGetJobItem& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource started running.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  BatchGetJobItem& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource ended running.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  BatchGetJobItem& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task run status for the job.</p>
   */
  inline TaskRunStatus GetTaskRunStatus() const { return m_taskRunStatus; }
  inline bool TaskRunStatusHasBeenSet() const { return m_taskRunStatusHasBeenSet; }
  inline void SetTaskRunStatus(TaskRunStatus value) {
    m_taskRunStatusHasBeenSet = true;
    m_taskRunStatus = value;
  }
  inline BatchGetJobItem& WithTaskRunStatus(TaskRunStatus value) {
    SetTaskRunStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task status to start with on the job.</p>
   */
  inline JobTargetTaskRunStatus GetTargetTaskRunStatus() const { return m_targetTaskRunStatus; }
  inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }
  inline void SetTargetTaskRunStatus(JobTargetTaskRunStatus value) {
    m_targetTaskRunStatusHasBeenSet = true;
    m_targetTaskRunStatus = value;
  }
  inline BatchGetJobItem& WithTargetTaskRunStatus(JobTargetTaskRunStatus value) {
    SetTargetTaskRunStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of tasks for each run status for the job.</p>
   */
  inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const { return m_taskRunStatusCounts; }
  inline bool TaskRunStatusCountsHasBeenSet() const { return m_taskRunStatusCountsHasBeenSet; }
  template <typename TaskRunStatusCountsT = Aws::Map<TaskRunStatus, int>>
  void SetTaskRunStatusCounts(TaskRunStatusCountsT&& value) {
    m_taskRunStatusCountsHasBeenSet = true;
    m_taskRunStatusCounts = std::forward<TaskRunStatusCountsT>(value);
  }
  template <typename TaskRunStatusCountsT = Aws::Map<TaskRunStatus, int>>
  BatchGetJobItem& WithTaskRunStatusCounts(TaskRunStatusCountsT&& value) {
    SetTaskRunStatusCounts(std::forward<TaskRunStatusCountsT>(value));
    return *this;
  }
  inline BatchGetJobItem& AddTaskRunStatusCounts(TaskRunStatus key, int value) {
    m_taskRunStatusCountsHasBeenSet = true;
    m_taskRunStatusCounts.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times that tasks failed and were retried.</p>
   */
  inline int GetTaskFailureRetryCount() const { return m_taskFailureRetryCount; }
  inline bool TaskFailureRetryCountHasBeenSet() const { return m_taskFailureRetryCountHasBeenSet; }
  inline void SetTaskFailureRetryCount(int value) {
    m_taskFailureRetryCountHasBeenSet = true;
    m_taskFailureRetryCount = value;
  }
  inline BatchGetJobItem& WithTaskFailureRetryCount(int value) {
    SetTaskFailureRetryCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage profile ID associated with the job.</p>
   */
  inline const Aws::String& GetStorageProfileId() const { return m_storageProfileId; }
  inline bool StorageProfileIdHasBeenSet() const { return m_storageProfileIdHasBeenSet; }
  template <typename StorageProfileIdT = Aws::String>
  void SetStorageProfileId(StorageProfileIdT&& value) {
    m_storageProfileIdHasBeenSet = true;
    m_storageProfileId = std::forward<StorageProfileIdT>(value);
  }
  template <typename StorageProfileIdT = Aws::String>
  BatchGetJobItem& WithStorageProfileId(StorageProfileIdT&& value) {
    SetStorageProfileId(std::forward<StorageProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of task failures before the job stops running and is marked as
   * <code>FAILED</code>.</p>
   */
  inline int GetMaxFailedTasksCount() const { return m_maxFailedTasksCount; }
  inline bool MaxFailedTasksCountHasBeenSet() const { return m_maxFailedTasksCountHasBeenSet; }
  inline void SetMaxFailedTasksCount(int value) {
    m_maxFailedTasksCountHasBeenSet = true;
    m_maxFailedTasksCount = value;
  }
  inline BatchGetJobItem& WithMaxFailedTasksCount(int value) {
    SetMaxFailedTasksCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of retries per failed tasks.</p>
   */
  inline int GetMaxRetriesPerTask() const { return m_maxRetriesPerTask; }
  inline bool MaxRetriesPerTaskHasBeenSet() const { return m_maxRetriesPerTaskHasBeenSet; }
  inline void SetMaxRetriesPerTask(int value) {
    m_maxRetriesPerTaskHasBeenSet = true;
    m_maxRetriesPerTask = value;
  }
  inline BatchGetJobItem& WithMaxRetriesPerTask(int value) {
    SetMaxRetriesPerTask(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters for the job.</p>
   */
  inline const Aws::Map<Aws::String, JobParameter>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Map<Aws::String, JobParameter>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, JobParameter>>
  BatchGetJobItem& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = JobParameter>
  BatchGetJobItem& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attachments for the job.</p>
   */
  inline const Attachments& GetAttachments() const { return m_attachments; }
  inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
  template <typename AttachmentsT = Attachments>
  void SetAttachments(AttachmentsT&& value) {
    m_attachmentsHasBeenSet = true;
    m_attachments = std::forward<AttachmentsT>(value);
  }
  template <typename AttachmentsT = Attachments>
  BatchGetJobItem& WithAttachments(AttachmentsT&& value) {
    SetAttachments(std::forward<AttachmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the job.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  BatchGetJobItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of worker hosts that can concurrently process a job.</p>
   */
  inline int GetMaxWorkerCount() const { return m_maxWorkerCount; }
  inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }
  inline void SetMaxWorkerCount(int value) {
    m_maxWorkerCountHasBeenSet = true;
    m_maxWorkerCount = value;
  }
  inline BatchGetJobItem& WithMaxWorkerCount(int value) {
    SetMaxWorkerCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job ID for the source job.</p>
   */
  inline const Aws::String& GetSourceJobId() const { return m_sourceJobId; }
  inline bool SourceJobIdHasBeenSet() const { return m_sourceJobIdHasBeenSet; }
  template <typename SourceJobIdT = Aws::String>
  void SetSourceJobId(SourceJobIdT&& value) {
    m_sourceJobIdHasBeenSet = true;
    m_sourceJobId = std::forward<SourceJobIdT>(value);
  }
  template <typename SourceJobIdT = Aws::String>
  BatchGetJobItem& WithSourceJobId(SourceJobIdT&& value) {
    SetSourceJobId(std::forward<SourceJobIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_farmId;

  Aws::String m_queueId;

  Aws::String m_jobId;

  Aws::String m_name;

  JobLifecycleStatus m_lifecycleStatus{JobLifecycleStatus::NOT_SET};

  Aws::String m_lifecycleStatusMessage;

  int m_priority{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_updatedBy;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  TaskRunStatus m_taskRunStatus{TaskRunStatus::NOT_SET};

  JobTargetTaskRunStatus m_targetTaskRunStatus{JobTargetTaskRunStatus::NOT_SET};

  Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;

  int m_taskFailureRetryCount{0};

  Aws::String m_storageProfileId;

  int m_maxFailedTasksCount{0};

  int m_maxRetriesPerTask{0};

  Aws::Map<Aws::String, JobParameter> m_parameters;

  Attachments m_attachments;

  Aws::String m_description;

  int m_maxWorkerCount{0};

  Aws::String m_sourceJobId;
  bool m_farmIdHasBeenSet = false;
  bool m_queueIdHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_lifecycleStatusHasBeenSet = false;
  bool m_lifecycleStatusMessageHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_taskRunStatusHasBeenSet = false;
  bool m_targetTaskRunStatusHasBeenSet = false;
  bool m_taskRunStatusCountsHasBeenSet = false;
  bool m_taskFailureRetryCountHasBeenSet = false;
  bool m_storageProfileIdHasBeenSet = false;
  bool m_maxFailedTasksCountHasBeenSet = false;
  bool m_maxRetriesPerTaskHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_attachmentsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_maxWorkerCountHasBeenSet = false;
  bool m_sourceJobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
