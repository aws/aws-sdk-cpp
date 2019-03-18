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
   * <p>A file that will be deleted as part of a commit.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteFileEntry">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API DeleteFileEntry
  {
  public:
    DeleteFileEntry();
    DeleteFileEntry(Aws::Utils::Json::JsonView jsonValue);
    DeleteFileEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full path of the file that will be deleted, including the name of the
     * file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The full path of the file that will be deleted, including the name of the
     * file.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The full path of the file that will be deleted, including the name of the
     * file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The full path of the file that will be deleted, including the name of the
     * file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The full path of the file that will be deleted, including the name of the
     * file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The full path of the file that will be deleted, including the name of the
     * file.</p>
     */
    inline DeleteFileEntry& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The full path of the file that will be deleted, including the name of the
     * file.</p>
     */
    inline DeleteFileEntry& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The full path of the file that will be deleted, including the name of the
     * file.</p>
     */
    inline DeleteFileEntry& WithFilePath(const char* value) { SetFilePath(value); return *this;}

  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
