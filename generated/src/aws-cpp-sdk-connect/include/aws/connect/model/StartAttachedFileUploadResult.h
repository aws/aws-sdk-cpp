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
    AWS_CONNECT_API StartAttachedFileUploadResult() = default;
    AWS_CONNECT_API StartAttachedFileUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartAttachedFileUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the attached file resource (ARN).</p>
     */
    inline const Aws::String& GetFileArn() const { return m_fileArn; }
    template<typename FileArnT = Aws::String>
    void SetFileArn(FileArnT&& value) { m_fileArnHasBeenSet = true; m_fileArn = std::forward<FileArnT>(value); }
    template<typename FileArnT = Aws::String>
    StartAttachedFileUploadResult& WithFileArn(FileArnT&& value) { SetFileArn(std::forward<FileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline const Aws::String& GetFileId() const { return m_fileId; }
    template<typename FileIdT = Aws::String>
    void SetFileId(FileIdT&& value) { m_fileIdHasBeenSet = true; m_fileId = std::forward<FileIdT>(value); }
    template<typename FileIdT = Aws::String>
    StartAttachedFileUploadResult& WithFileId(FileIdT&& value) { SetFileId(std::forward<FileIdT>(value)); return *this;}
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
    StartAttachedFileUploadResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the attached file.</p>
     */
    inline FileStatusType GetFileStatus() const { return m_fileStatus; }
    inline void SetFileStatus(FileStatusType value) { m_fileStatusHasBeenSet = true; m_fileStatus = value; }
    inline StartAttachedFileUploadResult& WithFileStatus(FileStatusType value) { SetFileStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline const CreatedByInfo& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = CreatedByInfo>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = CreatedByInfo>
    StartAttachedFileUploadResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline const UploadUrlMetadata& GetUploadUrlMetadata() const { return m_uploadUrlMetadata; }
    template<typename UploadUrlMetadataT = UploadUrlMetadata>
    void SetUploadUrlMetadata(UploadUrlMetadataT&& value) { m_uploadUrlMetadataHasBeenSet = true; m_uploadUrlMetadata = std::forward<UploadUrlMetadataT>(value); }
    template<typename UploadUrlMetadataT = UploadUrlMetadata>
    StartAttachedFileUploadResult& WithUploadUrlMetadata(UploadUrlMetadataT&& value) { SetUploadUrlMetadata(std::forward<UploadUrlMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartAttachedFileUploadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    CreatedByInfo m_createdBy;
    bool m_createdByHasBeenSet = false;

    UploadUrlMetadata m_uploadUrlMetadata;
    bool m_uploadUrlMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
