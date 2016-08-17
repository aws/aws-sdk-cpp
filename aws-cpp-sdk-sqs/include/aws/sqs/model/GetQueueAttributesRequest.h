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
   * <p/>
   */
  class AWS_SQS_API GetQueueAttributesRequest : public SQSRequest
  {
  public:
    GetQueueAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /**
     * <p>A list of attributes to retrieve information for. The following attributes
     * are supported:</p> <ul> <li><p><code>All</code> - returns all values.</p></li>
     * <li><p><code>ApproximateNumberOfMessages</code> - returns the approximate number
     * of visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>ApproximateNumberOfMessagesNotVisible</code> -
     * returns the approximate number of messages that are not timed-out and not
     * deleted. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>VisibilityTimeout</code> - returns the
     * visibility timeout for the queue. For more information about visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p></li>
     * <li><p><code>CreatedTimestamp</code> - returns the time when the queue was
     * created (epoch time in seconds).</p></li>
     * <li><p><code>LastModifiedTimestamp</code> - returns the time when the queue was
     * last changed (epoch time in seconds).</p></li> <li><p><code>Policy</code> -
     * returns the queue's policy.</p></li> <li><p><code>MaximumMessageSize</code> -
     * returns the limit of how many bytes a message can contain before Amazon SQS
     * rejects it.</p></li> <li><p><code>MessageRetentionPeriod</code> - returns the
     * number of seconds Amazon SQS retains a message.</p></li>
     * <li><p><code>QueueArn</code> - returns the queue's Amazon resource name
     * (ARN).</p></li> <li><p><code>ApproximateNumberOfMessagesDelayed</code> - returns
     * the approximate number of messages that are pending to be added to the
     * queue.</p></li> <li><p><code>DelaySeconds</code> - returns the default delay on
     * the queue in seconds.</p></li> <li><p><code>ReceiveMessageWaitTimeSeconds</code>
     * - returns the time for which a ReceiveMessage call will wait for a message to
     * arrive.</p></li> <li><p><code>RedrivePolicy</code> - returns the parameters for
     * dead letter queue functionality of the source queue. For more information about
     * RedrivePolicy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> </ul> <note><p>Going forward, new attributes might be added.
     * If you are writing code that calls this action, we recommend that you structure
     * your code so that it can handle new attributes gracefully.</p></note>
     */
    inline const Aws::Vector<QueueAttributeName>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>A list of attributes to retrieve information for. The following attributes
     * are supported:</p> <ul> <li><p><code>All</code> - returns all values.</p></li>
     * <li><p><code>ApproximateNumberOfMessages</code> - returns the approximate number
     * of visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>ApproximateNumberOfMessagesNotVisible</code> -
     * returns the approximate number of messages that are not timed-out and not
     * deleted. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>VisibilityTimeout</code> - returns the
     * visibility timeout for the queue. For more information about visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p></li>
     * <li><p><code>CreatedTimestamp</code> - returns the time when the queue was
     * created (epoch time in seconds).</p></li>
     * <li><p><code>LastModifiedTimestamp</code> - returns the time when the queue was
     * last changed (epoch time in seconds).</p></li> <li><p><code>Policy</code> -
     * returns the queue's policy.</p></li> <li><p><code>MaximumMessageSize</code> -
     * returns the limit of how many bytes a message can contain before Amazon SQS
     * rejects it.</p></li> <li><p><code>MessageRetentionPeriod</code> - returns the
     * number of seconds Amazon SQS retains a message.</p></li>
     * <li><p><code>QueueArn</code> - returns the queue's Amazon resource name
     * (ARN).</p></li> <li><p><code>ApproximateNumberOfMessagesDelayed</code> - returns
     * the approximate number of messages that are pending to be added to the
     * queue.</p></li> <li><p><code>DelaySeconds</code> - returns the default delay on
     * the queue in seconds.</p></li> <li><p><code>ReceiveMessageWaitTimeSeconds</code>
     * - returns the time for which a ReceiveMessage call will wait for a message to
     * arrive.</p></li> <li><p><code>RedrivePolicy</code> - returns the parameters for
     * dead letter queue functionality of the source queue. For more information about
     * RedrivePolicy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> </ul> <note><p>Going forward, new attributes might be added.
     * If you are writing code that calls this action, we recommend that you structure
     * your code so that it can handle new attributes gracefully.</p></note>
     */
    inline void SetAttributeNames(const Aws::Vector<QueueAttributeName>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attributes to retrieve information for. The following attributes
     * are supported:</p> <ul> <li><p><code>All</code> - returns all values.</p></li>
     * <li><p><code>ApproximateNumberOfMessages</code> - returns the approximate number
     * of visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>ApproximateNumberOfMessagesNotVisible</code> -
     * returns the approximate number of messages that are not timed-out and not
     * deleted. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>VisibilityTimeout</code> - returns the
     * visibility timeout for the queue. For more information about visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p></li>
     * <li><p><code>CreatedTimestamp</code> - returns the time when the queue was
     * created (epoch time in seconds).</p></li>
     * <li><p><code>LastModifiedTimestamp</code> - returns the time when the queue was
     * last changed (epoch time in seconds).</p></li> <li><p><code>Policy</code> -
     * returns the queue's policy.</p></li> <li><p><code>MaximumMessageSize</code> -
     * returns the limit of how many bytes a message can contain before Amazon SQS
     * rejects it.</p></li> <li><p><code>MessageRetentionPeriod</code> - returns the
     * number of seconds Amazon SQS retains a message.</p></li>
     * <li><p><code>QueueArn</code> - returns the queue's Amazon resource name
     * (ARN).</p></li> <li><p><code>ApproximateNumberOfMessagesDelayed</code> - returns
     * the approximate number of messages that are pending to be added to the
     * queue.</p></li> <li><p><code>DelaySeconds</code> - returns the default delay on
     * the queue in seconds.</p></li> <li><p><code>ReceiveMessageWaitTimeSeconds</code>
     * - returns the time for which a ReceiveMessage call will wait for a message to
     * arrive.</p></li> <li><p><code>RedrivePolicy</code> - returns the parameters for
     * dead letter queue functionality of the source queue. For more information about
     * RedrivePolicy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> </ul> <note><p>Going forward, new attributes might be added.
     * If you are writing code that calls this action, we recommend that you structure
     * your code so that it can handle new attributes gracefully.</p></note>
     */
    inline void SetAttributeNames(Aws::Vector<QueueAttributeName>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attributes to retrieve information for. The following attributes
     * are supported:</p> <ul> <li><p><code>All</code> - returns all values.</p></li>
     * <li><p><code>ApproximateNumberOfMessages</code> - returns the approximate number
     * of visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>ApproximateNumberOfMessagesNotVisible</code> -
     * returns the approximate number of messages that are not timed-out and not
     * deleted. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>VisibilityTimeout</code> - returns the
     * visibility timeout for the queue. For more information about visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p></li>
     * <li><p><code>CreatedTimestamp</code> - returns the time when the queue was
     * created (epoch time in seconds).</p></li>
     * <li><p><code>LastModifiedTimestamp</code> - returns the time when the queue was
     * last changed (epoch time in seconds).</p></li> <li><p><code>Policy</code> -
     * returns the queue's policy.</p></li> <li><p><code>MaximumMessageSize</code> -
     * returns the limit of how many bytes a message can contain before Amazon SQS
     * rejects it.</p></li> <li><p><code>MessageRetentionPeriod</code> - returns the
     * number of seconds Amazon SQS retains a message.</p></li>
     * <li><p><code>QueueArn</code> - returns the queue's Amazon resource name
     * (ARN).</p></li> <li><p><code>ApproximateNumberOfMessagesDelayed</code> - returns
     * the approximate number of messages that are pending to be added to the
     * queue.</p></li> <li><p><code>DelaySeconds</code> - returns the default delay on
     * the queue in seconds.</p></li> <li><p><code>ReceiveMessageWaitTimeSeconds</code>
     * - returns the time for which a ReceiveMessage call will wait for a message to
     * arrive.</p></li> <li><p><code>RedrivePolicy</code> - returns the parameters for
     * dead letter queue functionality of the source queue. For more information about
     * RedrivePolicy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> </ul> <note><p>Going forward, new attributes might be added.
     * If you are writing code that calls this action, we recommend that you structure
     * your code so that it can handle new attributes gracefully.</p></note>
     */
    inline GetQueueAttributesRequest& WithAttributeNames(const Aws::Vector<QueueAttributeName>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes to retrieve information for. The following attributes
     * are supported:</p> <ul> <li><p><code>All</code> - returns all values.</p></li>
     * <li><p><code>ApproximateNumberOfMessages</code> - returns the approximate number
     * of visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>ApproximateNumberOfMessagesNotVisible</code> -
     * returns the approximate number of messages that are not timed-out and not
     * deleted. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>VisibilityTimeout</code> - returns the
     * visibility timeout for the queue. For more information about visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p></li>
     * <li><p><code>CreatedTimestamp</code> - returns the time when the queue was
     * created (epoch time in seconds).</p></li>
     * <li><p><code>LastModifiedTimestamp</code> - returns the time when the queue was
     * last changed (epoch time in seconds).</p></li> <li><p><code>Policy</code> -
     * returns the queue's policy.</p></li> <li><p><code>MaximumMessageSize</code> -
     * returns the limit of how many bytes a message can contain before Amazon SQS
     * rejects it.</p></li> <li><p><code>MessageRetentionPeriod</code> - returns the
     * number of seconds Amazon SQS retains a message.</p></li>
     * <li><p><code>QueueArn</code> - returns the queue's Amazon resource name
     * (ARN).</p></li> <li><p><code>ApproximateNumberOfMessagesDelayed</code> - returns
     * the approximate number of messages that are pending to be added to the
     * queue.</p></li> <li><p><code>DelaySeconds</code> - returns the default delay on
     * the queue in seconds.</p></li> <li><p><code>ReceiveMessageWaitTimeSeconds</code>
     * - returns the time for which a ReceiveMessage call will wait for a message to
     * arrive.</p></li> <li><p><code>RedrivePolicy</code> - returns the parameters for
     * dead letter queue functionality of the source queue. For more information about
     * RedrivePolicy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> </ul> <note><p>Going forward, new attributes might be added.
     * If you are writing code that calls this action, we recommend that you structure
     * your code so that it can handle new attributes gracefully.</p></note>
     */
    inline GetQueueAttributesRequest& WithAttributeNames(Aws::Vector<QueueAttributeName>&& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes to retrieve information for. The following attributes
     * are supported:</p> <ul> <li><p><code>All</code> - returns all values.</p></li>
     * <li><p><code>ApproximateNumberOfMessages</code> - returns the approximate number
     * of visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>ApproximateNumberOfMessagesNotVisible</code> -
     * returns the approximate number of messages that are not timed-out and not
     * deleted. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>VisibilityTimeout</code> - returns the
     * visibility timeout for the queue. For more information about visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p></li>
     * <li><p><code>CreatedTimestamp</code> - returns the time when the queue was
     * created (epoch time in seconds).</p></li>
     * <li><p><code>LastModifiedTimestamp</code> - returns the time when the queue was
     * last changed (epoch time in seconds).</p></li> <li><p><code>Policy</code> -
     * returns the queue's policy.</p></li> <li><p><code>MaximumMessageSize</code> -
     * returns the limit of how many bytes a message can contain before Amazon SQS
     * rejects it.</p></li> <li><p><code>MessageRetentionPeriod</code> - returns the
     * number of seconds Amazon SQS retains a message.</p></li>
     * <li><p><code>QueueArn</code> - returns the queue's Amazon resource name
     * (ARN).</p></li> <li><p><code>ApproximateNumberOfMessagesDelayed</code> - returns
     * the approximate number of messages that are pending to be added to the
     * queue.</p></li> <li><p><code>DelaySeconds</code> - returns the default delay on
     * the queue in seconds.</p></li> <li><p><code>ReceiveMessageWaitTimeSeconds</code>
     * - returns the time for which a ReceiveMessage call will wait for a message to
     * arrive.</p></li> <li><p><code>RedrivePolicy</code> - returns the parameters for
     * dead letter queue functionality of the source queue. For more information about
     * RedrivePolicy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> </ul> <note><p>Going forward, new attributes might be added.
     * If you are writing code that calls this action, we recommend that you structure
     * your code so that it can handle new attributes gracefully.</p></note>
     */
    inline GetQueueAttributesRequest& AddAttributeNames(const QueueAttributeName& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>A list of attributes to retrieve information for. The following attributes
     * are supported:</p> <ul> <li><p><code>All</code> - returns all values.</p></li>
     * <li><p><code>ApproximateNumberOfMessages</code> - returns the approximate number
     * of visible messages in a queue. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>ApproximateNumberOfMessagesNotVisible</code> -
     * returns the approximate number of messages that are not timed-out and not
     * deleted. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ApproximateNumber.html">Resources
     * Required to Process Messages</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> <li><p><code>VisibilityTimeout</code> - returns the
     * visibility timeout for the queue. For more information about visibility timeout,
     * see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</p></li>
     * <li><p><code>CreatedTimestamp</code> - returns the time when the queue was
     * created (epoch time in seconds).</p></li>
     * <li><p><code>LastModifiedTimestamp</code> - returns the time when the queue was
     * last changed (epoch time in seconds).</p></li> <li><p><code>Policy</code> -
     * returns the queue's policy.</p></li> <li><p><code>MaximumMessageSize</code> -
     * returns the limit of how many bytes a message can contain before Amazon SQS
     * rejects it.</p></li> <li><p><code>MessageRetentionPeriod</code> - returns the
     * number of seconds Amazon SQS retains a message.</p></li>
     * <li><p><code>QueueArn</code> - returns the queue's Amazon resource name
     * (ARN).</p></li> <li><p><code>ApproximateNumberOfMessagesDelayed</code> - returns
     * the approximate number of messages that are pending to be added to the
     * queue.</p></li> <li><p><code>DelaySeconds</code> - returns the default delay on
     * the queue in seconds.</p></li> <li><p><code>ReceiveMessageWaitTimeSeconds</code>
     * - returns the time for which a ReceiveMessage call will wait for a message to
     * arrive.</p></li> <li><p><code>RedrivePolicy</code> - returns the parameters for
     * dead letter queue functionality of the source queue. For more information about
     * RedrivePolicy and dead letter queues, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSDeadLetterQueue.html">Using
     * Amazon SQS Dead Letter Queues</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p></li> </ul> <note><p>Going forward, new attributes might be added.
     * If you are writing code that calls this action, we recommend that you structure
     * your code so that it can handle new attributes gracefully.</p></note>
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
