/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/RelativeFileVersionEnum.h>
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
   * <p>Returns information about the location of a change or comment in the
   * comparison between two commits or a pull request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Location">AWS
   * API Reference</a></p>
   */
  class Location
  {
  public:
    AWS_CODECOMMIT_API Location() = default;
    AWS_CODECOMMIT_API Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the file being compared, including its extension and
     * subdirectory, if any.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    Location& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of a change in a compared file, in line number format.</p>
     */
    inline long long GetFilePosition() const { return m_filePosition; }
    inline bool FilePositionHasBeenSet() const { return m_filePositionHasBeenSet; }
    inline void SetFilePosition(long long value) { m_filePositionHasBeenSet = true; m_filePosition = value; }
    inline Location& WithFilePosition(long long value) { SetFilePosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In a comparison of commits or a pull request, whether the change is in the
     * before or after of that comparison.</p>
     */
    inline RelativeFileVersionEnum GetRelativeFileVersion() const { return m_relativeFileVersion; }
    inline bool RelativeFileVersionHasBeenSet() const { return m_relativeFileVersionHasBeenSet; }
    inline void SetRelativeFileVersion(RelativeFileVersionEnum value) { m_relativeFileVersionHasBeenSet = true; m_relativeFileVersion = value; }
    inline Location& WithRelativeFileVersion(RelativeFileVersionEnum value) { SetRelativeFileVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    long long m_filePosition{0};
    bool m_filePositionHasBeenSet = false;

    RelativeFileVersionEnum m_relativeFileVersion{RelativeFileVersionEnum::NOT_SET};
    bool m_relativeFileVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
