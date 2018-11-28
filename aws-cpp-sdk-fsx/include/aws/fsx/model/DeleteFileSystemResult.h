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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileSystemLifecycle.h>
#include <aws/fsx/model/DeleteFileSystemWindowsResponse.h>
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
  class AWS_FSX_API DeleteFileSystemResult
  {
  public:
    DeleteFileSystemResult();
    DeleteFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the file system being deleted.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system being deleted.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }

    /**
     * <p>The ID of the file system being deleted.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system being deleted.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system being deleted.</p>
     */
    inline DeleteFileSystemResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system being deleted.</p>
     */
    inline DeleteFileSystemResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system being deleted.</p>
     */
    inline DeleteFileSystemResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The file system lifecycle for the deletion request. Should be
     * <code>DELETING</code>.</p>
     */
    inline const FileSystemLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The file system lifecycle for the deletion request. Should be
     * <code>DELETING</code>.</p>
     */
    inline void SetLifecycle(const FileSystemLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The file system lifecycle for the deletion request. Should be
     * <code>DELETING</code>.</p>
     */
    inline void SetLifecycle(FileSystemLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The file system lifecycle for the deletion request. Should be
     * <code>DELETING</code>.</p>
     */
    inline DeleteFileSystemResult& WithLifecycle(const FileSystemLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The file system lifecycle for the deletion request. Should be
     * <code>DELETING</code>.</p>
     */
    inline DeleteFileSystemResult& WithLifecycle(FileSystemLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    
    inline const DeleteFileSystemWindowsResponse& GetWindowsResponse() const{ return m_windowsResponse; }

    
    inline void SetWindowsResponse(const DeleteFileSystemWindowsResponse& value) { m_windowsResponse = value; }

    
    inline void SetWindowsResponse(DeleteFileSystemWindowsResponse&& value) { m_windowsResponse = std::move(value); }

    
    inline DeleteFileSystemResult& WithWindowsResponse(const DeleteFileSystemWindowsResponse& value) { SetWindowsResponse(value); return *this;}

    
    inline DeleteFileSystemResult& WithWindowsResponse(DeleteFileSystemWindowsResponse&& value) { SetWindowsResponse(std::move(value)); return *this;}

  private:

    Aws::String m_fileSystemId;

    FileSystemLifecycle m_lifecycle;

    DeleteFileSystemWindowsResponse m_windowsResponse;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
