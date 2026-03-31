/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ChatParticipantConnection.h>

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
 * <p>Response structure containing the chat participant connection</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/InitiateChatForCaseResponse">AWS
 * API Reference</a></p>
 */
class InitiateChatForCaseResult {
 public:
  AWS_DEVOPSAGENT_API InitiateChatForCaseResult() = default;
  AWS_DEVOPSAGENT_API InitiateChatForCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API InitiateChatForCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The newly created chat participant connection</p>
   */
  inline const ChatParticipantConnection& GetChatParticipantConnection() const { return m_chatParticipantConnection; }
  template <typename ChatParticipantConnectionT = ChatParticipantConnection>
  void SetChatParticipantConnection(ChatParticipantConnectionT&& value) {
    m_chatParticipantConnectionHasBeenSet = true;
    m_chatParticipantConnection = std::forward<ChatParticipantConnectionT>(value);
  }
  template <typename ChatParticipantConnectionT = ChatParticipantConnection>
  InitiateChatForCaseResult& WithChatParticipantConnection(ChatParticipantConnectionT&& value) {
    SetChatParticipantConnection(std::forward<ChatParticipantConnectionT>(value));
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
  InitiateChatForCaseResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ChatParticipantConnection m_chatParticipantConnection;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_chatParticipantConnectionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
