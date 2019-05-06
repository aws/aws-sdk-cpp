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
#include <aws/sqs/model/ChangeMessageVisibilityBatchRequestEntry.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ChangeMessageVisibilityBatchRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API ChangeMessageVisibilityBatchRequest : public SQSRequest
  {
  public:
    ChangeMessageVisibilityBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeMessageVisibilityBatch"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The URL of the Amazon SQS queue whose messages' visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue whose messages' visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    /**
     * <p>The URL of the Amazon SQS queue whose messages' visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue whose messages' visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    /**
     * <p>The URL of the Amazon SQS queue whose messages' visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue whose messages' visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline ChangeMessageVisibilityBatchRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue whose messages' visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline ChangeMessageVisibilityBatchRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue whose messages' visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline ChangeMessageVisibilityBatchRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    /**
     * <p>A list of receipt handles of the messages for which the visibility timeout
     * must be changed.</p>
     */
    inline const Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>A list of receipt handles of the messages for which the visibility timeout
     * must be changed.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>A list of receipt handles of the messages for which the visibility timeout
     * must be changed.</p>
     */
    inline void SetEntries(const Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>A list of receipt handles of the messages for which the visibility timeout
     * must be changed.</p>
     */
    inline void SetEntries(Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>A list of receipt handles of the messages for which the visibility timeout
     * must be changed.</p>
     */
    inline ChangeMessageVisibilityBatchRequest& WithEntries(const Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of receipt handles of the messages for which the visibility timeout
     * must be changed.</p>
     */
    inline ChangeMessageVisibilityBatchRequest& WithEntries(Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>A list of receipt handles of the messages for which the visibility timeout
     * must be changed.</p>
     */
    inline ChangeMessageVisibilityBatchRequest& AddEntries(const ChangeMessageVisibilityBatchRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>A list of receipt handles of the messages for which the visibility timeout
     * must be changed.</p>
     */
    inline ChangeMessageVisibilityBatchRequest& AddEntries(ChangeMessageVisibilityBatchRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;

    Aws::Vector<ChangeMessageVisibilityBatchRequestEntry> m_entries;
    bool m_entriesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
