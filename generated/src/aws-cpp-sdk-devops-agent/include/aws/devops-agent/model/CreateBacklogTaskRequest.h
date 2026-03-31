/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/Priority.h>
#include <aws/devops-agent/model/ReferenceInput.h>
#include <aws/devops-agent/model/TaskType.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for creating a new backlog task</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/CreateBacklogTaskRequest">AWS
 * API Reference</a></p>
 */
class CreateBacklogTaskRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API CreateBacklogTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateBacklogTask"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the agent space where the task will be created</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  CreateBacklogTaskRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional reference information for the task</p>
   */
  inline const ReferenceInput& GetReference() const { return m_reference; }
  inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
  template <typename ReferenceT = ReferenceInput>
  void SetReference(ReferenceT&& value) {
    m_referenceHasBeenSet = true;
    m_reference = std::forward<ReferenceT>(value);
  }
  template <typename ReferenceT = ReferenceInput>
  CreateBacklogTaskRequest& WithReference(ReferenceT&& value) {
    SetReference(std::forward<ReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of task being created</p>
   */
  inline TaskType GetTaskType() const { return m_taskType; }
  inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }
  inline void SetTaskType(TaskType value) {
    m_taskTypeHasBeenSet = true;
    m_taskType = value;
  }
  inline CreateBacklogTaskRequest& WithTaskType(TaskType value) {
    SetTaskType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the backlog task</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CreateBacklogTaskRequest& WithTitle(TitleT&& value) {
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
  CreateBacklogTaskRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority level of the task</p>
   */
  inline Priority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(Priority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline CreateBacklogTaskRequest& WithPriority(Priority value) {
    SetPriority(value);
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
  CreateBacklogTaskRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  ReferenceInput m_reference;

  TaskType m_taskType{TaskType::NOT_SET};

  Aws::String m_title;

  Aws::String m_description;

  Priority m_priority{Priority::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_referenceHasBeenSet = false;
  bool m_taskTypeHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
