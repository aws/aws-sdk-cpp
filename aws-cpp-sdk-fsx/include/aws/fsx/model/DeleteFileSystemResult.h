/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileSystemLifecycle.h>
#include <aws/fsx/model/DeleteFileSystemWindowsResponse.h>
#include <aws/fsx/model/DeleteFileSystemLustreResponse.h>
#include <aws/fsx/model/DeleteFileSystemOpenZFSResponse.h>
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
   * <p>The response object for the <code>DeleteFileSystem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystemResponse">AWS
   * API Reference</a></p>
   */
  class DeleteFileSystemResult
  {
  public:
    AWS_FSX_API DeleteFileSystemResult();
    AWS_FSX_API DeleteFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the file system that's being deleted.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system that's being deleted.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }

    /**
     * <p>The ID of the file system that's being deleted.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system that's being deleted.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system that's being deleted.</p>
     */
    inline DeleteFileSystemResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system that's being deleted.</p>
     */
    inline DeleteFileSystemResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system that's being deleted.</p>
     */
    inline DeleteFileSystemResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The file system lifecycle for the deletion request. If the
     * <code>DeleteFileSystem</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline const FileSystemLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The file system lifecycle for the deletion request. If the
     * <code>DeleteFileSystem</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline void SetLifecycle(const FileSystemLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The file system lifecycle for the deletion request. If the
     * <code>DeleteFileSystem</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline void SetLifecycle(FileSystemLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The file system lifecycle for the deletion request. If the
     * <code>DeleteFileSystem</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline DeleteFileSystemResult& WithLifecycle(const FileSystemLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The file system lifecycle for the deletion request. If the
     * <code>DeleteFileSystem</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline DeleteFileSystemResult& WithLifecycle(FileSystemLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    
    inline const DeleteFileSystemWindowsResponse& GetWindowsResponse() const{ return m_windowsResponse; }

    
    inline void SetWindowsResponse(const DeleteFileSystemWindowsResponse& value) { m_windowsResponse = value; }

    
    inline void SetWindowsResponse(DeleteFileSystemWindowsResponse&& value) { m_windowsResponse = std::move(value); }

    
    inline DeleteFileSystemResult& WithWindowsResponse(const DeleteFileSystemWindowsResponse& value) { SetWindowsResponse(value); return *this;}

    
    inline DeleteFileSystemResult& WithWindowsResponse(DeleteFileSystemWindowsResponse&& value) { SetWindowsResponse(std::move(value)); return *this;}


    
    inline const DeleteFileSystemLustreResponse& GetLustreResponse() const{ return m_lustreResponse; }

    
    inline void SetLustreResponse(const DeleteFileSystemLustreResponse& value) { m_lustreResponse = value; }

    
    inline void SetLustreResponse(DeleteFileSystemLustreResponse&& value) { m_lustreResponse = std::move(value); }

    
    inline DeleteFileSystemResult& WithLustreResponse(const DeleteFileSystemLustreResponse& value) { SetLustreResponse(value); return *this;}

    
    inline DeleteFileSystemResult& WithLustreResponse(DeleteFileSystemLustreResponse&& value) { SetLustreResponse(std::move(value)); return *this;}


    /**
     * <p>The response object for the OpenZFS file system that's being deleted in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline const DeleteFileSystemOpenZFSResponse& GetOpenZFSResponse() const{ return m_openZFSResponse; }

    /**
     * <p>The response object for the OpenZFS file system that's being deleted in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline void SetOpenZFSResponse(const DeleteFileSystemOpenZFSResponse& value) { m_openZFSResponse = value; }

    /**
     * <p>The response object for the OpenZFS file system that's being deleted in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline void SetOpenZFSResponse(DeleteFileSystemOpenZFSResponse&& value) { m_openZFSResponse = std::move(value); }

    /**
     * <p>The response object for the OpenZFS file system that's being deleted in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline DeleteFileSystemResult& WithOpenZFSResponse(const DeleteFileSystemOpenZFSResponse& value) { SetOpenZFSResponse(value); return *this;}

    /**
     * <p>The response object for the OpenZFS file system that's being deleted in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline DeleteFileSystemResult& WithOpenZFSResponse(DeleteFileSystemOpenZFSResponse&& value) { SetOpenZFSResponse(std::move(value)); return *this;}

  private:

    Aws::String m_fileSystemId;

    FileSystemLifecycle m_lifecycle;

    DeleteFileSystemWindowsResponse m_windowsResponse;

    DeleteFileSystemLustreResponse m_lustreResponse;

    DeleteFileSystemOpenZFSResponse m_openZFSResponse;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
