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
    AWS_CONNECTPARTICIPANT_API StartAttachmentUploadRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAttachmentUpload"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    StartAttachmentUploadRequest& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the attachment in bytes.</p>
     */
    inline long long GetAttachmentSizeInBytes() const { return m_attachmentSizeInBytes; }
    inline bool AttachmentSizeInBytesHasBeenSet() const { return m_attachmentSizeInBytesHasBeenSet; }
    inline void SetAttachmentSizeInBytes(long long value) { m_attachmentSizeInBytesHasBeenSet = true; m_attachmentSizeInBytes = value; }
    inline StartAttachmentUploadRequest& WithAttachmentSizeInBytes(long long value) { SetAttachmentSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline const Aws::String& GetAttachmentName() const { return m_attachmentName; }
    inline bool AttachmentNameHasBeenSet() const { return m_attachmentNameHasBeenSet; }
    template<typename AttachmentNameT = Aws::String>
    void SetAttachmentName(AttachmentNameT&& value) { m_attachmentNameHasBeenSet = true; m_attachmentName = std::forward<AttachmentNameT>(value); }
    template<typename AttachmentNameT = Aws::String>
    StartAttachmentUploadRequest& WithAttachmentName(AttachmentNameT&& value) { SetAttachmentName(std::forward<AttachmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartAttachmentUploadRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const { return m_connectionToken; }
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
    template<typename ConnectionTokenT = Aws::String>
    void SetConnectionToken(ConnectionTokenT&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::forward<ConnectionTokenT>(value); }
    template<typename ConnectionTokenT = Aws::String>
    StartAttachmentUploadRequest& WithConnectionToken(ConnectionTokenT&& value) { SetConnectionToken(std::forward<ConnectionTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    long long m_attachmentSizeInBytes{0};
    bool m_attachmentSizeInBytesHasBeenSet = false;

    Aws::String m_attachmentName;
    bool m_attachmentNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
