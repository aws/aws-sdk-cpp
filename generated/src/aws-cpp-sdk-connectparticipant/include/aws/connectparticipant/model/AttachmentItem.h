/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectparticipant/model/ArtifactStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>The case-insensitive input to indicate standard MIME type that describes the
   * format of the file that will be uploaded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/AttachmentItem">AWS
   * API Reference</a></p>
   */
  class AttachmentItem
  {
  public:
    AWS_CONNECTPARTICIPANT_API AttachmentItem();
    AWS_CONNECTPARTICIPANT_API AttachmentItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API AttachmentItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AttachmentItem& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline AttachmentItem& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline AttachmentItem& WithContentType(const char* value) { SetContentType(value); return *this;}


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
    inline AttachmentItem& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline AttachmentItem& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline AttachmentItem& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


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
    inline AttachmentItem& WithAttachmentName(const Aws::String& value) { SetAttachmentName(value); return *this;}

    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline AttachmentItem& WithAttachmentName(Aws::String&& value) { SetAttachmentName(std::move(value)); return *this;}

    /**
     * <p>A case-sensitive name of the attachment being uploaded.</p>
     */
    inline AttachmentItem& WithAttachmentName(const char* value) { SetAttachmentName(value); return *this;}


    /**
     * <p>Status of the attachment.</p>
     */
    inline const ArtifactStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the attachment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the attachment.</p>
     */
    inline void SetStatus(const ArtifactStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the attachment.</p>
     */
    inline void SetStatus(ArtifactStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the attachment.</p>
     */
    inline AttachmentItem& WithStatus(const ArtifactStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the attachment.</p>
     */
    inline AttachmentItem& WithStatus(ArtifactStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_attachmentName;
    bool m_attachmentNameHasBeenSet = false;

    ArtifactStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
