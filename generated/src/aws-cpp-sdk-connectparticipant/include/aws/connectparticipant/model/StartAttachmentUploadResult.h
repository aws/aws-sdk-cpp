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


    ///@{
    /**
     * <p>A unique identifier for the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentId.assign(value); }
    inline StartAttachmentUploadResult& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline StartAttachmentUploadResult& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline StartAttachmentUploadResult& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline const UploadMetadata& GetUploadMetadata() const{ return m_uploadMetadata; }
    inline void SetUploadMetadata(const UploadMetadata& value) { m_uploadMetadata = value; }
    inline void SetUploadMetadata(UploadMetadata&& value) { m_uploadMetadata = std::move(value); }
    inline StartAttachmentUploadResult& WithUploadMetadata(const UploadMetadata& value) { SetUploadMetadata(value); return *this;}
    inline StartAttachmentUploadResult& WithUploadMetadata(UploadMetadata&& value) { SetUploadMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartAttachmentUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartAttachmentUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartAttachmentUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_attachmentId;

    UploadMetadata m_uploadMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
