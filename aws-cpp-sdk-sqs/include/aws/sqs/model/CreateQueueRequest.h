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
   */
  class AWS_SQS_API CreateQueueRequest : public SQSRequest
  {
  public:
    CreateQueueRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name for the queue to be created.</p>
     */
    inline const Aws::String& GetQueueName() const{ return m_queueName; }

    /**
     * <p>The name for the queue to be created.</p>
     */
    inline void SetQueueName(const Aws::String& value) { m_queueNameHasBeenSet = true; m_queueName = value; }

    /**
     * <p>The name for the queue to be created.</p>
     */
    inline void SetQueueName(Aws::String&& value) { m_queueNameHasBeenSet = true; m_queueName = value; }

    /**
     * <p>The name for the queue to be created.</p>
     */
    inline void SetQueueName(const char* value) { m_queueNameHasBeenSet = true; m_queueName.assign(value); }

    /**
     * <p>The name for the queue to be created.</p>
     */
    inline CreateQueueRequest& WithQueueName(const Aws::String& value) { SetQueueName(value); return *this;}

    /**
     * <p>The name for the queue to be created.</p>
     */
    inline CreateQueueRequest& WithQueueName(Aws::String&& value) { SetQueueName(value); return *this;}

    /**
     * <p>The name for the queue to be created.</p>
     */
    inline CreateQueueRequest& WithQueueName(const char* value) { SetQueueName(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline const Aws::Map<QueueAttributeName, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline void SetAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline void SetAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline CreateQueueRequest& WithAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline CreateQueueRequest& WithAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline CreateQueueRequest& AddAttributes(const QueueAttributeName& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline CreateQueueRequest& AddAttributes(QueueAttributeName&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline CreateQueueRequest& AddAttributes(const QueueAttributeName& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline CreateQueueRequest& AddAttributes(QueueAttributeName&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
     */
    inline CreateQueueRequest& AddAttributes(QueueAttributeName&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters the
     * <code>CreateQueue</code> action uses:</p> <p> <ul> <li>
     * <code>DelaySeconds</code> - The time in seconds that the delivery of all
     * messages in the queue will be delayed. An integer from 0 to 900 (15 minutes).
     * The default for this attribute is 0 (zero).</li> <li>
     * <code>MaximumMessageSize</code> - The limit of how many bytes a message can
     * contain before Amazon SQS rejects it. An integer from 1024 bytes (1 KiB) up to
     * 262144 bytes (256 KiB). The default for this attribute is 262144 (256 KiB).</li>
     * <li> <code>MessageRetentionPeriod</code> - The number of seconds Amazon SQS
     * retains a message. Integer representing seconds, from 60 (1 minute) to 1209600
     * (14 days). The default for this attribute is 345600 (4 days).</li> <li>
     * <code>Policy</code> - The queue's policy. A valid AWS policy. For more
     * information about policy structure, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PoliciesOverview.html">Overview
     * of AWS IAM Policies</a> in the <i>Amazon IAM User Guide</i>.</li> <li>
     * <code>ReceiveMessageWaitTimeSeconds</code> - The time for which a
     * <a>ReceiveMessage</a> call will wait for a message to arrive. An integer from 0
     * to 20 (seconds). The default for this attribute is 0. </li> <li>
     * <code>VisibilityTimeout</code> - The visibility timeout for the queue. An
     * integer from 0 to 43200 (12 hours). The default for this attribute is 30. For
     * more information about visibility timeout, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AboutVT.html">Visibility
     * Timeout</a> in the <i>Amazon SQS Developer Guide</i>.</li> </ul> </p>
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
