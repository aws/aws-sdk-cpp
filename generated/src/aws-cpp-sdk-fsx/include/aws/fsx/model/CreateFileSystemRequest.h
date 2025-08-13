/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileSystemType.h>
#include <aws/fsx/model/StorageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/CreateFileSystemWindowsConfiguration.h>
#include <aws/fsx/model/CreateFileSystemLustreConfiguration.h>
#include <aws/fsx/model/CreateFileSystemOntapConfiguration.h>
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
   * <p>The request object used to create a new Amazon FSx file system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemRequest">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateFileSystemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystem"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    CreateFileSystemRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon FSx file system to create. Valid values are
     * <code>WINDOWS</code>, <code>LUSTRE</code>, <code>ONTAP</code>, and
     * <code>OPENZFS</code>.</p>
     */
    inline FileSystemType GetFileSystemType() const { return m_fileSystemType; }
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }
    inline void SetFileSystemType(FileSystemType value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }
    inline CreateFileSystemRequest& WithFileSystemType(FileSystemType value) { SetFileSystemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the storage capacity of the file system that you're creating, in
     * gibibytes (GiB).</p> <p> <b>FSx for Lustre file systems</b> - The amount of
     * storage capacity that you can configure depends on the value that you set for
     * <code>StorageType</code> and the Lustre <code>DeploymentType</code>, as
     * follows:</p> <ul> <li> <p>For <code>SCRATCH_2</code>, <code>PERSISTENT_2</code>,
     * and <code>PERSISTENT_1</code> deployment types using SSD storage type, the valid
     * values are 1200 GiB, 2400 GiB, and increments of 2400 GiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_1</code> HDD file systems, valid values are increments of 6000
     * GiB for 12 MB/s/TiB file systems and increments of 1800 GiB for 40 MB/s/TiB file
     * systems.</p> </li> <li> <p>For <code>SCRATCH_1</code> deployment type, valid
     * values are 1200 GiB, 2400 GiB, and increments of 3600 GiB.</p> </li> </ul> <p>
     * <b>FSx for ONTAP file systems</b> - The amount of storage capacity that you can
     * configure depends on the value of the <code>HAPairs</code> property. The minimum
     * value is calculated as 1,024 * <code>HAPairs</code> and the maximum is
     * calculated as 524,288 * <code>HAPairs</code>. </p> <p> <b>FSx for OpenZFS file
     * systems</b> - The amount of storage capacity that you can configure is from 64
     * GiB up to 524,288 GiB (512 TiB).</p> <p> <b>FSx for Windows File Server file
     * systems</b> - The amount of storage capacity that you can configure depends on
     * the value that you set for <code>StorageType</code> as follows:</p> <ul> <li>
     * <p>For SSD storage, valid values are 32 GiB-65,536 GiB (64 TiB).</p> </li> <li>
     * <p>For HDD storage, valid values are 2000 GiB-65,536 GiB (64 TiB).</p> </li>
     * </ul>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline CreateFileSystemRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the storage class for the file system that you're creating. Valid values
     * are <code>SSD</code>, <code>HDD</code>, and
     * <code>INTELLIGENT_TIERING</code>.</p> <ul> <li> <p>Set to <code>SSD</code> to
     * use solid state drive storage. SSD is supported on all Windows, Lustre, ONTAP,
     * and OpenZFS deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use
     * hard disk drive storage, which is supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types, and on
     * <code>PERSISTENT_1</code> Lustre file system deployment types.</p> </li> <li>
     * <p>Set to <code>INTELLIGENT_TIERING</code> to use fully elastic,
     * intelligently-tiered storage. Intelligent-Tiering is only available for OpenZFS
     * file systems with the Multi-AZ deployment type and for Lustre file systems with
     * the Persistent_2 deployment type.</p> </li> </ul> <p>Default value is
     * <code>SSD</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/optimize-fsx-costs.html#storage-type-options">
     * Storage type options</a> in the <i>FSx for Windows File Server User Guide</i>,
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-fsx-lustre.html#lustre-storage-classes">FSx
     * for Lustre storage classes</a> in the <i>FSx for Lustre User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance-intelligent-tiering">Working
     * with Intelligent-Tiering</a> in the <i>Amazon FSx for OpenZFS User
     * Guide</i>.</p>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline CreateFileSystemRequest& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows and ONTAP <code>MULTI_AZ_1</code> deployment types,provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> or
     * <code>OntapConfiguration &gt; PreferredSubnetID</code> properties. For more
     * information about Multi-AZ file system configuration, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html">
     * Availability and durability: Single-AZ and Multi-AZ file systems</a> in the
     * <i>Amazon FSx for Windows User Guide</i> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/high-availability-multiAZ.html">
     * Availability and durability</a> in the <i>Amazon FSx for ONTAP User
     * Guide</i>.</p> <p>For Windows <code>SINGLE_AZ_1</code> and
     * <code>SINGLE_AZ_2</code> and all Lustre deployment types, provide exactly one
     * subnet ID. The file server is launched in that subnet's Availability Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateFileSystemRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateFileSystemRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>  <p>You must specify a
     * security group if you are creating a Multi-AZ FSx for ONTAP file system in a VPC
     * subnet that has been shared with you.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateFileSystemRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateFileSystemRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the file system that's being created. The key value of
     * the <code>Name</code> tag appears in the console as the file system name.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFileSystemRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFileSystemRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateFileSystemRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Microsoft Windows configuration for the file system that's being
     * created.</p>
     */
    inline const CreateFileSystemWindowsConfiguration& GetWindowsConfiguration() const { return m_windowsConfiguration; }
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }
    template<typename WindowsConfigurationT = CreateFileSystemWindowsConfiguration>
    void SetWindowsConfiguration(WindowsConfigurationT&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::forward<WindowsConfigurationT>(value); }
    template<typename WindowsConfigurationT = CreateFileSystemWindowsConfiguration>
    CreateFileSystemRequest& WithWindowsConfiguration(WindowsConfigurationT&& value) { SetWindowsConfiguration(std::forward<WindowsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CreateFileSystemLustreConfiguration& GetLustreConfiguration() const { return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    template<typename LustreConfigurationT = CreateFileSystemLustreConfiguration>
    void SetLustreConfiguration(LustreConfigurationT&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::forward<LustreConfigurationT>(value); }
    template<typename LustreConfigurationT = CreateFileSystemLustreConfiguration>
    CreateFileSystemRequest& WithLustreConfiguration(LustreConfigurationT&& value) { SetLustreConfiguration(std::forward<LustreConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CreateFileSystemOntapConfiguration& GetOntapConfiguration() const { return m_ontapConfiguration; }
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }
    template<typename OntapConfigurationT = CreateFileSystemOntapConfiguration>
    void SetOntapConfiguration(OntapConfigurationT&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::forward<OntapConfigurationT>(value); }
    template<typename OntapConfigurationT = CreateFileSystemOntapConfiguration>
    CreateFileSystemRequest& WithOntapConfiguration(OntapConfigurationT&& value) { SetOntapConfiguration(std::forward<OntapConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For FSx for Lustre file systems, sets the Lustre version for the file system
     * that you're creating. Valid values are <code>2.10</code>, <code>2.12</code>, and
     * <code>2.15</code>:</p> <ul> <li> <p> <code>2.10</code> is supported by the
     * Scratch and Persistent_1 Lustre deployment types.</p> </li> <li> <p>
     * <code>2.12</code> is supported by all Lustre deployment types, except for
     * <code>PERSISTENT_2</code> with a metadata configuration mode.</p> </li> <li> <p>
     * <code>2.15</code> is supported by all Lustre deployment types and is recommended
     * for all new file systems.</p> </li> </ul> <p>Default value is <code>2.10</code>,
     * except for the following deployments:</p> <ul> <li> <p>Default value is
     * <code>2.12</code> when <code>DeploymentType</code> is set to
     * <code>PERSISTENT_2</code> without a metadata configuration mode.</p> </li> <li>
     * <p>Default value is <code>2.15</code> when <code>DeploymentType</code> is set to
     * <code>PERSISTENT_2</code> with a metadata configuration mode.</p> </li> </ul>
     */
    inline const Aws::String& GetFileSystemTypeVersion() const { return m_fileSystemTypeVersion; }
    inline bool FileSystemTypeVersionHasBeenSet() const { return m_fileSystemTypeVersionHasBeenSet; }
    template<typename FileSystemTypeVersionT = Aws::String>
    void SetFileSystemTypeVersion(FileSystemTypeVersionT&& value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion = std::forward<FileSystemTypeVersionT>(value); }
    template<typename FileSystemTypeVersionT = Aws::String>
    CreateFileSystemRequest& WithFileSystemTypeVersion(FileSystemTypeVersionT&& value) { SetFileSystemTypeVersion(std::forward<FileSystemTypeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenZFS configuration for the file system that's being created.</p>
     */
    inline const CreateFileSystemOpenZFSConfiguration& GetOpenZFSConfiguration() const { return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    template<typename OpenZFSConfigurationT = CreateFileSystemOpenZFSConfiguration>
    void SetOpenZFSConfiguration(OpenZFSConfigurationT&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::forward<OpenZFSConfigurationT>(value); }
    template<typename OpenZFSConfigurationT = CreateFileSystemOpenZFSConfiguration>
    CreateFileSystemRequest& WithOpenZFSConfiguration(OpenZFSConfigurationT&& value) { SetOpenZFSConfiguration(std::forward<OpenZFSConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the Amazon FSx file system that you are creating. Valid
     * values are <code>IPV4</code> (which supports IPv4 only) and <code>DUAL</code>
     * (for dual-stack mode, which supports both IPv4 and IPv6). The default is
     * <code>IPV4</code>. Supported only for Amazon FSx for OpenZFS file systems.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline CreateFileSystemRequest& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    FileSystemType m_fileSystemType{FileSystemType::NOT_SET};
    bool m_fileSystemTypeHasBeenSet = false;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    CreateFileSystemWindowsConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet = false;

    CreateFileSystemLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet = false;

    CreateFileSystemOntapConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet = false;

    Aws::String m_fileSystemTypeVersion;
    bool m_fileSystemTypeVersionHasBeenSet = false;

    CreateFileSystemOpenZFSConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
