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
   * <p/>
   */
  class AWS_SQS_API GetQueueUrlRequest : public SQSRequest
  {
  public:
    GetQueueUrlRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the queue whose URL must be fetched. Maximum 80 characters;
     * alphanumeric characters, hyphens (-), and underscores (_) are allowed.</p>
     * <p>Queue names are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueName() const{ return m_queueName; }

    /**
     * <p>The name of the queue whose URL must be fetched. Maximum 80 characters;
     * alphanumeric characters, hyphens (-), and underscores (_) are allowed.</p>
     * <p>Queue names are case-sensitive.</p>
     */
    inline void SetQueueName(const Aws::String& value) { m_queueNameHasBeenSet = true; m_queueName = value; }

    /**
     * <p>The name of the queue whose URL must be fetched. Maximum 80 characters;
     * alphanumeric characters, hyphens (-), and underscores (_) are allowed.</p>
     * <p>Queue names are case-sensitive.</p>
     */
    inline void SetQueueName(Aws::String&& value) { m_queueNameHasBeenSet = true; m_queueName = value; }

    /**
     * <p>The name of the queue whose URL must be fetched. Maximum 80 characters;
     * alphanumeric characters, hyphens (-), and underscores (_) are allowed.</p>
     * <p>Queue names are case-sensitive.</p>
     */
    inline void SetQueueName(const char* value) { m_queueNameHasBeenSet = true; m_queueName.assign(value); }

    /**
     * <p>The name of the queue whose URL must be fetched. Maximum 80 characters;
     * alphanumeric characters, hyphens (-), and underscores (_) are allowed.</p>
     * <p>Queue names are case-sensitive.</p>
     */
    inline GetQueueUrlRequest& WithQueueName(const Aws::String& value) { SetQueueName(value); return *this;}

    /**
     * <p>The name of the queue whose URL must be fetched. Maximum 80 characters;
     * alphanumeric characters, hyphens (-), and underscores (_) are allowed.</p>
     * <p>Queue names are case-sensitive.</p>
     */
    inline GetQueueUrlRequest& WithQueueName(Aws::String&& value) { SetQueueName(value); return *this;}

    /**
     * <p>The name of the queue whose URL must be fetched. Maximum 80 characters;
     * alphanumeric characters, hyphens (-), and underscores (_) are allowed.</p>
     * <p>Queue names are case-sensitive.</p>
     */
    inline GetQueueUrlRequest& WithQueueName(const char* value) { SetQueueName(value); return *this;}

    /**
     * <p>The AWS account ID of the account that created the queue.</p>
     */
    inline const Aws::String& GetQueueOwnerAWSAccountId() const{ return m_queueOwnerAWSAccountId; }

    /**
     * <p>The AWS account ID of the account that created the queue.</p>
     */
    inline void SetQueueOwnerAWSAccountId(const Aws::String& value) { m_queueOwnerAWSAccountIdHasBeenSet = true; m_queueOwnerAWSAccountId = value; }

    /**
     * <p>The AWS account ID of the account that created the queue.</p>
     */
    inline void SetQueueOwnerAWSAccountId(Aws::String&& value) { m_queueOwnerAWSAccountIdHasBeenSet = true; m_queueOwnerAWSAccountId = value; }

    /**
     * <p>The AWS account ID of the account that created the queue.</p>
     */
    inline void SetQueueOwnerAWSAccountId(const char* value) { m_queueOwnerAWSAccountIdHasBeenSet = true; m_queueOwnerAWSAccountId.assign(value); }

    /**
     * <p>The AWS account ID of the account that created the queue.</p>
     */
    inline GetQueueUrlRequest& WithQueueOwnerAWSAccountId(const Aws::String& value) { SetQueueOwnerAWSAccountId(value); return *this;}

    /**
     * <p>The AWS account ID of the account that created the queue.</p>
     */
    inline GetQueueUrlRequest& WithQueueOwnerAWSAccountId(Aws::String&& value) { SetQueueOwnerAWSAccountId(value); return *this;}

    /**
     * <p>The AWS account ID of the account that created the queue.</p>
     */
    inline GetQueueUrlRequest& WithQueueOwnerAWSAccountId(const char* value) { SetQueueOwnerAWSAccountId(value); return *this;}

  private:
    Aws::String m_queueName;
    bool m_queueNameHasBeenSet;
    Aws::String m_queueOwnerAWSAccountId;
    bool m_queueOwnerAWSAccountIdHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
