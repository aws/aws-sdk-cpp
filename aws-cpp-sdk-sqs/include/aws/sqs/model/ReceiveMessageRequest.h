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
   */
  class AWS_SQS_API ReceiveMessageRequest : public SQSRequest
  {
  public:
    ReceiveMessageRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline ReceiveMessageRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline ReceiveMessageRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline ReceiveMessageRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /**
     * <p>A list of attributes that need to be returned along with each message. </p>
     * <p> The following lists the names and descriptions of the attributes that can be
     * returned: </p> <ul> <li> <code>All</code> - returns all values.</li> <li>
     * <code>ApproximateFirstReceiveTimestamp</code> - returns the time when the
     * message was first received from the queue (epoch time in milliseconds).</li>
     * <li> <code>ApproximateReceiveCount</code> - returns the number of times a
     * message has been received from the queue but not deleted.</li> <li>
     * <code>SenderId</code> - returns the AWS account number (or the IP address, if
     * anonymous access is allowed) of the sender.</li> <li> <code>SentTimestamp</code>
     * - returns the time when the message was sent to the queue (epoch time in
     * milliseconds).</li> </ul>
     */
    inline const Aws::Vector<QueueAttributeName>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>A list of attributes that need to be returned along with each message. </p>
     * <p> The following lists the names and descriptions of the attributes that can be
     * returned: </p> <ul> <li> <code>All</code> - returns all values.</li> <li>
     * <code>ApproximateFirstReceiveTimestamp</code> - returns the time when the
     * message was first received from the queue (epoch time in milliseconds).</li>
     * <li> <code>ApproximateReceiveCount</code> - returns the number of times a
     * message has been received from the queue but not deleted.</li> <li>
     * <code>SenderId</code> - returns the AWS account number (or the IP address, if
     * anonymous access is allowed) of the sender.</li> <li> <code>SentTimestamp</code>
     * - returns the time when the message was sent to the queue (epoch time in
     * milliseconds).</li> </ul>
     */
    inline void SetAttributeNames(const Aws::Vector<QueueAttributeName>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attributes that need to be returned along with each message. </p>
     * <p> The following lists the names and descriptions of the attributes that can be
     * returned: </p> <ul> <li> <code>All</code> - returns all values.</li> <li>
     * <code>ApproximateFirstReceiveTimestamp</code> - returns the time when the
     * message was first received from the queue (epoch time in milliseconds).</li>
     * <li> <code>ApproximateReceiveCount</code> - returns the number of times a
     * message has been received from the queue but not deleted.</li> <li>
     * <code>SenderId</code> - returns the AWS account number (or the IP address, if
     * anonymous access is allowed) of the sender.</li> <li> <code>SentTimestamp</code>
     * - returns the time when the message was sent to the queue (epoch time in
     * milliseconds).</li> </ul>
     */
    inline void SetAttributeNames(Aws::Vector<QueueAttributeName>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attributes that need to be returned along with each message. </p>
     * <p> The following lists the names and descriptions of the attributes that can be
     * returned: </p> <ul> <li> <code>All</code> - returns all values.</li> <li>
     * <code>ApproximateFirstReceiveTimestamp</code> - returns the time when the
     * message was first received from the queue (epoch time in milliseconds).</li>
     * <li> <code>ApproximateReceiveCount</code> - returns the number of times a
     * message has been received from the queue but not deleted.</li> <li>
     * <code>SenderId</code> - returns the AWS account number (or the IP address, if
     * anonymous access is allowed) of the sender.</li> <li> <code>SentTimestamp</code>
     * - returns the time when the message was sent to the queue (epoch time in
     * milliseconds).</li> </ul>
     */
    inline ReceiveMessageRequest& WithAttributeNames(const Aws::Vector<QueueAttributeName>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes that need to be returned along with each message. </p>
     * <p> The following lists the names and descriptions of the attributes that can be
     * returned: </p> <ul> <li> <code>All</code> - returns all values.</li> <li>
     * <code>ApproximateFirstReceiveTimestamp</code> - returns the time when the
     * message was first received from the queue (epoch time in milliseconds).</li>
     * <li> <code>ApproximateReceiveCount</code> - returns the number of times a
     * message has been received from the queue but not deleted.</li> <li>
     * <code>SenderId</code> - returns the AWS account number (or the IP address, if
     * anonymous access is allowed) of the sender.</li> <li> <code>SentTimestamp</code>
     * - returns the time when the message was sent to the queue (epoch time in
     * milliseconds).</li> </ul>
     */
    inline ReceiveMessageRequest& WithAttributeNames(Aws::Vector<QueueAttributeName>&& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes that need to be returned along with each message. </p>
     * <p> The following lists the names and descriptions of the attributes that can be
     * returned: </p> <ul> <li> <code>All</code> - returns all values.</li> <li>
     * <code>ApproximateFirstReceiveTimestamp</code> - returns the time when the
     * message was first received from the queue (epoch time in milliseconds).</li>
     * <li> <code>ApproximateReceiveCount</code> - returns the number of times a
     * message has been received from the queue but not deleted.</li> <li>
     * <code>SenderId</code> - returns the AWS account number (or the IP address, if
     * anonymous access is allowed) of the sender.</li> <li> <code>SentTimestamp</code>
     * - returns the time when the message was sent to the queue (epoch time in
     * milliseconds).</li> </ul>
     */
    inline ReceiveMessageRequest& AddAttributeNames(const QueueAttributeName& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>A list of attributes that need to be returned along with each message. </p>
     * <p> The following lists the names and descriptions of the attributes that can be
     * returned: </p> <ul> <li> <code>All</code> - returns all values.</li> <li>
     * <code>ApproximateFirstReceiveTimestamp</code> - returns the time when the
     * message was first received from the queue (epoch time in milliseconds).</li>
     * <li> <code>ApproximateReceiveCount</code> - returns the number of times a
     * message has been received from the queue but not deleted.</li> <li>
     * <code>SenderId</code> - returns the AWS account number (or the IP address, if
     * anonymous access is allowed) of the sender.</li> <li> <code>SentTimestamp</code>
     * - returns the time when the message was sent to the queue (epoch time in
     * milliseconds).</li> </ul>
     */
    inline ReceiveMessageRequest& AddAttributeNames(QueueAttributeName&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>The name of the message attribute, where <i>N</i> is the index. The message
     * attribute name can contain the following characters: A-Z, a-z, 0-9, underscore
     * (_), hyphen (-), and period (.). The name must not start or end with a period,
     * and it should not have successive periods. The name is case sensitive and must
     * be unique among all attribute names for the message. The name can be up to 256
     * characters long. The name cannot start with "AWS." or "Amazon." (or any
     * variations in casing), because these prefixes are reserved for use by Amazon Web
     * Services.</p> <p>When using <code>ReceiveMessage</code>, you can send a list of
     * attribute names to receive, or you can return all of the attributes by
     * specifying "All" or ".*" in your request. You can also use "foo.*" to return all
     * message attributes starting with the "foo" prefix.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMessageAttributeNames() const{ return m_messageAttributeNames; }

    /**
     * <p>The name of the message attribute, where <i>N</i> is the index. The message
     * attribute name can contain the following characters: A-Z, a-z, 0-9, underscore
     * (_), hyphen (-), and period (.). The name must not start or end with a period,
     * and it should not have successive periods. The name is case sensitive and must
     * be unique among all attribute names for the message. The name can be up to 256
     * characters long. The name cannot start with "AWS." or "Amazon." (or any
     * variations in casing), because these prefixes are reserved for use by Amazon Web
     * Services.</p> <p>When using <code>ReceiveMessage</code>, you can send a list of
     * attribute names to receive, or you can return all of the attributes by
     * specifying "All" or ".*" in your request. You can also use "foo.*" to return all
     * message attributes starting with the "foo" prefix.</p>
     */
    inline void SetMessageAttributeNames(const Aws::Vector<Aws::String>& value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames = value; }

    /**
     * <p>The name of the message attribute, where <i>N</i> is the index. The message
     * attribute name can contain the following characters: A-Z, a-z, 0-9, underscore
     * (_), hyphen (-), and period (.). The name must not start or end with a period,
     * and it should not have successive periods. The name is case sensitive and must
     * be unique among all attribute names for the message. The name can be up to 256
     * characters long. The name cannot start with "AWS." or "Amazon." (or any
     * variations in casing), because these prefixes are reserved for use by Amazon Web
     * Services.</p> <p>When using <code>ReceiveMessage</code>, you can send a list of
     * attribute names to receive, or you can return all of the attributes by
     * specifying "All" or ".*" in your request. You can also use "foo.*" to return all
     * message attributes starting with the "foo" prefix.</p>
     */
    inline void SetMessageAttributeNames(Aws::Vector<Aws::String>&& value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames = value; }

    /**
     * <p>The name of the message attribute, where <i>N</i> is the index. The message
     * attribute name can contain the following characters: A-Z, a-z, 0-9, underscore
     * (_), hyphen (-), and period (.). The name must not start or end with a period,
     * and it should not have successive periods. The name is case sensitive and must
     * be unique among all attribute names for the message. The name can be up to 256
     * characters long. The name cannot start with "AWS." or "Amazon." (or any
     * variations in casing), because these prefixes are reserved for use by Amazon Web
     * Services.</p> <p>When using <code>ReceiveMessage</code>, you can send a list of
     * attribute names to receive, or you can return all of the attributes by
     * specifying "All" or ".*" in your request. You can also use "foo.*" to return all
     * message attributes starting with the "foo" prefix.</p>
     */
    inline ReceiveMessageRequest& WithMessageAttributeNames(const Aws::Vector<Aws::String>& value) { SetMessageAttributeNames(value); return *this;}

    /**
     * <p>The name of the message attribute, where <i>N</i> is the index. The message
     * attribute name can contain the following characters: A-Z, a-z, 0-9, underscore
     * (_), hyphen (-), and period (.). The name must not start or end with a period,
     * and it should not have successive periods. The name is case sensitive and must
     * be unique among all attribute names for the message. The name can be up to 256
     * characters long. The name cannot start with "AWS." or "Amazon." (or any
     * variations in casing), because these prefixes are reserved for use by Amazon Web
     * Services.</p> <p>When using <code>ReceiveMessage</code>, you can send a list of
     * attribute names to receive, or you can return all of the attributes by
     * specifying "All" or ".*" in your request. You can also use "foo.*" to return all
     * message attributes starting with the "foo" prefix.</p>
     */
    inline ReceiveMessageRequest& WithMessageAttributeNames(Aws::Vector<Aws::String>&& value) { SetMessageAttributeNames(value); return *this;}

    /**
     * <p>The name of the message attribute, where <i>N</i> is the index. The message
     * attribute name can contain the following characters: A-Z, a-z, 0-9, underscore
     * (_), hyphen (-), and period (.). The name must not start or end with a period,
     * and it should not have successive periods. The name is case sensitive and must
     * be unique among all attribute names for the message. The name can be up to 256
     * characters long. The name cannot start with "AWS." or "Amazon." (or any
     * variations in casing), because these prefixes are reserved for use by Amazon Web
     * Services.</p> <p>When using <code>ReceiveMessage</code>, you can send a list of
     * attribute names to receive, or you can return all of the attributes by
     * specifying "All" or ".*" in your request. You can also use "foo.*" to return all
     * message attributes starting with the "foo" prefix.</p>
     */
    inline ReceiveMessageRequest& AddMessageAttributeNames(const Aws::String& value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames.push_back(value); return *this; }

    /**
     * <p>The name of the message attribute, where <i>N</i> is the index. The message
     * attribute name can contain the following characters: A-Z, a-z, 0-9, underscore
     * (_), hyphen (-), and period (.). The name must not start or end with a period,
     * and it should not have successive periods. The name is case sensitive and must
     * be unique among all attribute names for the message. The name can be up to 256
     * characters long. The name cannot start with "AWS." or "Amazon." (or any
     * variations in casing), because these prefixes are reserved for use by Amazon Web
     * Services.</p> <p>When using <code>ReceiveMessage</code>, you can send a list of
     * attribute names to receive, or you can return all of the attributes by
     * specifying "All" or ".*" in your request. You can also use "foo.*" to return all
     * message attributes starting with the "foo" prefix.</p>
     */
    inline ReceiveMessageRequest& AddMessageAttributeNames(Aws::String&& value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames.push_back(value); return *this; }

    /**
     * <p>The name of the message attribute, where <i>N</i> is the index. The message
     * attribute name can contain the following characters: A-Z, a-z, 0-9, underscore
     * (_), hyphen (-), and period (.). The name must not start or end with a period,
     * and it should not have successive periods. The name is case sensitive and must
     * be unique among all attribute names for the message. The name can be up to 256
     * characters long. The name cannot start with "AWS." or "Amazon." (or any
     * variations in casing), because these prefixes are reserved for use by Amazon Web
     * Services.</p> <p>When using <code>ReceiveMessage</code>, you can send a list of
     * attribute names to receive, or you can return all of the attributes by
     * specifying "All" or ".*" in your request. You can also use "foo.*" to return all
     * message attributes starting with the "foo" prefix.</p>
     */
    inline ReceiveMessageRequest& AddMessageAttributeNames(const char* value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames.push_back(value); return *this; }

    /**
     * <p>The maximum number of messages to return. Amazon SQS never returns more
     * messages than this value but may return fewer. Values can be from 1 to 10.
     * Default is 1.</p> <p>All of the messages are not necessarily returned.</p>
     */
    inline long GetMaxNumberOfMessages() const{ return m_maxNumberOfMessages; }

    /**
     * <p>The maximum number of messages to return. Amazon SQS never returns more
     * messages than this value but may return fewer. Values can be from 1 to 10.
     * Default is 1.</p> <p>All of the messages are not necessarily returned.</p>
     */
    inline void SetMaxNumberOfMessages(long value) { m_maxNumberOfMessagesHasBeenSet = true; m_maxNumberOfMessages = value; }

    /**
     * <p>The maximum number of messages to return. Amazon SQS never returns more
     * messages than this value but may return fewer. Values can be from 1 to 10.
     * Default is 1.</p> <p>All of the messages are not necessarily returned.</p>
     */
    inline ReceiveMessageRequest& WithMaxNumberOfMessages(long value) { SetMaxNumberOfMessages(value); return *this;}

    /**
     * <p>The duration (in seconds) that the received messages are hidden from
     * subsequent retrieve requests after being retrieved by a
     * <code>ReceiveMessage</code> request.</p>
     */
    inline long GetVisibilityTimeout() const{ return m_visibilityTimeout; }

    /**
     * <p>The duration (in seconds) that the received messages are hidden from
     * subsequent retrieve requests after being retrieved by a
     * <code>ReceiveMessage</code> request.</p>
     */
    inline void SetVisibilityTimeout(long value) { m_visibilityTimeoutHasBeenSet = true; m_visibilityTimeout = value; }

    /**
     * <p>The duration (in seconds) that the received messages are hidden from
     * subsequent retrieve requests after being retrieved by a
     * <code>ReceiveMessage</code> request.</p>
     */
    inline ReceiveMessageRequest& WithVisibilityTimeout(long value) { SetVisibilityTimeout(value); return *this;}

    /**
     * <p>The duration (in seconds) for which the call will wait for a message to
     * arrive in the queue before returning. If a message is available, the call will
     * return sooner than WaitTimeSeconds.</p>
     */
    inline long GetWaitTimeSeconds() const{ return m_waitTimeSeconds; }

    /**
     * <p>The duration (in seconds) for which the call will wait for a message to
     * arrive in the queue before returning. If a message is available, the call will
     * return sooner than WaitTimeSeconds.</p>
     */
    inline void SetWaitTimeSeconds(long value) { m_waitTimeSecondsHasBeenSet = true; m_waitTimeSeconds = value; }

    /**
     * <p>The duration (in seconds) for which the call will wait for a message to
     * arrive in the queue before returning. If a message is available, the call will
     * return sooner than WaitTimeSeconds.</p>
     */
    inline ReceiveMessageRequest& WithWaitTimeSeconds(long value) { SetWaitTimeSeconds(value); return *this;}

  private:
    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;
    Aws::Vector<QueueAttributeName> m_attributeNames;
    bool m_attributeNamesHasBeenSet;
    Aws::Vector<Aws::String> m_messageAttributeNames;
    bool m_messageAttributeNamesHasBeenSet;
    long m_maxNumberOfMessages;
    bool m_maxNumberOfMessagesHasBeenSet;
    long m_visibilityTimeout;
    bool m_visibilityTimeoutHasBeenSet;
    long m_waitTimeSeconds;
    bool m_waitTimeSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
