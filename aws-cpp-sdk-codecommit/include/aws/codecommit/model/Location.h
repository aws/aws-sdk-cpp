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
  class AWS_CODECOMMIT_API Location
  {
  public:
    Location();
    Location(Aws::Utils::Json::JsonView jsonValue);
    Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the file being compared, including its extension and
     * subdirectory, if any.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The name of the file being compared, including its extension and
     * subdirectory, if any.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The name of the file being compared, including its extension and
     * subdirectory, if any.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The name of the file being compared, including its extension and
     * subdirectory, if any.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The name of the file being compared, including its extension and
     * subdirectory, if any.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The name of the file being compared, including its extension and
     * subdirectory, if any.</p>
     */
    inline Location& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The name of the file being compared, including its extension and
     * subdirectory, if any.</p>
     */
    inline Location& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The name of the file being compared, including its extension and
     * subdirectory, if any.</p>
     */
    inline Location& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The position of a change within a compared file, in line number format.</p>
     */
    inline long long GetFilePosition() const{ return m_filePosition; }

    /**
     * <p>The position of a change within a compared file, in line number format.</p>
     */
    inline bool FilePositionHasBeenSet() const { return m_filePositionHasBeenSet; }

    /**
     * <p>The position of a change within a compared file, in line number format.</p>
     */
    inline void SetFilePosition(long long value) { m_filePositionHasBeenSet = true; m_filePosition = value; }

    /**
     * <p>The position of a change within a compared file, in line number format.</p>
     */
    inline Location& WithFilePosition(long long value) { SetFilePosition(value); return *this;}


    /**
     * <p>In a comparison of commits or a pull request, whether the change is in the
     * 'before' or 'after' of that comparison.</p>
     */
    inline const RelativeFileVersionEnum& GetRelativeFileVersion() const{ return m_relativeFileVersion; }

    /**
     * <p>In a comparison of commits or a pull request, whether the change is in the
     * 'before' or 'after' of that comparison.</p>
     */
    inline bool RelativeFileVersionHasBeenSet() const { return m_relativeFileVersionHasBeenSet; }

    /**
     * <p>In a comparison of commits or a pull request, whether the change is in the
     * 'before' or 'after' of that comparison.</p>
     */
    inline void SetRelativeFileVersion(const RelativeFileVersionEnum& value) { m_relativeFileVersionHasBeenSet = true; m_relativeFileVersion = value; }

    /**
     * <p>In a comparison of commits or a pull request, whether the change is in the
     * 'before' or 'after' of that comparison.</p>
     */
    inline void SetRelativeFileVersion(RelativeFileVersionEnum&& value) { m_relativeFileVersionHasBeenSet = true; m_relativeFileVersion = std::move(value); }

    /**
     * <p>In a comparison of commits or a pull request, whether the change is in the
     * 'before' or 'after' of that comparison.</p>
     */
    inline Location& WithRelativeFileVersion(const RelativeFileVersionEnum& value) { SetRelativeFileVersion(value); return *this;}

    /**
     * <p>In a comparison of commits or a pull request, whether the change is in the
     * 'before' or 'after' of that comparison.</p>
     */
    inline Location& WithRelativeFileVersion(RelativeFileVersionEnum&& value) { SetRelativeFileVersion(std::move(value)); return *this;}

  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;

    long long m_filePosition;
    bool m_filePositionHasBeenSet;

    RelativeFileVersionEnum m_relativeFileVersion;
    bool m_relativeFileVersionHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
