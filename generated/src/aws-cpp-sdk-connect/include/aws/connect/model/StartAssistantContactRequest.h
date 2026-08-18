/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AiAgentInput.h>
#include <aws/connect/model/ChatMessage.h>
#include <aws/connect/model/ParticipantDetails.h>
#include <aws/connect/model/PersistentChat.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class StartAssistantContactRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API StartAssistantContactRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartAssistantContact"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  StartAssistantContactRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AI agent configuration for this contact.</p>
   */
  inline const AiAgentInput& GetAiAgent() const { return m_aiAgent; }
  inline bool AiAgentHasBeenSet() const { return m_aiAgentHasBeenSet; }
  template <typename AiAgentT = AiAgentInput>
  void SetAiAgent(AiAgentT&& value) {
    m_aiAgentHasBeenSet = true;
    m_aiAgent = std::forward<AiAgentT>(value);
  }
  template <typename AiAgentT = AiAgentInput>
  StartAssistantContactRequest& WithAiAgent(AiAgentT&& value) {
    SetAiAgent(std::forward<AiAgentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name and other details that identify the chat participant.</p>
   */
  inline const ParticipantDetails& GetParticipantDetails() const { return m_participantDetails; }
  inline bool ParticipantDetailsHasBeenSet() const { return m_participantDetailsHasBeenSet; }
  template <typename ParticipantDetailsT = ParticipantDetails>
  void SetParticipantDetails(ParticipantDetailsT&& value) {
    m_participantDetailsHasBeenSet = true;
    m_participantDetails = std::forward<ParticipantDetailsT>(value);
  }
  template <typename ParticipantDetailsT = ParticipantDetails>
  StartAssistantContactRequest& WithParticipantDetails(ParticipantDetailsT&& value) {
    SetParticipantDetails(std::forward<ParticipantDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial message to send to the newly created chat.</p>
   */
  inline const ChatMessage& GetInitialMessage() const { return m_initialMessage; }
  inline bool InitialMessageHasBeenSet() const { return m_initialMessageHasBeenSet; }
  template <typename InitialMessageT = ChatMessage>
  void SetInitialMessage(InitialMessageT&& value) {
    m_initialMessageHasBeenSet = true;
    m_initialMessage = std::forward<InitialMessageT>(value);
  }
  template <typename InitialMessageT = ChatMessage>
  StartAssistantContactRequest& WithInitialMessage(InitialMessageT&& value) {
    SetInitialMessage(std::forward<InitialMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of key-value pairs to associate with the contact. We make these
   * attributes available to flows as standard contact attributes.</p> <p>You can
   * provide up to 32,768 UTF-8 bytes across all key-value pairs for each
   * contact.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  StartAssistantContactRequest& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
  StartAssistantContactRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartAssistantContactRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that enables persistent chat. For more information about
   * persistent chat and its use cases, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
   * persistent chat</a>.</p>
   */
  inline const PersistentChat& GetPersistentChat() const { return m_persistentChat; }
  inline bool PersistentChatHasBeenSet() const { return m_persistentChatHasBeenSet; }
  template <typename PersistentChatT = PersistentChat>
  void SetPersistentChat(PersistentChatT&& value) {
    m_persistentChatHasBeenSet = true;
    m_persistentChat = std::forward<PersistentChatT>(value);
  }
  template <typename PersistentChatT = PersistentChat>
  StartAssistantContactRequest& WithPersistentChat(PersistentChatT&& value) {
    SetPersistentChat(std::forward<PersistentChatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of an Connect Customer contact related to the new assistant
   * contact.</p>  <p>You cannot provide both <code>RelatedContactId</code> and
   * <code>PersistentChat</code>.</p>
   */
  inline const Aws::String& GetRelatedContactId() const { return m_relatedContactId; }
  inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
  template <typename RelatedContactIdT = Aws::String>
  void SetRelatedContactId(RelatedContactIdT&& value) {
    m_relatedContactIdHasBeenSet = true;
    m_relatedContactId = std::forward<RelatedContactIdT>(value);
  }
  template <typename RelatedContactIdT = Aws::String>
  StartAssistantContactRequest& WithRelatedContactId(RelatedContactIdT&& value) {
    SetRelatedContactId(std::forward<RelatedContactIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  AiAgentInput m_aiAgent;

  ParticipantDetails m_participantDetails;

  ChatMessage m_initialMessage;

  Aws::Map<Aws::String, Aws::String> m_attributes;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  PersistentChat m_persistentChat;

  Aws::String m_relatedContactId;
  bool m_instanceIdHasBeenSet = false;
  bool m_aiAgentHasBeenSet = false;
  bool m_participantDetailsHasBeenSet = false;
  bool m_initialMessageHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_persistentChatHasBeenSet = false;
  bool m_relatedContactIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
