/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fsx/model/FileSystemType.h>
#include <aws/fsx/model/FileSystemLifecycle.h>
#include <aws/fsx/model/FileSystemFailureDetails.h>
#include <aws/fsx/model/StorageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/WindowsFileSystemConfiguration.h>
#include <aws/fsx/model/LustreFileSystemConfiguration.h>
#include <aws/fsx/model/AdministrativeAction.h>
#include <aws/fsx/model/OntapFileSystemConfiguration.h>
#include <aws/fsx/model/OpenZFSFileSystemConfiguration.h>
#include <aws/fsx/model/NetworkType.h>
#include <aws/fsx/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{
  class AdministrativeAction;

  /**
   * <p>A description of a specific Amazon FSx file system.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileSystem">AWS
   * API Reference</a></p>
   */
  class FileSystem
  {
  public:
    AWS_FSX_API FileSystem() = default;
    AWS_FSX_API FileSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account that created the file system. If the file
     * system was created by a user in IAM Identity Center, the Amazon Web Services
     * account to which the IAM user belongs is the owner.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    FileSystem& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z), also known as Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    FileSystem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    FileSystem& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon FSx file system, which can be <code>LUSTRE</code>,
     * <code>WINDOWS</code>, <code>ONTAP</code>, or <code>OPENZFS</code>.</p>
     */
    inline FileSystemType GetFileSystemType() const { return m_fileSystemType; }
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }
    inline void SetFileSystemType(FileSystemType value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }
    inline FileSystem& WithFileSystemType(FileSystemType value) { SetFileSystemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle status of the file system. The following are the possible
     * values and what they mean:</p> <ul> <li> <p> <code>AVAILABLE</code> - The file
     * system is in a healthy state, and is reachable and available for use.</p> </li>
     * <li> <p> <code>CREATING</code> - Amazon FSx is creating the new file system.</p>
     * </li> <li> <p> <code>DELETING</code> - Amazon FSx is deleting an existing file
     * system.</p> </li> <li> <p> <code>FAILED</code> - An existing file system has
     * experienced an unrecoverable failure. When creating a new file system, Amazon
     * FSx was unable to create the file system.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> - The file system is in a failed but recoverable
     * state.</p> </li> <li> <p> <code>MISCONFIGURED_UNAVAILABLE</code> - (Amazon FSx
     * for Windows File Server only) The file system is currently unavailable due to a
     * change in your Active Directory configuration.</p> </li> <li> <p>
     * <code>UPDATING</code> - The file system is undergoing a customer-initiated
     * update.</p> </li> </ul>
     */
    inline FileSystemLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(FileSystemLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline FileSystem& WithLifecycle(FileSystemLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    
    inline const FileSystemFailureDetails& GetFailureDetails() const { return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    template<typename FailureDetailsT = FileSystemFailureDetails>
    void SetFailureDetails(FailureDetailsT&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::forward<FailureDetailsT>(value); }
    template<typename FailureDetailsT = FileSystemFailureDetails>
    FileSystem& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity of the file system in gibibytes (GiB).</p> <p>Amazon FSx
     * responds with an HTTP status code 400 (Bad Request) if the value of
     * <code>StorageCapacity</code> is outside of the minimum or maximum values.</p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline FileSystem& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of storage the file system is using.</p> <ul> <li> <p>If set to
     * <code>SSD</code>, the file system uses solid state drive storage.</p> </li> <li>
     * <p>If set to <code>HDD</code>, the file system uses hard disk drive storage.</p>
     * </li> <li> <p>If set to <code>INTELLIGENT_TIERING</code>, the file system uses
     * fully elastic, intelligently-tiered storage.</p> </li> </ul>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline FileSystem& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the primary virtual private cloud (VPC) for the file system.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    FileSystem& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IDs of the subnets that the file system is accessible from. For
     * the Amazon FSx Windows and ONTAP <code>MULTI_AZ_1</code> file system deployment
     * type, there are two subnet IDs, one for the preferred file server and one for
     * the standby file server. The preferred file server subnet identified in the
     * <code>PreferredSubnetID</code> property. All other file systems have only one
     * subnet ID.</p> <p>For FSx for Lustre file systems, and Single-AZ Windows file
     * systems, this is the ID of the subnet that contains the file system's endpoint.
     * For <code>MULTI_AZ_1</code> Windows and ONTAP file systems, the file system
     * endpoint is available in the <code>PreferredSubnetID</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    FileSystem& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    FileSystem& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the elastic network interfaces from which a specific file system
     * is accessible. The elastic network interface is automatically created in the
     * same virtual private cloud (VPC) that the Amazon FSx file system was created in.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const { return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::forward<NetworkInterfaceIdsT>(value); }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    FileSystem& WithNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { SetNetworkInterfaceIds(std::forward<NetworkInterfaceIdsT>(value)); return *this;}
    template<typename NetworkInterfaceIdsT = Aws::String>
    FileSystem& AddNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.emplace_back(std::forward<NetworkInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Domain Name System (DNS) name for the file system.</p>
     */
    inline const Aws::String& GetDNSName() const { return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    template<typename DNSNameT = Aws::String>
    void SetDNSName(DNSNameT&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::forward<DNSNameT>(value); }
    template<typename DNSNameT = Aws::String>
    FileSystem& WithDNSName(DNSNameT&& value) { SetDNSName(std::forward<DNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt Amazon FSx
     * file system data. Used as follows with Amazon FSx file system types:</p> <ul>
     * <li> <p>Amazon FSx for Lustre <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment types only.</p> <p> <code>SCRATCH_1</code>
     * and <code>SCRATCH_2</code> types are encrypted using the Amazon FSx service KMS
     * key for your account.</p> </li> <li> <p>Amazon FSx for NetApp ONTAP</p> </li>
     * <li> <p>Amazon FSx for OpenZFS</p> </li> <li> <p>Amazon FSx for Windows File
     * Server</p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    FileSystem& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the file system resource.</p>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    FileSystem& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/tag-resources.html">Tagging
     * your Amazon FSx resources</a> in the <i>Amazon FSx for Lustre User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    FileSystem& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    FileSystem& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for this Amazon FSx for Windows File Server file
     * system.</p>
     */
    inline const WindowsFileSystemConfiguration& GetWindowsConfiguration() const { return m_windowsConfiguration; }
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }
    template<typename WindowsConfigurationT = WindowsFileSystemConfiguration>
    void SetWindowsConfiguration(WindowsConfigurationT&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::forward<WindowsConfigurationT>(value); }
    template<typename WindowsConfigurationT = WindowsFileSystemConfiguration>
    FileSystem& WithWindowsConfiguration(WindowsConfigurationT&& value) { SetWindowsConfiguration(std::forward<WindowsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LustreFileSystemConfiguration& GetLustreConfiguration() const { return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    template<typename LustreConfigurationT = LustreFileSystemConfiguration>
    void SetLustreConfiguration(LustreConfigurationT&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::forward<LustreConfigurationT>(value); }
    template<typename LustreConfigurationT = LustreFileSystemConfiguration>
    FileSystem& WithLustreConfiguration(LustreConfigurationT&& value) { SetLustreConfiguration(std::forward<LustreConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system that you have initiated using the <code>UpdateFileSystem</code>
     * operation.</p>
     */
    inline const Aws::Vector<AdministrativeAction>& GetAdministrativeActions() const { return m_administrativeActions; }
    inline bool AdministrativeActionsHasBeenSet() const { return m_administrativeActionsHasBeenSet; }
    template<typename AdministrativeActionsT = Aws::Vector<AdministrativeAction>>
    void SetAdministrativeActions(AdministrativeActionsT&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions = std::forward<AdministrativeActionsT>(value); }
    template<typename AdministrativeActionsT = Aws::Vector<AdministrativeAction>>
    FileSystem& WithAdministrativeActions(AdministrativeActionsT&& value) { SetAdministrativeActions(std::forward<AdministrativeActionsT>(value)); return *this;}
    template<typename AdministrativeActionsT = AdministrativeAction>
    FileSystem& AddAdministrativeActions(AdministrativeActionsT&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions.emplace_back(std::forward<AdministrativeActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for this Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline const OntapFileSystemConfiguration& GetOntapConfiguration() const { return m_ontapConfiguration; }
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }
    template<typename OntapConfigurationT = OntapFileSystemConfiguration>
    void SetOntapConfiguration(OntapConfigurationT&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::forward<OntapConfigurationT>(value); }
    template<typename OntapConfigurationT = OntapFileSystemConfiguration>
    FileSystem& WithOntapConfiguration(OntapConfigurationT&& value) { SetOntapConfiguration(std::forward<OntapConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre version of the Amazon FSx for Lustre file system, which can be
     * <code>2.10</code>, <code>2.12</code>, or <code>2.15</code>.</p>
     */
    inline const Aws::String& GetFileSystemTypeVersion() const { return m_fileSystemTypeVersion; }
    inline bool FileSystemTypeVersionHasBeenSet() const { return m_fileSystemTypeVersionHasBeenSet; }
    template<typename FileSystemTypeVersionT = Aws::String>
    void SetFileSystemTypeVersion(FileSystemTypeVersionT&& value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion = std::forward<FileSystemTypeVersionT>(value); }
    template<typename FileSystemTypeVersionT = Aws::String>
    FileSystem& WithFileSystemTypeVersion(FileSystemTypeVersionT&& value) { SetFileSystemTypeVersion(std::forward<FileSystemTypeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for this Amazon FSx for OpenZFS file system.</p>
     */
    inline const OpenZFSFileSystemConfiguration& GetOpenZFSConfiguration() const { return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    template<typename OpenZFSConfigurationT = OpenZFSFileSystemConfiguration>
    void SetOpenZFSConfiguration(OpenZFSConfigurationT&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::forward<OpenZFSConfigurationT>(value); }
    template<typename OpenZFSConfigurationT = OpenZFSFileSystemConfiguration>
    FileSystem& WithOpenZFSConfiguration(OpenZFSConfigurationT&& value) { SetOpenZFSConfiguration(std::forward<OpenZFSConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the file system.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline FileSystem& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    FileSystemType m_fileSystemType{FileSystemType::NOT_SET};
    bool m_fileSystemTypeHasBeenSet = false;

    FileSystemLifecycle m_lifecycle{FileSystemLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    FileSystemFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    WindowsFileSystemConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet = false;

    LustreFileSystemConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet = false;

    Aws::Vector<AdministrativeAction> m_administrativeActions;
    bool m_administrativeActionsHasBeenSet = false;

    OntapFileSystemConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet = false;

    Aws::String m_fileSystemTypeVersion;
    bool m_fileSystemTypeVersionHasBeenSet = false;

    OpenZFSFileSystemConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
