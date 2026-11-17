/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ChatArchiveStatus.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 */
class UpdateChatRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API UpdateChatRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateChat"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the agent space that contains the chat execution to
   * update.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  UpdateChatRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the chat execution to update.</p>
   */
  inline const Aws::String& GetExecutionId() const { return m_executionId; }
  inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
  template <typename ExecutionIdT = Aws::String>
  void SetExecutionId(ExecutionIdT&& value) {
    m_executionIdHasBeenSet = true;
    m_executionId = std::forward<ExecutionIdT>(value);
  }
  template <typename ExecutionIdT = Aws::String>
  UpdateChatRequest& WithExecutionId(ExecutionIdT&& value) {
    SetExecutionId(std::forward<ExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new summary to set for the chat execution.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  UpdateChatRequest& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The archive status to set for the chat execution. Use this parameter to
   * archive the chat execution, hiding it from the default chat list, or to
   * unarchive it, restoring it to the default chat list.</p>
   */
  inline ChatArchiveStatus GetArchiveStatus() const { return m_archiveStatus; }
  inline bool ArchiveStatusHasBeenSet() const { return m_archiveStatusHasBeenSet; }
  inline void SetArchiveStatus(ChatArchiveStatus value) {
    m_archiveStatusHasBeenSet = true;
    m_archiveStatus = value;
  }
  inline UpdateChatRequest& WithArchiveStatus(ChatArchiveStatus value) {
    SetArchiveStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the service
   * ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateChatRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_executionId;

  Aws::String m_summary;

  ChatArchiveStatus m_archiveStatus{ChatArchiveStatus::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_executionIdHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_archiveStatusHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
