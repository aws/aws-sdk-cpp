/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/MessageAttributeValue.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{

  /**
   * <p>Contains the details of a single Amazon SQS message along with a
   * <code>Id</code>. </p>
   */
  class AWS_SQS_API SendMessageBatchRequestEntry
  {
  public:
    SendMessageBatchRequestEntry();
    SendMessageBatchRequestEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    SendMessageBatchRequestEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>An identifier for the message in this batch. This is used to communicate the
     * result. Note that the <code>Id</code>s of a batch request need to be unique
     * within the request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An identifier for the message in this batch. This is used to communicate the
     * result. Note that the <code>Id</code>s of a batch request need to be unique
     * within the request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An identifier for the message in this batch. This is used to communicate the
     * result. Note that the <code>Id</code>s of a batch request need to be unique
     * within the request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An identifier for the message in this batch. This is used to communicate the
     * result. Note that the <code>Id</code>s of a batch request need to be unique
     * within the request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An identifier for the message in this batch. This is used to communicate the
     * result. Note that the <code>Id</code>s of a batch request need to be unique
     * within the request.</p>
     */
    inline SendMessageBatchRequestEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An identifier for the message in this batch. This is used to communicate the
     * result. Note that the <code>Id</code>s of a batch request need to be unique
     * within the request.</p>
     */
    inline SendMessageBatchRequestEntry& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>An identifier for the message in this batch. This is used to communicate the
     * result. Note that the <code>Id</code>s of a batch request need to be unique
     * within the request.</p>
     */
    inline SendMessageBatchRequestEntry& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>Body of the message.</p>
     */
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }

    /**
     * <p>Body of the message.</p>
     */
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    /**
     * <p>Body of the message.</p>
     */
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    /**
     * <p>Body of the message.</p>
     */
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }

    /**
     * <p>Body of the message.</p>
     */
    inline SendMessageBatchRequestEntry& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}

    /**
     * <p>Body of the message.</p>
     */
    inline SendMessageBatchRequestEntry& WithMessageBody(Aws::String&& value) { SetMessageBody(value); return *this;}

    /**
     * <p>Body of the message.</p>
     */
    inline SendMessageBatchRequestEntry& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}

    /**
     * <p>The number of seconds for which the message has to be delayed.</p>
     */
    inline int GetDelaySeconds() const{ return m_delaySeconds; }

    /**
     * <p>The number of seconds for which the message has to be delayed.</p>
     */
    inline void SetDelaySeconds(int value) { m_delaySecondsHasBeenSet = true; m_delaySeconds = value; }

    /**
     * <p>The number of seconds for which the message has to be delayed.</p>
     */
    inline SendMessageBatchRequestEntry& WithDelaySeconds(int value) { SetDelaySeconds(value); return *this;}

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline SendMessageBatchRequestEntry& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline SendMessageBatchRequestEntry& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline SendMessageBatchRequestEntry& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline SendMessageBatchRequestEntry& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline SendMessageBatchRequestEntry& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline SendMessageBatchRequestEntry& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline SendMessageBatchRequestEntry& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline SendMessageBatchRequestEntry& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet;
    int m_delaySeconds;
    bool m_delaySecondsHasBeenSet;
    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
