/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about the file mode changes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/SetFileModeEntry">AWS
   * API Reference</a></p>
   */
  class SetFileModeEntry
  {
  public:
    AWS_CODECOMMIT_API SetFileModeEntry() = default;
    AWS_CODECOMMIT_API SetFileModeEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API SetFileModeEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    SetFileModeEntry& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode for the file.</p>
     */
    inline FileModeTypeEnum GetFileMode() const { return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    inline void SetFileMode(FileModeTypeEnum value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline SetFileModeEntry& WithFileMode(FileModeTypeEnum value) { SetFileMode(value); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    FileModeTypeEnum m_fileMode{FileModeTypeEnum::NOT_SET};
    bool m_fileModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
