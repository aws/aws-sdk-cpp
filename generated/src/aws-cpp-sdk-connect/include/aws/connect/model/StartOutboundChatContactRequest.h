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
    AWS_CONNECT_API StartOutboundChatContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOutboundChatContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Endpoint& GetSourceEndpoint() const{ return m_sourceEndpoint; }
    inline bool SourceEndpointHasBeenSet() const { return m_sourceEndpointHasBeenSet; }
    inline void SetSourceEndpoint(const Endpoint& value) { m_sourceEndpointHasBeenSet = true; m_sourceEndpoint = value; }
    inline void SetSourceEndpoint(Endpoint&& value) { m_sourceEndpointHasBeenSet = true; m_sourceEndpoint = std::move(value); }
    inline StartOutboundChatContactRequest& WithSourceEndpoint(const Endpoint& value) { SetSourceEndpoint(value); return *this;}
    inline StartOutboundChatContactRequest& WithSourceEndpoint(Endpoint&& value) { SetSourceEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Endpoint& GetDestinationEndpoint() const{ return m_destinationEndpoint; }
    inline bool DestinationEndpointHasBeenSet() const { return m_destinationEndpointHasBeenSet; }
    inline void SetDestinationEndpoint(const Endpoint& value) { m_destinationEndpointHasBeenSet = true; m_destinationEndpoint = value; }
    inline void SetDestinationEndpoint(Endpoint&& value) { m_destinationEndpointHasBeenSet = true; m_destinationEndpoint = std::move(value); }
    inline StartOutboundChatContactRequest& WithDestinationEndpoint(const Endpoint& value) { SetDestinationEndpoint(value); return *this;}
    inline StartOutboundChatContactRequest& WithDestinationEndpoint(Endpoint&& value) { SetDestinationEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline StartOutboundChatContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline StartOutboundChatContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline StartOutboundChatContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const{ return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    inline void SetSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = value; }
    inline void SetSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::move(value); }
    inline StartOutboundChatContactRequest& WithSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { SetSegmentAttributes(value); return *this;}
    inline StartOutboundChatContactRequest& WithSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { SetSegmentAttributes(std::move(value)); return *this;}
    inline StartOutboundChatContactRequest& AddSegmentAttributes(const Aws::String& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    inline StartOutboundChatContactRequest& AddSegmentAttributes(Aws::String&& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), value); return *this; }
    inline StartOutboundChatContactRequest& AddSegmentAttributes(const Aws::String& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline StartOutboundChatContactRequest& AddSegmentAttributes(Aws::String&& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline StartOutboundChatContactRequest& AddSegmentAttributes(const char* key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline StartOutboundChatContactRequest& AddSegmentAttributes(const char* key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline StartOutboundChatContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline StartOutboundChatContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline StartOutboundChatContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline StartOutboundChatContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline StartOutboundChatContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline StartOutboundChatContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline StartOutboundChatContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline StartOutboundChatContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline StartOutboundChatContactRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
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
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }
    inline StartOutboundChatContactRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}
    inline StartOutboundChatContactRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}
    inline StartOutboundChatContactRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total duration of the newly started chat session. If not specified, the
     * chat session duration defaults to 25 hour. The minimum configurable time is 60
     * minutes. The maximum configurable time is 10,080 minutes (7 days).</p>
     */
    inline int GetChatDurationInMinutes() const{ return m_chatDurationInMinutes; }
    inline bool ChatDurationInMinutesHasBeenSet() const { return m_chatDurationInMinutesHasBeenSet; }
    inline void SetChatDurationInMinutes(int value) { m_chatDurationInMinutesHasBeenSet = true; m_chatDurationInMinutes = value; }
    inline StartOutboundChatContactRequest& WithChatDurationInMinutes(int value) { SetChatDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    
    inline const ParticipantDetails& GetParticipantDetails() const{ return m_participantDetails; }
    inline bool ParticipantDetailsHasBeenSet() const { return m_participantDetailsHasBeenSet; }
    inline void SetParticipantDetails(const ParticipantDetails& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = value; }
    inline void SetParticipantDetails(ParticipantDetails&& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = std::move(value); }
    inline StartOutboundChatContactRequest& WithParticipantDetails(const ParticipantDetails& value) { SetParticipantDetails(value); return *this;}
    inline StartOutboundChatContactRequest& WithParticipantDetails(ParticipantDetails&& value) { SetParticipantDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ChatMessage& GetInitialSystemMessage() const{ return m_initialSystemMessage; }
    inline bool InitialSystemMessageHasBeenSet() const { return m_initialSystemMessageHasBeenSet; }
    inline void SetInitialSystemMessage(const ChatMessage& value) { m_initialSystemMessageHasBeenSet = true; m_initialSystemMessage = value; }
    inline void SetInitialSystemMessage(ChatMessage&& value) { m_initialSystemMessageHasBeenSet = true; m_initialSystemMessage = std::move(value); }
    inline StartOutboundChatContactRequest& WithInitialSystemMessage(const ChatMessage& value) { SetInitialSystemMessage(value); return *this;}
    inline StartOutboundChatContactRequest& WithInitialSystemMessage(ChatMessage&& value) { SetInitialSystemMessage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }
    inline StartOutboundChatContactRequest& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}
    inline StartOutboundChatContactRequest& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}
    inline StartOutboundChatContactRequest& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetSupportedMessagingContentTypes() const{ return m_supportedMessagingContentTypes; }
    inline bool SupportedMessagingContentTypesHasBeenSet() const { return m_supportedMessagingContentTypesHasBeenSet; }
    inline void SetSupportedMessagingContentTypes(const Aws::Vector<Aws::String>& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes = value; }
    inline void SetSupportedMessagingContentTypes(Aws::Vector<Aws::String>&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes = std::move(value); }
    inline StartOutboundChatContactRequest& WithSupportedMessagingContentTypes(const Aws::Vector<Aws::String>& value) { SetSupportedMessagingContentTypes(value); return *this;}
    inline StartOutboundChatContactRequest& WithSupportedMessagingContentTypes(Aws::Vector<Aws::String>&& value) { SetSupportedMessagingContentTypes(std::move(value)); return *this;}
    inline StartOutboundChatContactRequest& AddSupportedMessagingContentTypes(const Aws::String& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.push_back(value); return *this; }
    inline StartOutboundChatContactRequest& AddSupportedMessagingContentTypes(Aws::String&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.push_back(std::move(value)); return *this; }
    inline StartOutboundChatContactRequest& AddSupportedMessagingContentTypes(const char* value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.push_back(value); return *this; }
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartOutboundChatContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartOutboundChatContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartOutboundChatContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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

    int m_chatDurationInMinutes;
    bool m_chatDurationInMinutesHasBeenSet = false;

    ParticipantDetails m_participantDetails;
    bool m_participantDetailsHasBeenSet = false;

    ChatMessage m_initialSystemMessage;
    bool m_initialSystemMessageHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedMessagingContentTypes;
    bool m_supportedMessagingContentTypesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
