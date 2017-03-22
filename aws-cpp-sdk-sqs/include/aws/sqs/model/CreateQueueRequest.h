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
#include <aws/sqs/model/QueueAttributeName.h>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/CreateQueueRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API CreateQueueRequest : public SQSRequest
  {
  public:
    CreateQueueRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The name of the new queue. The following limits apply to this name:</p> <ul>
     * <li> <p>A queue name can have up to 80 characters.</p> </li> <li> <p>Valid
     * values: alphanumeric characters, hyphens (<code>-</code>), and underscores
     * (<code>_</code>).</p> </li> <li> <p>A FIFO queue name must end with the
     * <code>.fifo</code> suffix.</p> </li> </ul> <p>Queue names are
     * case-sensitive.</p>
     */
    inline const Aws::String& GetQueueName() const{ return m_queueName; }

    /**
     * <p>The name of the new queue. The following limits apply to this name:</p> <ul>
     * <li> <p>A queue name can have up to 80 characters.</p> </li> <li> <p>Valid
     * values: alphanumeric characters, hyphens (<code>-</code>), and underscores
     * (<code>_</code>).</p> </li> <li> <p>A FIFO queue name must end with the
     * <code>.fifo</code> suffix.</p> </li> </ul> <p>Queue names are
     * case-sensitive.</p>
     */
    inline void SetQueueName(const Aws::String& value) { m_queueNameHasBeenSet = true; m_queueName = value; }

    /**
     * <p>The name of the new queue. The following limits apply to this name:</p> <ul>
     * <li> <p>A queue name can have up to 80 characters.</p> </li> <li> <p>Valid
     * values: alphanumeric characters, hyphens (<code>-</code>), and underscores
     * (<code>_</code>).</p> </li> <li> <p>A FIFO queue name must end with the
     * <code>.fifo</code> suffix.</p> </li> </ul> <p>Queue names are
     * case-sensitive.</p>
     */
    inline void SetQueueName(Aws::String&& value) { m_queueNameHasBeenSet = true; m_queueName = value; }

    /**
     * <p>The name of the new queue. The following limits apply to this name:</p> <ul>
     * <li> <p>A queue name can have up to 80 characters.</p> </li> <li> <p>Valid
     * values: alphanumeric characters, hyphens (<code>-</code>), and underscores
     * (<code>_</code>).</p> </li> <li> <p>A FIFO queue name must end with the
     * <code>.fifo</code> suffix.</p> </li> </ul> <p>Queue names are
     * case-sensitive.</p>
     */
    inline void SetQueueName(const char* value) { m_queueNameHasBeenSet = true; m_queueName.assign(value); }

    /**
     * <p>The name of the new queue. The following limits apply to this name:</p> <ul>
     * <li> <p>A queue name can have up to 80 characters.</p> </li> <li> <p>Valid
     * values: alphanumeric characters, hyphens (<code>-</code>), and underscores
     * (<code>_</code>).</p> </li> <li> <p>A FIFO queue name must end with the
     * <code>.fifo</code> suffix.</p> </li> </ul> <p>Queue names are
     * case-sensitive.</p>
     */
    inline CreateQueueRequest& WithQueueName(const Aws::String& value) { SetQueueName(value); return *this;}

    /**
     * <p>The name of the new queue. The following limits apply to this name:</p> <ul>
     * <li> <p>A queue name can have up to 80 characters.</p> </li> <li> <p>Valid
     * values: alphanumeric characters, hyphens (<code>-</code>), and underscores
     * (<code>_</code>).</p> </li> <li> <p>A FIFO queue name must end with the
     * <code>.fifo</code> suffix.</p> </li> </ul> <p>Queue names are
     * case-sensitive.</p>
     */
    inline CreateQueueRequest& WithQueueName(Aws::String&& value) { SetQueueName(value); return *this;}

    /**
     * <p>The name of the new queue. The following limits apply to this name:</p> <ul>
     * <li> <p>A queue name can have up to 80 characters.</p> </li> <li> <p>Valid
     * values: alphanumeric characters, hyphens (<code>-</code>), and underscores
     * (<code>_</code>).</p> </li> <li> <p>A FIFO queue name must end with the
     * <code>.fifo</code> suffix.</p> </li> </ul> <p>Queue names are
     * case-sensitive.</p>
     */
    inline CreateQueueRequest& WithQueueName(const char* value) { SetQueueName(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline const Aws::Map<QueueAttributeName, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline CreateQueueRequest& WithAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline CreateQueueRequest& WithAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline CreateQueueRequest& AddAttributes(const QueueAttributeName& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline CreateQueueRequest& AddAttributes(QueueAttributeName&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline CreateQueueRequest& AddAttributes(const QueueAttributeName& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline CreateQueueRequest& AddAttributes(QueueAttributeName&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline CreateQueueRequest& AddAttributes(QueueAttributeName&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateQueue</code> action uses:</p> <ul> <li> <p>
     * <code>DelaySeconds</code> - The number of seconds for which the delivery of all
     * messages in the queue is delayed. Valid values: An integer from 0 to 900 seconds
     * (15 minutes). The default is 0 (zero). </p> </li> <li> <p>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. Valid values: An integer from 1,024 bytes
     * (1 KiB) to 262,144 bytes (256 KiB). The default is 262,144 (256 KiB). </p> </li>
     * <li> <p> <code>MessageRetentionPeriod</code> - The number of seconds for which
     * Amazon SQS retains a message. Valid values: An integer from 60 seconds (1
     * minute) to 1,209,600 seconds (14 days). The default is 345,600 (4 days). </p>
     * </li> <li> <p> <code>Policy</code> - The queue's policy. A valid AWS policy. For
     * more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>. </p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The number of seconds for which a
     * <code> <a>ReceiveMessage</a> </code> action waits for a message to arrive. Valid
     * values: An integer from 0 to 20 (seconds). The default is 0 (zero). </p> </li>
     * <li> <p> <code>RedrivePolicy</code> - The parameters for the dead letter queue
     * functionality of the source queue. For more information about the redrive policy
     * and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * <note> <p>The dead letter queue of a FIFO queue must also be a FIFO queue.
     * Similarly, the dead letter queue of a standard queue must also be a standard
     * queue.</p> </note> </li> <li> <p> <code>VisibilityTimeout</code> - The
     * visibility timeout for the queue. Valid values: An integer from 0 to 43,200 (12
     * hours). The default is 30. For more information about the visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Designates a queue as FIFO. You can provide this attribute only during queue
     * creation. You can't change it for an existing queue. When you set this
     * attribute, you must provide a <code>MessageGroupId</code> explicitly.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Enables content-based deduplication.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> <ul> <li> <p>Every
     * message must have a unique <code>MessageDeduplicationId</code>,</p> <ul> <li>
     * <p>You may provide a <code>MessageDeduplicationId</code> explicitly.</p> </li>
     * <li> <p>If you aren't able to provide a <code>MessageDeduplicationId</code> and
     * you enable <code>ContentBasedDeduplication</code> for your queue, Amazon SQS
     * uses a SHA-256 hash to generate the <code>MessageDeduplicationId</code> using
     * the body of the message (but not the attributes of the message). </p> </li> <li>
     * <p>If you don't provide a <code>MessageDeduplicationId</code> and the queue
     * doesn't have <code>ContentBasedDeduplication</code> set, the action fails with
     * an error.</p> </li> <li> <p>If the queue has
     * <code>ContentBasedDeduplication</code> set, your
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
     * </li> </ul> <p>Any other valid special request parameters (such as the
     * following) are ignored:</p> <ul> <li> <p>
     * <code>ApproximateNumberOfMessages</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> </p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> </p> </li> <li> <p> <code>QueueArn</code>
     * </p> </li> </ul>
     */
    inline CreateQueueRequest& AddAttributes(const QueueAttributeName& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

  private:
    Aws::String m_queueName;
    bool m_queueNameHasBeenSet;
    Aws::Map<QueueAttributeName, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
