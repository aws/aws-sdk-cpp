/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectparticipant/model/UploadMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConnectParticipant
{
namespace Model
{
  class StartAttachmentUploadResult
  {
  public:
    AWS_CONNECTPARTICIPANT_API StartAttachmentUploadResult();
    AWS_CONNECTPARTICIPANT_API StartAttachmentUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTPARTICIPANT_API StartAttachmentUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentId = value; }

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentId = std::move(value); }

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentId.assign(value); }

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline StartAttachmentUploadResult& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline StartAttachmentUploadResult& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline StartAttachmentUploadResult& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


    /**
     * <p>Fields to be used while uploading the attachment.</p>
     */
    inline const UploadMetadata& GetUploadMetadata() const{ return m_uploadMetadata; }

    /**
     * <p>Fields to be used while uploading the attachment.</p>
     */
    inline void SetUploadMetadata(const UploadMetadata& value) { m_uploadMetadata = value; }

    /**
     * <p>Fields to be used while uploading the attachment.</p>
     */
    inline void SetUploadMetadata(UploadMetadata&& value) { m_uploadMetadata = std::move(value); }

    /**
     * <p>Fields to be used while uploading the attachment.</p>
     */
    inline StartAttachmentUploadResult& WithUploadMetadata(const UploadMetadata& value) { SetUploadMetadata(value); return *this;}

    /**
     * <p>Fields to be used while uploading the attachment.</p>
     */
    inline StartAttachmentUploadResult& WithUploadMetadata(UploadMetadata&& value) { SetUploadMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_attachmentId;

    UploadMetadata m_uploadMetadata;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
