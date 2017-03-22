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
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/MessageAttributeValue.h>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API SendMessageRequest : public SQSRequest
  {
  public:
    SendMessageRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The URL of the Amazon SQS queue to which a message is sent.</p> <p>Queue URLs
     * are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue to which a message is sent.</p> <p>Queue URLs
     * are case-sensitive.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to which a message is sent.</p> <p>Queue URLs
     * are case-sensitive.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to which a message is sent.</p> <p>Queue URLs
     * are case-sensitive.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue to which a message is sent.</p> <p>Queue URLs
     * are case-sensitive.</p>
     */
    inline SendMessageRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to which a message is sent.</p> <p>Queue URLs
     * are case-sensitive.</p>
     */
    inline SendMessageRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to which a message is sent.</p> <p>Queue URLs
     * are case-sensitive.</p>
     */
    inline SendMessageRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The message to send. The maximum string size is 256 KB.</p> <important>
     * <p>The following list shows the characters (in Unicode) that are allowed in your
     * message, according to the W3C XML specification:</p> <ul> <li> <p>
     * <code>#x9</code> </p> </li> <li> <p> <code>#xA</code> </p> </li> <li> <p>
     * <code>#xD</code> </p> </li> <li> <p> <code>#x20</code> to <code>#xD7FF</code>
     * </p> </li> <li> <p> <code>#xE000</code> to <code>#xFFFD</code> </p> </li> <li>
     * <p> <code>#x10000</code> to <code>#x10FFFF</code> </p> </li> </ul> <p>For more
     * information, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>. If
     * you send any characters that aren't included in this list, your request is
     * rejected.</p> </important>
     */
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }

    /**
     * <p>The message to send. The maximum string size is 256 KB.</p> <important>
     * <p>The following list shows the characters (in Unicode) that are allowed in your
     * message, according to the W3C XML specification:</p> <ul> <li> <p>
     * <code>#x9</code> </p> </li> <li> <p> <code>#xA</code> </p> </li> <li> <p>
     * <code>#xD</code> </p> </li> <li> <p> <code>#x20</code> to <code>#xD7FF</code>
     * </p> </li> <li> <p> <code>#xE000</code> to <code>#xFFFD</code> </p> </li> <li>
     * <p> <code>#x10000</code> to <code>#x10FFFF</code> </p> </li> </ul> <p>For more
     * information, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>. If
     * you send any characters that aren't included in this list, your request is
     * rejected.</p> </important>
     */
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    /**
     * <p>The message to send. The maximum string size is 256 KB.</p> <important>
     * <p>The following list shows the characters (in Unicode) that are allowed in your
     * message, according to the W3C XML specification:</p> <ul> <li> <p>
     * <code>#x9</code> </p> </li> <li> <p> <code>#xA</code> </p> </li> <li> <p>
     * <code>#xD</code> </p> </li> <li> <p> <code>#x20</code> to <code>#xD7FF</code>
     * </p> </li> <li> <p> <code>#xE000</code> to <code>#xFFFD</code> </p> </li> <li>
     * <p> <code>#x10000</code> to <code>#x10FFFF</code> </p> </li> </ul> <p>For more
     * information, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>. If
     * you send any characters that aren't included in this list, your request is
     * rejected.</p> </important>
     */
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    /**
     * <p>The message to send. The maximum string size is 256 KB.</p> <important>
     * <p>The following list shows the characters (in Unicode) that are allowed in your
     * message, according to the W3C XML specification:</p> <ul> <li> <p>
     * <code>#x9</code> </p> </li> <li> <p> <code>#xA</code> </p> </li> <li> <p>
     * <code>#xD</code> </p> </li> <li> <p> <code>#x20</code> to <code>#xD7FF</code>
     * </p> </li> <li> <p> <code>#xE000</code> to <code>#xFFFD</code> </p> </li> <li>
     * <p> <code>#x10000</code> to <code>#x10FFFF</code> </p> </li> </ul> <p>For more
     * information, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>. If
     * you send any characters that aren't included in this list, your request is
     * rejected.</p> </important>
     */
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }

    /**
     * <p>The message to send. The maximum string size is 256 KB.</p> <important>
     * <p>The following list shows the characters (in Unicode) that are allowed in your
     * message, according to the W3C XML specification:</p> <ul> <li> <p>
     * <code>#x9</code> </p> </li> <li> <p> <code>#xA</code> </p> </li> <li> <p>
     * <code>#xD</code> </p> </li> <li> <p> <code>#x20</code> to <code>#xD7FF</code>
     * </p> </li> <li> <p> <code>#xE000</code> to <code>#xFFFD</code> </p> </li> <li>
     * <p> <code>#x10000</code> to <code>#x10FFFF</code> </p> </li> </ul> <p>For more
     * information, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>. If
     * you send any characters that aren't included in this list, your request is
     * rejected.</p> </important>
     */
    inline SendMessageRequest& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}

    /**
     * <p>The message to send. The maximum string size is 256 KB.</p> <important>
     * <p>The following list shows the characters (in Unicode) that are allowed in your
     * message, according to the W3C XML specification:</p> <ul> <li> <p>
     * <code>#x9</code> </p> </li> <li> <p> <code>#xA</code> </p> </li> <li> <p>
     * <code>#xD</code> </p> </li> <li> <p> <code>#x20</code> to <code>#xD7FF</code>
     * </p> </li> <li> <p> <code>#xE000</code> to <code>#xFFFD</code> </p> </li> <li>
     * <p> <code>#x10000</code> to <code>#x10FFFF</code> </p> </li> </ul> <p>For more
     * information, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>. If
     * you send any characters that aren't included in this list, your request is
     * rejected.</p> </important>
     */
    inline SendMessageRequest& WithMessageBody(Aws::String&& value) { SetMessageBody(value); return *this;}

    /**
     * <p>The message to send. The maximum string size is 256 KB.</p> <important>
     * <p>The following list shows the characters (in Unicode) that are allowed in your
     * message, according to the W3C XML specification:</p> <ul> <li> <p>
     * <code>#x9</code> </p> </li> <li> <p> <code>#xA</code> </p> </li> <li> <p>
     * <code>#xD</code> </p> </li> <li> <p> <code>#x20</code> to <code>#xD7FF</code>
     * </p> </li> <li> <p> <code>#xE000</code> to <code>#xFFFD</code> </p> </li> <li>
     * <p> <code>#x10000</code> to <code>#x10FFFF</code> </p> </li> </ul> <p>For more
     * information, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>. If
     * you send any characters that aren't included in this list, your request is
     * rejected.</p> </important>
     */
    inline SendMessageRequest& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}

    /**
     * <p> The number of seconds to delay a specific message. Valid values: 0 to 900.
     * Maximum: 15 minutes. Messages with a positive <code>DelaySeconds</code> value
     * become available for processing after the delay period is finished. If you don't
     * specify a value, the default value for the queue applies. </p> <note> <p>When
     * you set <code>FifoQueue</code>, you can't set <code>DelaySeconds</code> per
     * message. You can set this parameter only on a queue level.</p> </note>
     */
    inline int GetDelaySeconds() const{ return m_delaySeconds; }

    /**
     * <p> The number of seconds to delay a specific message. Valid values: 0 to 900.
     * Maximum: 15 minutes. Messages with a positive <code>DelaySeconds</code> value
     * become available for processing after the delay period is finished. If you don't
     * specify a value, the default value for the queue applies. </p> <note> <p>When
     * you set <code>FifoQueue</code>, you can't set <code>DelaySeconds</code> per
     * message. You can set this parameter only on a queue level.</p> </note>
     */
    inline void SetDelaySeconds(int value) { m_delaySecondsHasBeenSet = true; m_delaySeconds = value; }

    /**
     * <p> The number of seconds to delay a specific message. Valid values: 0 to 900.
     * Maximum: 15 minutes. Messages with a positive <code>DelaySeconds</code> value
     * become available for processing after the delay period is finished. If you don't
     * specify a value, the default value for the queue applies. </p> <note> <p>When
     * you set <code>FifoQueue</code>, you can't set <code>DelaySeconds</code> per
     * message. You can set this parameter only on a queue level.</p> </note>
     */
    inline SendMessageRequest& WithDelaySeconds(int value) { SetDelaySeconds(value); return *this;}

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline SendMessageRequest& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline SendMessageRequest& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline SendMessageRequest& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline SendMessageRequest& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline SendMessageRequest& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline SendMessageRequest& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline SendMessageRequest& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html#message-attributes-items-validation">Message
     * Attribute Items and Validation</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline SendMessageRequest& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages. If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, any messages sent with
     * the same <code>MessageDeduplicationId</code> are accepted successfully but
     * aren't delivered during the 5-minute deduplication interval. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">
     * Exactly-Once Processing</a> in the <i>Amazon SQS Developer Guide</i>.</p> <ul>
     * <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>,</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your queue, Amazon SQS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message). </p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the queue doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the queue has <code>ContentBasedDeduplication</code> set, your
     * <code>MessageDeduplicationId</code> overrides the generated one.</p> </li> </ul>
     * </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect, messages
     * with identical content sent within the deduplication interval are treated as
     * duplicates and only one copy of the message is delivered.</p> </li> <li> <p>You
     * can also use <code>ContentBasedDeduplication</code> for messages with identical
     * content to be treated as duplicates.</p> </li> <li> <p>If you send one message
     * with <code>ContentBasedDeduplication</code> enabled and then another message
     * with a <code>MessageDeduplicationId</code> that is the same as the one generated
     * for the first <code>MessageDeduplicationId</code>, the two messages are treated
     * as duplicates and only one copy of the message is delivered. </p> </li> </ul>
     * <note> <p>The <code>MessageDeduplicationId</code> is available to the recipient
     * of the message (this can be useful for troubleshooting delivery issues).</p>
     * <p>If a message is sent successfully but the acknowledgement is lost and the
     * message is resent with the same <code>MessageDeduplicationId</code> after the
     * deduplication interval, Amazon SQS can't detect duplicate messages.</p> </note>
     * <p>The length of <code>MessageDeduplicationId</code> is 128 characters.
     * <code>MessageDeduplicationId</code> can contain alphanumeric characters
     * (<code>a-z</code>, <code>A-Z</code>, <code>0-9</code>) and punctuation
     * (<code>!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~</code>).</p> <p>For best
     * practices of using <code>MessageDeduplicationId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagededuplicationid-property">Using
     * the MessageDeduplicationId Property</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetMessageDeduplicationId() const{ return m_messageDeduplicationId; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages. If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, any messages sent with
     * the same <code>MessageDeduplicationId</code> are accepted successfully but
     * aren't delivered during the 5-minute deduplication interval. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">
     * Exactly-Once Processing</a> in the <i>Amazon SQS Developer Guide</i>.</p> <ul>
     * <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>,</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your queue, Amazon SQS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message). </p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the queue doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the queue has <code>ContentBasedDeduplication</code> set, your
     * <code>MessageDeduplicationId</code> overrides the generated one.</p> </li> </ul>
     * </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect, messages
     * with identical content sent within the deduplication interval are treated as
     * duplicates and only one copy of the message is delivered.</p> </li> <li> <p>You
     * can also use <code>ContentBasedDeduplication</code> for messages with identical
     * content to be treated as duplicates.</p> </li> <li> <p>If you send one message
     * with <code>ContentBasedDeduplication</code> enabled and then another message
     * with a <code>MessageDeduplicationId</code> that is the same as the one generated
     * for the first <code>MessageDeduplicationId</code>, the two messages are treated
     * as duplicates and only one copy of the message is delivered. </p> </li> </ul>
     * <note> <p>The <code>MessageDeduplicationId</code> is available to the recipient
     * of the message (this can be useful for troubleshooting delivery issues).</p>
     * <p>If a message is sent successfully but the acknowledgement is lost and the
     * message is resent with the same <code>MessageDeduplicationId</code> after the
     * deduplication interval, Amazon SQS can't detect duplicate messages.</p> </note>
     * <p>The length of <code>MessageDeduplicationId</code> is 128 characters.
     * <code>MessageDeduplicationId</code> can contain alphanumeric characters
     * (<code>a-z</code>, <code>A-Z</code>, <code>0-9</code>) and punctuation
     * (<code>!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~</code>).</p> <p>For best
     * practices of using <code>MessageDeduplicationId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagededuplicationid-property">Using
     * the MessageDeduplicationId Property</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>.</p>
     */
    inline void SetMessageDeduplicationId(const Aws::String& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = value; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages. If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, any messages sent with
     * the same <code>MessageDeduplicationId</code> are accepted successfully but
     * aren't delivered during the 5-minute deduplication interval. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">
     * Exactly-Once Processing</a> in the <i>Amazon SQS Developer Guide</i>.</p> <ul>
     * <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>,</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your queue, Amazon SQS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message). </p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the queue doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the queue has <code>ContentBasedDeduplication</code> set, your
     * <code>MessageDeduplicationId</code> overrides the generated one.</p> </li> </ul>
     * </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect, messages
     * with identical content sent within the deduplication interval are treated as
     * duplicates and only one copy of the message is delivered.</p> </li> <li> <p>You
     * can also use <code>ContentBasedDeduplication</code> for messages with identical
     * content to be treated as duplicates.</p> </li> <li> <p>If you send one message
     * with <code>ContentBasedDeduplication</code> enabled and then another message
     * with a <code>MessageDeduplicationId</code> that is the same as the one generated
     * for the first <code>MessageDeduplicationId</code>, the two messages are treated
     * as duplicates and only one copy of the message is delivered. </p> </li> </ul>
     * <note> <p>The <code>MessageDeduplicationId</code> is available to the recipient
     * of the message (this can be useful for troubleshooting delivery issues).</p>
     * <p>If a message is sent successfully but the acknowledgement is lost and the
     * message is resent with the same <code>MessageDeduplicationId</code> after the
     * deduplication interval, Amazon SQS can't detect duplicate messages.</p> </note>
     * <p>The length of <code>MessageDeduplicationId</code> is 128 characters.
     * <code>MessageDeduplicationId</code> can contain alphanumeric characters
     * (<code>a-z</code>, <code>A-Z</code>, <code>0-9</code>) and punctuation
     * (<code>!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~</code>).</p> <p>For best
     * practices of using <code>MessageDeduplicationId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagededuplicationid-property">Using
     * the MessageDeduplicationId Property</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>.</p>
     */
    inline void SetMessageDeduplicationId(Aws::String&& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = value; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages. If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, any messages sent with
     * the same <code>MessageDeduplicationId</code> are accepted successfully but
     * aren't delivered during the 5-minute deduplication interval. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">
     * Exactly-Once Processing</a> in the <i>Amazon SQS Developer Guide</i>.</p> <ul>
     * <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>,</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your queue, Amazon SQS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message). </p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the queue doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the queue has <code>ContentBasedDeduplication</code> set, your
     * <code>MessageDeduplicationId</code> overrides the generated one.</p> </li> </ul>
     * </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect, messages
     * with identical content sent within the deduplication interval are treated as
     * duplicates and only one copy of the message is delivered.</p> </li> <li> <p>You
     * can also use <code>ContentBasedDeduplication</code> for messages with identical
     * content to be treated as duplicates.</p> </li> <li> <p>If you send one message
     * with <code>ContentBasedDeduplication</code> enabled and then another message
     * with a <code>MessageDeduplicationId</code> that is the same as the one generated
     * for the first <code>MessageDeduplicationId</code>, the two messages are treated
     * as duplicates and only one copy of the message is delivered. </p> </li> </ul>
     * <note> <p>The <code>MessageDeduplicationId</code> is available to the recipient
     * of the message (this can be useful for troubleshooting delivery issues).</p>
     * <p>If a message is sent successfully but the acknowledgement is lost and the
     * message is resent with the same <code>MessageDeduplicationId</code> after the
     * deduplication interval, Amazon SQS can't detect duplicate messages.</p> </note>
     * <p>The length of <code>MessageDeduplicationId</code> is 128 characters.
     * <code>MessageDeduplicationId</code> can contain alphanumeric characters
     * (<code>a-z</code>, <code>A-Z</code>, <code>0-9</code>) and punctuation
     * (<code>!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~</code>).</p> <p>For best
     * practices of using <code>MessageDeduplicationId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagededuplicationid-property">Using
     * the MessageDeduplicationId Property</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>.</p>
     */
    inline void SetMessageDeduplicationId(const char* value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId.assign(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages. If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, any messages sent with
     * the same <code>MessageDeduplicationId</code> are accepted successfully but
     * aren't delivered during the 5-minute deduplication interval. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">
     * Exactly-Once Processing</a> in the <i>Amazon SQS Developer Guide</i>.</p> <ul>
     * <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>,</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your queue, Amazon SQS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message). </p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the queue doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the queue has <code>ContentBasedDeduplication</code> set, your
     * <code>MessageDeduplicationId</code> overrides the generated one.</p> </li> </ul>
     * </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect, messages
     * with identical content sent within the deduplication interval are treated as
     * duplicates and only one copy of the message is delivered.</p> </li> <li> <p>You
     * can also use <code>ContentBasedDeduplication</code> for messages with identical
     * content to be treated as duplicates.</p> </li> <li> <p>If you send one message
     * with <code>ContentBasedDeduplication</code> enabled and then another message
     * with a <code>MessageDeduplicationId</code> that is the same as the one generated
     * for the first <code>MessageDeduplicationId</code>, the two messages are treated
     * as duplicates and only one copy of the message is delivered. </p> </li> </ul>
     * <note> <p>The <code>MessageDeduplicationId</code> is available to the recipient
     * of the message (this can be useful for troubleshooting delivery issues).</p>
     * <p>If a message is sent successfully but the acknowledgement is lost and the
     * message is resent with the same <code>MessageDeduplicationId</code> after the
     * deduplication interval, Amazon SQS can't detect duplicate messages.</p> </note>
     * <p>The length of <code>MessageDeduplicationId</code> is 128 characters.
     * <code>MessageDeduplicationId</code> can contain alphanumeric characters
     * (<code>a-z</code>, <code>A-Z</code>, <code>0-9</code>) and punctuation
     * (<code>!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~</code>).</p> <p>For best
     * practices of using <code>MessageDeduplicationId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagededuplicationid-property">Using
     * the MessageDeduplicationId Property</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>.</p>
     */
    inline SendMessageRequest& WithMessageDeduplicationId(const Aws::String& value) { SetMessageDeduplicationId(value); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages. If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, any messages sent with
     * the same <code>MessageDeduplicationId</code> are accepted successfully but
     * aren't delivered during the 5-minute deduplication interval. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">
     * Exactly-Once Processing</a> in the <i>Amazon SQS Developer Guide</i>.</p> <ul>
     * <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>,</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your queue, Amazon SQS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message). </p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the queue doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the queue has <code>ContentBasedDeduplication</code> set, your
     * <code>MessageDeduplicationId</code> overrides the generated one.</p> </li> </ul>
     * </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect, messages
     * with identical content sent within the deduplication interval are treated as
     * duplicates and only one copy of the message is delivered.</p> </li> <li> <p>You
     * can also use <code>ContentBasedDeduplication</code> for messages with identical
     * content to be treated as duplicates.</p> </li> <li> <p>If you send one message
     * with <code>ContentBasedDeduplication</code> enabled and then another message
     * with a <code>MessageDeduplicationId</code> that is the same as the one generated
     * for the first <code>MessageDeduplicationId</code>, the two messages are treated
     * as duplicates and only one copy of the message is delivered. </p> </li> </ul>
     * <note> <p>The <code>MessageDeduplicationId</code> is available to the recipient
     * of the message (this can be useful for troubleshooting delivery issues).</p>
     * <p>If a message is sent successfully but the acknowledgement is lost and the
     * message is resent with the same <code>MessageDeduplicationId</code> after the
     * deduplication interval, Amazon SQS can't detect duplicate messages.</p> </note>
     * <p>The length of <code>MessageDeduplicationId</code> is 128 characters.
     * <code>MessageDeduplicationId</code> can contain alphanumeric characters
     * (<code>a-z</code>, <code>A-Z</code>, <code>0-9</code>) and punctuation
     * (<code>!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~</code>).</p> <p>For best
     * practices of using <code>MessageDeduplicationId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagededuplicationid-property">Using
     * the MessageDeduplicationId Property</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>.</p>
     */
    inline SendMessageRequest& WithMessageDeduplicationId(Aws::String&& value) { SetMessageDeduplicationId(value); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages. If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, any messages sent with
     * the same <code>MessageDeduplicationId</code> are accepted successfully but
     * aren't delivered during the 5-minute deduplication interval. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">
     * Exactly-Once Processing</a> in the <i>Amazon SQS Developer Guide</i>.</p> <ul>
     * <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>,</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your queue, Amazon SQS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message). </p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the queue doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the queue has <code>ContentBasedDeduplication</code> set, your
     * <code>MessageDeduplicationId</code> overrides the generated one.</p> </li> </ul>
     * </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect, messages
     * with identical content sent within the deduplication interval are treated as
     * duplicates and only one copy of the message is delivered.</p> </li> <li> <p>You
     * can also use <code>ContentBasedDeduplication</code> for messages with identical
     * content to be treated as duplicates.</p> </li> <li> <p>If you send one message
     * with <code>ContentBasedDeduplication</code> enabled and then another message
     * with a <code>MessageDeduplicationId</code> that is the same as the one generated
     * for the first <code>MessageDeduplicationId</code>, the two messages are treated
     * as duplicates and only one copy of the message is delivered. </p> </li> </ul>
     * <note> <p>The <code>MessageDeduplicationId</code> is available to the recipient
     * of the message (this can be useful for troubleshooting delivery issues).</p>
     * <p>If a message is sent successfully but the acknowledgement is lost and the
     * message is resent with the same <code>MessageDeduplicationId</code> after the
     * deduplication interval, Amazon SQS can't detect duplicate messages.</p> </note>
     * <p>The length of <code>MessageDeduplicationId</code> is 128 characters.
     * <code>MessageDeduplicationId</code> can contain alphanumeric characters
     * (<code>a-z</code>, <code>A-Z</code>, <code>0-9</code>) and punctuation
     * (<code>!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~</code>).</p> <p>For best
     * practices of using <code>MessageDeduplicationId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagededuplicationid-property">Using
     * the MessageDeduplicationId Property</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>.</p>
     */
    inline SendMessageRequest& WithMessageDeduplicationId(const char* value) { SetMessageDeduplicationId(value); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single queue, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple readers can process the queue, but the
     * session data of each user is processed in a FIFO fashion.</p> <ul> <li> <p>You
     * must associate a non-empty <code>MessageGroupId</code> with a message. If you
     * don't provide a <code>MessageGroupId</code>, the action fails.</p> </li> <li>
     * <p> <code>ReceiveMessage</code> might return messages with multiple
     * <code>MessageGroupId</code> values. For each <code>MessageGroupId</code>, the
     * messages are sorted by time sent. The caller can't specify a
     * <code>MessageGroupId</code>.</p> </li> </ul> <p>The length of
     * <code>MessageGroupId</code> is 128 characters. Valid values are alphanumeric
     * characters and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> <p>For best
     * practices of using <code>MessageGroupId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagegroupid-property">Using
     * the MessageGroupId Property</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetMessageGroupId() const{ return m_messageGroupId; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single queue, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple readers can process the queue, but the
     * session data of each user is processed in a FIFO fashion.</p> <ul> <li> <p>You
     * must associate a non-empty <code>MessageGroupId</code> with a message. If you
     * don't provide a <code>MessageGroupId</code>, the action fails.</p> </li> <li>
     * <p> <code>ReceiveMessage</code> might return messages with multiple
     * <code>MessageGroupId</code> values. For each <code>MessageGroupId</code>, the
     * messages are sorted by time sent. The caller can't specify a
     * <code>MessageGroupId</code>.</p> </li> </ul> <p>The length of
     * <code>MessageGroupId</code> is 128 characters. Valid values are alphanumeric
     * characters and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> <p>For best
     * practices of using <code>MessageGroupId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagegroupid-property">Using
     * the MessageGroupId Property</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline void SetMessageGroupId(const Aws::String& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = value; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single queue, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple readers can process the queue, but the
     * session data of each user is processed in a FIFO fashion.</p> <ul> <li> <p>You
     * must associate a non-empty <code>MessageGroupId</code> with a message. If you
     * don't provide a <code>MessageGroupId</code>, the action fails.</p> </li> <li>
     * <p> <code>ReceiveMessage</code> might return messages with multiple
     * <code>MessageGroupId</code> values. For each <code>MessageGroupId</code>, the
     * messages are sorted by time sent. The caller can't specify a
     * <code>MessageGroupId</code>.</p> </li> </ul> <p>The length of
     * <code>MessageGroupId</code> is 128 characters. Valid values are alphanumeric
     * characters and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> <p>For best
     * practices of using <code>MessageGroupId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagegroupid-property">Using
     * the MessageGroupId Property</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline void SetMessageGroupId(Aws::String&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = value; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single queue, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple readers can process the queue, but the
     * session data of each user is processed in a FIFO fashion.</p> <ul> <li> <p>You
     * must associate a non-empty <code>MessageGroupId</code> with a message. If you
     * don't provide a <code>MessageGroupId</code>, the action fails.</p> </li> <li>
     * <p> <code>ReceiveMessage</code> might return messages with multiple
     * <code>MessageGroupId</code> values. For each <code>MessageGroupId</code>, the
     * messages are sorted by time sent. The caller can't specify a
     * <code>MessageGroupId</code>.</p> </li> </ul> <p>The length of
     * <code>MessageGroupId</code> is 128 characters. Valid values are alphanumeric
     * characters and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> <p>For best
     * practices of using <code>MessageGroupId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagegroupid-property">Using
     * the MessageGroupId Property</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline void SetMessageGroupId(const char* value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId.assign(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single queue, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple readers can process the queue, but the
     * session data of each user is processed in a FIFO fashion.</p> <ul> <li> <p>You
     * must associate a non-empty <code>MessageGroupId</code> with a message. If you
     * don't provide a <code>MessageGroupId</code>, the action fails.</p> </li> <li>
     * <p> <code>ReceiveMessage</code> might return messages with multiple
     * <code>MessageGroupId</code> values. For each <code>MessageGroupId</code>, the
     * messages are sorted by time sent. The caller can't specify a
     * <code>MessageGroupId</code>.</p> </li> </ul> <p>The length of
     * <code>MessageGroupId</code> is 128 characters. Valid values are alphanumeric
     * characters and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> <p>For best
     * practices of using <code>MessageGroupId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagegroupid-property">Using
     * the MessageGroupId Property</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline SendMessageRequest& WithMessageGroupId(const Aws::String& value) { SetMessageGroupId(value); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single queue, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple readers can process the queue, but the
     * session data of each user is processed in a FIFO fashion.</p> <ul> <li> <p>You
     * must associate a non-empty <code>MessageGroupId</code> with a message. If you
     * don't provide a <code>MessageGroupId</code>, the action fails.</p> </li> <li>
     * <p> <code>ReceiveMessage</code> might return messages with multiple
     * <code>MessageGroupId</code> values. For each <code>MessageGroupId</code>, the
     * messages are sorted by time sent. The caller can't specify a
     * <code>MessageGroupId</code>.</p> </li> </ul> <p>The length of
     * <code>MessageGroupId</code> is 128 characters. Valid values are alphanumeric
     * characters and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> <p>For best
     * practices of using <code>MessageGroupId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagegroupid-property">Using
     * the MessageGroupId Property</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline SendMessageRequest& WithMessageGroupId(Aws::String&& value) { SetMessageGroupId(value); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single queue, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple readers can process the queue, but the
     * session data of each user is processed in a FIFO fashion.</p> <ul> <li> <p>You
     * must associate a non-empty <code>MessageGroupId</code> with a message. If you
     * don't provide a <code>MessageGroupId</code>, the action fails.</p> </li> <li>
     * <p> <code>ReceiveMessage</code> might return messages with multiple
     * <code>MessageGroupId</code> values. For each <code>MessageGroupId</code>, the
     * messages are sorted by time sent. The caller can't specify a
     * <code>MessageGroupId</code>.</p> </li> </ul> <p>The length of
     * <code>MessageGroupId</code> is 128 characters. Valid values are alphanumeric
     * characters and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> <p>For best
     * practices of using <code>MessageGroupId</code>, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queue-recommendations.html#using-messagegroupid-property">Using
     * the MessageGroupId Property</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline SendMessageRequest& WithMessageGroupId(const char* value) { SetMessageGroupId(value); return *this;}

  private:
    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;
    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet;
    int m_delaySeconds;
    bool m_delaySecondsHasBeenSet;
    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet;
    Aws::String m_messageDeduplicationId;
    bool m_messageDeduplicationIdHasBeenSet;
    Aws::String m_messageGroupId;
    bool m_messageGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
