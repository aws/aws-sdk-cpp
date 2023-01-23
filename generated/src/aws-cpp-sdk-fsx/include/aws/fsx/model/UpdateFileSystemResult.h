/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateFileSystemResult
  {
  public:
    AWS_FSX_API UpdateFileSystemResult();
    AWS_FSX_API UpdateFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API UpdateFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
