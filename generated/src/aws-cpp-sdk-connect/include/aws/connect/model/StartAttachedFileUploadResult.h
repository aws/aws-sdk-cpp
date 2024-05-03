/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FileStatusType.h>
#include <aws/connect/model/CreatedByInfo.h>
#include <aws/connect/model/UploadUrlMetadata.h>
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
namespace Connect
{
namespace Model
{
  /**
   * Response from StartAttachedFileUpload API.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartAttachedFileUploadResponse">AWS
   * API Reference</a></p>
   */
  class StartAttachedFileUploadResult
  {
  public:
    AWS_CONNECT_API StartAttachedFileUploadResult();
    AWS_CONNECT_API StartAttachedFileUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartAttachedFileUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline const Aws::String& GetFileArn() const{ return m_fileArn; }

    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline void SetFileArn(const Aws::String& value) { m_fileArn = value; }

    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline void SetFileArn(Aws::String&& value) { m_fileArn = std::move(value); }

    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline void SetFileArn(const char* value) { m_fileArn.assign(value); }

    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline StartAttachedFileUploadResult& WithFileArn(const Aws::String& value) { SetFileArn(value); return *this;}

    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline StartAttachedFileUploadResult& WithFileArn(Aws::String&& value) { SetFileArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline StartAttachedFileUploadResult& WithFileArn(const char* value) { SetFileArn(value); return *this;}


    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline const Aws::String& GetFileId() const{ return m_fileId; }

    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline void SetFileId(const Aws::String& value) { m_fileId = value; }

    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline void SetFileId(Aws::String&& value) { m_fileId = std::move(value); }

    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline void SetFileId(const char* value) { m_fileId.assign(value); }

    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline StartAttachedFileUploadResult& WithFileId(const Aws::String& value) { SetFileId(value); return *this;}

    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline StartAttachedFileUploadResult& WithFileId(Aws::String&& value) { SetFileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline StartAttachedFileUploadResult& WithFileId(const char* value) { SetFileId(value); return *this;}


    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline StartAttachedFileUploadResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline StartAttachedFileUploadResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline StartAttachedFileUploadResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The current status of the attached file.</p>
     */
    inline const FileStatusType& GetFileStatus() const{ return m_fileStatus; }

    /**
     * <p>The current status of the attached file.</p>
     */
    inline void SetFileStatus(const FileStatusType& value) { m_fileStatus = value; }

    /**
     * <p>The current status of the attached file.</p>
     */
    inline void SetFileStatus(FileStatusType&& value) { m_fileStatus = std::move(value); }

    /**
     * <p>The current status of the attached file.</p>
     */
    inline StartAttachedFileUploadResult& WithFileStatus(const FileStatusType& value) { SetFileStatus(value); return *this;}

    /**
     * <p>The current status of the attached file.</p>
     */
    inline StartAttachedFileUploadResult& WithFileStatus(FileStatusType&& value) { SetFileStatus(std::move(value)); return *this;}


    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline const CreatedByInfo& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline void SetCreatedBy(const CreatedByInfo& value) { m_createdBy = value; }

    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline void SetCreatedBy(CreatedByInfo&& value) { m_createdBy = std::move(value); }

    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline StartAttachedFileUploadResult& WithCreatedBy(const CreatedByInfo& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline StartAttachedFileUploadResult& WithCreatedBy(CreatedByInfo&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>Information to be used while uploading the attached file. </p>
     */
    inline const UploadUrlMetadata& GetUploadUrlMetadata() const{ return m_uploadUrlMetadata; }

    /**
     * <p>Information to be used while uploading the attached file. </p>
     */
    inline void SetUploadUrlMetadata(const UploadUrlMetadata& value) { m_uploadUrlMetadata = value; }

    /**
     * <p>Information to be used while uploading the attached file. </p>
     */
    inline void SetUploadUrlMetadata(UploadUrlMetadata&& value) { m_uploadUrlMetadata = std::move(value); }

    /**
     * <p>Information to be used while uploading the attached file. </p>
     */
    inline StartAttachedFileUploadResult& WithUploadUrlMetadata(const UploadUrlMetadata& value) { SetUploadUrlMetadata(value); return *this;}

    /**
     * <p>Information to be used while uploading the attached file. </p>
     */
    inline StartAttachedFileUploadResult& WithUploadUrlMetadata(UploadUrlMetadata&& value) { SetUploadUrlMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartAttachedFileUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartAttachedFileUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartAttachedFileUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_fileArn;

    Aws::String m_fileId;

    Aws::String m_creationTime;

    FileStatusType m_fileStatus;

    CreatedByInfo m_createdBy;

    UploadUrlMetadata m_uploadUrlMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
