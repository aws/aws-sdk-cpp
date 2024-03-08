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
    AWS_CONNECT_API StartChatContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartChatContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline StartChatContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline StartChatContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline StartChatContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the flow for initiating the chat. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the flow for initiating the chat. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the flow for initiating the chat. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the flow for initiating the chat. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the flow for initiating the chat. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the flow for initiating the chat. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartChatContactRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow for initiating the chat. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartChatContactRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow for initiating the chat. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartChatContactRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartChatContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartChatContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartChatContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
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
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartChatContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartChatContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartChatContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The total duration of the newly started chat session. If not specified, the
     * chat session duration defaults to 25 hour. The minimum configurable time is 60
     * minutes. The maximum configurable time is 10,080 minutes (7 days).</p>
     */
    inline int GetChatDurationInMinutes() const{ return m_chatDurationInMinutes; }

    /**
     * <p>The total duration of the newly started chat session. If not specified, the
     * chat session duration defaults to 25 hour. The minimum configurable time is 60
     * minutes. The maximum configurable time is 10,080 minutes (7 days).</p>
     */
    inline bool ChatDurationInMinutesHasBeenSet() const { return m_chatDurationInMinutesHasBeenSet; }

    /**
     * <p>The total duration of the newly started chat session. If not specified, the
     * chat session duration defaults to 25 hour. The minimum configurable time is 60
     * minutes. The maximum configurable time is 10,080 minutes (7 days).</p>
     */
    inline void SetChatDurationInMinutes(int value) { m_chatDurationInMinutesHasBeenSet = true; m_chatDurationInMinutes = value; }

    /**
     * <p>The total duration of the newly started chat session. If not specified, the
     * chat session duration defaults to 25 hour. The minimum configurable time is 60
     * minutes. The maximum configurable time is 10,080 minutes (7 days).</p>
     */
    inline StartChatContactRequest& WithChatDurationInMinutes(int value) { SetChatDurationInMinutes(value); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetSupportedMessagingContentTypes() const{ return m_supportedMessagingContentTypes; }

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
    inline bool SupportedMessagingContentTypesHasBeenSet() const { return m_supportedMessagingContentTypesHasBeenSet; }

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
    inline void SetSupportedMessagingContentTypes(const Aws::Vector<Aws::String>& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes = value; }

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
    inline void SetSupportedMessagingContentTypes(Aws::Vector<Aws::String>&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes = std::move(value); }

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
    inline StartChatContactRequest& WithSupportedMessagingContentTypes(const Aws::Vector<Aws::String>& value) { SetSupportedMessagingContentTypes(value); return *this;}

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
    inline StartChatContactRequest& WithSupportedMessagingContentTypes(Aws::Vector<Aws::String>&& value) { SetSupportedMessagingContentTypes(std::move(value)); return *this;}

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
    inline StartChatContactRequest& AddSupportedMessagingContentTypes(const Aws::String& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.push_back(value); return *this; }

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
    inline StartChatContactRequest& AddSupportedMessagingContentTypes(Aws::String&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.push_back(std::move(value)); return *this; }

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
    inline StartChatContactRequest& AddSupportedMessagingContentTypes(const char* value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.push_back(value); return *this; }


    /**
     * <p>Enable persistent chats. For more information about enabling persistent chat,
     * and for example use cases and how to configure for them, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
     * persistent chat</a>.</p>
     */
    inline const PersistentChat& GetPersistentChat() const{ return m_persistentChat; }

    /**
     * <p>Enable persistent chats. For more information about enabling persistent chat,
     * and for example use cases and how to configure for them, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
     * persistent chat</a>.</p>
     */
    inline bool PersistentChatHasBeenSet() const { return m_persistentChatHasBeenSet; }

    /**
     * <p>Enable persistent chats. For more information about enabling persistent chat,
     * and for example use cases and how to configure for them, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
     * persistent chat</a>.</p>
     */
    inline void SetPersistentChat(const PersistentChat& value) { m_persistentChatHasBeenSet = true; m_persistentChat = value; }

    /**
     * <p>Enable persistent chats. For more information about enabling persistent chat,
     * and for example use cases and how to configure for them, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
     * persistent chat</a>.</p>
     */
    inline void SetPersistentChat(PersistentChat&& value) { m_persistentChatHasBeenSet = true; m_persistentChat = std::move(value); }

    /**
     * <p>Enable persistent chats. For more information about enabling persistent chat,
     * and for example use cases and how to configure for them, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
     * persistent chat</a>.</p>
     */
    inline StartChatContactRequest& WithPersistentChat(const PersistentChat& value) { SetPersistentChat(value); return *this;}

    /**
     * <p>Enable persistent chats. For more information about enabling persistent chat,
     * and for example use cases and how to configure for them, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
     * persistent chat</a>.</p>
     */
    inline StartChatContactRequest& WithPersistentChat(PersistentChat&& value) { SetPersistentChat(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the chat starting.</p>  <p>You cannot provide data for both
     * RelatedContactId and PersistentChat. </p> 
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the chat starting.</p>  <p>You cannot provide data for both
     * RelatedContactId and PersistentChat. </p> 
     */
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the chat starting.</p>  <p>You cannot provide data for both
     * RelatedContactId and PersistentChat. </p> 
     */
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the chat starting.</p>  <p>You cannot provide data for both
     * RelatedContactId and PersistentChat. </p> 
     */
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the chat starting.</p>  <p>You cannot provide data for both
     * RelatedContactId and PersistentChat. </p> 
     */
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the chat starting.</p>  <p>You cannot provide data for both
     * RelatedContactId and PersistentChat. </p> 
     */
    inline StartChatContactRequest& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the chat starting.</p>  <p>You cannot provide data for both
     * RelatedContactId and PersistentChat. </p> 
     */
    inline StartChatContactRequest& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the chat starting.</p>  <p>You cannot provide data for both
     * RelatedContactId and PersistentChat. </p> 
     */
    inline StartChatContactRequest& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}


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
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const{ return m_segmentAttributes; }

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
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }

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
    inline void SetSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = value; }

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
    inline void SetSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::move(value); }

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
    inline StartChatContactRequest& WithSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { SetSegmentAttributes(value); return *this;}

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
    inline StartChatContactRequest& WithSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { SetSegmentAttributes(std::move(value)); return *this;}

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
    inline StartChatContactRequest& AddSegmentAttributes(const Aws::String& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }

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
    inline StartChatContactRequest& AddSegmentAttributes(Aws::String&& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), value); return *this; }

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
    inline StartChatContactRequest& AddSegmentAttributes(const Aws::String& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }

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
    inline StartChatContactRequest& AddSegmentAttributes(Aws::String&& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), std::move(value)); return *this; }

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
    inline StartChatContactRequest& AddSegmentAttributes(const char* key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }

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
    inline StartChatContactRequest& AddSegmentAttributes(const char* key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }

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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    int m_chatDurationInMinutes;
    bool m_chatDurationInMinutesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedMessagingContentTypes;
    bool m_supportedMessagingContentTypesHasBeenSet = false;

    PersistentChat m_persistentChat;
    bool m_persistentChatHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
