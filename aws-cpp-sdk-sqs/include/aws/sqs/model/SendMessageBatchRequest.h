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
#include <aws/sqs/model/SendMessageBatchRequestEntry.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessageBatchRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API SendMessageBatchRequest : public SQSRequest
  {
  public:
    SendMessageBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendMessageBatch"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The URL of the Amazon SQS queue to which batched messages are sent.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue to which batched messages are sent.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    /**
     * <p>The URL of the Amazon SQS queue to which batched messages are sent.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to which batched messages are sent.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    /**
     * <p>The URL of the Amazon SQS queue to which batched messages are sent.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue to which batched messages are sent.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline SendMessageBatchRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to which batched messages are sent.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline SendMessageBatchRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to which batched messages are sent.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline SendMessageBatchRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    /**
     * <p>A list of <code> <a>SendMessageBatchRequestEntry</a> </code> items.</p>
     */
    inline const Aws::Vector<SendMessageBatchRequestEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>A list of <code> <a>SendMessageBatchRequestEntry</a> </code> items.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>A list of <code> <a>SendMessageBatchRequestEntry</a> </code> items.</p>
     */
    inline void SetEntries(const Aws::Vector<SendMessageBatchRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>A list of <code> <a>SendMessageBatchRequestEntry</a> </code> items.</p>
     */
    inline void SetEntries(Aws::Vector<SendMessageBatchRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>A list of <code> <a>SendMessageBatchRequestEntry</a> </code> items.</p>
     */
    inline SendMessageBatchRequest& WithEntries(const Aws::Vector<SendMessageBatchRequestEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of <code> <a>SendMessageBatchRequestEntry</a> </code> items.</p>
     */
    inline SendMessageBatchRequest& WithEntries(Aws::Vector<SendMessageBatchRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>A list of <code> <a>SendMessageBatchRequestEntry</a> </code> items.</p>
     */
    inline SendMessageBatchRequest& AddEntries(const SendMessageBatchRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>A list of <code> <a>SendMessageBatchRequestEntry</a> </code> items.</p>
     */
    inline SendMessageBatchRequest& AddEntries(SendMessageBatchRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;

    Aws::Vector<SendMessageBatchRequestEntry> m_entries;
    bool m_entriesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
