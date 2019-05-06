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
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/model/DocumentLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/NotificationChannel.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class AWS_TEXTRACT_API StartDocumentTextDetectionRequest : public TextractRequest
  {
  public:
    StartDocumentTextDetectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDocumentTextDetection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The location of the document to be processed.</p>
     */
    inline const DocumentLocation& GetDocumentLocation() const{ return m_documentLocation; }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline bool DocumentLocationHasBeenSet() const { return m_documentLocationHasBeenSet; }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline void SetDocumentLocation(const DocumentLocation& value) { m_documentLocationHasBeenSet = true; m_documentLocation = value; }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline void SetDocumentLocation(DocumentLocation&& value) { m_documentLocationHasBeenSet = true; m_documentLocation = std::move(value); }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline StartDocumentTextDetectionRequest& WithDocumentLocation(const DocumentLocation& value) { SetDocumentLocation(value); return *this;}

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline StartDocumentTextDetectionRequest& WithDocumentLocation(DocumentLocation&& value) { SetDocumentLocation(std::move(value)); return *this;}


    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline StartDocumentTextDetectionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline StartDocumentTextDetectionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. </p>
     */
    inline StartDocumentTextDetectionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTagHasBeenSet = true; m_jobTag = value; }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::move(value); }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline void SetJobTag(const char* value) { m_jobTagHasBeenSet = true; m_jobTag.assign(value); }

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline StartDocumentTextDetectionRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline StartDocumentTextDetectionRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>An identifier you specify that's included in the completion notification
     * that's published to the Amazon SNS topic. For example, you can use
     * <code>JobTag</code> to identify the type of document, such as a tax form or a
     * receipt, that the completion notification corresponds to.</p>
     */
    inline StartDocumentTextDetectionRequest& WithJobTag(const char* value) { SetJobTag(value); return *this;}


    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline const NotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline void SetNotificationChannel(const NotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline void SetNotificationChannel(NotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline StartDocumentTextDetectionRequest& WithNotificationChannel(const NotificationChannel& value) { SetNotificationChannel(value); return *this;}

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline StartDocumentTextDetectionRequest& WithNotificationChannel(NotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}

  private:

    DocumentLocation m_documentLocation;
    bool m_documentLocationHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
