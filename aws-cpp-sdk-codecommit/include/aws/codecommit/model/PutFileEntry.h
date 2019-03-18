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
#include <aws/codecommit/model/SourceFileSpecifier.h>
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
   * <p>Information about a file that will be added or updated as part of a
   * commit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutFileEntry">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API PutFileEntry
  {
  public:
    PutFileEntry();
    PutFileEntry(Aws::Utils::Json::JsonView jsonValue);
    PutFileEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full path to the file in the repository, including the name of the
     * file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The full path to the file in the repository, including the name of the
     * file.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The full path to the file in the repository, including the name of the
     * file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The full path to the file in the repository, including the name of the
     * file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The full path to the file in the repository, including the name of the
     * file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The full path to the file in the repository, including the name of the
     * file.</p>
     */
    inline PutFileEntry& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The full path to the file in the repository, including the name of the
     * file.</p>
     */
    inline PutFileEntry& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The full path to the file in the repository, including the name of the
     * file.</p>
     */
    inline PutFileEntry& WithFilePath(const char* value) { SetFilePath(value); return *this;}


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
    inline PutFileEntry& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline PutFileEntry& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}


    /**
     * <p>The content of the file, if a source file is not specified.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetFileContent() const{ return m_fileContent; }

    /**
     * <p>The content of the file, if a source file is not specified.</p>
     */
    inline bool FileContentHasBeenSet() const { return m_fileContentHasBeenSet; }

    /**
     * <p>The content of the file, if a source file is not specified.</p>
     */
    inline void SetFileContent(const Aws::Utils::ByteBuffer& value) { m_fileContentHasBeenSet = true; m_fileContent = value; }

    /**
     * <p>The content of the file, if a source file is not specified.</p>
     */
    inline void SetFileContent(Aws::Utils::ByteBuffer&& value) { m_fileContentHasBeenSet = true; m_fileContent = std::move(value); }

    /**
     * <p>The content of the file, if a source file is not specified.</p>
     */
    inline PutFileEntry& WithFileContent(const Aws::Utils::ByteBuffer& value) { SetFileContent(value); return *this;}

    /**
     * <p>The content of the file, if a source file is not specified.</p>
     */
    inline PutFileEntry& WithFileContent(Aws::Utils::ByteBuffer&& value) { SetFileContent(std::move(value)); return *this;}


    /**
     * <p>The name and full path of the file that contains the changes you want to make
     * as part of the commit, if you are not providing the file content directly.</p>
     */
    inline const SourceFileSpecifier& GetSourceFile() const{ return m_sourceFile; }

    /**
     * <p>The name and full path of the file that contains the changes you want to make
     * as part of the commit, if you are not providing the file content directly.</p>
     */
    inline bool SourceFileHasBeenSet() const { return m_sourceFileHasBeenSet; }

    /**
     * <p>The name and full path of the file that contains the changes you want to make
     * as part of the commit, if you are not providing the file content directly.</p>
     */
    inline void SetSourceFile(const SourceFileSpecifier& value) { m_sourceFileHasBeenSet = true; m_sourceFile = value; }

    /**
     * <p>The name and full path of the file that contains the changes you want to make
     * as part of the commit, if you are not providing the file content directly.</p>
     */
    inline void SetSourceFile(SourceFileSpecifier&& value) { m_sourceFileHasBeenSet = true; m_sourceFile = std::move(value); }

    /**
     * <p>The name and full path of the file that contains the changes you want to make
     * as part of the commit, if you are not providing the file content directly.</p>
     */
    inline PutFileEntry& WithSourceFile(const SourceFileSpecifier& value) { SetSourceFile(value); return *this;}

    /**
     * <p>The name and full path of the file that contains the changes you want to make
     * as part of the commit, if you are not providing the file content directly.</p>
     */
    inline PutFileEntry& WithSourceFile(SourceFileSpecifier&& value) { SetSourceFile(std::move(value)); return *this;}

  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;

    FileModeTypeEnum m_fileMode;
    bool m_fileModeHasBeenSet;

    Aws::Utils::ByteBuffer m_fileContent;
    bool m_fileContentHasBeenSet;

    SourceFileSpecifier m_sourceFile;
    bool m_sourceFileHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
