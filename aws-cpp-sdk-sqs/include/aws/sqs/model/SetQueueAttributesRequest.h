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
   * <p/>
   */
  class AWS_SQS_API SetQueueAttributesRequest : public SQSRequest
  {
  public:
    SetQueueAttributesRequest();
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
    inline SetQueueAttributesRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline SetQueueAttributesRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline SetQueueAttributesRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline const Aws::Map<QueueAttributeName, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline void SetAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline void SetAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline SetQueueAttributesRequest& WithAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline SetQueueAttributesRequest& WithAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline SetQueueAttributesRequest& AddAttributes(const QueueAttributeName& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline SetQueueAttributesRequest& AddAttributes(QueueAttributeName&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline SetQueueAttributesRequest& AddAttributes(const QueueAttributeName& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline SetQueueAttributesRequest& AddAttributes(QueueAttributeName&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline SetQueueAttributesRequest& AddAttributes(QueueAttributeName&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes to set.</p> <p>The following lists the names,
     * descriptions, and values of the special request parameters the
     * <code>SetQueueAttributes</code> action uses:</p> <ul>
     * <li><p><code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</p></li>
     * <li><p><code>MaximumMessageSize</code> - The limit of how many bytes a message
     * can contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up
     * to 262144 bytes (256 KiB). The default for this attribute is 262144 (256
     * KiB).</p></li> <li><p><code>MessageRetentionPeriod</code> - The number of
     * seconds Amazon SQS retains a message. Integer representing seconds, from 60 (1
     * minute) to 1209600 (14 days). The default for this attribute is 345600 (4
     * days).</p></li> <li><p><code>Policy</code> - The queue's policy. A valid AWS
     * policy. For more information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</p></li>
     * <li><p><code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * ReceiveMessage call will wait for a message to arrive. An integer from 0 to 20
     * (seconds). The default for this attribute is 0.</p></li>
     * <li><p><code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see Visibility Timeout in the
     * <i>Amazon SQS Developer Guide</i>.</p></li> <li><p><code>RedrivePolicy</code> -
     * The parameters for dead letter queue functionality of the source queue. For more
     * information about RedrivePolicy and dead letter queues, see Using Amazon SQS
     * Dead Letter Queues in the <i>Amazon SQS Developer Guide</i>.</p></li> </ul>
     * <p>Any other valid special request parameters that are specified (such as
     * <code>ApproximateNumberOfMessages</code>,
     * <code>ApproximateNumberOfMessagesDelayed</code>,
     * <code>ApproximateNumberOfMessagesNotVisible</code>,
     * <code>CreatedTimestamp</code>, <code>LastModifiedTimestamp</code>, and
     * <code>QueueArn</code>) will be ignored.</p>
     */
    inline SetQueueAttributesRequest& AddAttributes(const QueueAttributeName& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

  private:
    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;
    Aws::Map<QueueAttributeName, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
