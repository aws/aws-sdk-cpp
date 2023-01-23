/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

  /**
   */
  class StartAttachmentUploadRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API StartAttachmentUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAttachmentUpload"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline StartAttachmentUploadRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline StartAttachmentUploadRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline StartAttachmentUploadRequest& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The size of the attachment in bytes.</p>
     */
    inline long long GetAttachmentSizeInBytes() const{ return m_attachmentSizeInBytes; }

    /**
     * <p>The size of the attachment in bytes.</p>
     */
    inline bool AttachmentSizeInBytesHasBeenSet() const { return m_attachmentSizeInBytesHasBeenSet; }

    /**
     * <p>The size of the attachment in bytes.</p>
     */
    inline void SetAttachmentSizeInBytes(long long value) { m_attachmentSizeInBytesHasBeenSet = true; m_attachmentSizeInBytes = value; }

    /**
     * <p>The size of the attachment in bytes.</p>
     */
    inline StartAttachmentUploadRequest& WithAttachmentSizeInBytes(long long value) { SetAttachmentSizeInBytes(value); return *this;}


    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline const Aws::String& GetAttachmentName() const{ return m_attachmentName; }

    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline bool AttachmentNameHasBeenSet() const { return m_attachmentNameHasBeenSet; }

    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline void SetAttachmentName(const Aws::String& value) { m_attachmentNameHasBeenSet = true; m_attachmentName = value; }

    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline void SetAttachmentName(Aws::String&& value) { m_attachmentNameHasBeenSet = true; m_attachmentName = std::move(value); }

    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline void SetAttachmentName(const char* value) { m_attachmentNameHasBeenSet = true; m_attachmentName.assign(value); }

    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline StartAttachmentUploadRequest& WithAttachmentName(const Aws::String& value) { SetAttachmentName(value); return *this;}

    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline StartAttachmentUploadRequest& WithAttachmentName(Aws::String&& value) { SetAttachmentName(std::move(value)); return *this;}

    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline StartAttachmentUploadRequest& WithAttachmentName(const char* value) { SetAttachmentName(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartAttachmentUploadRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartAttachmentUploadRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartAttachmentUploadRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const{ return m_connectionToken; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(const Aws::String& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = value; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(Aws::String&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::move(value); }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(const char* value) { m_connectionTokenHasBeenSet = true; m_connectionToken.assign(value); }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline StartAttachmentUploadRequest& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline StartAttachmentUploadRequest& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline StartAttachmentUploadRequest& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}

  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    long long m_attachmentSizeInBytes;
    bool m_attachmentSizeInBytesHasBeenSet = false;

    Aws::String m_attachmentName;
    bool m_attachmentNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
