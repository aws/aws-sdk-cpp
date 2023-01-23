/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class DescribeFileSystemPolicyRequest : public EFSRequest
  {
  public:
    AWS_EFS_API DescribeFileSystemPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFileSystemPolicy"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies which EFS file system to retrieve the <code>FileSystemPolicy</code>
     * for.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>Specifies which EFS file system to retrieve the <code>FileSystemPolicy</code>
     * for.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>Specifies which EFS file system to retrieve the <code>FileSystemPolicy</code>
     * for.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>Specifies which EFS file system to retrieve the <code>FileSystemPolicy</code>
     * for.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>Specifies which EFS file system to retrieve the <code>FileSystemPolicy</code>
     * for.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>Specifies which EFS file system to retrieve the <code>FileSystemPolicy</code>
     * for.</p>
     */
    inline DescribeFileSystemPolicyRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>Specifies which EFS file system to retrieve the <code>FileSystemPolicy</code>
     * for.</p>
     */
    inline DescribeFileSystemPolicyRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>Specifies which EFS file system to retrieve the <code>FileSystemPolicy</code>
     * for.</p>
     */
    inline DescribeFileSystemPolicyRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
