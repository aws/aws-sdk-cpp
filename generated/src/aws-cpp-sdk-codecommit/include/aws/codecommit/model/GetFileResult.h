/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/FileModeTypeEnum.h>
#include <aws/core/utils/Array.h>
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
namespace CodeCommit
{
namespace Model
{
  class GetFileResult
  {
  public:
    AWS_CODECOMMIT_API GetFileResult() = default;
    AWS_CODECOMMIT_API GetFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full commit ID of the commit that contains the content returned by
     * GetFile.</p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    GetFileResult& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blob ID of the object that represents the file content.</p>
     */
    inline const Aws::String& GetBlobId() const { return m_blobId; }
    template<typename BlobIdT = Aws::String>
    void SetBlobId(BlobIdT&& value) { m_blobIdHasBeenSet = true; m_blobId = std::forward<BlobIdT>(value); }
    template<typename BlobIdT = Aws::String>
    GetFileResult& WithBlobId(BlobIdT&& value) { SetBlobId(std::forward<BlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path to the specified file. Returns the name and
     * extension of the file.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    GetFileResult& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extrapolated file mode permissions of the blob. Valid values include
     * strings such as EXECUTABLE and not numeric values.</p>  <p>The file mode
     * permissions returned by this API are not the standard file mode permission
     * values, such as 100644, but rather extrapolated values. See the supported return
     * values.</p> 
     */
    inline FileModeTypeEnum GetFileMode() const { return m_fileMode; }
    inline void SetFileMode(FileModeTypeEnum value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline GetFileResult& WithFileMode(FileModeTypeEnum value) { SetFileMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the contents of the file, in bytes.</p>
     */
    inline long long GetFileSize() const { return m_fileSize; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline GetFileResult& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base-64 encoded binary data object that represents the content of the
     * file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetFileContent() const { return m_fileContent; }
    template<typename FileContentT = Aws::Utils::ByteBuffer>
    void SetFileContent(FileContentT&& value) { m_fileContentHasBeenSet = true; m_fileContent = std::forward<FileContentT>(value); }
    template<typename FileContentT = Aws::Utils::ByteBuffer>
    GetFileResult& WithFileContent(FileContentT&& value) { SetFileContent(std::forward<FileContentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    FileModeTypeEnum m_fileMode{FileModeTypeEnum::NOT_SET};
    bool m_fileModeHasBeenSet = false;

    long long m_fileSize{0};
    bool m_fileSizeHasBeenSet = false;

    Aws::Utils::ByteBuffer m_fileContent{};
    bool m_fileContentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
