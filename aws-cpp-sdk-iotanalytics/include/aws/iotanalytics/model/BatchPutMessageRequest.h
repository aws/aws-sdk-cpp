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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/Message.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class AWS_IOTANALYTICS_API BatchPutMessageRequest : public IoTAnalyticsRequest
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
     * <p>The name of the channel where the messages are sent.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel where the messages are sent.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel where the messages are sent.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel where the messages are sent.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel where the messages are sent.</p>
     */
    inline BatchPutMessageRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel where the messages are sent.</p>
     */
    inline BatchPutMessageRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel where the messages are sent.</p>
     */
    inline BatchPutMessageRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p>
     */
    inline BatchPutMessageRequest& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p>
     */
    inline BatchPutMessageRequest& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p>
     */
    inline BatchPutMessageRequest& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p>
     */
    inline BatchPutMessageRequest& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
