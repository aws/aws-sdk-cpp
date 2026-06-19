/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveConfiguration.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMessage.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrievePolicyConfiguration.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveStreamHandler.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetriever.h>
#include <aws/bedrock-agent-runtime/model/UserContext.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Request structure for the agentic retrieve stream operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveStreamRequest">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveStreamRequest : public BedrockAgentRuntimeRequest {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveStreamRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AgenticRetrieveStream"; }

  inline virtual bool HasEventStreamResponse() const override { return true; }
  AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline AgenticRetrieveStreamHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const AgenticRetrieveStreamHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline AgenticRetrieveStreamRequest& WithEventStreamHandler(const AgenticRetrieveStreamHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

  ///@{
  /**
   * <p>Configuration settings for the agentic retrieval operation.</p>
   */
  inline const AgenticRetrieveConfiguration& GetAgenticRetrieveConfiguration() const { return m_agenticRetrieveConfiguration; }
  inline bool AgenticRetrieveConfigurationHasBeenSet() const { return m_agenticRetrieveConfigurationHasBeenSet; }
  template <typename AgenticRetrieveConfigurationT = AgenticRetrieveConfiguration>
  void SetAgenticRetrieveConfiguration(AgenticRetrieveConfigurationT&& value) {
    m_agenticRetrieveConfigurationHasBeenSet = true;
    m_agenticRetrieveConfiguration = std::forward<AgenticRetrieveConfigurationT>(value);
  }
  template <typename AgenticRetrieveConfigurationT = AgenticRetrieveConfiguration>
  AgenticRetrieveStreamRequest& WithAgenticRetrieveConfiguration(AgenticRetrieveConfigurationT&& value) {
    SetAgenticRetrieveConfiguration(std::forward<AgenticRetrieveConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to generate a response based on the retrieved results.</p>
   */
  inline bool GetGenerateResponse() const { return m_generateResponse; }
  inline bool GenerateResponseHasBeenSet() const { return m_generateResponseHasBeenSet; }
  inline void SetGenerateResponse(bool value) {
    m_generateResponseHasBeenSet = true;
    m_generateResponse = value;
  }
  inline AgenticRetrieveStreamRequest& WithGenerateResponse(bool value) {
    SetGenerateResponse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of messages for the agentic retrieval conversation.</p>
   */
  inline const Aws::Vector<AgenticRetrieveMessage>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<AgenticRetrieveMessage>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<AgenticRetrieveMessage>>
  AgenticRetrieveStreamRequest& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = AgenticRetrieveMessage>
  AgenticRetrieveStreamRequest& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Opaque continuation token for paginated results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  AgenticRetrieveStreamRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Policy configuration for guardrails and content filtering.</p>
   */
  inline const AgenticRetrievePolicyConfiguration& GetPolicyConfiguration() const { return m_policyConfiguration; }
  inline bool PolicyConfigurationHasBeenSet() const { return m_policyConfigurationHasBeenSet; }
  template <typename PolicyConfigurationT = AgenticRetrievePolicyConfiguration>
  void SetPolicyConfiguration(PolicyConfigurationT&& value) {
    m_policyConfigurationHasBeenSet = true;
    m_policyConfiguration = std::forward<PolicyConfigurationT>(value);
  }
  template <typename PolicyConfigurationT = AgenticRetrievePolicyConfiguration>
  AgenticRetrieveStreamRequest& WithPolicyConfiguration(PolicyConfigurationT&& value) {
    SetPolicyConfiguration(std::forward<PolicyConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of retrievers to use for agentic retrieval.</p>
   */
  inline const Aws::Vector<AgenticRetriever>& GetRetrievers() const { return m_retrievers; }
  inline bool RetrieversHasBeenSet() const { return m_retrieversHasBeenSet; }
  template <typename RetrieversT = Aws::Vector<AgenticRetriever>>
  void SetRetrievers(RetrieversT&& value) {
    m_retrieversHasBeenSet = true;
    m_retrievers = std::forward<RetrieversT>(value);
  }
  template <typename RetrieversT = Aws::Vector<AgenticRetriever>>
  AgenticRetrieveStreamRequest& WithRetrievers(RetrieversT&& value) {
    SetRetrievers(std::forward<RetrieversT>(value));
    return *this;
  }
  template <typename RetrieversT = AgenticRetriever>
  AgenticRetrieveStreamRequest& AddRetrievers(RetrieversT&& value) {
    m_retrieversHasBeenSet = true;
    m_retrievers.emplace_back(std::forward<RetrieversT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the user making the request. This is used for
   * access control filtering to ensure that retrieval results only include documents
   * the user is authorized to access.</p>
   */
  inline const UserContext& GetUserContext() const { return m_userContext; }
  inline bool UserContextHasBeenSet() const { return m_userContextHasBeenSet; }
  template <typename UserContextT = UserContext>
  void SetUserContext(UserContextT&& value) {
    m_userContextHasBeenSet = true;
    m_userContext = std::forward<UserContextT>(value);
  }
  template <typename UserContextT = UserContext>
  AgenticRetrieveStreamRequest& WithUserContext(UserContextT&& value) {
    SetUserContext(std::forward<UserContextT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveConfiguration m_agenticRetrieveConfiguration;

  bool m_generateResponse{false};

  Aws::Vector<AgenticRetrieveMessage> m_messages;

  Aws::String m_nextToken;

  AgenticRetrievePolicyConfiguration m_policyConfiguration;

  Aws::Vector<AgenticRetriever> m_retrievers;

  UserContext m_userContext;
  AgenticRetrieveStreamHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  bool m_agenticRetrieveConfigurationHasBeenSet = false;
  bool m_generateResponseHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_policyConfigurationHasBeenSet = false;
  bool m_retrieversHasBeenSet = false;
  bool m_userContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
