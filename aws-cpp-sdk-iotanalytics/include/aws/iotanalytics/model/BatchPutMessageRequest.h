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
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

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
     * "string", "payload": "string"}'.</p> <p>Note that the field names of message
     * payloads (data) that you send to AWS IoT Analytics:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters and undescores (_); no other special
     * characters are allowed.</p> </li> <li> <p>Must begin with an alphabetic
     * character or single underscore (_).</p> </li> <li> <p>Cannot contain hyphens
     * (-).</p> </li> <li> <p>In regular expression terms:
     * "^[A-Za-z_]([A-Za-z0-9]*|[A-Za-z0-9][A-Za-z0-9_]*)$". </p> </li> <li> <p>Cannot
     * be greater than 255 characters.</p> </li> <li> <p>Are case-insensitive. (Fields
     * named "foo" and "FOO" in the same payload are considered duplicates.)</p> </li>
     * </ul> <p>For example, {"temp_01": 29} or {"_temp_01": 29} are valid, but
     * {"temp-01": 29}, {"01_temp": 29} or {"__temp_01": 29} are invalid in message
     * payloads. </p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p> <p>Note that the field names of message
     * payloads (data) that you send to AWS IoT Analytics:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters and undescores (_); no other special
     * characters are allowed.</p> </li> <li> <p>Must begin with an alphabetic
     * character or single underscore (_).</p> </li> <li> <p>Cannot contain hyphens
     * (-).</p> </li> <li> <p>In regular expression terms:
     * "^[A-Za-z_]([A-Za-z0-9]*|[A-Za-z0-9][A-Za-z0-9_]*)$". </p> </li> <li> <p>Cannot
     * be greater than 255 characters.</p> </li> <li> <p>Are case-insensitive. (Fields
     * named "foo" and "FOO" in the same payload are considered duplicates.)</p> </li>
     * </ul> <p>For example, {"temp_01": 29} or {"_temp_01": 29} are valid, but
     * {"temp-01": 29}, {"01_temp": 29} or {"__temp_01": 29} are invalid in message
     * payloads. </p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p> <p>Note that the field names of message
     * payloads (data) that you send to AWS IoT Analytics:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters and undescores (_); no other special
     * characters are allowed.</p> </li> <li> <p>Must begin with an alphabetic
     * character or single underscore (_).</p> </li> <li> <p>Cannot contain hyphens
     * (-).</p> </li> <li> <p>In regular expression terms:
     * "^[A-Za-z_]([A-Za-z0-9]*|[A-Za-z0-9][A-Za-z0-9_]*)$". </p> </li> <li> <p>Cannot
     * be greater than 255 characters.</p> </li> <li> <p>Are case-insensitive. (Fields
     * named "foo" and "FOO" in the same payload are considered duplicates.)</p> </li>
     * </ul> <p>For example, {"temp_01": 29} or {"_temp_01": 29} are valid, but
     * {"temp-01": 29}, {"01_temp": 29} or {"__temp_01": 29} are invalid in message
     * payloads. </p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p> <p>Note that the field names of message
     * payloads (data) that you send to AWS IoT Analytics:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters and undescores (_); no other special
     * characters are allowed.</p> </li> <li> <p>Must begin with an alphabetic
     * character or single underscore (_).</p> </li> <li> <p>Cannot contain hyphens
     * (-).</p> </li> <li> <p>In regular expression terms:
     * "^[A-Za-z_]([A-Za-z0-9]*|[A-Za-z0-9][A-Za-z0-9_]*)$". </p> </li> <li> <p>Cannot
     * be greater than 255 characters.</p> </li> <li> <p>Are case-insensitive. (Fields
     * named "foo" and "FOO" in the same payload are considered duplicates.)</p> </li>
     * </ul> <p>For example, {"temp_01": 29} or {"_temp_01": 29} are valid, but
     * {"temp-01": 29}, {"01_temp": 29} or {"__temp_01": 29} are invalid in message
     * payloads. </p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p> <p>Note that the field names of message
     * payloads (data) that you send to AWS IoT Analytics:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters and undescores (_); no other special
     * characters are allowed.</p> </li> <li> <p>Must begin with an alphabetic
     * character or single underscore (_).</p> </li> <li> <p>Cannot contain hyphens
     * (-).</p> </li> <li> <p>In regular expression terms:
     * "^[A-Za-z_]([A-Za-z0-9]*|[A-Za-z0-9][A-Za-z0-9_]*)$". </p> </li> <li> <p>Cannot
     * be greater than 255 characters.</p> </li> <li> <p>Are case-insensitive. (Fields
     * named "foo" and "FOO" in the same payload are considered duplicates.)</p> </li>
     * </ul> <p>For example, {"temp_01": 29} or {"_temp_01": 29} are valid, but
     * {"temp-01": 29}, {"01_temp": 29} or {"__temp_01": 29} are invalid in message
     * payloads. </p>
     */
    inline BatchPutMessageRequest& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p> <p>Note that the field names of message
     * payloads (data) that you send to AWS IoT Analytics:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters and undescores (_); no other special
     * characters are allowed.</p> </li> <li> <p>Must begin with an alphabetic
     * character or single underscore (_).</p> </li> <li> <p>Cannot contain hyphens
     * (-).</p> </li> <li> <p>In regular expression terms:
     * "^[A-Za-z_]([A-Za-z0-9]*|[A-Za-z0-9][A-Za-z0-9_]*)$". </p> </li> <li> <p>Cannot
     * be greater than 255 characters.</p> </li> <li> <p>Are case-insensitive. (Fields
     * named "foo" and "FOO" in the same payload are considered duplicates.)</p> </li>
     * </ul> <p>For example, {"temp_01": 29} or {"_temp_01": 29} are valid, but
     * {"temp-01": 29}, {"01_temp": 29} or {"__temp_01": 29} are invalid in message
     * payloads. </p>
     */
    inline BatchPutMessageRequest& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p> <p>Note that the field names of message
     * payloads (data) that you send to AWS IoT Analytics:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters and undescores (_); no other special
     * characters are allowed.</p> </li> <li> <p>Must begin with an alphabetic
     * character or single underscore (_).</p> </li> <li> <p>Cannot contain hyphens
     * (-).</p> </li> <li> <p>In regular expression terms:
     * "^[A-Za-z_]([A-Za-z0-9]*|[A-Za-z0-9][A-Za-z0-9_]*)$". </p> </li> <li> <p>Cannot
     * be greater than 255 characters.</p> </li> <li> <p>Are case-insensitive. (Fields
     * named "foo" and "FOO" in the same payload are considered duplicates.)</p> </li>
     * </ul> <p>For example, {"temp_01": 29} or {"_temp_01": 29} are valid, but
     * {"temp-01": 29}, {"01_temp": 29} or {"__temp_01": 29} are invalid in message
     * payloads. </p>
     */
    inline BatchPutMessageRequest& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>The list of messages to be sent. Each message has format: '{ "messageId":
     * "string", "payload": "string"}'.</p> <p>Note that the field names of message
     * payloads (data) that you send to AWS IoT Analytics:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters and undescores (_); no other special
     * characters are allowed.</p> </li> <li> <p>Must begin with an alphabetic
     * character or single underscore (_).</p> </li> <li> <p>Cannot contain hyphens
     * (-).</p> </li> <li> <p>In regular expression terms:
     * "^[A-Za-z_]([A-Za-z0-9]*|[A-Za-z0-9][A-Za-z0-9_]*)$". </p> </li> <li> <p>Cannot
     * be greater than 255 characters.</p> </li> <li> <p>Are case-insensitive. (Fields
     * named "foo" and "FOO" in the same payload are considered duplicates.)</p> </li>
     * </ul> <p>For example, {"temp_01": 29} or {"_temp_01": 29} are valid, but
     * {"temp-01": 29}, {"01_temp": 29} or {"__temp_01": 29} are invalid in message
     * payloads. </p>
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
