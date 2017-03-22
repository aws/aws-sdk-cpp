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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/QueueAttributeName.h>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/GetQueueAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API GetQueueAttributesRequest : public SQSRequest
  {
  public:
    GetQueueAttributesRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs are case-sensitive.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs are case-sensitive.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs are case-sensitive.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs are case-sensitive.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs are case-sensitive.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs are case-sensitive.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesDelayed</code> - Returns the
     * approximate number of messages that are waiting to be added to the queue. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the
     * approximate number of messages that have not timed-out and aren't deleted. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>CreatedTimestamp</code> - Returns the time when the queue
     * was created in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>DelaySeconds</code> - Returns the default
     * delay on the queue in seconds.</p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> - Returns the time when the queue was last
     * changed in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>MaximumMessageSize</code> - Returns the
     * limit of how many bytes a message can contain before Amazon SQS rejects it.</p>
     * </li> <li> <p> <code>MessageRetentionPeriod</code> - Returns the number of
     * seconds for which Amazon SQS retains a message.</p> </li> <li> <p>
     * <code>Policy</code> - Returns the policy of the queue.</p> </li> <li> <p>
     * <code>QueueArn</code> - Returns the Amazon resource name (ARN) of the queue.</p>
     * </li> <li> <p> <code>ReceiveMessageWaitTimeSeconds</code> - Returns the number
     * of seconds for which the <code>ReceiveMessage</code> action waits for a message
     * to arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the
     * parameters for dead letter queue functionality of the source queue. For more
     * information about the redrive policy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>VisibilityTimeout</code> - Returns the visibility timeout
     * for the queue. For more information about the visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Returns whether content-based
     * deduplication is enabled for the queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul>
     */
    inline const Aws::Vector<QueueAttributeName>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesDelayed</code> - Returns the
     * approximate number of messages that are waiting to be added to the queue. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the
     * approximate number of messages that have not timed-out and aren't deleted. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>CreatedTimestamp</code> - Returns the time when the queue
     * was created in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>DelaySeconds</code> - Returns the default
     * delay on the queue in seconds.</p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> - Returns the time when the queue was last
     * changed in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>MaximumMessageSize</code> - Returns the
     * limit of how many bytes a message can contain before Amazon SQS rejects it.</p>
     * </li> <li> <p> <code>MessageRetentionPeriod</code> - Returns the number of
     * seconds for which Amazon SQS retains a message.</p> </li> <li> <p>
     * <code>Policy</code> - Returns the policy of the queue.</p> </li> <li> <p>
     * <code>QueueArn</code> - Returns the Amazon resource name (ARN) of the queue.</p>
     * </li> <li> <p> <code>ReceiveMessageWaitTimeSeconds</code> - Returns the number
     * of seconds for which the <code>ReceiveMessage</code> action waits for a message
     * to arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the
     * parameters for dead letter queue functionality of the source queue. For more
     * information about the redrive policy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>VisibilityTimeout</code> - Returns the visibility timeout
     * for the queue. For more information about the visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Returns whether content-based
     * deduplication is enabled for the queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul>
     */
    inline void SetAttributeNames(const Aws::Vector<QueueAttributeName>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesDelayed</code> - Returns the
     * approximate number of messages that are waiting to be added to the queue. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the
     * approximate number of messages that have not timed-out and aren't deleted. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>CreatedTimestamp</code> - Returns the time when the queue
     * was created in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>DelaySeconds</code> - Returns the default
     * delay on the queue in seconds.</p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> - Returns the time when the queue was last
     * changed in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>MaximumMessageSize</code> - Returns the
     * limit of how many bytes a message can contain before Amazon SQS rejects it.</p>
     * </li> <li> <p> <code>MessageRetentionPeriod</code> - Returns the number of
     * seconds for which Amazon SQS retains a message.</p> </li> <li> <p>
     * <code>Policy</code> - Returns the policy of the queue.</p> </li> <li> <p>
     * <code>QueueArn</code> - Returns the Amazon resource name (ARN) of the queue.</p>
     * </li> <li> <p> <code>ReceiveMessageWaitTimeSeconds</code> - Returns the number
     * of seconds for which the <code>ReceiveMessage</code> action waits for a message
     * to arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the
     * parameters for dead letter queue functionality of the source queue. For more
     * information about the redrive policy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>VisibilityTimeout</code> - Returns the visibility timeout
     * for the queue. For more information about the visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Returns whether content-based
     * deduplication is enabled for the queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul>
     */
    inline void SetAttributeNames(Aws::Vector<QueueAttributeName>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesDelayed</code> - Returns the
     * approximate number of messages that are waiting to be added to the queue. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the
     * approximate number of messages that have not timed-out and aren't deleted. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>CreatedTimestamp</code> - Returns the time when the queue
     * was created in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>DelaySeconds</code> - Returns the default
     * delay on the queue in seconds.</p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> - Returns the time when the queue was last
     * changed in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>MaximumMessageSize</code> - Returns the
     * limit of how many bytes a message can contain before Amazon SQS rejects it.</p>
     * </li> <li> <p> <code>MessageRetentionPeriod</code> - Returns the number of
     * seconds for which Amazon SQS retains a message.</p> </li> <li> <p>
     * <code>Policy</code> - Returns the policy of the queue.</p> </li> <li> <p>
     * <code>QueueArn</code> - Returns the Amazon resource name (ARN) of the queue.</p>
     * </li> <li> <p> <code>ReceiveMessageWaitTimeSeconds</code> - Returns the number
     * of seconds for which the <code>ReceiveMessage</code> action waits for a message
     * to arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the
     * parameters for dead letter queue functionality of the source queue. For more
     * information about the redrive policy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>VisibilityTimeout</code> - Returns the visibility timeout
     * for the queue. For more information about the visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Returns whether content-based
     * deduplication is enabled for the queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul>
     */
    inline GetQueueAttributesRequest& WithAttributeNames(const Aws::Vector<QueueAttributeName>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesDelayed</code> - Returns the
     * approximate number of messages that are waiting to be added to the queue. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the
     * approximate number of messages that have not timed-out and aren't deleted. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>CreatedTimestamp</code> - Returns the time when the queue
     * was created in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>DelaySeconds</code> - Returns the default
     * delay on the queue in seconds.</p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> - Returns the time when the queue was last
     * changed in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>MaximumMessageSize</code> - Returns the
     * limit of how many bytes a message can contain before Amazon SQS rejects it.</p>
     * </li> <li> <p> <code>MessageRetentionPeriod</code> - Returns the number of
     * seconds for which Amazon SQS retains a message.</p> </li> <li> <p>
     * <code>Policy</code> - Returns the policy of the queue.</p> </li> <li> <p>
     * <code>QueueArn</code> - Returns the Amazon resource name (ARN) of the queue.</p>
     * </li> <li> <p> <code>ReceiveMessageWaitTimeSeconds</code> - Returns the number
     * of seconds for which the <code>ReceiveMessage</code> action waits for a message
     * to arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the
     * parameters for dead letter queue functionality of the source queue. For more
     * information about the redrive policy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>VisibilityTimeout</code> - Returns the visibility timeout
     * for the queue. For more information about the visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Returns whether content-based
     * deduplication is enabled for the queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul>
     */
    inline GetQueueAttributesRequest& WithAttributeNames(Aws::Vector<QueueAttributeName>&& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesDelayed</code> - Returns the
     * approximate number of messages that are waiting to be added to the queue. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the
     * approximate number of messages that have not timed-out and aren't deleted. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>CreatedTimestamp</code> - Returns the time when the queue
     * was created in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>DelaySeconds</code> - Returns the default
     * delay on the queue in seconds.</p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> - Returns the time when the queue was last
     * changed in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>MaximumMessageSize</code> - Returns the
     * limit of how many bytes a message can contain before Amazon SQS rejects it.</p>
     * </li> <li> <p> <code>MessageRetentionPeriod</code> - Returns the number of
     * seconds for which Amazon SQS retains a message.</p> </li> <li> <p>
     * <code>Policy</code> - Returns the policy of the queue.</p> </li> <li> <p>
     * <code>QueueArn</code> - Returns the Amazon resource name (ARN) of the queue.</p>
     * </li> <li> <p> <code>ReceiveMessageWaitTimeSeconds</code> - Returns the number
     * of seconds for which the <code>ReceiveMessage</code> action waits for a message
     * to arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the
     * parameters for dead letter queue functionality of the source queue. For more
     * information about the redrive policy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>VisibilityTimeout</code> - Returns the visibility timeout
     * for the queue. For more information about the visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Returns whether content-based
     * deduplication is enabled for the queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul>
     */
    inline GetQueueAttributesRequest& AddAttributeNames(const QueueAttributeName& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesDelayed</code> - Returns the
     * approximate number of messages that are waiting to be added to the queue. </p>
     * </li> <li> <p> <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the
     * approximate number of messages that have not timed-out and aren't deleted. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-resources-required-process-messages.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>CreatedTimestamp</code> - Returns the time when the queue
     * was created in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>DelaySeconds</code> - Returns the default
     * delay on the queue in seconds.</p> </li> <li> <p>
     * <code>LastModifiedTimestamp</code> - Returns the time when the queue was last
     * changed in seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch
     * time</a>).</p> </li> <li> <p> <code>MaximumMessageSize</code> - Returns the
     * limit of how many bytes a message can contain before Amazon SQS rejects it.</p>
     * </li> <li> <p> <code>MessageRetentionPeriod</code> - Returns the number of
     * seconds for which Amazon SQS retains a message.</p> </li> <li> <p>
     * <code>Policy</code> - Returns the policy of the queue.</p> </li> <li> <p>
     * <code>QueueArn</code> - Returns the Amazon resource name (ARN) of the queue.</p>
     * </li> <li> <p> <code>ReceiveMessageWaitTimeSeconds</code> - Returns the number
     * of seconds for which the <code>ReceiveMessage</code> action waits for a message
     * to arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the
     * parameters for dead letter queue functionality of the source queue. For more
     * information about the redrive policy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     * </li> <li> <p> <code>VisibilityTimeout</code> - Returns the visibility timeout
     * for the queue. For more information about the visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul> <p>The
     * following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon SQS Developer Guide</i>.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> - Returns whether content-based
     * deduplication is enabled for the queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon SQS Developer Guide</i>. </p> </li> </ul>
     */
    inline GetQueueAttributesRequest& AddAttributeNames(QueueAttributeName&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

  private:
    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;
    Aws::Vector<QueueAttributeName> m_attributeNames;
    bool m_attributeNamesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
