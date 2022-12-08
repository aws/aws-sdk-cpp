/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/model/DocumentLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/NotificationChannel.h>
#include <aws/textract/model/OutputConfig.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class StartDocumentTextDetectionRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API StartDocumentTextDetectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDocumentTextDetection"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline StartDocumentTextDetectionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline StartDocumentTextDetectionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The idempotent token that's used to identify the start request. If you use
     * the same token with multiple <code>StartDocumentTextDetection</code> requests,
     * the same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline StartDocumentTextDetectionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTagHasBeenSet = true; m_jobTag = value; }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::move(value); }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline void SetJobTag(const char* value) { m_jobTagHasBeenSet = true; m_jobTag.assign(value); }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline StartDocumentTextDetectionRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline StartDocumentTextDetectionRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
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


    /**
     * <p>Sets if the output will go to a customer defined bucket. By default Amazon
     * Textract will save the results internally to be accessed with the
     * GetDocumentTextDetection operation.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default Amazon
     * Textract will save the results internally to be accessed with the
     * GetDocumentTextDetection operation.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default Amazon
     * Textract will save the results internally to be accessed with the
     * GetDocumentTextDetection operation.</p>
     */
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default Amazon
     * Textract will save the results internally to be accessed with the
     * GetDocumentTextDetection operation.</p>
     */
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default Amazon
     * Textract will save the results internally to be accessed with the
     * GetDocumentTextDetection operation.</p>
     */
    inline StartDocumentTextDetectionRequest& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default Amazon
     * Textract will save the results internally to be accessed with the
     * GetDocumentTextDetection operation.</p>
     */
    inline StartDocumentTextDetectionRequest& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = value; }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::move(value); }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline void SetKMSKeyId(const char* value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId.assign(value); }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline StartDocumentTextDetectionRequest& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline StartDocumentTextDetectionRequest& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline StartDocumentTextDetectionRequest& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}

  private:

    DocumentLocation m_documentLocation;
    bool m_documentLocationHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
