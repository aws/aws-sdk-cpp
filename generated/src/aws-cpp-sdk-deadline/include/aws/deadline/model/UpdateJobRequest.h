/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/JobTargetTaskRunStatus.h>
#include <aws/deadline/model/UpdateJobLifecycleStatus.h>

#include <utility>

namespace Aws {
namespace deadline {
namespace Model {

/**
 */
class UpdateJobRequest : public DeadlineRequest {
 public:
  AWS_DEADLINE_API UpdateJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateJob"; }

  AWS_DEADLINE_API Aws::String SerializePayload() const override;

  AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique token which the server uses to recognize retries of the same
   * request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  inline UpdateJobRequest& WithTargetTaskRunStatus(JobTargetTaskRunStatus value) {
    SetTargetTaskRunStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated job priority.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline UpdateJobRequest& WithPriority(int value) {
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
  inline UpdateJobRequest& WithMaxFailedTasksCount(int value) {
    SetMaxFailedTasksCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of retries for a job.</p>
   */
  inline int GetMaxRetriesPerTask() const { return m_maxRetriesPerTask; }
  inline bool MaxRetriesPerTaskHasBeenSet() const { return m_maxRetriesPerTaskHasBeenSet; }
  inline void SetMaxRetriesPerTask(int value) {
    m_maxRetriesPerTaskHasBeenSet = true;
    m_maxRetriesPerTask = value;
  }
  inline UpdateJobRequest& WithMaxRetriesPerTask(int value) {
    SetMaxRetriesPerTask(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of a job in its lifecycle. When you change the status of the job
   * to <code>ARCHIVED</code>, the job can't be scheduled or archived.</p>
   *  <p>An archived jobs and its steps and tasks are deleted after 120
   * days. The job can't be recovered.</p>
   */
  inline UpdateJobLifecycleStatus GetLifecycleStatus() const { return m_lifecycleStatus; }
  inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }
  inline void SetLifecycleStatus(UpdateJobLifecycleStatus value) {
    m_lifecycleStatusHasBeenSet = true;
    m_lifecycleStatus = value;
  }
  inline UpdateJobRequest& WithLifecycleStatus(UpdateJobLifecycleStatus value) {
    SetLifecycleStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of worker hosts that can concurrently process a job. When
   * the <code>maxWorkerCount</code> is reached, no more workers will be assigned to
   * process the job, even if the fleets assigned to the job's queue has available
   * workers.</p> <p>You can't set the <code>maxWorkerCount</code> to 0. If you set
   * it to -1, there is no maximum number of workers.</p> <p>If you don't specify the
   * <code>maxWorkerCount</code>, the default is -1.</p> <p>The maximum number of
   * workers that can process tasks in the job.</p>
   */
  inline int GetMaxWorkerCount() const { return m_maxWorkerCount; }
  inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }
  inline void SetMaxWorkerCount(int value) {
    m_maxWorkerCountHasBeenSet = true;
    m_maxWorkerCount = value;
  }
  inline UpdateJobRequest& WithMaxWorkerCount(int value) {
    SetMaxWorkerCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated job name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateJobRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated job description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateJobRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

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
  UpdateJobRequest& WithFarmId(FarmIdT&& value) {
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
  UpdateJobRequest& WithQueueId(QueueIdT&& value) {
    SetQueueId(std::forward<QueueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job ID to update.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  UpdateJobRequest& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  JobTargetTaskRunStatus m_targetTaskRunStatus{JobTargetTaskRunStatus::NOT_SET};

  int m_priority{0};

  int m_maxFailedTasksCount{0};

  int m_maxRetriesPerTask{0};

  UpdateJobLifecycleStatus m_lifecycleStatus{UpdateJobLifecycleStatus::NOT_SET};

  int m_maxWorkerCount{0};

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_farmId;

  Aws::String m_queueId;

  Aws::String m_jobId;
  bool m_clientTokenHasBeenSet = true;
  bool m_targetTaskRunStatusHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_maxFailedTasksCountHasBeenSet = false;
  bool m_maxRetriesPerTaskHasBeenSet = false;
  bool m_lifecycleStatusHasBeenSet = false;
  bool m_maxWorkerCountHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_farmIdHasBeenSet = false;
  bool m_queueIdHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
