/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

  /**
   */
  class GetAttachmentRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API GetAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAttachment"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline GetAttachmentRequest& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline GetAttachmentRequest& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline GetAttachmentRequest& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


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
    inline GetAttachmentRequest& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline GetAttachmentRequest& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline GetAttachmentRequest& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}

  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
