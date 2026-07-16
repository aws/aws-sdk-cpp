/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/AgentOutputMessage.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {
/**
 * <p>The response from the <code>UpdateProfileWithAgent</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UpdateProfileWithAgentResponse">AWS
 * API Reference</a></p>
 */
class UpdateProfileWithAgentResult {
 public:
  AWS_HEALTHLAKE_API UpdateProfileWithAgentResult() = default;
  AWS_HEALTHLAKE_API UpdateProfileWithAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_HEALTHLAKE_API UpdateProfileWithAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The response message from the agent.</p>
   */
  inline const AgentOutputMessage& GetAgentResponse() const { return m_agentResponse; }
  template <typename AgentResponseT = AgentOutputMessage>
  void SetAgentResponse(AgentResponseT&& value) {
    m_agentResponseHasBeenSet = true;
    m_agentResponse = std::forward<AgentResponseT>(value);
  }
  template <typename AgentResponseT = AgentOutputMessage>
  UpdateProfileWithAgentResult& WithAgentResponse(AgentResponseT&& value) {
    SetAgentResponse(std::forward<AgentResponseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conversation identifier to use for follow-up messages in this
   * conversation.</p>
   */
  inline const Aws::String& GetConversationId() const { return m_conversationId; }
  template <typename ConversationIdT = Aws::String>
  void SetConversationId(ConversationIdT&& value) {
    m_conversationIdHasBeenSet = true;
    m_conversationId = std::forward<ConversationIdT>(value);
  }
  template <typename ConversationIdT = Aws::String>
  UpdateProfileWithAgentResult& WithConversationId(ConversationIdT&& value) {
    SetConversationId(std::forward<ConversationIdT>(value));
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
  UpdateProfileWithAgentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AgentOutputMessage m_agentResponse;

  Aws::String m_conversationId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentResponseHasBeenSet = false;
  bool m_conversationIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
