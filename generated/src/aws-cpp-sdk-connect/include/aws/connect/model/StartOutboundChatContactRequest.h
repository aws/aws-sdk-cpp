/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/ParticipantDetails.h>
#include <aws/connect/model/ChatMessage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class StartOutboundChatContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartOutboundChatContactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOutboundChatContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Endpoint& GetSourceEndpoint() const { return m_sourceEndpoint; }
    inline bool SourceEndpointHasBeenSet() const { return m_sourceEndpointHasBeenSet; }
    template<typename SourceEndpointT = Endpoint>
    void SetSourceEndpoint(SourceEndpointT&& value) { m_sourceEndpointHasBeenSet = true; m_sourceEndpoint = std::forward<SourceEndpointT>(value); }
    template<typename SourceEndpointT = Endpoint>
    StartOutboundChatContactRequest& WithSourceEndpoint(SourceEndpointT&& value) { SetSourceEndpoint(std::forward<SourceEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Endpoint& GetDestinationEndpoint() const { return m_destinationEndpoint; }
    inline bool DestinationEndpointHasBeenSet() const { return m_destinationEndpointHasBeenSet; }
    template<typename DestinationEndpointT = Endpoint>
    void SetDestinationEndpoint(DestinationEndpointT&& value) { m_destinationEndpointHasBeenSet = true; m_destinationEndpoint = std::forward<DestinationEndpointT>(value); }
    template<typename DestinationEndpointT = Endpoint>
    StartOutboundChatContactRequest& WithDestinationEndpoint(DestinationEndpointT&& value) { SetDestinationEndpoint(std::forward<DestinationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    StartOutboundChatContactRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of system defined key-value pairs stored on individual contact segments
     * using an attribute map. The attributes are standard Amazon Connect attributes.
     * They can be accessed in flows.</p> <ul> <li> <p>Attribute keys can include only
     * alphanumeric, <code>-</code>, and <code>_</code>.</p> </li> <li> <p>This field
     * can be used to show channel subtype, such as <code>connect:Guide</code> and
     * <code>connect:SMS</code>.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const { return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    void SetSegmentAttributes(SegmentAttributesT&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::forward<SegmentAttributesT>(value); }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    StartOutboundChatContactRequest& WithSegmentAttributes(SegmentAttributesT&& value) { SetSegmentAttributes(std::forward<SegmentAttributesT>(value)); return *this;}
    template<typename SegmentAttributesKeyT = Aws::String, typename SegmentAttributesValueT = SegmentAttributeValue>
    StartOutboundChatContactRequest& AddSegmentAttributes(SegmentAttributesKeyT&& key, SegmentAttributesValueT&& value) {
      m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::forward<SegmentAttributesKeyT>(key), std::forward<SegmentAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    StartOutboundChatContactRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    StartOutboundChatContactRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect console user interface, on the navigation menu go to <b>Routing,
     * Contact Flows</b>. Choose the flow. On the flow page, under the name of the
     * flow, choose <b>Show additional flow information</b>. The ContactFlowId is the
     * last part of the ARN, shown here in bold:</p> <ul> <li>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>123ec456-a007-89c0-1234-xxxxxxxxxxxx</b>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetContactFlowId() const { return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    template<typename ContactFlowIdT = Aws::String>
    void SetContactFlowId(ContactFlowIdT&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::forward<ContactFlowIdT>(value); }
    template<typename ContactFlowIdT = Aws::String>
    StartOutboundChatContactRequest& WithContactFlowId(ContactFlowIdT&& value) { SetContactFlowId(std::forward<ContactFlowIdT>(value)); return *this;}
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
    inline StartOutboundChatContactRequest& WithChatDurationInMinutes(int value) { SetChatDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    
    inline const ParticipantDetails& GetParticipantDetails() const { return m_participantDetails; }
    inline bool ParticipantDetailsHasBeenSet() const { return m_participantDetailsHasBeenSet; }
    template<typename ParticipantDetailsT = ParticipantDetails>
    void SetParticipantDetails(ParticipantDetailsT&& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = std::forward<ParticipantDetailsT>(value); }
    template<typename ParticipantDetailsT = ParticipantDetails>
    StartOutboundChatContactRequest& WithParticipantDetails(ParticipantDetailsT&& value) { SetParticipantDetails(std::forward<ParticipantDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ChatMessage& GetInitialSystemMessage() const { return m_initialSystemMessage; }
    inline bool InitialSystemMessageHasBeenSet() const { return m_initialSystemMessageHasBeenSet; }
    template<typename InitialSystemMessageT = ChatMessage>
    void SetInitialSystemMessage(InitialSystemMessageT&& value) { m_initialSystemMessageHasBeenSet = true; m_initialSystemMessage = std::forward<InitialSystemMessageT>(value); }
    template<typename InitialSystemMessageT = ChatMessage>
    StartOutboundChatContactRequest& WithInitialSystemMessage(InitialSystemMessageT&& value) { SetInitialSystemMessage(std::forward<InitialSystemMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline const Aws::String& GetRelatedContactId() const { return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    template<typename RelatedContactIdT = Aws::String>
    void SetRelatedContactId(RelatedContactIdT&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::forward<RelatedContactIdT>(value); }
    template<typename RelatedContactIdT = Aws::String>
    StartOutboundChatContactRequest& WithRelatedContactId(RelatedContactIdT&& value) { SetRelatedContactId(std::forward<RelatedContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported chat message content types. Supported types are:</p> <ul> <li>
     * <p> <code>text/plain</code> </p> </li> <li> <p> <code>text/markdown</code> </p>
     * </li> <li> <p> <code>application/json,
     * application/vnd.amazonaws.connect.message.interactive</code> </p> </li> <li> <p>
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code> </p>
     * </li> </ul> <p>Content types must always contain <code>text/plain</code>. You
     * can then put any other supported type in the list. For example, all the
     * following lists are valid because they contain <code>text/plain</code>:</p> <ul>
     * <li> <p> <code>[text/plain, text/markdown, application/json]</code> </p> </li>
     * <li> <p> <code>[text/markdown, text/plain]</code> </p> </li> <li> <p>
     * <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code> </p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedMessagingContentTypes() const { return m_supportedMessagingContentTypes; }
    inline bool SupportedMessagingContentTypesHasBeenSet() const { return m_supportedMessagingContentTypesHasBeenSet; }
    template<typename SupportedMessagingContentTypesT = Aws::Vector<Aws::String>>
    void SetSupportedMessagingContentTypes(SupportedMessagingContentTypesT&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes = std::forward<SupportedMessagingContentTypesT>(value); }
    template<typename SupportedMessagingContentTypesT = Aws::Vector<Aws::String>>
    StartOutboundChatContactRequest& WithSupportedMessagingContentTypes(SupportedMessagingContentTypesT&& value) { SetSupportedMessagingContentTypes(std::forward<SupportedMessagingContentTypesT>(value)); return *this;}
    template<typename SupportedMessagingContentTypesT = Aws::String>
    StartOutboundChatContactRequest& AddSupportedMessagingContentTypes(SupportedMessagingContentTypesT&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.emplace_back(std::forward<SupportedMessagingContentTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the AWS SDK populates this field.
     * For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. The token is valid for 7 days after
     * creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartOutboundChatContactRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Endpoint m_sourceEndpoint;
    bool m_sourceEndpointHasBeenSet = false;

    Endpoint m_destinationEndpoint;
    bool m_destinationEndpointHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    int m_chatDurationInMinutes{0};
    bool m_chatDurationInMinutesHasBeenSet = false;

    ParticipantDetails m_participantDetails;
    bool m_participantDetailsHasBeenSet = false;

    ChatMessage m_initialSystemMessage;
    bool m_initialSystemMessageHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedMessagingContentTypes;
    bool m_supportedMessagingContentTypesHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
