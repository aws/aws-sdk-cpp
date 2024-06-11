﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FileStatusType.h>
#include <aws/connect/model/FileUseCaseType.h>
#include <aws/connect/model/CreatedByInfo.h>
#include <aws/connect/model/DownloadUrlMetadata.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * Response from GetAttachedFile API.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetAttachedFileResponse">AWS
   * API Reference</a></p>
   */
  class GetAttachedFileResult
  {
  public:
    AWS_CONNECT_API GetAttachedFileResult();
    AWS_CONNECT_API GetAttachedFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetAttachedFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline const Aws::String& GetFileArn() const{ return m_fileArn; }
    inline void SetFileArn(const Aws::String& value) { m_fileArn = value; }
    inline void SetFileArn(Aws::String&& value) { m_fileArn = std::move(value); }
    inline void SetFileArn(const char* value) { m_fileArn.assign(value); }
    inline GetAttachedFileResult& WithFileArn(const Aws::String& value) { SetFileArn(value); return *this;}
    inline GetAttachedFileResult& WithFileArn(Aws::String&& value) { SetFileArn(std::move(value)); return *this;}
    inline GetAttachedFileResult& WithFileArn(const char* value) { SetFileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline const Aws::String& GetFileId() const{ return m_fileId; }
    inline void SetFileId(const Aws::String& value) { m_fileId = value; }
    inline void SetFileId(Aws::String&& value) { m_fileId = std::move(value); }
    inline void SetFileId(const char* value) { m_fileId.assign(value); }
    inline GetAttachedFileResult& WithFileId(const Aws::String& value) { SetFileId(value); return *this;}
    inline GetAttachedFileResult& WithFileId(Aws::String&& value) { SetFileId(std::move(value)); return *this;}
    inline GetAttachedFileResult& WithFileId(const char* value) { SetFileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }
    inline GetAttachedFileResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline GetAttachedFileResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline GetAttachedFileResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the attached file.</p>
     */
    inline const FileStatusType& GetFileStatus() const{ return m_fileStatus; }
    inline void SetFileStatus(const FileStatusType& value) { m_fileStatus = value; }
    inline void SetFileStatus(FileStatusType&& value) { m_fileStatus = std::move(value); }
    inline GetAttachedFileResult& WithFileStatus(const FileStatusType& value) { SetFileStatus(value); return *this;}
    inline GetAttachedFileResult& WithFileStatus(FileStatusType&& value) { SetFileStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline void SetFileName(const Aws::String& value) { m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileName.assign(value); }
    inline GetAttachedFileResult& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline GetAttachedFileResult& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline GetAttachedFileResult& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the attached file in bytes.</p>
     */
    inline long long GetFileSizeInBytes() const{ return m_fileSizeInBytes; }
    inline void SetFileSizeInBytes(long long value) { m_fileSizeInBytes = value; }
    inline GetAttachedFileResult& WithFileSizeInBytes(long long value) { SetFileSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>
     */
    inline const Aws::String& GetAssociatedResourceArn() const{ return m_associatedResourceArn; }
    inline void SetAssociatedResourceArn(const Aws::String& value) { m_associatedResourceArn = value; }
    inline void SetAssociatedResourceArn(Aws::String&& value) { m_associatedResourceArn = std::move(value); }
    inline void SetAssociatedResourceArn(const char* value) { m_associatedResourceArn.assign(value); }
    inline GetAttachedFileResult& WithAssociatedResourceArn(const Aws::String& value) { SetAssociatedResourceArn(value); return *this;}
    inline GetAttachedFileResult& WithAssociatedResourceArn(Aws::String&& value) { SetAssociatedResourceArn(std::move(value)); return *this;}
    inline GetAttachedFileResult& WithAssociatedResourceArn(const char* value) { SetAssociatedResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The use case for the file.</p>
     */
    inline const FileUseCaseType& GetFileUseCaseType() const{ return m_fileUseCaseType; }
    inline void SetFileUseCaseType(const FileUseCaseType& value) { m_fileUseCaseType = value; }
    inline void SetFileUseCaseType(FileUseCaseType&& value) { m_fileUseCaseType = std::move(value); }
    inline GetAttachedFileResult& WithFileUseCaseType(const FileUseCaseType& value) { SetFileUseCaseType(value); return *this;}
    inline GetAttachedFileResult& WithFileUseCaseType(FileUseCaseType&& value) { SetFileUseCaseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline const CreatedByInfo& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const CreatedByInfo& value) { m_createdBy = value; }
    inline void SetCreatedBy(CreatedByInfo&& value) { m_createdBy = std::move(value); }
    inline GetAttachedFileResult& WithCreatedBy(const CreatedByInfo& value) { SetCreatedBy(value); return *this;}
    inline GetAttachedFileResult& WithCreatedBy(CreatedByInfo&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URL and expiry to be used when downloading the attached file. </p>
     */
    inline const DownloadUrlMetadata& GetDownloadUrlMetadata() const{ return m_downloadUrlMetadata; }
    inline void SetDownloadUrlMetadata(const DownloadUrlMetadata& value) { m_downloadUrlMetadata = value; }
    inline void SetDownloadUrlMetadata(DownloadUrlMetadata&& value) { m_downloadUrlMetadata = std::move(value); }
    inline GetAttachedFileResult& WithDownloadUrlMetadata(const DownloadUrlMetadata& value) { SetDownloadUrlMetadata(value); return *this;}
    inline GetAttachedFileResult& WithDownloadUrlMetadata(DownloadUrlMetadata&& value) { SetDownloadUrlMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetAttachedFileResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetAttachedFileResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetAttachedFileResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetAttachedFileResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetAttachedFileResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetAttachedFileResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetAttachedFileResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetAttachedFileResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetAttachedFileResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAttachedFileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAttachedFileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAttachedFileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fileArn;

    Aws::String m_fileId;

    Aws::String m_creationTime;

    FileStatusType m_fileStatus;

    Aws::String m_fileName;

    long long m_fileSizeInBytes;

    Aws::String m_associatedResourceArn;

    FileUseCaseType m_fileUseCaseType;

    CreatedByInfo m_createdBy;

    DownloadUrlMetadata m_downloadUrlMetadata;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
