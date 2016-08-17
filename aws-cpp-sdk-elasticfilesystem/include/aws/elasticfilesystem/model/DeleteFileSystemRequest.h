/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_EFS_API DeleteFileSystemRequest : public EFSRequest
  {
  public:
    DeleteFileSystemRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>ID of the file system you want to delete.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>ID of the file system you want to delete.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system you want to delete.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system you want to delete.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>ID of the file system you want to delete.</p>
     */
    inline DeleteFileSystemRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system you want to delete.</p>
     */
    inline DeleteFileSystemRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system you want to delete.</p>
     */
    inline DeleteFileSystemRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

  private:
    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
