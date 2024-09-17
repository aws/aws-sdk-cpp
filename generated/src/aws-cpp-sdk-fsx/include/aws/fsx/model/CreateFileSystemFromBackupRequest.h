/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/CreateFileSystemWindowsConfiguration.h>
#include <aws/fsx/model/CreateFileSystemLustreConfiguration.h>
#include <aws/fsx/model/StorageType.h>
#include <aws/fsx/model/CreateFileSystemOpenZFSConfiguration.h>
#include <aws/fsx/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for the <code>CreateFileSystemFromBackup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackupRequest">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemFromBackupRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateFileSystemFromBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystemFromBackup"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetBackupId() const{ return m_backupId; }
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }
    inline CreateFileSystemFromBackupRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}
    inline CreateFileSystemFromBackupRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of up to 63 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateFileSystemFromBackupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateFileSystemFromBackupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types, Lustre file systems, and OpenZFS file systems provide exactly
     * one subnet ID. The file server is launched in that subnet's Availability
     * Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreateFileSystemFromBackupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateFileSystemFromBackupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreateFileSystemFromBackupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateFileSystemFromBackupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later
     * <code>DescribeFileSystem</code> requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline CreateFileSystemFromBackupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline CreateFileSystemFromBackupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline CreateFileSystemFromBackupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateFileSystemFromBackupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateFileSystemFromBackupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateFileSystemFromBackupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateFileSystemFromBackupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline const CreateFileSystemWindowsConfiguration& GetWindowsConfiguration() const{ return m_windowsConfiguration; }
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }
    inline void SetWindowsConfiguration(const CreateFileSystemWindowsConfiguration& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = value; }
    inline void SetWindowsConfiguration(CreateFileSystemWindowsConfiguration&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::move(value); }
    inline CreateFileSystemFromBackupRequest& WithWindowsConfiguration(const CreateFileSystemWindowsConfiguration& value) { SetWindowsConfiguration(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithWindowsConfiguration(CreateFileSystemWindowsConfiguration&& value) { SetWindowsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CreateFileSystemLustreConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    inline void SetLustreConfiguration(const CreateFileSystemLustreConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }
    inline void SetLustreConfiguration(CreateFileSystemLustreConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }
    inline CreateFileSystemFromBackupRequest& WithLustreConfiguration(const CreateFileSystemLustreConfiguration& value) { SetLustreConfiguration(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithLustreConfiguration(CreateFileSystemLustreConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the storage type for the Windows or OpenZFS file system that you're
     * creating from a backup. Valid values are <code>SSD</code> and
     * <code>HDD</code>.</p> <ul> <li> <p>Set to <code>SSD</code> to use solid state
     * drive storage. SSD is supported on all Windows and OpenZFS deployment types.</p>
     * </li> <li> <p>Set to <code>HDD</code> to use hard disk drive storage. HDD is
     * supported on <code>SINGLE_AZ_2</code> and <code>MULTI_AZ_1</code> FSx for
     * Windows File Server file system deployment types.</p> </li> </ul> <p> The
     * default value is <code>SSD</code>. </p>  <p>HDD and SSD storage types have
     * different minimum storage capacity requirements. A restored file system's
     * storage capacity is tied to the file system that was backed up. You can create a
     * file system that uses HDD storage from a backup of a file system that used SSD
     * storage if the original SSD file system had a storage capacity of at least 2000
     * GiB.</p> 
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline CreateFileSystemFromBackupRequest& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateFileSystemFromBackupRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateFileSystemFromBackupRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the version for the Amazon FSx for Lustre file system that you're
     * creating from a backup. Valid values are <code>2.10</code>, <code>2.12</code>,
     * and <code>2.15</code>.</p> <p>You don't need to specify
     * <code>FileSystemTypeVersion</code> because it will be applied using the backup's
     * <code>FileSystemTypeVersion</code> setting. If you choose to specify
     * <code>FileSystemTypeVersion</code> when creating from backup, the value must
     * match the backup's <code>FileSystemTypeVersion</code> setting.</p>
     */
    inline const Aws::String& GetFileSystemTypeVersion() const{ return m_fileSystemTypeVersion; }
    inline bool FileSystemTypeVersionHasBeenSet() const { return m_fileSystemTypeVersionHasBeenSet; }
    inline void SetFileSystemTypeVersion(const Aws::String& value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion = value; }
    inline void SetFileSystemTypeVersion(Aws::String&& value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion = std::move(value); }
    inline void SetFileSystemTypeVersion(const char* value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion.assign(value); }
    inline CreateFileSystemFromBackupRequest& WithFileSystemTypeVersion(const Aws::String& value) { SetFileSystemTypeVersion(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithFileSystemTypeVersion(Aws::String&& value) { SetFileSystemTypeVersion(std::move(value)); return *this;}
    inline CreateFileSystemFromBackupRequest& WithFileSystemTypeVersion(const char* value) { SetFileSystemTypeVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenZFS configuration for the file system that's being created. </p>
     */
    inline const CreateFileSystemOpenZFSConfiguration& GetOpenZFSConfiguration() const{ return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    inline void SetOpenZFSConfiguration(const CreateFileSystemOpenZFSConfiguration& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = value; }
    inline void SetOpenZFSConfiguration(CreateFileSystemOpenZFSConfiguration&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::move(value); }
    inline CreateFileSystemFromBackupRequest& WithOpenZFSConfiguration(const CreateFileSystemOpenZFSConfiguration& value) { SetOpenZFSConfiguration(value); return *this;}
    inline CreateFileSystemFromBackupRequest& WithOpenZFSConfiguration(CreateFileSystemOpenZFSConfiguration&& value) { SetOpenZFSConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the storage capacity of the OpenZFS file system that you're creating
     * from a backup, in gibibytes (GiB). Valid values are from 64 GiB up to 524,288
     * GiB (512 TiB). However, the value that you specify must be equal to or greater
     * than the backup's storage capacity value. If you don't use the
     * <code>StorageCapacity</code> parameter, the default is the backup's
     * <code>StorageCapacity</code> value.</p> <p>If used to create a file system other
     * than OpenZFS, you must provide a value that matches the backup's
     * <code>StorageCapacity</code> value. If you provide any other value, Amazon FSx
     * responds with with an HTTP status code 400 Bad Request. </p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline CreateFileSystemFromBackupRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}
  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    CreateFileSystemWindowsConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet = false;

    CreateFileSystemLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet = false;

    StorageType m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_fileSystemTypeVersion;
    bool m_fileSystemTypeVersionHasBeenSet = false;

    CreateFileSystemOpenZFSConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
