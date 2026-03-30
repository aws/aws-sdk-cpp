/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ExecutionStatus.h>

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
 * <p>Represents an execution instance with its lifecycle information</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/Execution">AWS
 * API Reference</a></p>
 */
class Execution {
 public:
  AWS_DEVOPSAGENT_API Execution() = default;
  AWS_DEVOPSAGENT_API Execution(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Execution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing this execution</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  Execution& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this execution</p>
   */
  inline const Aws::String& GetExecutionId() const { return m_executionId; }
  inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
  template <typename ExecutionIdT = Aws::String>
  void SetExecutionId(ExecutionIdT&& value) {
    m_executionIdHasBeenSet = true;
    m_executionId = std::forward<ExecutionIdT>(value);
  }
  template <typename ExecutionIdT = Aws::String>
  Execution& WithExecutionId(ExecutionIdT&& value) {
    SetExecutionId(std::forward<ExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the parent execution, if this is a child execution</p>
   */
  inline const Aws::String& GetParentExecutionId() const { return m_parentExecutionId; }
  inline bool ParentExecutionIdHasBeenSet() const { return m_parentExecutionIdHasBeenSet; }
  template <typename ParentExecutionIdT = Aws::String>
  void SetParentExecutionId(ParentExecutionIdT&& value) {
    m_parentExecutionIdHasBeenSet = true;
    m_parentExecutionId = std::forward<ParentExecutionIdT>(value);
  }
  template <typename ParentExecutionIdT = Aws::String>
  Execution& WithParentExecutionId(ParentExecutionIdT&& value) {
    SetParentExecutionId(std::forward<ParentExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific subtask being executed by the agent</p>
   */
  inline const Aws::String& GetAgentSubTask() const { return m_agentSubTask; }
  inline bool AgentSubTaskHasBeenSet() const { return m_agentSubTaskHasBeenSet; }
  template <typename AgentSubTaskT = Aws::String>
  void SetAgentSubTask(AgentSubTaskT&& value) {
    m_agentSubTaskHasBeenSet = true;
    m_agentSubTask = std::forward<AgentSubTaskT>(value);
  }
  template <typename AgentSubTaskT = Aws::String>
  Execution& WithAgentSubTask(AgentSubTaskT&& value) {
    SetAgentSubTask(std::forward<AgentSubTaskT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this execution was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Execution& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this execution was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Execution& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of this execution</p>
   */
  inline ExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
  inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
  inline void SetExecutionStatus(ExecutionStatus value) {
    m_executionStatusHasBeenSet = true;
    m_executionStatus = value;
  }
  inline Execution& WithExecutionStatus(ExecutionStatus value) {
    SetExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of agent that performed this execution.</p>
   */
  inline const Aws::String& GetAgentType() const { return m_agentType; }
  inline bool AgentTypeHasBeenSet() const { return m_agentTypeHasBeenSet; }
  template <typename AgentTypeT = Aws::String>
  void SetAgentType(AgentTypeT&& value) {
    m_agentTypeHasBeenSet = true;
    m_agentType = std::forward<AgentTypeT>(value);
  }
  template <typename AgentTypeT = Aws::String>
  Execution& WithAgentType(AgentTypeT&& value) {
    SetAgentType(std::forward<AgentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the user session associated with this execution</p>
   */
  inline const Aws::String& GetUid() const { return m_uid; }
  inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
  template <typename UidT = Aws::String>
  void SetUid(UidT&& value) {
    m_uidHasBeenSet = true;
    m_uid = std::forward<UidT>(value);
  }
  template <typename UidT = Aws::String>
  Execution& WithUid(UidT&& value) {
    SetUid(std::forward<UidT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_executionId;

  Aws::String m_parentExecutionId;

  Aws::String m_agentSubTask;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  ExecutionStatus m_executionStatus{ExecutionStatus::NOT_SET};

  Aws::String m_agentType;

  Aws::String m_uid;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_executionIdHasBeenSet = false;
  bool m_parentExecutionIdHasBeenSet = false;
  bool m_agentSubTaskHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_executionStatusHasBeenSet = false;
  bool m_agentTypeHasBeenSet = false;
  bool m_uidHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
