/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_CONNECT_API StartOutboundVoiceContactRequest : public ConnectRequest
  {
  public:
    StartOutboundVoiceContactRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOutboundVoiceContact"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The phone number, in E.164 format, of the customer to call with the outbound
     * contact.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }

    /**
     * <p>The phone number, in E.164 format, of the customer to call with the outbound
     * contact.</p>
     */
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }

    /**
     * <p>The phone number, in E.164 format, of the customer to call with the outbound
     * contact.</p>
     */
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }

    /**
     * <p>The phone number, in E.164 format, of the customer to call with the outbound
     * contact.</p>
     */
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }

    /**
     * <p>The phone number, in E.164 format, of the customer to call with the outbound
     * contact.</p>
     */
    inline StartOutboundVoiceContactRequest& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}

    /**
     * <p>The phone number, in E.164 format, of the customer to call with the outbound
     * contact.</p>
     */
    inline StartOutboundVoiceContactRequest& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number, in E.164 format, of the customer to call with the outbound
     * contact.</p>
     */
    inline StartOutboundVoiceContactRequest& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}


    /**
     * <p>The identifier for the contact flow to execute for the outbound call. This is
     * a GUID value only. Amazon Resource Name (ARN) values are not supported.</p>
     * <p>To find the <code>ContactFlowId</code>, open the contact flow to use in the
     * Amazon Connect contact flow designer. The ID for the contact flow is displayed
     * in the address bar as part of the URL. For example, an address displayed when
     * you open a contact flow is similar to the following:
     * <code>https://myconnectinstance.awsapps.com/connect/contact-flows/edit?id=arn:aws:connect:us-east-1:361814831152:instance/2fb42df9-78a2-4b99-b484-f5cf80dc300c/contact-flow/<i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i>
     * </code>. At the end of the URL, you see
     * <code>contact-flow/b0b8f2dd-ed1b-4c44-af36-ce189a178181</code>. The
     * <code>ContactFlowID</code> for this contact flow is <code>
     * <i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i> </code>. Make sure to include only
     * the GUID after the "contact-flow/" in your requests.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier for the contact flow to execute for the outbound call. This is
     * a GUID value only. Amazon Resource Name (ARN) values are not supported.</p>
     * <p>To find the <code>ContactFlowId</code>, open the contact flow to use in the
     * Amazon Connect contact flow designer. The ID for the contact flow is displayed
     * in the address bar as part of the URL. For example, an address displayed when
     * you open a contact flow is similar to the following:
     * <code>https://myconnectinstance.awsapps.com/connect/contact-flows/edit?id=arn:aws:connect:us-east-1:361814831152:instance/2fb42df9-78a2-4b99-b484-f5cf80dc300c/contact-flow/<i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i>
     * </code>. At the end of the URL, you see
     * <code>contact-flow/b0b8f2dd-ed1b-4c44-af36-ce189a178181</code>. The
     * <code>ContactFlowID</code> for this contact flow is <code>
     * <i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i> </code>. Make sure to include only
     * the GUID after the "contact-flow/" in your requests.</p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier for the contact flow to execute for the outbound call. This is
     * a GUID value only. Amazon Resource Name (ARN) values are not supported.</p>
     * <p>To find the <code>ContactFlowId</code>, open the contact flow to use in the
     * Amazon Connect contact flow designer. The ID for the contact flow is displayed
     * in the address bar as part of the URL. For example, an address displayed when
     * you open a contact flow is similar to the following:
     * <code>https://myconnectinstance.awsapps.com/connect/contact-flows/edit?id=arn:aws:connect:us-east-1:361814831152:instance/2fb42df9-78a2-4b99-b484-f5cf80dc300c/contact-flow/<i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i>
     * </code>. At the end of the URL, you see
     * <code>contact-flow/b0b8f2dd-ed1b-4c44-af36-ce189a178181</code>. The
     * <code>ContactFlowID</code> for this contact flow is <code>
     * <i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i> </code>. Make sure to include only
     * the GUID after the "contact-flow/" in your requests.</p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier for the contact flow to execute for the outbound call. This is
     * a GUID value only. Amazon Resource Name (ARN) values are not supported.</p>
     * <p>To find the <code>ContactFlowId</code>, open the contact flow to use in the
     * Amazon Connect contact flow designer. The ID for the contact flow is displayed
     * in the address bar as part of the URL. For example, an address displayed when
     * you open a contact flow is similar to the following:
     * <code>https://myconnectinstance.awsapps.com/connect/contact-flows/edit?id=arn:aws:connect:us-east-1:361814831152:instance/2fb42df9-78a2-4b99-b484-f5cf80dc300c/contact-flow/<i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i>
     * </code>. At the end of the URL, you see
     * <code>contact-flow/b0b8f2dd-ed1b-4c44-af36-ce189a178181</code>. The
     * <code>ContactFlowID</code> for this contact flow is <code>
     * <i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i> </code>. Make sure to include only
     * the GUID after the "contact-flow/" in your requests.</p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier for the contact flow to execute for the outbound call. This is
     * a GUID value only. Amazon Resource Name (ARN) values are not supported.</p>
     * <p>To find the <code>ContactFlowId</code>, open the contact flow to use in the
     * Amazon Connect contact flow designer. The ID for the contact flow is displayed
     * in the address bar as part of the URL. For example, an address displayed when
     * you open a contact flow is similar to the following:
     * <code>https://myconnectinstance.awsapps.com/connect/contact-flows/edit?id=arn:aws:connect:us-east-1:361814831152:instance/2fb42df9-78a2-4b99-b484-f5cf80dc300c/contact-flow/<i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i>
     * </code>. At the end of the URL, you see
     * <code>contact-flow/b0b8f2dd-ed1b-4c44-af36-ce189a178181</code>. The
     * <code>ContactFlowID</code> for this contact flow is <code>
     * <i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i> </code>. Make sure to include only
     * the GUID after the "contact-flow/" in your requests.</p>
     */
    inline StartOutboundVoiceContactRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier for the contact flow to execute for the outbound call. This is
     * a GUID value only. Amazon Resource Name (ARN) values are not supported.</p>
     * <p>To find the <code>ContactFlowId</code>, open the contact flow to use in the
     * Amazon Connect contact flow designer. The ID for the contact flow is displayed
     * in the address bar as part of the URL. For example, an address displayed when
     * you open a contact flow is similar to the following:
     * <code>https://myconnectinstance.awsapps.com/connect/contact-flows/edit?id=arn:aws:connect:us-east-1:361814831152:instance/2fb42df9-78a2-4b99-b484-f5cf80dc300c/contact-flow/<i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i>
     * </code>. At the end of the URL, you see
     * <code>contact-flow/b0b8f2dd-ed1b-4c44-af36-ce189a178181</code>. The
     * <code>ContactFlowID</code> for this contact flow is <code>
     * <i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i> </code>. Make sure to include only
     * the GUID after the "contact-flow/" in your requests.</p>
     */
    inline StartOutboundVoiceContactRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the contact flow to execute for the outbound call. This is
     * a GUID value only. Amazon Resource Name (ARN) values are not supported.</p>
     * <p>To find the <code>ContactFlowId</code>, open the contact flow to use in the
     * Amazon Connect contact flow designer. The ID for the contact flow is displayed
     * in the address bar as part of the URL. For example, an address displayed when
     * you open a contact flow is similar to the following:
     * <code>https://myconnectinstance.awsapps.com/connect/contact-flows/edit?id=arn:aws:connect:us-east-1:361814831152:instance/2fb42df9-78a2-4b99-b484-f5cf80dc300c/contact-flow/<i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i>
     * </code>. At the end of the URL, you see
     * <code>contact-flow/b0b8f2dd-ed1b-4c44-af36-ce189a178181</code>. The
     * <code>ContactFlowID</code> for this contact flow is <code>
     * <i>b0b8f2dd-ed1b-4c44-af36-ce189a178181</i> </code>. Make sure to include only
     * the GUID after the "contact-flow/" in your requests.</p>
     */
    inline StartOutboundVoiceContactRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>The identifier for your Amazon Connect instance. To find the
     * <code>InstanceId</code> value for your Amazon Connect instance, open the <a
     * href="https://console.aws.amazon.com/connect/">Amazon Connect console</a>.
     * Select the instance alias of the instance and view the instance ID in the
     * <b>Overview</b> section. For example, the instance ID is the set of characters
     * at the end of the instance ARN, after "instance/", such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the
     * <code>InstanceId</code> value for your Amazon Connect instance, open the <a
     * href="https://console.aws.amazon.com/connect/">Amazon Connect console</a>.
     * Select the instance alias of the instance and view the instance ID in the
     * <b>Overview</b> section. For example, the instance ID is the set of characters
     * at the end of the instance ARN, after "instance/", such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the
     * <code>InstanceId</code> value for your Amazon Connect instance, open the <a
     * href="https://console.aws.amazon.com/connect/">Amazon Connect console</a>.
     * Select the instance alias of the instance and view the instance ID in the
     * <b>Overview</b> section. For example, the instance ID is the set of characters
     * at the end of the instance ARN, after "instance/", such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the
     * <code>InstanceId</code> value for your Amazon Connect instance, open the <a
     * href="https://console.aws.amazon.com/connect/">Amazon Connect console</a>.
     * Select the instance alias of the instance and view the instance ID in the
     * <b>Overview</b> section. For example, the instance ID is the set of characters
     * at the end of the instance ARN, after "instance/", such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the
     * <code>InstanceId</code> value for your Amazon Connect instance, open the <a
     * href="https://console.aws.amazon.com/connect/">Amazon Connect console</a>.
     * Select the instance alias of the instance and view the instance ID in the
     * <b>Overview</b> section. For example, the instance ID is the set of characters
     * at the end of the instance ARN, after "instance/", such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline StartOutboundVoiceContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the
     * <code>InstanceId</code> value for your Amazon Connect instance, open the <a
     * href="https://console.aws.amazon.com/connect/">Amazon Connect console</a>.
     * Select the instance alias of the instance and view the instance ID in the
     * <b>Overview</b> section. For example, the instance ID is the set of characters
     * at the end of the instance ARN, after "instance/", such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline StartOutboundVoiceContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the
     * <code>InstanceId</code> value for your Amazon Connect instance, open the <a
     * href="https://console.aws.amazon.com/connect/">Amazon Connect console</a>.
     * Select the instance alias of the instance and view the instance ID in the
     * <b>Overview</b> section. For example, the instance ID is the set of characters
     * at the end of the instance ARN, after "instance/", such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline StartOutboundVoiceContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. The token is valid for 7 days after creation. If a
     * contact is already started, the contact ID is returned. If the contact is
     * disconnected, a new contact is started.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. The token is valid for 7 days after creation. If a
     * contact is already started, the contact ID is returned. If the contact is
     * disconnected, a new contact is started.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. The token is valid for 7 days after creation. If a
     * contact is already started, the contact ID is returned. If the contact is
     * disconnected, a new contact is started.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. The token is valid for 7 days after creation. If a
     * contact is already started, the contact ID is returned. If the contact is
     * disconnected, a new contact is started.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. The token is valid for 7 days after creation. If a
     * contact is already started, the contact ID is returned. If the contact is
     * disconnected, a new contact is started.</p>
     */
    inline StartOutboundVoiceContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. The token is valid for 7 days after creation. If a
     * contact is already started, the contact ID is returned. If the contact is
     * disconnected, a new contact is started.</p>
     */
    inline StartOutboundVoiceContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. The token is valid for 7 days after creation. If a
     * contact is already started, the contact ID is returned. If the contact is
     * disconnected, a new contact is started.</p>
     */
    inline StartOutboundVoiceContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The phone number, in E.164 format, associated with your Amazon Connect
     * instance to use to place the outbound call.</p>
     */
    inline const Aws::String& GetSourcePhoneNumber() const{ return m_sourcePhoneNumber; }

    /**
     * <p>The phone number, in E.164 format, associated with your Amazon Connect
     * instance to use to place the outbound call.</p>
     */
    inline void SetSourcePhoneNumber(const Aws::String& value) { m_sourcePhoneNumberHasBeenSet = true; m_sourcePhoneNumber = value; }

    /**
     * <p>The phone number, in E.164 format, associated with your Amazon Connect
     * instance to use to place the outbound call.</p>
     */
    inline void SetSourcePhoneNumber(Aws::String&& value) { m_sourcePhoneNumberHasBeenSet = true; m_sourcePhoneNumber = std::move(value); }

    /**
     * <p>The phone number, in E.164 format, associated with your Amazon Connect
     * instance to use to place the outbound call.</p>
     */
    inline void SetSourcePhoneNumber(const char* value) { m_sourcePhoneNumberHasBeenSet = true; m_sourcePhoneNumber.assign(value); }

    /**
     * <p>The phone number, in E.164 format, associated with your Amazon Connect
     * instance to use to place the outbound call.</p>
     */
    inline StartOutboundVoiceContactRequest& WithSourcePhoneNumber(const Aws::String& value) { SetSourcePhoneNumber(value); return *this;}

    /**
     * <p>The phone number, in E.164 format, associated with your Amazon Connect
     * instance to use to place the outbound call.</p>
     */
    inline StartOutboundVoiceContactRequest& WithSourcePhoneNumber(Aws::String&& value) { SetSourcePhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number, in E.164 format, associated with your Amazon Connect
     * instance to use to place the outbound call.</p>
     */
    inline StartOutboundVoiceContactRequest& WithSourcePhoneNumber(const char* value) { SetSourcePhoneNumber(value); return *this;}


    /**
     * <p>The queue to which to add the call. If you specify a queue, the phone
     * displayed for caller ID is the phone number defined for the queue. If you do not
     * specify a queue, the queue used is the queue defined in the contact flow
     * specified by <code>ContactFlowId</code>.</p> <p>To find the
     * <code>QueueId</code>, open the queue to use in the Amazon Connect queue editor.
     * The ID for the queue is displayed in the address bar as part of the URL. For
     * example, the <code>QueueId</code> value is the set of characters at the end of
     * the URL, after "queue/", such as
     * <code>aeg40574-2d01-51c3-73d6-bf8624d2168c</code>.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The queue to which to add the call. If you specify a queue, the phone
     * displayed for caller ID is the phone number defined for the queue. If you do not
     * specify a queue, the queue used is the queue defined in the contact flow
     * specified by <code>ContactFlowId</code>.</p> <p>To find the
     * <code>QueueId</code>, open the queue to use in the Amazon Connect queue editor.
     * The ID for the queue is displayed in the address bar as part of the URL. For
     * example, the <code>QueueId</code> value is the set of characters at the end of
     * the URL, after "queue/", such as
     * <code>aeg40574-2d01-51c3-73d6-bf8624d2168c</code>.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The queue to which to add the call. If you specify a queue, the phone
     * displayed for caller ID is the phone number defined for the queue. If you do not
     * specify a queue, the queue used is the queue defined in the contact flow
     * specified by <code>ContactFlowId</code>.</p> <p>To find the
     * <code>QueueId</code>, open the queue to use in the Amazon Connect queue editor.
     * The ID for the queue is displayed in the address bar as part of the URL. For
     * example, the <code>QueueId</code> value is the set of characters at the end of
     * the URL, after "queue/", such as
     * <code>aeg40574-2d01-51c3-73d6-bf8624d2168c</code>.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The queue to which to add the call. If you specify a queue, the phone
     * displayed for caller ID is the phone number defined for the queue. If you do not
     * specify a queue, the queue used is the queue defined in the contact flow
     * specified by <code>ContactFlowId</code>.</p> <p>To find the
     * <code>QueueId</code>, open the queue to use in the Amazon Connect queue editor.
     * The ID for the queue is displayed in the address bar as part of the URL. For
     * example, the <code>QueueId</code> value is the set of characters at the end of
     * the URL, after "queue/", such as
     * <code>aeg40574-2d01-51c3-73d6-bf8624d2168c</code>.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The queue to which to add the call. If you specify a queue, the phone
     * displayed for caller ID is the phone number defined for the queue. If you do not
     * specify a queue, the queue used is the queue defined in the contact flow
     * specified by <code>ContactFlowId</code>.</p> <p>To find the
     * <code>QueueId</code>, open the queue to use in the Amazon Connect queue editor.
     * The ID for the queue is displayed in the address bar as part of the URL. For
     * example, the <code>QueueId</code> value is the set of characters at the end of
     * the URL, after "queue/", such as
     * <code>aeg40574-2d01-51c3-73d6-bf8624d2168c</code>.</p>
     */
    inline StartOutboundVoiceContactRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue to which to add the call. If you specify a queue, the phone
     * displayed for caller ID is the phone number defined for the queue. If you do not
     * specify a queue, the queue used is the queue defined in the contact flow
     * specified by <code>ContactFlowId</code>.</p> <p>To find the
     * <code>QueueId</code>, open the queue to use in the Amazon Connect queue editor.
     * The ID for the queue is displayed in the address bar as part of the URL. For
     * example, the <code>QueueId</code> value is the set of characters at the end of
     * the URL, after "queue/", such as
     * <code>aeg40574-2d01-51c3-73d6-bf8624d2168c</code>.</p>
     */
    inline StartOutboundVoiceContactRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue to which to add the call. If you specify a queue, the phone
     * displayed for caller ID is the phone number defined for the queue. If you do not
     * specify a queue, the queue used is the queue defined in the contact flow
     * specified by <code>ContactFlowId</code>.</p> <p>To find the
     * <code>QueueId</code>, open the queue to use in the Amazon Connect queue editor.
     * The ID for the queue is displayed in the address bar as part of the URL. For
     * example, the <code>QueueId</code> value is the set of characters at the end of
     * the URL, after "queue/", such as
     * <code>aeg40574-2d01-51c3-73d6-bf8624d2168c</code>.</p>
     */
    inline StartOutboundVoiceContactRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline StartOutboundVoiceContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline StartOutboundVoiceContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p> <p>For example, to play a greeting when the
     * customer answers the call, you can pass the customer name in attributes similar
     * to the following:</p>
     */
    inline StartOutboundVoiceContactRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_sourcePhoneNumber;
    bool m_sourcePhoneNumberHasBeenSet;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
