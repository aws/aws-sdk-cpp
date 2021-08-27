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
  class AWS_CONNECT_API StartChatContactRequest : public ConnectRequest
  {
  public:
    StartChatContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartChatContact"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline StartChatContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline StartChatContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline StartChatContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the contact flow for initiating the chat. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the contact flow for initiating the chat. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the contact flow for initiating the chat. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the contact flow for initiating the chat. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the contact flow for initiating the chat. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the contact flow for initiating the chat. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartChatContactRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the contact flow for initiating the chat. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartChatContactRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact flow for initiating the chat. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartChatContactRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartChatContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartChatContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Information identifying the participant.</p>
     */
    inline const ParticipantDetails& GetParticipantDetails() const{ return m_participantDetails; }

    /**
     * <p>Information identifying the participant.</p>
     */
    inline bool ParticipantDetailsHasBeenSet() const { return m_participantDetailsHasBeenSet; }

    /**
     * <p>Information identifying the participant.</p>
     */
    inline void SetParticipantDetails(const ParticipantDetails& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = value; }

    /**
     * <p>Information identifying the participant.</p>
     */
    inline void SetParticipantDetails(ParticipantDetails&& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = std::move(value); }

    /**
     * <p>Information identifying the participant.</p>
     */
    inline StartChatContactRequest& WithParticipantDetails(const ParticipantDetails& value) { SetParticipantDetails(value); return *this;}

    /**
     * <p>Information identifying the participant.</p>
     */
    inline StartChatContactRequest& WithParticipantDetails(ParticipantDetails&& value) { SetParticipantDetails(std::move(value)); return *this;}


    /**
     * <p>The initial message to be sent to the newly created chat.</p>
     */
    inline const ChatMessage& GetInitialMessage() const{ return m_initialMessage; }

    /**
     * <p>The initial message to be sent to the newly created chat.</p>
     */
    inline bool InitialMessageHasBeenSet() const { return m_initialMessageHasBeenSet; }

    /**
     * <p>The initial message to be sent to the newly created chat.</p>
     */
    inline void SetInitialMessage(const ChatMessage& value) { m_initialMessageHasBeenSet = true; m_initialMessage = value; }

    /**
     * <p>The initial message to be sent to the newly created chat.</p>
     */
    inline void SetInitialMessage(ChatMessage&& value) { m_initialMessageHasBeenSet = true; m_initialMessage = std::move(value); }

    /**
     * <p>The initial message to be sent to the newly created chat.</p>
     */
    inline StartChatContactRequest& WithInitialMessage(const ChatMessage& value) { SetInitialMessage(value); return *this;}

    /**
     * <p>The initial message to be sent to the newly created chat.</p>
     */
    inline StartChatContactRequest& WithInitialMessage(ChatMessage&& value) { SetInitialMessage(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline StartChatContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline StartChatContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline StartChatContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    ParticipantDetails m_participantDetails;
    bool m_participantDetailsHasBeenSet;

    ChatMessage m_initialMessage;
    bool m_initialMessageHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
