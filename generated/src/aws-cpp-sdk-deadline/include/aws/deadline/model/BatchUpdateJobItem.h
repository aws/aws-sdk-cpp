/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/JobTargetTaskRunStatus.h>
#include <aws/deadline/model/UpdateJobLifecycleStatus.h>

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
 * <p>The details of a job to update in a batch update operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchUpdateJobItem">AWS
 * API Reference</a></p>
 */
class BatchUpdateJobItem {
 public:
  AWS_DEADLINE_API BatchUpdateJobItem() = default;
  AWS_DEADLINE_API BatchUpdateJobItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API BatchUpdateJobItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The farm ID of the job to update.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  BatchUpdateJobItem& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The queue ID of the job to update.</p>
   */
  inline const Aws::String& GetQueueId() const { return m_queueId; }
  inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
  template <typename QueueIdT = Aws::String>
  void SetQueueId(QueueIdT&& value) {
    m_queueIdHasBeenSet = true;
    m_queueId = std::forward<QueueIdT>(value);
  }
  template <typename QueueIdT = Aws::String>
  BatchUpdateJobItem& WithQueueId(QueueIdT&& value) {
    SetQueueId(std::forward<QueueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job ID of the job to update.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  BatchUpdateJobItem& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task status to update the job's tasks to.</p>
   */
  inline JobTargetTaskRunStatus GetTargetTaskRunStatus() const { return m_targetTaskRunStatus; }
  inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }
  inline void SetTargetTaskRunStatus(JobTargetTaskRunStatus value) {
    m_targetTaskRunStatusHasBeenSet = true;
    m_targetTaskRunStatus = value;
  }
  inline BatchUpdateJobItem& WithTargetTaskRunStatus(JobTargetTaskRunStatus value) {
    SetTargetTaskRunStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job priority to update.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline BatchUpdateJobItem& WithPriority(int value) {
    SetPriority(value);
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
  inline BatchUpdateJobItem& WithMaxFailedTasksCount(int value) {
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
  inline BatchUpdateJobItem& WithMaxRetriesPerTask(int value) {
    SetMaxRetriesPerTask(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of a job in its lifecycle. When you change the status of the job
   * to <code>ARCHIVED</code>, the job can't be scheduled or archived.</p>
   *  <p>An archived job and its steps and tasks are deleted after 120
   * days. The job can't be recovered.</p>
   */
  inline UpdateJobLifecycleStatus GetLifecycleStatus() const { return m_lifecycleStatus; }
  inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }
  inline void SetLifecycleStatus(UpdateJobLifecycleStatus value) {
    m_lifecycleStatusHasBeenSet = true;
    m_lifecycleStatus = value;
  }
  inline BatchUpdateJobItem& WithLifecycleStatus(UpdateJobLifecycleStatus value) {
    SetLifecycleStatus(value);
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
  inline BatchUpdateJobItem& WithMaxWorkerCount(int value) {
    SetMaxWorkerCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the job to update.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BatchUpdateJobItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the job to update.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  BatchUpdateJobItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_farmId;

  Aws::String m_queueId;

  Aws::String m_jobId;

  JobTargetTaskRunStatus m_targetTaskRunStatus{JobTargetTaskRunStatus::NOT_SET};

  int m_priority{0};

  int m_maxFailedTasksCount{0};

  int m_maxRetriesPerTask{0};

  UpdateJobLifecycleStatus m_lifecycleStatus{UpdateJobLifecycleStatus::NOT_SET};

  int m_maxWorkerCount{0};

  Aws::String m_name;

  Aws::String m_description;
  bool m_farmIdHasBeenSet = false;
  bool m_queueIdHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_targetTaskRunStatusHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_maxFailedTasksCountHasBeenSet = false;
  bool m_maxRetriesPerTaskHasBeenSet = false;
  bool m_lifecycleStatusHasBeenSet = false;
  bool m_maxWorkerCountHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
