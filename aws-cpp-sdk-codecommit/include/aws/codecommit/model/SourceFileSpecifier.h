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
   * <p>Information about a source file that is part of changes made in a
   * commit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/SourceFileSpecifier">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API SourceFileSpecifier
  {
  public:
    SourceFileSpecifier();
    SourceFileSpecifier(Aws::Utils::Json::JsonView jsonValue);
    SourceFileSpecifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline SourceFileSpecifier& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline SourceFileSpecifier& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline SourceFileSpecifier& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>Whether to remove the source file from the parent commit.</p>
     */
    inline bool GetIsMove() const{ return m_isMove; }

    /**
     * <p>Whether to remove the source file from the parent commit.</p>
     */
    inline bool IsMoveHasBeenSet() const { return m_isMoveHasBeenSet; }

    /**
     * <p>Whether to remove the source file from the parent commit.</p>
     */
    inline void SetIsMove(bool value) { m_isMoveHasBeenSet = true; m_isMove = value; }

    /**
     * <p>Whether to remove the source file from the parent commit.</p>
     */
    inline SourceFileSpecifier& WithIsMove(bool value) { SetIsMove(value); return *this;}

  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;

    bool m_isMove;
    bool m_isMoveHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
