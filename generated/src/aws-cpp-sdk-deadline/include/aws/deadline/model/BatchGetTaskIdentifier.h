/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

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
 * <p>The identifiers for a task.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchGetTaskIdentifier">AWS
 * API Reference</a></p>
 */
class BatchGetTaskIdentifier {
 public:
  AWS_DEADLINE_API BatchGetTaskIdentifier() = default;
  AWS_DEADLINE_API BatchGetTaskIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API BatchGetTaskIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The farm ID of the task.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  BatchGetTaskIdentifier& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The queue ID of the task.</p>
   */
  inline const Aws::String& GetQueueId() const { return m_queueId; }
  inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
  template <typename QueueIdT = Aws::String>
  void SetQueueId(QueueIdT&& value) {
    m_queueIdHasBeenSet = true;
    m_queueId = std::forward<QueueIdT>(value);
  }
  template <typename QueueIdT = Aws::String>
  BatchGetTaskIdentifier& WithQueueId(QueueIdT&& value) {
    SetQueueId(std::forward<QueueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job ID of the task.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  BatchGetTaskIdentifier& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The step ID of the task.</p>
   */
  inline const Aws::String& GetStepId() const { return m_stepId; }
  inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
  template <typename StepIdT = Aws::String>
  void SetStepId(StepIdT&& value) {
    m_stepIdHasBeenSet = true;
    m_stepId = std::forward<StepIdT>(value);
  }
  template <typename StepIdT = Aws::String>
  BatchGetTaskIdentifier& WithStepId(StepIdT&& value) {
    SetStepId(std::forward<StepIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task ID.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  BatchGetTaskIdentifier& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_farmId;

  Aws::String m_queueId;

  Aws::String m_jobId;

  Aws::String m_stepId;

  Aws::String m_taskId;
  bool m_farmIdHasBeenSet = false;
  bool m_queueIdHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_stepIdHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
