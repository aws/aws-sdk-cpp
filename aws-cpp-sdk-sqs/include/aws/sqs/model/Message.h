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
#include <aws/sqs/model/QueueAttributeName.h>
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
   * <p>An Amazon SQS message.</p>
   */
  class AWS_SQS_API Message
  {
  public:
    Message();
    Message(const Aws::Utils::Xml::XmlNode& xmlNode);
    Message& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>A unique identifier for the message. Message IDs are considered unique across
     * all AWS accounts for an extended period of time.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>A unique identifier for the message. Message IDs are considered unique across
     * all AWS accounts for an extended period of time.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>A unique identifier for the message. Message IDs are considered unique across
     * all AWS accounts for an extended period of time.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>A unique identifier for the message. Message IDs are considered unique across
     * all AWS accounts for an extended period of time.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>A unique identifier for the message. Message IDs are considered unique across
     * all AWS accounts for an extended period of time.</p>
     */
    inline Message& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>A unique identifier for the message. Message IDs are considered unique across
     * all AWS accounts for an extended period of time.</p>
     */
    inline Message& WithMessageId(Aws::String&& value) { SetMessageId(value); return *this;}

    /**
     * <p>A unique identifier for the message. Message IDs are considered unique across
     * all AWS accounts for an extended period of time.</p>
     */
    inline Message& WithMessageId(const char* value) { SetMessageId(value); return *this;}

    /**
     * <p>An identifier associated with the act of receiving the message. A new receipt
     * handle is returned every time you receive a message. When deleting a message,
     * you provide the last received receipt handle to delete the message.</p>
     */
    inline const Aws::String& GetReceiptHandle() const{ return m_receiptHandle; }

    /**
     * <p>An identifier associated with the act of receiving the message. A new receipt
     * handle is returned every time you receive a message. When deleting a message,
     * you provide the last received receipt handle to delete the message.</p>
     */
    inline void SetReceiptHandle(const Aws::String& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }

    /**
     * <p>An identifier associated with the act of receiving the message. A new receipt
     * handle is returned every time you receive a message. When deleting a message,
     * you provide the last received receipt handle to delete the message.</p>
     */
    inline void SetReceiptHandle(Aws::String&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }

    /**
     * <p>An identifier associated with the act of receiving the message. A new receipt
     * handle is returned every time you receive a message. When deleting a message,
     * you provide the last received receipt handle to delete the message.</p>
     */
    inline void SetReceiptHandle(const char* value) { m_receiptHandleHasBeenSet = true; m_receiptHandle.assign(value); }

    /**
     * <p>An identifier associated with the act of receiving the message. A new receipt
     * handle is returned every time you receive a message. When deleting a message,
     * you provide the last received receipt handle to delete the message.</p>
     */
    inline Message& WithReceiptHandle(const Aws::String& value) { SetReceiptHandle(value); return *this;}

    /**
     * <p>An identifier associated with the act of receiving the message. A new receipt
     * handle is returned every time you receive a message. When deleting a message,
     * you provide the last received receipt handle to delete the message.</p>
     */
    inline Message& WithReceiptHandle(Aws::String&& value) { SetReceiptHandle(value); return *this;}

    /**
     * <p>An identifier associated with the act of receiving the message. A new receipt
     * handle is returned every time you receive a message. When deleting a message,
     * you provide the last received receipt handle to delete the message.</p>
     */
    inline Message& WithReceiptHandle(const char* value) { SetReceiptHandle(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string.</p>
     */
    inline const Aws::String& GetMD5OfBody() const{ return m_mD5OfBody; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string.</p>
     */
    inline void SetMD5OfBody(const Aws::String& value) { m_mD5OfBodyHasBeenSet = true; m_mD5OfBody = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string.</p>
     */
    inline void SetMD5OfBody(Aws::String&& value) { m_mD5OfBodyHasBeenSet = true; m_mD5OfBody = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string.</p>
     */
    inline void SetMD5OfBody(const char* value) { m_mD5OfBodyHasBeenSet = true; m_mD5OfBody.assign(value); }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string.</p>
     */
    inline Message& WithMD5OfBody(const Aws::String& value) { SetMD5OfBody(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string.</p>
     */
    inline Message& WithMD5OfBody(Aws::String&& value) { SetMD5OfBody(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string.</p>
     */
    inline Message& WithMD5OfBody(const char* value) { SetMD5OfBody(value); return *this;}

    /**
     * <p>The message's contents (not URL-encoded).</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The message's contents (not URL-encoded).</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The message's contents (not URL-encoded).</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The message's contents (not URL-encoded).</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The message's contents (not URL-encoded).</p>
     */
    inline Message& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The message's contents (not URL-encoded).</p>
     */
    inline Message& WithBody(Aws::String&& value) { SetBody(value); return *this;}

    /**
     * <p>The message's contents (not URL-encoded).</p>
     */
    inline Message& WithBody(const char* value) { SetBody(value); return *this;}

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline const Aws::Map<QueueAttributeName, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline void SetAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline void SetAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline Message& WithAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline Message& WithAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline Message& AddAttributes(const QueueAttributeName& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline Message& AddAttributes(QueueAttributeName&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline Message& AddAttributes(const QueueAttributeName& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline Message& AddAttributes(QueueAttributeName&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline Message& AddAttributes(QueueAttributeName&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p><code>SenderId</code>, <code>SentTimestamp</code>,
     * <code>ApproximateReceiveCount</code>, and/or
     * <code>ApproximateFirstReceiveTimestamp</code>. <code>SentTimestamp</code> and
     * <code>ApproximateFirstReceiveTimestamp</code> are each returned as an integer
     * representing the <a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>
     * in milliseconds.</p>
     */
    inline Message& AddAttributes(const QueueAttributeName& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline const Aws::String& GetMD5OfMessageAttributes() const{ return m_mD5OfMessageAttributes; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageAttributes(const Aws::String& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageAttributes(Aws::String&& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageAttributes(const char* value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes.assign(value); }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline Message& WithMD5OfMessageAttributes(const Aws::String& value) { SetMD5OfMessageAttributes(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline Message& WithMD5OfMessageAttributes(Aws::String&& value) { SetMD5OfMessageAttributes(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline Message& WithMD5OfMessageAttributes(const char* value) { SetMD5OfMessageAttributes(value); return *this;}

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
    inline Message& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline Message& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline Message& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline Message& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline Message& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline Message& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline Message& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a Name, Type, and Value. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message
     * Attribute Items</a>.</p>
     */
    inline Message& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

  private:
    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;
    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet;
    Aws::String m_mD5OfBody;
    bool m_mD5OfBodyHasBeenSet;
    Aws::String m_body;
    bool m_bodyHasBeenSet;
    Aws::Map<QueueAttributeName, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
    Aws::String m_mD5OfMessageAttributes;
    bool m_mD5OfMessageAttributesHasBeenSet;
    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
