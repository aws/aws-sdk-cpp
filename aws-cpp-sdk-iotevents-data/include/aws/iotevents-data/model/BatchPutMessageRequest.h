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
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/Message.h>
#include <utility>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class AWS_IOTEVENTSDATA_API BatchPutMessageRequest : public IoTEventsDataRequest
  {
  public:
    BatchPutMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutMessage"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The list of messages to send. Each message has the following format: <code>'{
     * "messageId": "string", "inputName": "string", "payload": "string"}'</code> </p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>The list of messages to send. Each message has the following format: <code>'{
     * "messageId": "string", "inputName": "string", "payload": "string"}'</code> </p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>The list of messages to send. Each message has the following format: <code>'{
     * "messageId": "string", "inputName": "string", "payload": "string"}'</code> </p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>The list of messages to send. Each message has the following format: <code>'{
     * "messageId": "string", "inputName": "string", "payload": "string"}'</code> </p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>The list of messages to send. Each message has the following format: <code>'{
     * "messageId": "string", "inputName": "string", "payload": "string"}'</code> </p>
     */
    inline BatchPutMessageRequest& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>The list of messages to send. Each message has the following format: <code>'{
     * "messageId": "string", "inputName": "string", "payload": "string"}'</code> </p>
     */
    inline BatchPutMessageRequest& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>The list of messages to send. Each message has the following format: <code>'{
     * "messageId": "string", "inputName": "string", "payload": "string"}'</code> </p>
     */
    inline BatchPutMessageRequest& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>The list of messages to send. Each message has the following format: <code>'{
     * "messageId": "string", "inputName": "string", "payload": "string"}'</code> </p>
     */
    inline BatchPutMessageRequest& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
