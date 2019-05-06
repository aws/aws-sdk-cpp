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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/QueueAttributeName.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQueueAttributes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue whose attribute information is retrieved.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * messages available for retrieval from the queue.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> - Returns the approximate number
     * of messages in the queue that are delayed and not available for reading
     * immediately. This can happen when the queue is configured as a delay queue or
     * when a message has been sent with a delay parameter.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the approximate
     * number of messages that are in flight. Messages are considered to be <i>in
     * flight</i> if they have been sent to a client but have not yet been deleted or
     * have not yet reached the end of their visibility window. </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> - Returns the time when the queue was created in
     * seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p>
     * </li> <li> <p> <code>DelaySeconds</code> - Returns the default delay on the
     * queue in seconds.</p> </li> <li> <p> <code>LastModifiedTimestamp</code> -
     * Returns the time when the queue was last changed in seconds (<a
     * href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p> </li> <li>
     * <p> <code>MaximumMessageSize</code> - Returns the limit of how many bytes a
     * message can contain before Amazon SQS rejects it.</p> </li> <li> <p>
     * <code>MessageRetentionPeriod</code> - Returns the length of time, in seconds,
     * for which Amazon SQS retains a message.</p> </li> <li> <p> <code>Policy</code> -
     * Returns the policy of the queue.</p> </li> <li> <p> <code>QueueArn</code> -
     * Returns the Amazon resource name (ARN) of the queue.</p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - Returns the length of time, in
     * seconds, for which the <code>ReceiveMessage</code> action waits for a message to
     * arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the string that
     * includes the parameters for dead-letter queue functionality of the source queue.
     * For more information about the redrive policy and dead-letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>. </p> <ul> <li> <p> <code>deadLetterTargetArn</code> - The
     * Amazon Resource Name (ARN) of the dead-letter queue to which Amazon SQS moves
     * messages after the value of <code>maxReceiveCount</code> is exceeded.</p> </li>
     * <li> <p> <code>maxReceiveCount</code> - The number of times a message is
     * delivered to the source queue before being moved to the dead-letter queue. When
     * the <code>ReceiveCount</code> for a message exceeds the
     * <code>maxReceiveCount</code> for a queue, Amazon SQS moves the message to the
     * dead-letter-queue.</p> </li> </ul> </li> <li> <p> <code>VisibilityTimeout</code>
     * - Returns the visibility timeout for the queue. For more information about the
     * visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul> <p>The following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - Returns the ID of an AWS-managed
     * customer master key (CMK) for Amazon SQS or a custom CMK. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-sse-key-terms">Key
     * Terms</a>. </p> </li> <li> <p> <code>KmsDataKeyReusePeriodSeconds</code> -
     * Returns the length of time, in seconds, for which Amazon SQS can reuse a data
     * key to encrypt or decrypt messages before calling AWS KMS again. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-how-does-the-data-key-reuse-period-work">How
     * Does the Data Key Reuse Period Work?</a>. </p> </li> </ul> <p>The following
     * attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
     * <note> <p>To determine whether a queue is <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
     * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
     * suffix.</p> </note> </li> <li> <p> <code>ContentBasedDeduplication</code> -
     * Returns whether content-based deduplication is enabled for the queue. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul>
     */
    inline const Aws::Vector<QueueAttributeName>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * messages available for retrieval from the queue.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> - Returns the approximate number
     * of messages in the queue that are delayed and not available for reading
     * immediately. This can happen when the queue is configured as a delay queue or
     * when a message has been sent with a delay parameter.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the approximate
     * number of messages that are in flight. Messages are considered to be <i>in
     * flight</i> if they have been sent to a client but have not yet been deleted or
     * have not yet reached the end of their visibility window. </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> - Returns the time when the queue was created in
     * seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p>
     * </li> <li> <p> <code>DelaySeconds</code> - Returns the default delay on the
     * queue in seconds.</p> </li> <li> <p> <code>LastModifiedTimestamp</code> -
     * Returns the time when the queue was last changed in seconds (<a
     * href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p> </li> <li>
     * <p> <code>MaximumMessageSize</code> - Returns the limit of how many bytes a
     * message can contain before Amazon SQS rejects it.</p> </li> <li> <p>
     * <code>MessageRetentionPeriod</code> - Returns the length of time, in seconds,
     * for which Amazon SQS retains a message.</p> </li> <li> <p> <code>Policy</code> -
     * Returns the policy of the queue.</p> </li> <li> <p> <code>QueueArn</code> -
     * Returns the Amazon resource name (ARN) of the queue.</p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - Returns the length of time, in
     * seconds, for which the <code>ReceiveMessage</code> action waits for a message to
     * arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the string that
     * includes the parameters for dead-letter queue functionality of the source queue.
     * For more information about the redrive policy and dead-letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>. </p> <ul> <li> <p> <code>deadLetterTargetArn</code> - The
     * Amazon Resource Name (ARN) of the dead-letter queue to which Amazon SQS moves
     * messages after the value of <code>maxReceiveCount</code> is exceeded.</p> </li>
     * <li> <p> <code>maxReceiveCount</code> - The number of times a message is
     * delivered to the source queue before being moved to the dead-letter queue. When
     * the <code>ReceiveCount</code> for a message exceeds the
     * <code>maxReceiveCount</code> for a queue, Amazon SQS moves the message to the
     * dead-letter-queue.</p> </li> </ul> </li> <li> <p> <code>VisibilityTimeout</code>
     * - Returns the visibility timeout for the queue. For more information about the
     * visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul> <p>The following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - Returns the ID of an AWS-managed
     * customer master key (CMK) for Amazon SQS or a custom CMK. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-sse-key-terms">Key
     * Terms</a>. </p> </li> <li> <p> <code>KmsDataKeyReusePeriodSeconds</code> -
     * Returns the length of time, in seconds, for which Amazon SQS can reuse a data
     * key to encrypt or decrypt messages before calling AWS KMS again. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-how-does-the-data-key-reuse-period-work">How
     * Does the Data Key Reuse Period Work?</a>. </p> </li> </ul> <p>The following
     * attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
     * <note> <p>To determine whether a queue is <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
     * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
     * suffix.</p> </note> </li> <li> <p> <code>ContentBasedDeduplication</code> -
     * Returns whether content-based deduplication is enabled for the queue. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul>
     */
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * messages available for retrieval from the queue.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> - Returns the approximate number
     * of messages in the queue that are delayed and not available for reading
     * immediately. This can happen when the queue is configured as a delay queue or
     * when a message has been sent with a delay parameter.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the approximate
     * number of messages that are in flight. Messages are considered to be <i>in
     * flight</i> if they have been sent to a client but have not yet been deleted or
     * have not yet reached the end of their visibility window. </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> - Returns the time when the queue was created in
     * seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p>
     * </li> <li> <p> <code>DelaySeconds</code> - Returns the default delay on the
     * queue in seconds.</p> </li> <li> <p> <code>LastModifiedTimestamp</code> -
     * Returns the time when the queue was last changed in seconds (<a
     * href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p> </li> <li>
     * <p> <code>MaximumMessageSize</code> - Returns the limit of how many bytes a
     * message can contain before Amazon SQS rejects it.</p> </li> <li> <p>
     * <code>MessageRetentionPeriod</code> - Returns the length of time, in seconds,
     * for which Amazon SQS retains a message.</p> </li> <li> <p> <code>Policy</code> -
     * Returns the policy of the queue.</p> </li> <li> <p> <code>QueueArn</code> -
     * Returns the Amazon resource name (ARN) of the queue.</p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - Returns the length of time, in
     * seconds, for which the <code>ReceiveMessage</code> action waits for a message to
     * arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the string that
     * includes the parameters for dead-letter queue functionality of the source queue.
     * For more information about the redrive policy and dead-letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>. </p> <ul> <li> <p> <code>deadLetterTargetArn</code> - The
     * Amazon Resource Name (ARN) of the dead-letter queue to which Amazon SQS moves
     * messages after the value of <code>maxReceiveCount</code> is exceeded.</p> </li>
     * <li> <p> <code>maxReceiveCount</code> - The number of times a message is
     * delivered to the source queue before being moved to the dead-letter queue. When
     * the <code>ReceiveCount</code> for a message exceeds the
     * <code>maxReceiveCount</code> for a queue, Amazon SQS moves the message to the
     * dead-letter-queue.</p> </li> </ul> </li> <li> <p> <code>VisibilityTimeout</code>
     * - Returns the visibility timeout for the queue. For more information about the
     * visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul> <p>The following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - Returns the ID of an AWS-managed
     * customer master key (CMK) for Amazon SQS or a custom CMK. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-sse-key-terms">Key
     * Terms</a>. </p> </li> <li> <p> <code>KmsDataKeyReusePeriodSeconds</code> -
     * Returns the length of time, in seconds, for which Amazon SQS can reuse a data
     * key to encrypt or decrypt messages before calling AWS KMS again. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-how-does-the-data-key-reuse-period-work">How
     * Does the Data Key Reuse Period Work?</a>. </p> </li> </ul> <p>The following
     * attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
     * <note> <p>To determine whether a queue is <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
     * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
     * suffix.</p> </note> </li> <li> <p> <code>ContentBasedDeduplication</code> -
     * Returns whether content-based deduplication is enabled for the queue. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul>
     */
    inline void SetAttributeNames(const Aws::Vector<QueueAttributeName>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * messages available for retrieval from the queue.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> - Returns the approximate number
     * of messages in the queue that are delayed and not available for reading
     * immediately. This can happen when the queue is configured as a delay queue or
     * when a message has been sent with a delay parameter.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the approximate
     * number of messages that are in flight. Messages are considered to be <i>in
     * flight</i> if they have been sent to a client but have not yet been deleted or
     * have not yet reached the end of their visibility window. </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> - Returns the time when the queue was created in
     * seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p>
     * </li> <li> <p> <code>DelaySeconds</code> - Returns the default delay on the
     * queue in seconds.</p> </li> <li> <p> <code>LastModifiedTimestamp</code> -
     * Returns the time when the queue was last changed in seconds (<a
     * href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p> </li> <li>
     * <p> <code>MaximumMessageSize</code> - Returns the limit of how many bytes a
     * message can contain before Amazon SQS rejects it.</p> </li> <li> <p>
     * <code>MessageRetentionPeriod</code> - Returns the length of time, in seconds,
     * for which Amazon SQS retains a message.</p> </li> <li> <p> <code>Policy</code> -
     * Returns the policy of the queue.</p> </li> <li> <p> <code>QueueArn</code> -
     * Returns the Amazon resource name (ARN) of the queue.</p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - Returns the length of time, in
     * seconds, for which the <code>ReceiveMessage</code> action waits for a message to
     * arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the string that
     * includes the parameters for dead-letter queue functionality of the source queue.
     * For more information about the redrive policy and dead-letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>. </p> <ul> <li> <p> <code>deadLetterTargetArn</code> - The
     * Amazon Resource Name (ARN) of the dead-letter queue to which Amazon SQS moves
     * messages after the value of <code>maxReceiveCount</code> is exceeded.</p> </li>
     * <li> <p> <code>maxReceiveCount</code> - The number of times a message is
     * delivered to the source queue before being moved to the dead-letter queue. When
     * the <code>ReceiveCount</code> for a message exceeds the
     * <code>maxReceiveCount</code> for a queue, Amazon SQS moves the message to the
     * dead-letter-queue.</p> </li> </ul> </li> <li> <p> <code>VisibilityTimeout</code>
     * - Returns the visibility timeout for the queue. For more information about the
     * visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul> <p>The following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - Returns the ID of an AWS-managed
     * customer master key (CMK) for Amazon SQS or a custom CMK. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-sse-key-terms">Key
     * Terms</a>. </p> </li> <li> <p> <code>KmsDataKeyReusePeriodSeconds</code> -
     * Returns the length of time, in seconds, for which Amazon SQS can reuse a data
     * key to encrypt or decrypt messages before calling AWS KMS again. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-how-does-the-data-key-reuse-period-work">How
     * Does the Data Key Reuse Period Work?</a>. </p> </li> </ul> <p>The following
     * attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
     * <note> <p>To determine whether a queue is <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
     * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
     * suffix.</p> </note> </li> <li> <p> <code>ContentBasedDeduplication</code> -
     * Returns whether content-based deduplication is enabled for the queue. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul>
     */
    inline void SetAttributeNames(Aws::Vector<QueueAttributeName>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * messages available for retrieval from the queue.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> - Returns the approximate number
     * of messages in the queue that are delayed and not available for reading
     * immediately. This can happen when the queue is configured as a delay queue or
     * when a message has been sent with a delay parameter.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the approximate
     * number of messages that are in flight. Messages are considered to be <i>in
     * flight</i> if they have been sent to a client but have not yet been deleted or
     * have not yet reached the end of their visibility window. </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> - Returns the time when the queue was created in
     * seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p>
     * </li> <li> <p> <code>DelaySeconds</code> - Returns the default delay on the
     * queue in seconds.</p> </li> <li> <p> <code>LastModifiedTimestamp</code> -
     * Returns the time when the queue was last changed in seconds (<a
     * href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p> </li> <li>
     * <p> <code>MaximumMessageSize</code> - Returns the limit of how many bytes a
     * message can contain before Amazon SQS rejects it.</p> </li> <li> <p>
     * <code>MessageRetentionPeriod</code> - Returns the length of time, in seconds,
     * for which Amazon SQS retains a message.</p> </li> <li> <p> <code>Policy</code> -
     * Returns the policy of the queue.</p> </li> <li> <p> <code>QueueArn</code> -
     * Returns the Amazon resource name (ARN) of the queue.</p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - Returns the length of time, in
     * seconds, for which the <code>ReceiveMessage</code> action waits for a message to
     * arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the string that
     * includes the parameters for dead-letter queue functionality of the source queue.
     * For more information about the redrive policy and dead-letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>. </p> <ul> <li> <p> <code>deadLetterTargetArn</code> - The
     * Amazon Resource Name (ARN) of the dead-letter queue to which Amazon SQS moves
     * messages after the value of <code>maxReceiveCount</code> is exceeded.</p> </li>
     * <li> <p> <code>maxReceiveCount</code> - The number of times a message is
     * delivered to the source queue before being moved to the dead-letter queue. When
     * the <code>ReceiveCount</code> for a message exceeds the
     * <code>maxReceiveCount</code> for a queue, Amazon SQS moves the message to the
     * dead-letter-queue.</p> </li> </ul> </li> <li> <p> <code>VisibilityTimeout</code>
     * - Returns the visibility timeout for the queue. For more information about the
     * visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul> <p>The following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - Returns the ID of an AWS-managed
     * customer master key (CMK) for Amazon SQS or a custom CMK. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-sse-key-terms">Key
     * Terms</a>. </p> </li> <li> <p> <code>KmsDataKeyReusePeriodSeconds</code> -
     * Returns the length of time, in seconds, for which Amazon SQS can reuse a data
     * key to encrypt or decrypt messages before calling AWS KMS again. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-how-does-the-data-key-reuse-period-work">How
     * Does the Data Key Reuse Period Work?</a>. </p> </li> </ul> <p>The following
     * attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
     * <note> <p>To determine whether a queue is <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
     * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
     * suffix.</p> </note> </li> <li> <p> <code>ContentBasedDeduplication</code> -
     * Returns whether content-based deduplication is enabled for the queue. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul>
     */
    inline GetQueueAttributesRequest& WithAttributeNames(const Aws::Vector<QueueAttributeName>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * messages available for retrieval from the queue.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> - Returns the approximate number
     * of messages in the queue that are delayed and not available for reading
     * immediately. This can happen when the queue is configured as a delay queue or
     * when a message has been sent with a delay parameter.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the approximate
     * number of messages that are in flight. Messages are considered to be <i>in
     * flight</i> if they have been sent to a client but have not yet been deleted or
     * have not yet reached the end of their visibility window. </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> - Returns the time when the queue was created in
     * seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p>
     * </li> <li> <p> <code>DelaySeconds</code> - Returns the default delay on the
     * queue in seconds.</p> </li> <li> <p> <code>LastModifiedTimestamp</code> -
     * Returns the time when the queue was last changed in seconds (<a
     * href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p> </li> <li>
     * <p> <code>MaximumMessageSize</code> - Returns the limit of how many bytes a
     * message can contain before Amazon SQS rejects it.</p> </li> <li> <p>
     * <code>MessageRetentionPeriod</code> - Returns the length of time, in seconds,
     * for which Amazon SQS retains a message.</p> </li> <li> <p> <code>Policy</code> -
     * Returns the policy of the queue.</p> </li> <li> <p> <code>QueueArn</code> -
     * Returns the Amazon resource name (ARN) of the queue.</p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - Returns the length of time, in
     * seconds, for which the <code>ReceiveMessage</code> action waits for a message to
     * arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the string that
     * includes the parameters for dead-letter queue functionality of the source queue.
     * For more information about the redrive policy and dead-letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>. </p> <ul> <li> <p> <code>deadLetterTargetArn</code> - The
     * Amazon Resource Name (ARN) of the dead-letter queue to which Amazon SQS moves
     * messages after the value of <code>maxReceiveCount</code> is exceeded.</p> </li>
     * <li> <p> <code>maxReceiveCount</code> - The number of times a message is
     * delivered to the source queue before being moved to the dead-letter queue. When
     * the <code>ReceiveCount</code> for a message exceeds the
     * <code>maxReceiveCount</code> for a queue, Amazon SQS moves the message to the
     * dead-letter-queue.</p> </li> </ul> </li> <li> <p> <code>VisibilityTimeout</code>
     * - Returns the visibility timeout for the queue. For more information about the
     * visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul> <p>The following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - Returns the ID of an AWS-managed
     * customer master key (CMK) for Amazon SQS or a custom CMK. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-sse-key-terms">Key
     * Terms</a>. </p> </li> <li> <p> <code>KmsDataKeyReusePeriodSeconds</code> -
     * Returns the length of time, in seconds, for which Amazon SQS can reuse a data
     * key to encrypt or decrypt messages before calling AWS KMS again. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-how-does-the-data-key-reuse-period-work">How
     * Does the Data Key Reuse Period Work?</a>. </p> </li> </ul> <p>The following
     * attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
     * <note> <p>To determine whether a queue is <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
     * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
     * suffix.</p> </note> </li> <li> <p> <code>ContentBasedDeduplication</code> -
     * Returns whether content-based deduplication is enabled for the queue. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul>
     */
    inline GetQueueAttributesRequest& WithAttributeNames(Aws::Vector<QueueAttributeName>&& value) { SetAttributeNames(std::move(value)); return *this;}

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * messages available for retrieval from the queue.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> - Returns the approximate number
     * of messages in the queue that are delayed and not available for reading
     * immediately. This can happen when the queue is configured as a delay queue or
     * when a message has been sent with a delay parameter.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the approximate
     * number of messages that are in flight. Messages are considered to be <i>in
     * flight</i> if they have been sent to a client but have not yet been deleted or
     * have not yet reached the end of their visibility window. </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> - Returns the time when the queue was created in
     * seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p>
     * </li> <li> <p> <code>DelaySeconds</code> - Returns the default delay on the
     * queue in seconds.</p> </li> <li> <p> <code>LastModifiedTimestamp</code> -
     * Returns the time when the queue was last changed in seconds (<a
     * href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p> </li> <li>
     * <p> <code>MaximumMessageSize</code> - Returns the limit of how many bytes a
     * message can contain before Amazon SQS rejects it.</p> </li> <li> <p>
     * <code>MessageRetentionPeriod</code> - Returns the length of time, in seconds,
     * for which Amazon SQS retains a message.</p> </li> <li> <p> <code>Policy</code> -
     * Returns the policy of the queue.</p> </li> <li> <p> <code>QueueArn</code> -
     * Returns the Amazon resource name (ARN) of the queue.</p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - Returns the length of time, in
     * seconds, for which the <code>ReceiveMessage</code> action waits for a message to
     * arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the string that
     * includes the parameters for dead-letter queue functionality of the source queue.
     * For more information about the redrive policy and dead-letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>. </p> <ul> <li> <p> <code>deadLetterTargetArn</code> - The
     * Amazon Resource Name (ARN) of the dead-letter queue to which Amazon SQS moves
     * messages after the value of <code>maxReceiveCount</code> is exceeded.</p> </li>
     * <li> <p> <code>maxReceiveCount</code> - The number of times a message is
     * delivered to the source queue before being moved to the dead-letter queue. When
     * the <code>ReceiveCount</code> for a message exceeds the
     * <code>maxReceiveCount</code> for a queue, Amazon SQS moves the message to the
     * dead-letter-queue.</p> </li> </ul> </li> <li> <p> <code>VisibilityTimeout</code>
     * - Returns the visibility timeout for the queue. For more information about the
     * visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul> <p>The following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - Returns the ID of an AWS-managed
     * customer master key (CMK) for Amazon SQS or a custom CMK. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-sse-key-terms">Key
     * Terms</a>. </p> </li> <li> <p> <code>KmsDataKeyReusePeriodSeconds</code> -
     * Returns the length of time, in seconds, for which Amazon SQS can reuse a data
     * key to encrypt or decrypt messages before calling AWS KMS again. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-how-does-the-data-key-reuse-period-work">How
     * Does the Data Key Reuse Period Work?</a>. </p> </li> </ul> <p>The following
     * attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
     * <note> <p>To determine whether a queue is <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
     * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
     * suffix.</p> </note> </li> <li> <p> <code>ContentBasedDeduplication</code> -
     * Returns whether content-based deduplication is enabled for the queue. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul>
     */
    inline GetQueueAttributesRequest& AddAttributeNames(const QueueAttributeName& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>A list of attributes for which to retrieve information.</p> <note> <p>In the
     * future, new attributes might be added. If you write code that calls this action,
     * we recommend that you structure your code so that it can handle new attributes
     * gracefully.</p> </note> <p>The following attributes are supported:</p> <ul> <li>
     * <p> <code>All</code> - Returns all values. </p> </li> <li> <p>
     * <code>ApproximateNumberOfMessages</code> - Returns the approximate number of
     * messages available for retrieval from the queue.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesDelayed</code> - Returns the approximate number
     * of messages in the queue that are delayed and not available for reading
     * immediately. This can happen when the queue is configured as a delay queue or
     * when a message has been sent with a delay parameter.</p> </li> <li> <p>
     * <code>ApproximateNumberOfMessagesNotVisible</code> - Returns the approximate
     * number of messages that are in flight. Messages are considered to be <i>in
     * flight</i> if they have been sent to a client but have not yet been deleted or
     * have not yet reached the end of their visibility window. </p> </li> <li> <p>
     * <code>CreatedTimestamp</code> - Returns the time when the queue was created in
     * seconds (<a href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p>
     * </li> <li> <p> <code>DelaySeconds</code> - Returns the default delay on the
     * queue in seconds.</p> </li> <li> <p> <code>LastModifiedTimestamp</code> -
     * Returns the time when the queue was last changed in seconds (<a
     * href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a>).</p> </li> <li>
     * <p> <code>MaximumMessageSize</code> - Returns the limit of how many bytes a
     * message can contain before Amazon SQS rejects it.</p> </li> <li> <p>
     * <code>MessageRetentionPeriod</code> - Returns the length of time, in seconds,
     * for which Amazon SQS retains a message.</p> </li> <li> <p> <code>Policy</code> -
     * Returns the policy of the queue.</p> </li> <li> <p> <code>QueueArn</code> -
     * Returns the Amazon resource name (ARN) of the queue.</p> </li> <li> <p>
     * <code>ReceiveMessageWaitTimeSeconds</code> - Returns the length of time, in
     * seconds, for which the <code>ReceiveMessage</code> action waits for a message to
     * arrive. </p> </li> <li> <p> <code>RedrivePolicy</code> - Returns the string that
     * includes the parameters for dead-letter queue functionality of the source queue.
     * For more information about the redrive policy and dead-letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
     * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
     * Developer Guide</i>. </p> <ul> <li> <p> <code>deadLetterTargetArn</code> - The
     * Amazon Resource Name (ARN) of the dead-letter queue to which Amazon SQS moves
     * messages after the value of <code>maxReceiveCount</code> is exceeded.</p> </li>
     * <li> <p> <code>maxReceiveCount</code> - The number of times a message is
     * delivered to the source queue before being moved to the dead-letter queue. When
     * the <code>ReceiveCount</code> for a message exceeds the
     * <code>maxReceiveCount</code> for a queue, Amazon SQS moves the message to the
     * dead-letter-queue.</p> </li> </ul> </li> <li> <p> <code>VisibilityTimeout</code>
     * - Returns the visibility timeout for the queue. For more information about the
     * visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
     * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul> <p>The following attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - Returns the ID of an AWS-managed
     * customer master key (CMK) for Amazon SQS or a custom CMK. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-sse-key-terms">Key
     * Terms</a>. </p> </li> <li> <p> <code>KmsDataKeyReusePeriodSeconds</code> -
     * Returns the length of time, in seconds, for which Amazon SQS can reuse a data
     * key to encrypt or decrypt messages before calling AWS KMS again. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-server-side-encryption.html#sqs-how-does-the-data-key-reuse-period-work">How
     * Does the Data Key Reuse Period Work?</a>. </p> </li> </ul> <p>The following
     * attributes apply only to <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
     * (first-in-first-out) queues</a>:</p> <ul> <li> <p> <code>FifoQueue</code> -
     * Returns whether the queue is FIFO. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-understanding-logic">FIFO
     * Queue Logic</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
     * <note> <p>To determine whether a queue is <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
     * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
     * suffix.</p> </note> </li> <li> <p> <code>ContentBasedDeduplication</code> -
     * Returns whether content-based deduplication is enabled for the queue. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-exactly-once-processing">Exactly-Once
     * Processing</a> in the <i>Amazon Simple Queue Service Developer Guide</i>. </p>
     * </li> </ul>
     */
    inline GetQueueAttributesRequest& AddAttributeNames(QueueAttributeName&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;

    Aws::Vector<QueueAttributeName> m_attributeNames;
    bool m_attributeNamesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
