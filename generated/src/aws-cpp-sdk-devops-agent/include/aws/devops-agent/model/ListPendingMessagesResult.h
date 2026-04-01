/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/PendingMessage.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Response structure containing a list of pending messages</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListPendingMessagesResponse">AWS
 * API Reference</a></p>
 */
class ListPendingMessagesResult {
 public:
  AWS_DEVOPSAGENT_API ListPendingMessagesResult() = default;
  AWS_DEVOPSAGENT_API ListPendingMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API ListPendingMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  ListPendingMessagesResult& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the execution.</p>
   */
  inline const Aws::String& GetExecutionId() const { return m_executionId; }
  template <typename ExecutionIdT = Aws::String>
  void SetExecutionId(ExecutionIdT&& value) {
    m_executionIdHasBeenSet = true;
    m_executionId = std::forward<ExecutionIdT>(value);
  }
  template <typename ExecutionIdT = Aws::String>
  ListPendingMessagesResult& WithExecutionId(ExecutionIdT&& value) {
    SetExecutionId(std::forward<ExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of pending messages for the execution.</p>
   */
  inline const Aws::Vector<PendingMessage>& GetMessages() const { return m_messages; }
  template <typename MessagesT = Aws::Vector<PendingMessage>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<PendingMessage>>
  ListPendingMessagesResult& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = PendingMessage>
  ListPendingMessagesResult& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the pending messages were created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ListPendingMessagesResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListPendingMessagesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agentSpaceId;

  Aws::String m_executionId;

  Aws::Vector<PendingMessage> m_messages;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_executionIdHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
