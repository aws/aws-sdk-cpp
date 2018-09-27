/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API GetFileResult
  {
  public:
    GetFileResult();
    GetFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full commit ID of the commit that contains the content returned by
     * GetFile.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The full commit ID of the commit that contains the content returned by
     * GetFile.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }

    /**
     * <p>The full commit ID of the commit that contains the content returned by
     * GetFile.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }

    /**
     * <p>The full commit ID of the commit that contains the content returned by
     * GetFile.</p>
     */
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }

    /**
     * <p>The full commit ID of the commit that contains the content returned by
     * GetFile.</p>
     */
    inline GetFileResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the commit that contains the content returned by
     * GetFile.</p>
     */
    inline GetFileResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the commit that contains the content returned by
     * GetFile.</p>
     */
    inline GetFileResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p>The blob ID of the object that represents the file content.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }

    /**
     * <p>The blob ID of the object that represents the file content.</p>
     */
    inline void SetBlobId(const Aws::String& value) { m_blobId = value; }

    /**
     * <p>The blob ID of the object that represents the file content.</p>
     */
    inline void SetBlobId(Aws::String&& value) { m_blobId = std::move(value); }

    /**
     * <p>The blob ID of the object that represents the file content.</p>
     */
    inline void SetBlobId(const char* value) { m_blobId.assign(value); }

    /**
     * <p>The blob ID of the object that represents the file content.</p>
     */
    inline GetFileResult& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}

    /**
     * <p>The blob ID of the object that represents the file content.</p>
     */
    inline GetFileResult& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}

    /**
     * <p>The blob ID of the object that represents the file content.</p>
     */
    inline GetFileResult& WithBlobId(const char* value) { SetBlobId(value); return *this;}


    /**
     * <p>The fully qualified path to the specified file. This returns the name and
     * extension of the file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The fully qualified path to the specified file. This returns the name and
     * extension of the file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePath = value; }

    /**
     * <p>The fully qualified path to the specified file. This returns the name and
     * extension of the file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePath = std::move(value); }

    /**
     * <p>The fully qualified path to the specified file. This returns the name and
     * extension of the file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePath.assign(value); }

    /**
     * <p>The fully qualified path to the specified file. This returns the name and
     * extension of the file.</p>
     */
    inline GetFileResult& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The fully qualified path to the specified file. This returns the name and
     * extension of the file.</p>
     */
    inline GetFileResult& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The fully qualified path to the specified file. This returns the name and
     * extension of the file.</p>
     */
    inline GetFileResult& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The extrapolated file mode permissions of the blob. Valid values include
     * strings such as EXECUTABLE and not numeric values.</p> <note> <p>The file mode
     * permissions returned by this API are not the standard file mode permission
     * values, such as 100644, but rather extrapolated values. See below for a full
     * list of supported return values.</p> </note>
     */
    inline const FileModeTypeEnum& GetFileMode() const{ return m_fileMode; }

    /**
     * <p>The extrapolated file mode permissions of the blob. Valid values include
     * strings such as EXECUTABLE and not numeric values.</p> <note> <p>The file mode
     * permissions returned by this API are not the standard file mode permission
     * values, such as 100644, but rather extrapolated values. See below for a full
     * list of supported return values.</p> </note>
     */
    inline void SetFileMode(const FileModeTypeEnum& value) { m_fileMode = value; }

    /**
     * <p>The extrapolated file mode permissions of the blob. Valid values include
     * strings such as EXECUTABLE and not numeric values.</p> <note> <p>The file mode
     * permissions returned by this API are not the standard file mode permission
     * values, such as 100644, but rather extrapolated values. See below for a full
     * list of supported return values.</p> </note>
     */
    inline void SetFileMode(FileModeTypeEnum&& value) { m_fileMode = std::move(value); }

    /**
     * <p>The extrapolated file mode permissions of the blob. Valid values include
     * strings such as EXECUTABLE and not numeric values.</p> <note> <p>The file mode
     * permissions returned by this API are not the standard file mode permission
     * values, such as 100644, but rather extrapolated values. See below for a full
     * list of supported return values.</p> </note>
     */
    inline GetFileResult& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}

    /**
     * <p>The extrapolated file mode permissions of the blob. Valid values include
     * strings such as EXECUTABLE and not numeric values.</p> <note> <p>The file mode
     * permissions returned by this API are not the standard file mode permission
     * values, such as 100644, but rather extrapolated values. See below for a full
     * list of supported return values.</p> </note>
     */
    inline GetFileResult& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}


    /**
     * <p>The size of the contents of the file, in bytes.</p>
     */
    inline long long GetFileSize() const{ return m_fileSize; }

    /**
     * <p>The size of the contents of the file, in bytes.</p>
     */
    inline void SetFileSize(long long value) { m_fileSize = value; }

    /**
     * <p>The size of the contents of the file, in bytes.</p>
     */
    inline GetFileResult& WithFileSize(long long value) { SetFileSize(value); return *this;}


    /**
     * <p>The base-64 encoded binary data object that represents the content of the
     * file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetFileContent() const{ return m_fileContent; }

    /**
     * <p>The base-64 encoded binary data object that represents the content of the
     * file.</p>
     */
    inline void SetFileContent(const Aws::Utils::ByteBuffer& value) { m_fileContent = value; }

    /**
     * <p>The base-64 encoded binary data object that represents the content of the
     * file.</p>
     */
    inline void SetFileContent(Aws::Utils::ByteBuffer&& value) { m_fileContent = std::move(value); }

    /**
     * <p>The base-64 encoded binary data object that represents the content of the
     * file.</p>
     */
    inline GetFileResult& WithFileContent(const Aws::Utils::ByteBuffer& value) { SetFileContent(value); return *this;}

    /**
     * <p>The base-64 encoded binary data object that represents the content of the
     * file.</p>
     */
    inline GetFileResult& WithFileContent(Aws::Utils::ByteBuffer&& value) { SetFileContent(std::move(value)); return *this;}

  private:

    Aws::String m_commitId;

    Aws::String m_blobId;

    Aws::String m_filePath;

    FileModeTypeEnum m_fileMode;

    long long m_fileSize;

    Aws::Utils::ByteBuffer m_fileContent;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
