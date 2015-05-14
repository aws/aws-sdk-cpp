/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  /*
  */
  class AWS_SQS_API SendMessageRequest : public SQSRequest
  {
  public:
    SendMessageRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The URL of the Amazon SQS queue to take action on.</p>
    */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }
    /*
     <p>The URL of the Amazon SQS queue to take action on.</p>
    */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrl = value; }

    /*
     <p>The URL of the Amazon SQS queue to take action on.</p>
    */
    inline void SetQueueUrl(const char* value) { m_queueUrl.assign(value); }

    /*
     <p>The URL of the Amazon SQS queue to take action on.</p>
    */
    inline SendMessageRequest&  WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /*
     <p>The URL of the Amazon SQS queue to take action on.</p>
    */
    inline SendMessageRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /*
     <p>The message to send. String maximum 256 KB in size. For a list of allowed characters, see the preceding important note.</p>
    */
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }
    /*
     <p>The message to send. String maximum 256 KB in size. For a list of allowed characters, see the preceding important note.</p>
    */
    inline void SetMessageBody(const Aws::String& value) { m_messageBody = value; }

    /*
     <p>The message to send. String maximum 256 KB in size. For a list of allowed characters, see the preceding important note.</p>
    */
    inline void SetMessageBody(const char* value) { m_messageBody.assign(value); }

    /*
     <p>The message to send. String maximum 256 KB in size. For a list of allowed characters, see the preceding important note.</p>
    */
    inline SendMessageRequest&  WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}

    /*
     <p>The message to send. String maximum 256 KB in size. For a list of allowed characters, see the preceding important note.</p>
    */
    inline SendMessageRequest& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}

    /*
     <p> The number of seconds (0 to 900 - 15 minutes) to delay a specific message. Messages with a positive <code>DelaySeconds</code> value become available for processing after the delay time is finished. If you don't specify a value, the default value for the queue applies. </p>
    */
    inline long GetDelaySeconds() const{ return m_delaySeconds; }
    /*
     <p> The number of seconds (0 to 900 - 15 minutes) to delay a specific message. Messages with a positive <code>DelaySeconds</code> value become available for processing after the delay time is finished. If you don't specify a value, the default value for the queue applies. </p>
    */
    inline void SetDelaySeconds(long value) { m_delaySecondsHasBeenSet = true; m_delaySeconds = value; }

    /*
     <p> The number of seconds (0 to 900 - 15 minutes) to delay a specific message. Messages with a positive <code>DelaySeconds</code> value become available for processing after the delay time is finished. If you don't specify a value, the default value for the queue applies. </p>
    */
    inline SendMessageRequest&  WithDelaySeconds(long value) { SetDelaySeconds(value); return *this;}

    /*
     <p>Each message attribute consists of a Name, Type, and Value. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message Attribute Items</a>.</p>
    */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }
    /*
     <p>Each message attribute consists of a Name, Type, and Value. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message Attribute Items</a>.</p>
    */
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /*
     <p>Each message attribute consists of a Name, Type, and Value. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message Attribute Items</a>.</p>
    */
    inline SendMessageRequest&  WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    /*
     <p>Each message attribute consists of a Name, Type, and Value. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message Attribute Items</a>.</p>
    */
    inline SendMessageRequest& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    /*
     <p>Each message attribute consists of a Name, Type, and Value. For more information, see <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributesNTV">Message Attribute Items</a>.</p>
    */
    inline SendMessageRequest& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

  private:
    Aws::String m_queueUrl;
    Aws::String m_messageBody;
    long m_delaySeconds;
    bool m_delaySecondsHasBeenSet;
    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
