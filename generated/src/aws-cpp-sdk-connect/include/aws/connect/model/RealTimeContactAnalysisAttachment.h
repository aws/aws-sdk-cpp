/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ArtifactStatus.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Object that describes attached file. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisAttachment">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisAttachment
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisAttachment();
    AWS_CONNECT_API RealTimeContactAnalysisAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A case-sensitive name of the attachment being uploaded. Can be redacted.</p>
     */
    inline const Aws::String& GetAttachmentName() const{ return m_attachmentName; }
    inline bool AttachmentNameHasBeenSet() const { return m_attachmentNameHasBeenSet; }
    inline void SetAttachmentName(const Aws::String& value) { m_attachmentNameHasBeenSet = true; m_attachmentName = value; }
    inline void SetAttachmentName(Aws::String&& value) { m_attachmentNameHasBeenSet = true; m_attachmentName = std::move(value); }
    inline void SetAttachmentName(const char* value) { m_attachmentNameHasBeenSet = true; m_attachmentName.assign(value); }
    inline RealTimeContactAnalysisAttachment& WithAttachmentName(const Aws::String& value) { SetAttachmentName(value); return *this;}
    inline RealTimeContactAnalysisAttachment& WithAttachmentName(Aws::String&& value) { SetAttachmentName(std::move(value)); return *this;}
    inline RealTimeContactAnalysisAttachment& WithAttachmentName(const char* value) { SetAttachmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the MIME file type of the attachment. For a list of supported file
     * types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html">Feature
     * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline RealTimeContactAnalysisAttachment& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline RealTimeContactAnalysisAttachment& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline RealTimeContactAnalysisAttachment& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline RealTimeContactAnalysisAttachment& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline RealTimeContactAnalysisAttachment& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline RealTimeContactAnalysisAttachment& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the attachment.</p>
     */
    inline const ArtifactStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ArtifactStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ArtifactStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RealTimeContactAnalysisAttachment& WithStatus(const ArtifactStatus& value) { SetStatus(value); return *this;}
    inline RealTimeContactAnalysisAttachment& WithStatus(ArtifactStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentName;
    bool m_attachmentNameHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    ArtifactStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
