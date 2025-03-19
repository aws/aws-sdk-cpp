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
    AWS_CONNECTPARTICIPANT_API AttachmentItem() = default;
    AWS_CONNECTPARTICIPANT_API AttachmentItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API AttachmentItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    AttachmentItem& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    AttachmentItem& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
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
    AttachmentItem& WithAttachmentName(AttachmentNameT&& value) { SetAttachmentName(std::forward<AttachmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the attachment.</p>
     */
    inline ArtifactStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ArtifactStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AttachmentItem& WithStatus(ArtifactStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_attachmentName;
    bool m_attachmentNameHasBeenSet = false;

    ArtifactStatus m_status{ArtifactStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
