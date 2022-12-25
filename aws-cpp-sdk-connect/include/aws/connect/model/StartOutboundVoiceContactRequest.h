/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/AnswerMachineDetectionConfig.h>
#include <aws/connect/model/TrafficType.h>
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
  class StartOutboundVoiceContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartOutboundVoiceContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOutboundVoiceContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The phone number of the customer, in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }

    /**
     * <p>The phone number of the customer, in E.164 format.</p>
     */
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }

    /**
     * <p>The phone number of the customer, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }

    /**
     * <p>The phone number of the customer, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }

    /**
     * <p>The phone number of the customer, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }

    /**
     * <p>The phone number of the customer, in E.164 format.</p>
     */
    inline StartOutboundVoiceContactRequest& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}

    /**
     * <p>The phone number of the customer, in E.164 format.</p>
     */
    inline StartOutboundVoiceContactRequest& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number of the customer, in E.164 format.</p>
     */
    inline StartOutboundVoiceContactRequest& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}


    /**
     * <p>The identifier of the flow for the outbound call. To see the ContactFlowId in
     * the Amazon Connect console user interface, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the flow for the outbound call. To see the ContactFlowId in
     * the Amazon Connect console user interface, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the flow for the outbound call. To see the ContactFlowId in
     * the Amazon Connect console user interface, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the flow for the outbound call. To see the ContactFlowId in
     * the Amazon Connect console user interface, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the flow for the outbound call. To see the ContactFlowId in
     * the Amazon Connect console user interface, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the flow for the outbound call. To see the ContactFlowId in
     * the Amazon Connect console user interface, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartOutboundVoiceContactRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow for the outbound call. To see the ContactFlowId in
     * the Amazon Connect console user interface, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartOutboundVoiceContactRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow for the outbound call. To see the ContactFlowId in
     * the Amazon Connect console user interface, on the navigation menu go to
     * <b>Routing</b>, <b>Contact Flows</b>. Choose the flow. On the flow page, under
     * the name of the flow, choose <b>Show additional flow information</b>. The
     * ContactFlowId is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartOutboundVoiceContactRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StartOutboundVoiceContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StartOutboundVoiceContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StartOutboundVoiceContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. The token is valid for 7 days after
     * creation. If a contact is already started, the contact ID is returned. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. The token is valid for 7 days after
     * creation. If a contact is already started, the contact ID is returned. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. The token is valid for 7 days after
     * creation. If a contact is already started, the contact ID is returned. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. The token is valid for 7 days after
     * creation. If a contact is already started, the contact ID is returned. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. The token is valid for 7 days after
     * creation. If a contact is already started, the contact ID is returned. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. The token is valid for 7 days after
     * creation. If a contact is already started, the contact ID is returned. </p>
     */
    inline StartOutboundVoiceContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. The token is valid for 7 days after
     * creation. If a contact is already started, the contact ID is returned. </p>
     */
    inline StartOutboundVoiceContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. The token is valid for 7 days after
     * creation. If a contact is already started, the contact ID is returned. </p>
     */
    inline StartOutboundVoiceContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The phone number associated with the Amazon Connect instance, in E.164
     * format. If you do not specify a source phone number, you must specify a
     * queue.</p>
     */
    inline const Aws::String& GetSourcePhoneNumber() const{ return m_sourcePhoneNumber; }

    /**
     * <p>The phone number associated with the Amazon Connect instance, in E.164
     * format. If you do not specify a source phone number, you must specify a
     * queue.</p>
     */
    inline bool SourcePhoneNumberHasBeenSet() const { return m_sourcePhoneNumberHasBeenSet; }

    /**
     * <p>The phone number associated with the Amazon Connect instance, in E.164
     * format. If you do not specify a source phone number, you must specify a
     * queue.</p>
     */
    inline void SetSourcePhoneNumber(const Aws::String& value) { m_sourcePhoneNumberHasBeenSet = true; m_sourcePhoneNumber = value; }

    /**
     * <p>The phone number associated with the Amazon Connect instance, in E.164
     * format. If you do not specify a source phone number, you must specify a
     * queue.</p>
     */
    inline void SetSourcePhoneNumber(Aws::String&& value) { m_sourcePhoneNumberHasBeenSet = true; m_sourcePhoneNumber = std::move(value); }

    /**
     * <p>The phone number associated with the Amazon Connect instance, in E.164
     * format. If you do not specify a source phone number, you must specify a
     * queue.</p>
     */
    inline void SetSourcePhoneNumber(const char* value) { m_sourcePhoneNumberHasBeenSet = true; m_sourcePhoneNumber.assign(value); }

    /**
     * <p>The phone number associated with the Amazon Connect instance, in E.164
     * format. If you do not specify a source phone number, you must specify a
     * queue.</p>
     */
    inline StartOutboundVoiceContactRequest& WithSourcePhoneNumber(const Aws::String& value) { SetSourcePhoneNumber(value); return *this;}

    /**
     * <p>The phone number associated with the Amazon Connect instance, in E.164
     * format. If you do not specify a source phone number, you must specify a
     * queue.</p>
     */
    inline StartOutboundVoiceContactRequest& WithSourcePhoneNumber(Aws::String&& value) { SetSourcePhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number associated with the Amazon Connect instance, in E.164
     * format. If you do not specify a source phone number, you must specify a
     * queue.</p>
     */
    inline StartOutboundVoiceContactRequest& WithSourcePhoneNumber(const char* value) { SetSourcePhoneNumber(value); return *this;}


    /**
     * <p>The queue for the call. If you specify a queue, the phone displayed for
     * caller ID is the phone number specified in the queue. If you do not specify a
     * queue, the queue defined in the flow is used. If you do not specify a queue, you
     * must specify a source phone number.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The queue for the call. If you specify a queue, the phone displayed for
     * caller ID is the phone number specified in the queue. If you do not specify a
     * queue, the queue defined in the flow is used. If you do not specify a queue, you
     * must specify a source phone number.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The queue for the call. If you specify a queue, the phone displayed for
     * caller ID is the phone number specified in the queue. If you do not specify a
     * queue, the queue defined in the flow is used. If you do not specify a queue, you
     * must specify a source phone number.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The queue for the call. If you specify a queue, the phone displayed for
     * caller ID is the phone number specified in the queue. If you do not specify a
     * queue, the queue defined in the flow is used. If you do not specify a queue, you
     * must specify a source phone number.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The queue for the call. If you specify a queue, the phone displayed for
     * caller ID is the phone number specified in the queue. If you do not specify a
     * queue, the queue defined in the flow is used. If you do not specify a queue, you
     * must specify a source phone number.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The queue for the call. If you specify a queue, the phone displayed for
     * caller ID is the phone number specified in the queue. If you do not specify a
     * queue, the queue defined in the flow is used. If you do not specify a queue, you
     * must specify a source phone number.</p>
     */
    inline StartOutboundVoiceContactRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue for the call. If you specify a queue, the phone displayed for
     * caller ID is the phone number specified in the queue. If you do not specify a
     * queue, the queue defined in the flow is used. If you do not specify a queue, you
     * must specify a source phone number.</p>
     */
    inline StartOutboundVoiceContactRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue for the call. If you specify a queue, the phone displayed for
     * caller ID is the phone number specified in the queue. If you do not specify a
     * queue, the queue defined in the flow is used. If you do not specify a queue, you
     * must specify a source phone number.</p>
     */
    inline StartOutboundVoiceContactRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartOutboundVoiceContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartOutboundVoiceContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Configuration of the answering machine detection for this outbound call. </p>
     */
    inline const AnswerMachineDetectionConfig& GetAnswerMachineDetectionConfig() const{ return m_answerMachineDetectionConfig; }

    /**
     * <p>Configuration of the answering machine detection for this outbound call. </p>
     */
    inline bool AnswerMachineDetectionConfigHasBeenSet() const { return m_answerMachineDetectionConfigHasBeenSet; }

    /**
     * <p>Configuration of the answering machine detection for this outbound call. </p>
     */
    inline void SetAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = value; }

    /**
     * <p>Configuration of the answering machine detection for this outbound call. </p>
     */
    inline void SetAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = std::move(value); }

    /**
     * <p>Configuration of the answering machine detection for this outbound call. </p>
     */
    inline StartOutboundVoiceContactRequest& WithAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { SetAnswerMachineDetectionConfig(value); return *this;}

    /**
     * <p>Configuration of the answering machine detection for this outbound call. </p>
     */
    inline StartOutboundVoiceContactRequest& WithAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { SetAnswerMachineDetectionConfig(std::move(value)); return *this;}


    /**
     * <p>The campaign identifier of the outbound communication.</p>
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }

    /**
     * <p>The campaign identifier of the outbound communication.</p>
     */
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }

    /**
     * <p>The campaign identifier of the outbound communication.</p>
     */
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }

    /**
     * <p>The campaign identifier of the outbound communication.</p>
     */
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }

    /**
     * <p>The campaign identifier of the outbound communication.</p>
     */
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }

    /**
     * <p>The campaign identifier of the outbound communication.</p>
     */
    inline StartOutboundVoiceContactRequest& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}

    /**
     * <p>The campaign identifier of the outbound communication.</p>
     */
    inline StartOutboundVoiceContactRequest& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}

    /**
     * <p>The campaign identifier of the outbound communication.</p>
     */
    inline StartOutboundVoiceContactRequest& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}


    /**
     * <p>Denotes the class of traffic. Calls with different traffic types are handled
     * differently by Amazon Connect. The default value is <code>GENERAL</code>. Use
     * <code>CAMPAIGN</code> if <code>EnableAnswerMachineDetection</code> is set to
     * <code>true</code>. For all other cases, use <code>GENERAL</code>. </p>
     */
    inline const TrafficType& GetTrafficType() const{ return m_trafficType; }

    /**
     * <p>Denotes the class of traffic. Calls with different traffic types are handled
     * differently by Amazon Connect. The default value is <code>GENERAL</code>. Use
     * <code>CAMPAIGN</code> if <code>EnableAnswerMachineDetection</code> is set to
     * <code>true</code>. For all other cases, use <code>GENERAL</code>. </p>
     */
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }

    /**
     * <p>Denotes the class of traffic. Calls with different traffic types are handled
     * differently by Amazon Connect. The default value is <code>GENERAL</code>. Use
     * <code>CAMPAIGN</code> if <code>EnableAnswerMachineDetection</code> is set to
     * <code>true</code>. For all other cases, use <code>GENERAL</code>. </p>
     */
    inline void SetTrafficType(const TrafficType& value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }

    /**
     * <p>Denotes the class of traffic. Calls with different traffic types are handled
     * differently by Amazon Connect. The default value is <code>GENERAL</code>. Use
     * <code>CAMPAIGN</code> if <code>EnableAnswerMachineDetection</code> is set to
     * <code>true</code>. For all other cases, use <code>GENERAL</code>. </p>
     */
    inline void SetTrafficType(TrafficType&& value) { m_trafficTypeHasBeenSet = true; m_trafficType = std::move(value); }

    /**
     * <p>Denotes the class of traffic. Calls with different traffic types are handled
     * differently by Amazon Connect. The default value is <code>GENERAL</code>. Use
     * <code>CAMPAIGN</code> if <code>EnableAnswerMachineDetection</code> is set to
     * <code>true</code>. For all other cases, use <code>GENERAL</code>. </p>
     */
    inline StartOutboundVoiceContactRequest& WithTrafficType(const TrafficType& value) { SetTrafficType(value); return *this;}

    /**
     * <p>Denotes the class of traffic. Calls with different traffic types are handled
     * differently by Amazon Connect. The default value is <code>GENERAL</code>. Use
     * <code>CAMPAIGN</code> if <code>EnableAnswerMachineDetection</code> is set to
     * <code>true</code>. For all other cases, use <code>GENERAL</code>. </p>
     */
    inline StartOutboundVoiceContactRequest& WithTrafficType(TrafficType&& value) { SetTrafficType(std::move(value)); return *this;}

  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_sourcePhoneNumber;
    bool m_sourcePhoneNumberHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    AnswerMachineDetectionConfig m_answerMachineDetectionConfig;
    bool m_answerMachineDetectionConfigHasBeenSet = false;

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    TrafficType m_trafficType;
    bool m_trafficTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
