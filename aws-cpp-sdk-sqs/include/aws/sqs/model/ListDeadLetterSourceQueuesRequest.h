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

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API ListDeadLetterSourceQueuesRequest : public SQSRequest
  {
  public:
    ListDeadLetterSourceQueuesRequest();
    Aws::String SerializePayload() const override;

    /**
     * The queue URL of a dead letter queue.
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * The queue URL of a dead letter queue.
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * The queue URL of a dead letter queue.
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * The queue URL of a dead letter queue.
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * The queue URL of a dead letter queue.
     */
    inline ListDeadLetterSourceQueuesRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * The queue URL of a dead letter queue.
     */
    inline ListDeadLetterSourceQueuesRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * The queue URL of a dead letter queue.
     */
    inline ListDeadLetterSourceQueuesRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

  private:
    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
