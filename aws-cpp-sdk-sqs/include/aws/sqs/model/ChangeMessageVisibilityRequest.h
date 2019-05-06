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
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API ChangeMessageVisibilityRequest : public SQSRequest
  {
  public:
    ChangeMessageVisibilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeMessageVisibility"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The URL of the Amazon SQS queue whose message's visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue whose message's visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    /**
     * <p>The URL of the Amazon SQS queue whose message's visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue whose message's visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    /**
     * <p>The URL of the Amazon SQS queue whose message's visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue whose message's visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline ChangeMessageVisibilityRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue whose message's visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline ChangeMessageVisibilityRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue whose message's visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline ChangeMessageVisibilityRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    /**
     * <p>The receipt handle associated with the message whose visibility timeout is
     * changed. This parameter is returned by the <code> <a>ReceiveMessage</a> </code>
     * action.</p>
     */
    inline const Aws::String& GetReceiptHandle() const{ return m_receiptHandle; }

    /**
     * <p>The receipt handle associated with the message whose visibility timeout is
     * changed. This parameter is returned by the <code> <a>ReceiveMessage</a> </code>
     * action.</p>
     */
    inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }

    /**
     * <p>The receipt handle associated with the message whose visibility timeout is
     * changed. This parameter is returned by the <code> <a>ReceiveMessage</a> </code>
     * action.</p>
     */
    inline void SetReceiptHandle(const Aws::String& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }

    /**
     * <p>The receipt handle associated with the message whose visibility timeout is
     * changed. This parameter is returned by the <code> <a>ReceiveMessage</a> </code>
     * action.</p>
     */
    inline void SetReceiptHandle(Aws::String&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = std::move(value); }

    /**
     * <p>The receipt handle associated with the message whose visibility timeout is
     * changed. This parameter is returned by the <code> <a>ReceiveMessage</a> </code>
     * action.</p>
     */
    inline void SetReceiptHandle(const char* value) { m_receiptHandleHasBeenSet = true; m_receiptHandle.assign(value); }

    /**
     * <p>The receipt handle associated with the message whose visibility timeout is
     * changed. This parameter is returned by the <code> <a>ReceiveMessage</a> </code>
     * action.</p>
     */
    inline ChangeMessageVisibilityRequest& WithReceiptHandle(const Aws::String& value) { SetReceiptHandle(value); return *this;}

    /**
     * <p>The receipt handle associated with the message whose visibility timeout is
     * changed. This parameter is returned by the <code> <a>ReceiveMessage</a> </code>
     * action.</p>
     */
    inline ChangeMessageVisibilityRequest& WithReceiptHandle(Aws::String&& value) { SetReceiptHandle(std::move(value)); return *this;}

    /**
     * <p>The receipt handle associated with the message whose visibility timeout is
     * changed. This parameter is returned by the <code> <a>ReceiveMessage</a> </code>
     * action.</p>
     */
    inline ChangeMessageVisibilityRequest& WithReceiptHandle(const char* value) { SetReceiptHandle(value); return *this;}


    /**
     * <p>The new value for the message's visibility timeout (in seconds). Values
     * values: <code>0</code> to <code>43200</code>. Maximum: 12 hours.</p>
     */
    inline int GetVisibilityTimeout() const{ return m_visibilityTimeout; }

    /**
     * <p>The new value for the message's visibility timeout (in seconds). Values
     * values: <code>0</code> to <code>43200</code>. Maximum: 12 hours.</p>
     */
    inline bool VisibilityTimeoutHasBeenSet() const { return m_visibilityTimeoutHasBeenSet; }

    /**
     * <p>The new value for the message's visibility timeout (in seconds). Values
     * values: <code>0</code> to <code>43200</code>. Maximum: 12 hours.</p>
     */
    inline void SetVisibilityTimeout(int value) { m_visibilityTimeoutHasBeenSet = true; m_visibilityTimeout = value; }

    /**
     * <p>The new value for the message's visibility timeout (in seconds). Values
     * values: <code>0</code> to <code>43200</code>. Maximum: 12 hours.</p>
     */
    inline ChangeMessageVisibilityRequest& WithVisibilityTimeout(int value) { SetVisibilityTimeout(value); return *this;}

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;

    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet;

    int m_visibilityTimeout;
    bool m_visibilityTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
