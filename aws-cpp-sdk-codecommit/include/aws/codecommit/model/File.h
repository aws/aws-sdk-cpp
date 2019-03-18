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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a file in a repository.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/File">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API File
  {
  public:
    File();
    File(Aws::Utils::Json::JsonView jsonValue);
    File& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline void SetBlobId(const Aws::String& value) { m_blobIdHasBeenSet = true; m_blobId = value; }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline void SetBlobId(Aws::String&& value) { m_blobIdHasBeenSet = true; m_blobId = std::move(value); }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline void SetBlobId(const char* value) { m_blobIdHasBeenSet = true; m_blobId.assign(value); }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline File& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline File& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline File& WithBlobId(const char* value) { SetBlobId(value); return *this;}


    /**
     * <p>The fully-qualified path to the file in the repository.</p>
     */
    inline const Aws::String& GetAbsolutePath() const{ return m_absolutePath; }

    /**
     * <p>The fully-qualified path to the file in the repository.</p>
     */
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }

    /**
     * <p>The fully-qualified path to the file in the repository.</p>
     */
    inline void SetAbsolutePath(const Aws::String& value) { m_absolutePathHasBeenSet = true; m_absolutePath = value; }

    /**
     * <p>The fully-qualified path to the file in the repository.</p>
     */
    inline void SetAbsolutePath(Aws::String&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::move(value); }

    /**
     * <p>The fully-qualified path to the file in the repository.</p>
     */
    inline void SetAbsolutePath(const char* value) { m_absolutePathHasBeenSet = true; m_absolutePath.assign(value); }

    /**
     * <p>The fully-qualified path to the file in the repository.</p>
     */
    inline File& WithAbsolutePath(const Aws::String& value) { SetAbsolutePath(value); return *this;}

    /**
     * <p>The fully-qualified path to the file in the repository.</p>
     */
    inline File& WithAbsolutePath(Aws::String&& value) { SetAbsolutePath(std::move(value)); return *this;}

    /**
     * <p>The fully-qualified path to the file in the repository.</p>
     */
    inline File& WithAbsolutePath(const char* value) { SetAbsolutePath(value); return *this;}


    /**
     * <p>The relative path of the file from the folder where the query originated.</p>
     */
    inline const Aws::String& GetRelativePath() const{ return m_relativePath; }

    /**
     * <p>The relative path of the file from the folder where the query originated.</p>
     */
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }

    /**
     * <p>The relative path of the file from the folder where the query originated.</p>
     */
    inline void SetRelativePath(const Aws::String& value) { m_relativePathHasBeenSet = true; m_relativePath = value; }

    /**
     * <p>The relative path of the file from the folder where the query originated.</p>
     */
    inline void SetRelativePath(Aws::String&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::move(value); }

    /**
     * <p>The relative path of the file from the folder where the query originated.</p>
     */
    inline void SetRelativePath(const char* value) { m_relativePathHasBeenSet = true; m_relativePath.assign(value); }

    /**
     * <p>The relative path of the file from the folder where the query originated.</p>
     */
    inline File& WithRelativePath(const Aws::String& value) { SetRelativePath(value); return *this;}

    /**
     * <p>The relative path of the file from the folder where the query originated.</p>
     */
    inline File& WithRelativePath(Aws::String&& value) { SetRelativePath(std::move(value)); return *this;}

    /**
     * <p>The relative path of the file from the folder where the query originated.</p>
     */
    inline File& WithRelativePath(const char* value) { SetRelativePath(value); return *this;}


    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline const FileModeTypeEnum& GetFileMode() const{ return m_fileMode; }

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline void SetFileMode(const FileModeTypeEnum& value) { m_fileModeHasBeenSet = true; m_fileMode = value; }

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline void SetFileMode(FileModeTypeEnum&& value) { m_fileModeHasBeenSet = true; m_fileMode = std::move(value); }

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline File& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline File& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}

  private:

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet;

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet;

    FileModeTypeEnum m_fileMode;
    bool m_fileModeHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
