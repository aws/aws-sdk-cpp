/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CompleteAttachmentUploadRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API CompleteAttachmentUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteAttachmentUpload"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of unique identifiers for the attachments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttachmentIds() const{ return m_attachmentIds; }
    inline bool AttachmentIdsHasBeenSet() const { return m_attachmentIdsHasBeenSet; }
    inline void SetAttachmentIds(const Aws::Vector<Aws::String>& value) { m_attachmentIdsHasBeenSet = true; m_attachmentIds = value; }
    inline void SetAttachmentIds(Aws::Vector<Aws::String>&& value) { m_attachmentIdsHasBeenSet = true; m_attachmentIds = std::move(value); }
    inline CompleteAttachmentUploadRequest& WithAttachmentIds(const Aws::Vector<Aws::String>& value) { SetAttachmentIds(value); return *this;}
    inline CompleteAttachmentUploadRequest& WithAttachmentIds(Aws::Vector<Aws::String>&& value) { SetAttachmentIds(std::move(value)); return *this;}
    inline CompleteAttachmentUploadRequest& AddAttachmentIds(const Aws::String& value) { m_attachmentIdsHasBeenSet = true; m_attachmentIds.push_back(value); return *this; }
    inline CompleteAttachmentUploadRequest& AddAttachmentIds(Aws::String&& value) { m_attachmentIdsHasBeenSet = true; m_attachmentIds.push_back(std::move(value)); return *this; }
    inline CompleteAttachmentUploadRequest& AddAttachmentIds(const char* value) { m_attachmentIdsHasBeenSet = true; m_attachmentIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CompleteAttachmentUploadRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CompleteAttachmentUploadRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CompleteAttachmentUploadRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const{ return m_connectionToken; }
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
    inline void SetConnectionToken(const Aws::String& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = value; }
    inline void SetConnectionToken(Aws::String&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::move(value); }
    inline void SetConnectionToken(const char* value) { m_connectionTokenHasBeenSet = true; m_connectionToken.assign(value); }
    inline CompleteAttachmentUploadRequest& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}
    inline CompleteAttachmentUploadRequest& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}
    inline CompleteAttachmentUploadRequest& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_attachmentIds;
    bool m_attachmentIdsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
