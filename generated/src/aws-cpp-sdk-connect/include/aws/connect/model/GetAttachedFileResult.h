/**
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
    AWS_CONNECT_API GetAttachedFileResult() = default;
    AWS_CONNECT_API GetAttachedFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetAttachedFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline const Aws::String& GetFileArn() const { return m_fileArn; }
    template<typename FileArnT = Aws::String>
    void SetFileArn(FileArnT&& value) { m_fileArnHasBeenSet = true; m_fileArn = std::forward<FileArnT>(value); }
    template<typename FileArnT = Aws::String>
    GetAttachedFileResult& WithFileArn(FileArnT&& value) { SetFileArn(std::forward<FileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline const Aws::String& GetFileId() const { return m_fileId; }
    template<typename FileIdT = Aws::String>
    void SetFileId(FileIdT&& value) { m_fileIdHasBeenSet = true; m_fileId = std::forward<FileIdT>(value); }
    template<typename FileIdT = Aws::String>
    GetAttachedFileResult& WithFileId(FileIdT&& value) { SetFileId(std::forward<FileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
     * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2024-05-03T02:41:28.172Z</code>.</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    GetAttachedFileResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the attached file.</p>
     */
    inline FileStatusType GetFileStatus() const { return m_fileStatus; }
    inline void SetFileStatus(FileStatusType value) { m_fileStatusHasBeenSet = true; m_fileStatus = value; }
    inline GetAttachedFileResult& WithFileStatus(FileStatusType value) { SetFileStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    GetAttachedFileResult& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the attached file in bytes.</p>
     */
    inline long long GetFileSizeInBytes() const { return m_fileSizeInBytes; }
    inline void SetFileSizeInBytes(long long value) { m_fileSizeInBytesHasBeenSet = true; m_fileSizeInBytes = value; }
    inline GetAttachedFileResult& WithFileSizeInBytes(long long value) { SetFileSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>
     */
    inline const Aws::String& GetAssociatedResourceArn() const { return m_associatedResourceArn; }
    template<typename AssociatedResourceArnT = Aws::String>
    void SetAssociatedResourceArn(AssociatedResourceArnT&& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = std::forward<AssociatedResourceArnT>(value); }
    template<typename AssociatedResourceArnT = Aws::String>
    GetAttachedFileResult& WithAssociatedResourceArn(AssociatedResourceArnT&& value) { SetAssociatedResourceArn(std::forward<AssociatedResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The use case for the file.</p>
     */
    inline FileUseCaseType GetFileUseCaseType() const { return m_fileUseCaseType; }
    inline void SetFileUseCaseType(FileUseCaseType value) { m_fileUseCaseTypeHasBeenSet = true; m_fileUseCaseType = value; }
    inline GetAttachedFileResult& WithFileUseCaseType(FileUseCaseType value) { SetFileUseCaseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline const CreatedByInfo& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = CreatedByInfo>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = CreatedByInfo>
    GetAttachedFileResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URL and expiry to be used when downloading the attached file. </p>
     */
    inline const DownloadUrlMetadata& GetDownloadUrlMetadata() const { return m_downloadUrlMetadata; }
    template<typename DownloadUrlMetadataT = DownloadUrlMetadata>
    void SetDownloadUrlMetadata(DownloadUrlMetadataT&& value) { m_downloadUrlMetadataHasBeenSet = true; m_downloadUrlMetadata = std::forward<DownloadUrlMetadataT>(value); }
    template<typename DownloadUrlMetadataT = DownloadUrlMetadata>
    GetAttachedFileResult& WithDownloadUrlMetadata(DownloadUrlMetadataT&& value) { SetDownloadUrlMetadata(std::forward<DownloadUrlMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetAttachedFileResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetAttachedFileResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAttachedFileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileArn;
    bool m_fileArnHasBeenSet = false;

    Aws::String m_fileId;
    bool m_fileIdHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    FileStatusType m_fileStatus{FileStatusType::NOT_SET};
    bool m_fileStatusHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    long long m_fileSizeInBytes{0};
    bool m_fileSizeInBytesHasBeenSet = false;

    Aws::String m_associatedResourceArn;
    bool m_associatedResourceArnHasBeenSet = false;

    FileUseCaseType m_fileUseCaseType{FileUseCaseType::NOT_SET};
    bool m_fileUseCaseTypeHasBeenSet = false;

    CreatedByInfo m_createdBy;
    bool m_createdByHasBeenSet = false;

    DownloadUrlMetadata m_downloadUrlMetadata;
    bool m_downloadUrlMetadataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
