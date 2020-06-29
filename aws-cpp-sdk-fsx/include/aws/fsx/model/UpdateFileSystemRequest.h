/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/UpdateFileSystemWindowsConfiguration.h>
#include <aws/fsx/model/UpdateFileSystemLustreConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for the <code>UpdateFileSystem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystemRequest">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API UpdateFileSystemRequest : public FSxRequest
  {
  public:
    UpdateFileSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFileSystem"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the file system that you are updating.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>Identifies the file system that you are updating.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>Identifies the file system that you are updating.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>Identifies the file system that you are updating.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>Identifies the file system that you are updating.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>Identifies the file system that you are updating.</p>
     */
    inline UpdateFileSystemRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>Identifies the file system that you are updating.</p>
     */
    inline UpdateFileSystemRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>Identifies the file system that you are updating.</p>
     */
    inline UpdateFileSystemRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent updates. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent updates. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent updates. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent updates. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent updates. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent updates. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline UpdateFileSystemRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent updates. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline UpdateFileSystemRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent updates. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline UpdateFileSystemRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Use this parameter to increase the storage capacity of an Amazon FSx for
     * Windows File Server file system. Specifies the storage capacity target value,
     * GiB, for the file system you're updating. The storage capacity target value must
     * be at least 10 percent (%) greater than the current storage capacity value. In
     * order to increase storage capacity, the file system needs to have at least 16
     * MB/s of throughput capacity. You cannot make a storage capacity increase request
     * if there is an existing storage capacity increase request in progress. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * Storage Capacity</a>.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>Use this parameter to increase the storage capacity of an Amazon FSx for
     * Windows File Server file system. Specifies the storage capacity target value,
     * GiB, for the file system you're updating. The storage capacity target value must
     * be at least 10 percent (%) greater than the current storage capacity value. In
     * order to increase storage capacity, the file system needs to have at least 16
     * MB/s of throughput capacity. You cannot make a storage capacity increase request
     * if there is an existing storage capacity increase request in progress. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * Storage Capacity</a>.</p>
     */
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }

    /**
     * <p>Use this parameter to increase the storage capacity of an Amazon FSx for
     * Windows File Server file system. Specifies the storage capacity target value,
     * GiB, for the file system you're updating. The storage capacity target value must
     * be at least 10 percent (%) greater than the current storage capacity value. In
     * order to increase storage capacity, the file system needs to have at least 16
     * MB/s of throughput capacity. You cannot make a storage capacity increase request
     * if there is an existing storage capacity increase request in progress. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * Storage Capacity</a>.</p>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }

    /**
     * <p>Use this parameter to increase the storage capacity of an Amazon FSx for
     * Windows File Server file system. Specifies the storage capacity target value,
     * GiB, for the file system you're updating. The storage capacity target value must
     * be at least 10 percent (%) greater than the current storage capacity value. In
     * order to increase storage capacity, the file system needs to have at least 16
     * MB/s of throughput capacity. You cannot make a storage capacity increase request
     * if there is an existing storage capacity increase request in progress. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * Storage Capacity</a>.</p>
     */
    inline UpdateFileSystemRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}


    /**
     * <p>The configuration updates for an Amazon FSx for Windows File Server file
     * system.</p>
     */
    inline const UpdateFileSystemWindowsConfiguration& GetWindowsConfiguration() const{ return m_windowsConfiguration; }

    /**
     * <p>The configuration updates for an Amazon FSx for Windows File Server file
     * system.</p>
     */
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }

    /**
     * <p>The configuration updates for an Amazon FSx for Windows File Server file
     * system.</p>
     */
    inline void SetWindowsConfiguration(const UpdateFileSystemWindowsConfiguration& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = value; }

    /**
     * <p>The configuration updates for an Amazon FSx for Windows File Server file
     * system.</p>
     */
    inline void SetWindowsConfiguration(UpdateFileSystemWindowsConfiguration&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::move(value); }

    /**
     * <p>The configuration updates for an Amazon FSx for Windows File Server file
     * system.</p>
     */
    inline UpdateFileSystemRequest& WithWindowsConfiguration(const UpdateFileSystemWindowsConfiguration& value) { SetWindowsConfiguration(value); return *this;}

    /**
     * <p>The configuration updates for an Amazon FSx for Windows File Server file
     * system.</p>
     */
    inline UpdateFileSystemRequest& WithWindowsConfiguration(UpdateFileSystemWindowsConfiguration&& value) { SetWindowsConfiguration(std::move(value)); return *this;}


    
    inline const UpdateFileSystemLustreConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }

    
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }

    
    inline void SetLustreConfiguration(const UpdateFileSystemLustreConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }

    
    inline void SetLustreConfiguration(UpdateFileSystemLustreConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }

    
    inline UpdateFileSystemRequest& WithLustreConfiguration(const UpdateFileSystemLustreConfiguration& value) { SetLustreConfiguration(value); return *this;}

    
    inline UpdateFileSystemRequest& WithLustreConfiguration(UpdateFileSystemLustreConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet;

    UpdateFileSystemWindowsConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet;

    UpdateFileSystemLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
