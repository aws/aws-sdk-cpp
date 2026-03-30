/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/Priority.h>
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
 * <p>Filter criteria for listing backlog tasks, supporting time range, priority,
 * status, and type filters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/TaskFilter">AWS
 * API Reference</a></p>
 */
class TaskFilter {
 public:
  AWS_DEVOPSAGENT_API TaskFilter() = default;
  AWS_DEVOPSAGENT_API TaskFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API TaskFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter for tasks created after this timestamp inclusive</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
  inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
  template <typename CreatedAfterT = Aws::Utils::DateTime>
  void SetCreatedAfter(CreatedAfterT&& value) {
    m_createdAfterHasBeenSet = true;
    m_createdAfter = std::forward<CreatedAfterT>(value);
  }
  template <typename CreatedAfterT = Aws::Utils::DateTime>
  TaskFilter& WithCreatedAfter(CreatedAfterT&& value) {
    SetCreatedAfter(std::forward<CreatedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter for tasks created before this timestamp exclusive</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
  inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
  template <typename CreatedBeforeT = Aws::Utils::DateTime>
  void SetCreatedBefore(CreatedBeforeT&& value) {
    m_createdBeforeHasBeenSet = true;
    m_createdBefore = std::forward<CreatedBeforeT>(value);
  }
  template <typename CreatedBeforeT = Aws::Utils::DateTime>
  TaskFilter& WithCreatedBefore(CreatedBeforeT&& value) {
    SetCreatedBefore(std::forward<CreatedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by priority (single value only)</p>
   */
  inline const Aws::Vector<Priority>& GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  template <typename PriorityT = Aws::Vector<Priority>>
  void SetPriority(PriorityT&& value) {
    m_priorityHasBeenSet = true;
    m_priority = std::forward<PriorityT>(value);
  }
  template <typename PriorityT = Aws::Vector<Priority>>
  TaskFilter& WithPriority(PriorityT&& value) {
    SetPriority(std::forward<PriorityT>(value));
    return *this;
  }
  inline TaskFilter& AddPriority(Priority value) {
    m_priorityHasBeenSet = true;
    m_priority.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by status (single value only)</p>
   */
  inline const Aws::Vector<TaskStatus>& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::Vector<TaskStatus>>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::Vector<TaskStatus>>
  TaskFilter& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  inline TaskFilter& AddStatus(TaskStatus value) {
    m_statusHasBeenSet = true;
    m_status.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by task type (single value only)</p>
   */
  inline const Aws::Vector<TaskType>& GetTaskType() const { return m_taskType; }
  inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }
  template <typename TaskTypeT = Aws::Vector<TaskType>>
  void SetTaskType(TaskTypeT&& value) {
    m_taskTypeHasBeenSet = true;
    m_taskType = std::forward<TaskTypeT>(value);
  }
  template <typename TaskTypeT = Aws::Vector<TaskType>>
  TaskFilter& WithTaskType(TaskTypeT&& value) {
    SetTaskType(std::forward<TaskTypeT>(value));
    return *this;
  }
  inline TaskFilter& AddTaskType(TaskType value) {
    m_taskTypeHasBeenSet = true;
    m_taskType.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by primary task ID to get linked tasks</p>
   */
  inline const Aws::String& GetPrimaryTaskId() const { return m_primaryTaskId; }
  inline bool PrimaryTaskIdHasBeenSet() const { return m_primaryTaskIdHasBeenSet; }
  template <typename PrimaryTaskIdT = Aws::String>
  void SetPrimaryTaskId(PrimaryTaskIdT&& value) {
    m_primaryTaskIdHasBeenSet = true;
    m_primaryTaskId = std::forward<PrimaryTaskIdT>(value);
  }
  template <typename PrimaryTaskIdT = Aws::String>
  TaskFilter& WithPrimaryTaskId(PrimaryTaskIdT&& value) {
    SetPrimaryTaskId(std::forward<PrimaryTaskIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_createdAfter{};

  Aws::Utils::DateTime m_createdBefore{};

  Aws::Vector<Priority> m_priority;

  Aws::Vector<TaskStatus> m_status;

  Aws::Vector<TaskType> m_taskType;

  Aws::String m_primaryTaskId;
  bool m_createdAfterHasBeenSet = false;
  bool m_createdBeforeHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_taskTypeHasBeenSet = false;
  bool m_primaryTaskIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
