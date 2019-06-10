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
  class AWS_CODECOMMIT_API ReplaceContentEntry
  {
  public:
    ReplaceContentEntry();
    ReplaceContentEntry(Aws::Utils::Json::JsonView jsonValue);
    ReplaceContentEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path of the conflicting file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The path of the conflicting file.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The path of the conflicting file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The path of the conflicting file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The path of the conflicting file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The path of the conflicting file.</p>
     */
    inline ReplaceContentEntry& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The path of the conflicting file.</p>
     */
    inline ReplaceContentEntry& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The path of the conflicting file.</p>
     */
    inline ReplaceContentEntry& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The replacement type to use when determining how to resolve the conflict.</p>
     */
    inline const ReplacementTypeEnum& GetReplacementType() const{ return m_replacementType; }

    /**
     * <p>The replacement type to use when determining how to resolve the conflict.</p>
     */
    inline bool ReplacementTypeHasBeenSet() const { return m_replacementTypeHasBeenSet; }

    /**
     * <p>The replacement type to use when determining how to resolve the conflict.</p>
     */
    inline void SetReplacementType(const ReplacementTypeEnum& value) { m_replacementTypeHasBeenSet = true; m_replacementType = value; }

    /**
     * <p>The replacement type to use when determining how to resolve the conflict.</p>
     */
    inline void SetReplacementType(ReplacementTypeEnum&& value) { m_replacementTypeHasBeenSet = true; m_replacementType = std::move(value); }

    /**
     * <p>The replacement type to use when determining how to resolve the conflict.</p>
     */
    inline ReplaceContentEntry& WithReplacementType(const ReplacementTypeEnum& value) { SetReplacementType(value); return *this;}

    /**
     * <p>The replacement type to use when determining how to resolve the conflict.</p>
     */
    inline ReplaceContentEntry& WithReplacementType(ReplacementTypeEnum&& value) { SetReplacementType(std::move(value)); return *this;}


    /**
     * <p>The base-64 encoded content to use when the replacement type is
     * USE_NEW_CONTENT.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetContent() const{ return m_content; }

    /**
     * <p>The base-64 encoded content to use when the replacement type is
     * USE_NEW_CONTENT.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The base-64 encoded content to use when the replacement type is
     * USE_NEW_CONTENT.</p>
     */
    inline void SetContent(const Aws::Utils::ByteBuffer& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The base-64 encoded content to use when the replacement type is
     * USE_NEW_CONTENT.</p>
     */
    inline void SetContent(Aws::Utils::ByteBuffer&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The base-64 encoded content to use when the replacement type is
     * USE_NEW_CONTENT.</p>
     */
    inline ReplaceContentEntry& WithContent(const Aws::Utils::ByteBuffer& value) { SetContent(value); return *this;}

    /**
     * <p>The base-64 encoded content to use when the replacement type is
     * USE_NEW_CONTENT.</p>
     */
    inline ReplaceContentEntry& WithContent(Aws::Utils::ByteBuffer&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The file mode to apply during conflict resoltion.</p>
     */
    inline const FileModeTypeEnum& GetFileMode() const{ return m_fileMode; }

    /**
     * <p>The file mode to apply during conflict resoltion.</p>
     */
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }

    /**
     * <p>The file mode to apply during conflict resoltion.</p>
     */
    inline void SetFileMode(const FileModeTypeEnum& value) { m_fileModeHasBeenSet = true; m_fileMode = value; }

    /**
     * <p>The file mode to apply during conflict resoltion.</p>
     */
    inline void SetFileMode(FileModeTypeEnum&& value) { m_fileModeHasBeenSet = true; m_fileMode = std::move(value); }

    /**
     * <p>The file mode to apply during conflict resoltion.</p>
     */
    inline ReplaceContentEntry& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}

    /**
     * <p>The file mode to apply during conflict resoltion.</p>
     */
    inline ReplaceContentEntry& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}

  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;

    ReplacementTypeEnum m_replacementType;
    bool m_replacementTypeHasBeenSet;

    Aws::Utils::ByteBuffer m_content;
    bool m_contentHasBeenSet;

    FileModeTypeEnum m_fileMode;
    bool m_fileModeHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
