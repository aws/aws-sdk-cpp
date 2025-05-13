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
    AWS_CONNECTPARTICIPANT_API CompleteAttachmentUploadRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetAttachmentIds() const { return m_attachmentIds; }
    inline bool AttachmentIdsHasBeenSet() const { return m_attachmentIdsHasBeenSet; }
    template<typename AttachmentIdsT = Aws::Vector<Aws::String>>
    void SetAttachmentIds(AttachmentIdsT&& value) { m_attachmentIdsHasBeenSet = true; m_attachmentIds = std::forward<AttachmentIdsT>(value); }
    template<typename AttachmentIdsT = Aws::Vector<Aws::String>>
    CompleteAttachmentUploadRequest& WithAttachmentIds(AttachmentIdsT&& value) { SetAttachmentIds(std::forward<AttachmentIdsT>(value)); return *this;}
    template<typename AttachmentIdsT = Aws::String>
    CompleteAttachmentUploadRequest& AddAttachmentIds(AttachmentIdsT&& value) { m_attachmentIdsHasBeenSet = true; m_attachmentIds.emplace_back(std::forward<AttachmentIdsT>(value)); return *this; }
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
    CompleteAttachmentUploadRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    CompleteAttachmentUploadRequest& WithConnectionToken(ConnectionTokenT&& value) { SetConnectionToken(std::forward<ConnectionTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_attachmentIds;
    bool m_attachmentIdsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
