/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/ReplacementTypeEnum.h>
#include <aws/core/utils/Array.h>
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
   * <p>Information about a replacement content entry in the conflict of a merge or
   * pull request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ReplaceContentEntry">AWS
   * API Reference</a></p>
   */
  class ReplaceContentEntry
  {
  public:
    AWS_CODECOMMIT_API ReplaceContentEntry() = default;
    AWS_CODECOMMIT_API ReplaceContentEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ReplaceContentEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path of the conflicting file.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    ReplaceContentEntry& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replacement type to use when determining how to resolve the conflict.</p>
     */
    inline ReplacementTypeEnum GetReplacementType() const { return m_replacementType; }
    inline bool ReplacementTypeHasBeenSet() const { return m_replacementTypeHasBeenSet; }
    inline void SetReplacementType(ReplacementTypeEnum value) { m_replacementTypeHasBeenSet = true; m_replacementType = value; }
    inline ReplaceContentEntry& WithReplacementType(ReplacementTypeEnum value) { SetReplacementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base-64 encoded content to use when the replacement type is
     * USE_NEW_CONTENT.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Utils::ByteBuffer>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Utils::ByteBuffer>
    ReplaceContentEntry& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode to apply during conflict resoltion.</p>
     */
    inline FileModeTypeEnum GetFileMode() const { return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    inline void SetFileMode(FileModeTypeEnum value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline ReplaceContentEntry& WithFileMode(FileModeTypeEnum value) { SetFileMode(value); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    ReplacementTypeEnum m_replacementType{ReplacementTypeEnum::NOT_SET};
    bool m_replacementTypeHasBeenSet = false;

    Aws::Utils::ByteBuffer m_content{};
    bool m_contentHasBeenSet = false;

    FileModeTypeEnum m_fileMode{FileModeTypeEnum::NOT_SET};
    bool m_fileModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
