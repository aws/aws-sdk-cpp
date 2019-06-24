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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileSystem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{
  /**
   * <p>The response object for the <code>UpdateFileSystem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystemResponse">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API UpdateFileSystemResult
  {
  public:
    UpdateFileSystemResult();
    UpdateFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the file system that was updated.</p>
     */
    inline const FileSystem& GetFileSystem() const{ return m_fileSystem; }

    /**
     * <p>A description of the file system that was updated.</p>
     */
    inline void SetFileSystem(const FileSystem& value) { m_fileSystem = value; }

    /**
     * <p>A description of the file system that was updated.</p>
     */
    inline void SetFileSystem(FileSystem&& value) { m_fileSystem = std::move(value); }

    /**
     * <p>A description of the file system that was updated.</p>
     */
    inline UpdateFileSystemResult& WithFileSystem(const FileSystem& value) { SetFileSystem(value); return *this;}

    /**
     * <p>A description of the file system that was updated.</p>
     */
    inline UpdateFileSystemResult& WithFileSystem(FileSystem&& value) { SetFileSystem(std::move(value)); return *this;}

  private:

    FileSystem m_fileSystem;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
