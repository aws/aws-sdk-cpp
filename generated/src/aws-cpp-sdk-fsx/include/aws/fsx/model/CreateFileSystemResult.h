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
   * <p>The response object returned after the file system is created.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemResponse">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemResult
  {
  public:
    AWS_FSX_API CreateFileSystemResult();
    AWS_FSX_API CreateFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration of the file system that was created.</p>
     */
    inline const FileSystem& GetFileSystem() const{ return m_fileSystem; }

    /**
     * <p>The configuration of the file system that was created.</p>
     */
    inline void SetFileSystem(const FileSystem& value) { m_fileSystem = value; }

    /**
     * <p>The configuration of the file system that was created.</p>
     */
    inline void SetFileSystem(FileSystem&& value) { m_fileSystem = std::move(value); }

    /**
     * <p>The configuration of the file system that was created.</p>
     */
    inline CreateFileSystemResult& WithFileSystem(const FileSystem& value) { SetFileSystem(value); return *this;}

    /**
     * <p>The configuration of the file system that was created.</p>
     */
    inline CreateFileSystemResult& WithFileSystem(FileSystem&& value) { SetFileSystem(std::move(value)); return *this;}

  private:

    FileSystem m_fileSystem;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
