﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileSystem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The response object for the <code>CreateFileSystemFromBackup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackupResponse">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemFromBackupResult
  {
  public:
    AWS_FSX_API CreateFileSystemFromBackupResult();
    AWS_FSX_API CreateFileSystemFromBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateFileSystemFromBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the file system.</p>
     */
    inline const FileSystem& GetFileSystem() const{ return m_fileSystem; }

    /**
     * <p>A description of the file system.</p>
     */
    inline void SetFileSystem(const FileSystem& value) { m_fileSystem = value; }

    /**
     * <p>A description of the file system.</p>
     */
    inline void SetFileSystem(FileSystem&& value) { m_fileSystem = std::move(value); }

    /**
     * <p>A description of the file system.</p>
     */
    inline CreateFileSystemFromBackupResult& WithFileSystem(const FileSystem& value) { SetFileSystem(value); return *this;}

    /**
     * <p>A description of the file system.</p>
     */
    inline CreateFileSystemFromBackupResult& WithFileSystem(FileSystem&& value) { SetFileSystem(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFileSystemFromBackupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFileSystemFromBackupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFileSystemFromBackupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FileSystem m_fileSystem;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
