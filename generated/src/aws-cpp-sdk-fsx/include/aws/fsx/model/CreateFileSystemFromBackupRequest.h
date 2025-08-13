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
#include <aws/fsx/model/NetworkType.h>
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
    AWS_FSX_API CreateFileSystemFromBackupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystemFromBackup"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetBackupId() const { return m_backupId; }
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }
    template<typename BackupIdT = Aws::String>
    void SetBackupId(BackupIdT&& value) { m_backupIdHasBeenSet = true; m_backupId = std::forward<BackupIdT>(value); }
    template<typename BackupIdT = Aws::String>
    CreateFileSystemFromBackupRequest& WithBackupId(BackupIdT&& value) { SetBackupId(std::forward<BackupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of up to 63 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateFileSystemFromBackupRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateFileSystemFromBackupRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateFileSystemFromBackupRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later
     * <code>DescribeFileSystem</code> requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateFileSystemFromBackupRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateFileSystemFromBackupRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFileSystemFromBackupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFileSystemFromBackupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline const CreateFileSystemWindowsConfiguration& GetWindowsConfiguration() const { return m_windowsConfiguration; }
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }
    template<typename WindowsConfigurationT = CreateFileSystemWindowsConfiguration>
    void SetWindowsConfiguration(WindowsConfigurationT&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::forward<WindowsConfigurationT>(value); }
    template<typename WindowsConfigurationT = CreateFileSystemWindowsConfiguration>
    CreateFileSystemFromBackupRequest& WithWindowsConfiguration(WindowsConfigurationT&& value) { SetWindowsConfiguration(std::forward<WindowsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CreateFileSystemLustreConfiguration& GetLustreConfiguration() const { return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    template<typename LustreConfigurationT = CreateFileSystemLustreConfiguration>
    void SetLustreConfiguration(LustreConfigurationT&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::forward<LustreConfigurationT>(value); }
    template<typename LustreConfigurationT = CreateFileSystemLustreConfiguration>
    CreateFileSystemFromBackupRequest& WithLustreConfiguration(LustreConfigurationT&& value) { SetLustreConfiguration(std::forward<LustreConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the storage type for the Windows, OpenZFS, or Lustre file system that
     * you're creating from a backup. Valid values are <code>SSD</code>,
     * <code>HDD</code>, and <code>INTELLIGENT_TIERING</code>.</p> <ul> <li> <p>Set to
     * <code>SSD</code> to use solid state drive storage. SSD is supported on all
     * Windows and OpenZFS deployment types.</p> </li> <li> <p>Set to <code>HDD</code>
     * to use hard disk drive storage. HDD is supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> FSx for Windows File Server file system deployment
     * types.</p> </li> <li> <p>Set to <code>INTELLIGENT_TIERING</code> to use fully
     * elastic, intelligently-tiered storage. Intelligent-Tiering is only available for
     * OpenZFS file systems with the Multi-AZ deployment type and for Lustre file
     * systems with the Persistent_2 deployment type.</p> </li> </ul> <p> The default
     * value is <code>SSD</code>. </p>  <p>HDD and SSD storage types have
     * different minimum storage capacity requirements. A restored file system's
     * storage capacity is tied to the file system that was backed up. You can create a
     * file system that uses HDD storage from a backup of a file system that used SSD
     * storage if the original SSD file system had a storage capacity of at least 2000
     * GiB.</p> 
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline CreateFileSystemFromBackupRequest& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateFileSystemFromBackupRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the version for the Amazon FSx for Lustre file system that you're
     * creating from a backup. Valid values are <code>2.10</code>, <code>2.12</code>,
     * and <code>2.15</code>.</p> <p>You can enter a Lustre version that is newer than
     * the backup's <code>FileSystemTypeVersion</code> setting. If you don't enter a
     * newer Lustre version, it defaults to the backup's setting.</p>
     */
    inline const Aws::String& GetFileSystemTypeVersion() const { return m_fileSystemTypeVersion; }
    inline bool FileSystemTypeVersionHasBeenSet() const { return m_fileSystemTypeVersionHasBeenSet; }
    template<typename FileSystemTypeVersionT = Aws::String>
    void SetFileSystemTypeVersion(FileSystemTypeVersionT&& value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion = std::forward<FileSystemTypeVersionT>(value); }
    template<typename FileSystemTypeVersionT = Aws::String>
    CreateFileSystemFromBackupRequest& WithFileSystemTypeVersion(FileSystemTypeVersionT&& value) { SetFileSystemTypeVersion(std::forward<FileSystemTypeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenZFS configuration for the file system that's being created. </p>
     */
    inline const CreateFileSystemOpenZFSConfiguration& GetOpenZFSConfiguration() const { return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    template<typename OpenZFSConfigurationT = CreateFileSystemOpenZFSConfiguration>
    void SetOpenZFSConfiguration(OpenZFSConfigurationT&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::forward<OpenZFSConfigurationT>(value); }
    template<typename OpenZFSConfigurationT = CreateFileSystemOpenZFSConfiguration>
    CreateFileSystemFromBackupRequest& WithOpenZFSConfiguration(OpenZFSConfigurationT&& value) { SetOpenZFSConfiguration(std::forward<OpenZFSConfigurationT>(value)); return *this;}
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
     * responds with an HTTP status code 400 Bad Request. </p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline CreateFileSystemFromBackupRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the network type for the Amazon FSx for OpenZFS file system that you're
     * creating from a backup.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline CreateFileSystemFromBackupRequest& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

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

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_fileSystemTypeVersion;
    bool m_fileSystemTypeVersionHasBeenSet = false;

    CreateFileSystemOpenZFSConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
