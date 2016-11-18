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
#include <aws/sqs/model/DeleteMessageBatchRequestEntry.h>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_SQS_API DeleteMessageBatchRequest : public SQSRequest
  {
  public:
    DeleteMessageBatchRequest();
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
    inline DeleteMessageBatchRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline DeleteMessageBatchRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline DeleteMessageBatchRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /**
     * <p>A list of receipt handles for the messages to be deleted.</p>
     */
    inline const Aws::Vector<DeleteMessageBatchRequestEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>A list of receipt handles for the messages to be deleted.</p>
     */
    inline void SetEntries(const Aws::Vector<DeleteMessageBatchRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>A list of receipt handles for the messages to be deleted.</p>
     */
    inline void SetEntries(Aws::Vector<DeleteMessageBatchRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>A list of receipt handles for the messages to be deleted.</p>
     */
    inline DeleteMessageBatchRequest& WithEntries(const Aws::Vector<DeleteMessageBatchRequestEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of receipt handles for the messages to be deleted.</p>
     */
    inline DeleteMessageBatchRequest& WithEntries(Aws::Vector<DeleteMessageBatchRequestEntry>&& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of receipt handles for the messages to be deleted.</p>
     */
    inline DeleteMessageBatchRequest& AddEntries(const DeleteMessageBatchRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>A list of receipt handles for the messages to be deleted.</p>
     */
    inline DeleteMessageBatchRequest& AddEntries(DeleteMessageBatchRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

  private:
    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;
    Aws::Vector<DeleteMessageBatchRequestEntry> m_entries;
    bool m_entriesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
