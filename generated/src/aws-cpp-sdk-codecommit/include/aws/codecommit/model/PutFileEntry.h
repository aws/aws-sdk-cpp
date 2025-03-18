/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about a file added or updated as part of a commit.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutFileEntry">AWS
   * API Reference</a></p>
   */
  class PutFileEntry
  {
  public:
    AWS_CODECOMMIT_API PutFileEntry() = default;
    AWS_CODECOMMIT_API PutFileEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PutFileEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full path to the file in the repository, including the name of the
     * file.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    PutFileEntry& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline FileModeTypeEnum GetFileMode() const { return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    inline void SetFileMode(FileModeTypeEnum value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline PutFileEntry& WithFileMode(FileModeTypeEnum value) { SetFileMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the file, if a source file is not specified.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetFileContent() const { return m_fileContent; }
    inline bool FileContentHasBeenSet() const { return m_fileContentHasBeenSet; }
    template<typename FileContentT = Aws::Utils::ByteBuffer>
    void SetFileContent(FileContentT&& value) { m_fileContentHasBeenSet = true; m_fileContent = std::forward<FileContentT>(value); }
    template<typename FileContentT = Aws::Utils::ByteBuffer>
    PutFileEntry& WithFileContent(FileContentT&& value) { SetFileContent(std::forward<FileContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name and full path of the file that contains the changes you want to make
     * as part of the commit, if you are not providing the file content directly.</p>
     */
    inline const SourceFileSpecifier& GetSourceFile() const { return m_sourceFile; }
    inline bool SourceFileHasBeenSet() const { return m_sourceFileHasBeenSet; }
    template<typename SourceFileT = SourceFileSpecifier>
    void SetSourceFile(SourceFileT&& value) { m_sourceFileHasBeenSet = true; m_sourceFile = std::forward<SourceFileT>(value); }
    template<typename SourceFileT = SourceFileSpecifier>
    PutFileEntry& WithSourceFile(SourceFileT&& value) { SetSourceFile(std::forward<SourceFileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    FileModeTypeEnum m_fileMode{FileModeTypeEnum::NOT_SET};
    bool m_fileModeHasBeenSet = false;

    Aws::Utils::ByteBuffer m_fileContent{};
    bool m_fileContentHasBeenSet = false;

    SourceFileSpecifier m_sourceFile;
    bool m_sourceFileHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
