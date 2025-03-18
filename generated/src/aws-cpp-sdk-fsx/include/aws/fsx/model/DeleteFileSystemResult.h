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
    AWS_FSX_API DeleteFileSystemResult() = default;
    AWS_FSX_API DeleteFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the file system that's being deleted.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    DeleteFileSystemResult& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file system lifecycle for the deletion request. If the
     * <code>DeleteFileSystem</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline FileSystemLifecycle GetLifecycle() const { return m_lifecycle; }
    inline void SetLifecycle(FileSystemLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DeleteFileSystemResult& WithLifecycle(FileSystemLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    
    inline const DeleteFileSystemWindowsResponse& GetWindowsResponse() const { return m_windowsResponse; }
    template<typename WindowsResponseT = DeleteFileSystemWindowsResponse>
    void SetWindowsResponse(WindowsResponseT&& value) { m_windowsResponseHasBeenSet = true; m_windowsResponse = std::forward<WindowsResponseT>(value); }
    template<typename WindowsResponseT = DeleteFileSystemWindowsResponse>
    DeleteFileSystemResult& WithWindowsResponse(WindowsResponseT&& value) { SetWindowsResponse(std::forward<WindowsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeleteFileSystemLustreResponse& GetLustreResponse() const { return m_lustreResponse; }
    template<typename LustreResponseT = DeleteFileSystemLustreResponse>
    void SetLustreResponse(LustreResponseT&& value) { m_lustreResponseHasBeenSet = true; m_lustreResponse = std::forward<LustreResponseT>(value); }
    template<typename LustreResponseT = DeleteFileSystemLustreResponse>
    DeleteFileSystemResult& WithLustreResponse(LustreResponseT&& value) { SetLustreResponse(std::forward<LustreResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response object for the OpenZFS file system that's being deleted in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline const DeleteFileSystemOpenZFSResponse& GetOpenZFSResponse() const { return m_openZFSResponse; }
    template<typename OpenZFSResponseT = DeleteFileSystemOpenZFSResponse>
    void SetOpenZFSResponse(OpenZFSResponseT&& value) { m_openZFSResponseHasBeenSet = true; m_openZFSResponse = std::forward<OpenZFSResponseT>(value); }
    template<typename OpenZFSResponseT = DeleteFileSystemOpenZFSResponse>
    DeleteFileSystemResult& WithOpenZFSResponse(OpenZFSResponseT&& value) { SetOpenZFSResponse(std::forward<OpenZFSResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteFileSystemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    FileSystemLifecycle m_lifecycle{FileSystemLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    DeleteFileSystemWindowsResponse m_windowsResponse;
    bool m_windowsResponseHasBeenSet = false;

    DeleteFileSystemLustreResponse m_lustreResponse;
    bool m_lustreResponseHasBeenSet = false;

    DeleteFileSystemOpenZFSResponse m_openZFSResponse;
    bool m_openZFSResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
