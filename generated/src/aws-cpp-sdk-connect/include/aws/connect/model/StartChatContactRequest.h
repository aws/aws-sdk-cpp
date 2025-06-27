/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/ParticipantDetails.h>
#include <aws/connect/model/ChatMessage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/PersistentChat.h>
#include <aws/connect/model/SegmentAttributeValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class StartChatContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartChatContactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartChatContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    StartChatContactRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow for initiating the chat. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Flows</b>. Choose the flow. On the flow page, under the name
     * of the flow, choose <b>Show additional flow information</b>. The ContactFlowId
     * is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline const Aws::String& GetContactFlowId() const { return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    template<typename ContactFlowIdT = Aws::String>
    void SetContactFlowId(ContactFlowIdT&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::forward<ContactFlowIdT>(value); }
    template<typename ContactFlowIdT = Aws::String>
    StartChatContactRequest& WithContactFlowId(ContactFlowIdT&& value) { SetContactFlowId(std::forward<ContactFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    StartChatContactRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    StartChatContactRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Information identifying the participant.</p>
     */
    inline const ParticipantDetails& GetParticipantDetails() const { return m_participantDetails; }
    inline bool ParticipantDetailsHasBeenSet() const { return m_participantDetailsHasBeenSet; }
    template<typename ParticipantDetailsT = ParticipantDetails>
    void SetParticipantDetails(ParticipantDetailsT&& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = std::forward<ParticipantDetailsT>(value); }
    template<typename ParticipantDetailsT = ParticipantDetails>
    StartChatContactRequest& WithParticipantDetails(ParticipantDetailsT&& value) { SetParticipantDetails(std::forward<ParticipantDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial message to be sent to the newly created chat.</p>
     */
    inline const ChatMessage& GetInitialMessage() const { return m_initialMessage; }
    inline bool InitialMessageHasBeenSet() const { return m_initialMessageHasBeenSet; }
    template<typename InitialMessageT = ChatMessage>
    void SetInitialMessage(InitialMessageT&& value) { m_initialMessageHasBeenSet = true; m_initialMessage = std::forward<InitialMessageT>(value); }
    template<typename InitialMessageT = ChatMessage>
    StartChatContactRequest& WithInitialMessage(InitialMessageT&& value) { SetInitialMessage(std::forward<InitialMessageT>(value)); return *this;}
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
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartChatContactRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total duration of the newly started chat session. If not specified, the
     * chat session duration defaults to 25 hour. The minimum configurable time is 60
     * minutes. The maximum configurable time is 10,080 minutes (7 days).</p>
     */
    inline int GetChatDurationInMinutes() const { return m_chatDurationInMinutes; }
    inline bool ChatDurationInMinutesHasBeenSet() const { return m_chatDurationInMinutesHasBeenSet; }
    inline void SetChatDurationInMinutes(int value) { m_chatDurationInMinutesHasBeenSet = true; m_chatDurationInMinutes = value; }
    inline StartChatContactRequest& WithChatDurationInMinutes(int value) { SetChatDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code>text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code>[text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     *  <p>The type
     * <code>application/vnd.amazonaws.connect.message.interactive</code> is required
     * to use the <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/show-view-block.html">Show
     * view</a> flow block.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSupportedMessagingContentTypes() const { return m_supportedMessagingContentTypes; }
    inline bool SupportedMessagingContentTypesHasBeenSet() const { return m_supportedMessagingContentTypesHasBeenSet; }
    template<typename SupportedMessagingContentTypesT = Aws::Vector<Aws::String>>
    void SetSupportedMessagingContentTypes(SupportedMessagingContentTypesT&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes = std::forward<SupportedMessagingContentTypesT>(value); }
    template<typename SupportedMessagingContentTypesT = Aws::Vector<Aws::String>>
    StartChatContactRequest& WithSupportedMessagingContentTypes(SupportedMessagingContentTypesT&& value) { SetSupportedMessagingContentTypes(std::forward<SupportedMessagingContentTypesT>(value)); return *this;}
    template<typename SupportedMessagingContentTypesT = Aws::String>
    StartChatContactRequest& AddSupportedMessagingContentTypes(SupportedMessagingContentTypesT&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.emplace_back(std::forward<SupportedMessagingContentTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enable persistent chats. For more information about enabling persistent chat,
     * and for example use cases and how to configure for them, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
     * persistent chat</a>.</p>
     */
    inline const PersistentChat& GetPersistentChat() const { return m_persistentChat; }
    inline bool PersistentChatHasBeenSet() const { return m_persistentChatHasBeenSet; }
    template<typename PersistentChatT = PersistentChat>
    void SetPersistentChat(PersistentChatT&& value) { m_persistentChatHasBeenSet = true; m_persistentChat = std::forward<PersistentChatT>(value); }
    template<typename PersistentChatT = PersistentChat>
    StartChatContactRequest& WithPersistentChat(PersistentChatT&& value) { SetPersistentChat(std::forward<PersistentChatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the chat starting.</p>  <p>You cannot provide data for both
     * RelatedContactId and PersistentChat. </p> 
     */
    inline const Aws::String& GetRelatedContactId() const { return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    template<typename RelatedContactIdT = Aws::String>
    void SetRelatedContactId(RelatedContactIdT&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::forward<RelatedContactIdT>(value); }
    template<typename RelatedContactIdT = Aws::String>
    StartChatContactRequest& WithRelatedContactId(RelatedContactIdT&& value) { SetRelatedContactId(std::forward<RelatedContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of system defined key-value pairs stored on individual contact segments
     * using an attribute map. The attributes are standard Amazon Connect attributes.
     * They can be accessed in flows.</p> <p>Attribute keys can include only
     * alphanumeric, -, and _.</p> <p>This field can be used to show channel subtype,
     * such as <code>connect:Guide</code>.</p>  <p>The types
     * <code>application/vnd.amazonaws.connect.message.interactive</code> and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code> must
     * be present in the SupportedMessagingContentTypes field of this API in order to
     * set <code>SegmentAttributes</code> as {<code> "connect:Subtype": {"valueString"
     * : "connect:Guide" }}</code>.</p> 
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const { return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    void SetSegmentAttributes(SegmentAttributesT&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::forward<SegmentAttributesT>(value); }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    StartChatContactRequest& WithSegmentAttributes(SegmentAttributesT&& value) { SetSegmentAttributes(std::forward<SegmentAttributesT>(value)); return *this;}
    template<typename SegmentAttributesKeyT = Aws::String, typename SegmentAttributesValueT = SegmentAttributeValue>
    StartChatContactRequest& AddSegmentAttributes(SegmentAttributesKeyT&& key, SegmentAttributesValueT&& value) {
      m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::forward<SegmentAttributesKeyT>(key), std::forward<SegmentAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The customer's identification number. For example, the
     * <code>CustomerId</code> may be a customer number from your CRM.</p>
     */
    inline const Aws::String& GetCustomerId() const { return m_customerId; }
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
    template<typename CustomerIdT = Aws::String>
    void SetCustomerId(CustomerIdT&& value) { m_customerIdHasBeenSet = true; m_customerId = std::forward<CustomerIdT>(value); }
    template<typename CustomerIdT = Aws::String>
    StartChatContactRequest& WithCustomerId(CustomerIdT&& value) { SetCustomerId(std::forward<CustomerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    ParticipantDetails m_participantDetails;
    bool m_participantDetailsHasBeenSet = false;

    ChatMessage m_initialMessage;
    bool m_initialMessageHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    int m_chatDurationInMinutes{0};
    bool m_chatDurationInMinutesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedMessagingContentTypes;
    bool m_supportedMessagingContentTypesHasBeenSet = false;

    PersistentChat m_persistentChat;
    bool m_persistentChatHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;

    Aws::String m_customerId;
    bool m_customerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
