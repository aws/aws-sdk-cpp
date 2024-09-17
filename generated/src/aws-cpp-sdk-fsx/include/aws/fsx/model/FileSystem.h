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
    AWS_FSX_API FileSystem();
    AWS_FSX_API FileSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account that created the file system. If the file
     * system was created by a user in IAM Identity Center, the Amazon Web Services
     * account to which the IAM user belongs is the owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline FileSystem& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline FileSystem& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline FileSystem& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z), also known as Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline FileSystem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FileSystem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }
    inline FileSystem& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline FileSystem& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline FileSystem& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon FSx file system, which can be <code>LUSTRE</code>,
     * <code>WINDOWS</code>, <code>ONTAP</code>, or <code>OPENZFS</code>.</p>
     */
    inline const FileSystemType& GetFileSystemType() const{ return m_fileSystemType; }
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }
    inline void SetFileSystemType(const FileSystemType& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }
    inline void SetFileSystemType(FileSystemType&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::move(value); }
    inline FileSystem& WithFileSystemType(const FileSystemType& value) { SetFileSystemType(value); return *this;}
    inline FileSystem& WithFileSystemType(FileSystemType&& value) { SetFileSystemType(std::move(value)); return *this;}
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
    inline const FileSystemLifecycle& GetLifecycle() const{ return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(const FileSystemLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline void SetLifecycle(FileSystemLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }
    inline FileSystem& WithLifecycle(const FileSystemLifecycle& value) { SetLifecycle(value); return *this;}
    inline FileSystem& WithLifecycle(FileSystemLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FileSystemFailureDetails& GetFailureDetails() const{ return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    inline void SetFailureDetails(const FileSystemFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }
    inline void SetFailureDetails(FileSystemFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }
    inline FileSystem& WithFailureDetails(const FileSystemFailureDetails& value) { SetFailureDetails(value); return *this;}
    inline FileSystem& WithFailureDetails(FileSystemFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity of the file system in gibibytes (GiB).</p> <p>Amazon FSx
     * responds with an HTTP status code 400 (Bad Request) if the value of
     * <code>StorageCapacity</code> is outside of the minimum or maximum values.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline FileSystem& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of storage the file system is using. If set to <code>SSD</code>, the
     * file system uses solid state drive storage. If set to <code>HDD</code>, the file
     * system uses hard disk drive storage. </p>
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline FileSystem& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}
    inline FileSystem& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the primary virtual private cloud (VPC) for the file system.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline FileSystem& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline FileSystem& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline FileSystem& WithVpcId(const char* value) { SetVpcId(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline FileSystem& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline FileSystem& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline FileSystem& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline FileSystem& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline FileSystem& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }
    inline FileSystem& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}
    inline FileSystem& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}
    inline FileSystem& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    inline FileSystem& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }
    inline FileSystem& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Domain Name System (DNS) name for the file system.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }
    inline FileSystem& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}
    inline FileSystem& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}
    inline FileSystem& WithDNSName(const char* value) { SetDNSName(value); return *this;}
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
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline FileSystem& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline FileSystem& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline FileSystem& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the file system resource.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }
    inline FileSystem& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}
    inline FileSystem& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}
    inline FileSystem& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/tag-resources.html">Tagging
     * your Amazon FSx resources</a> in the <i>Amazon FSx for Lustre User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline FileSystem& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline FileSystem& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline FileSystem& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline FileSystem& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for this Amazon FSx for Windows File Server file
     * system.</p>
     */
    inline const WindowsFileSystemConfiguration& GetWindowsConfiguration() const{ return m_windowsConfiguration; }
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }
    inline void SetWindowsConfiguration(const WindowsFileSystemConfiguration& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = value; }
    inline void SetWindowsConfiguration(WindowsFileSystemConfiguration&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::move(value); }
    inline FileSystem& WithWindowsConfiguration(const WindowsFileSystemConfiguration& value) { SetWindowsConfiguration(value); return *this;}
    inline FileSystem& WithWindowsConfiguration(WindowsFileSystemConfiguration&& value) { SetWindowsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LustreFileSystemConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    inline void SetLustreConfiguration(const LustreFileSystemConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }
    inline void SetLustreConfiguration(LustreFileSystemConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }
    inline FileSystem& WithLustreConfiguration(const LustreFileSystemConfiguration& value) { SetLustreConfiguration(value); return *this;}
    inline FileSystem& WithLustreConfiguration(LustreFileSystemConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system that you have initiated using the <code>UpdateFileSystem</code>
     * operation.</p>
     */
    inline const Aws::Vector<AdministrativeAction>& GetAdministrativeActions() const{ return m_administrativeActions; }
    inline bool AdministrativeActionsHasBeenSet() const { return m_administrativeActionsHasBeenSet; }
    inline void SetAdministrativeActions(const Aws::Vector<AdministrativeAction>& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions = value; }
    inline void SetAdministrativeActions(Aws::Vector<AdministrativeAction>&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions = std::move(value); }
    inline FileSystem& WithAdministrativeActions(const Aws::Vector<AdministrativeAction>& value) { SetAdministrativeActions(value); return *this;}
    inline FileSystem& WithAdministrativeActions(Aws::Vector<AdministrativeAction>&& value) { SetAdministrativeActions(std::move(value)); return *this;}
    inline FileSystem& AddAdministrativeActions(const AdministrativeAction& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions.push_back(value); return *this; }
    inline FileSystem& AddAdministrativeActions(AdministrativeAction&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for this Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline const OntapFileSystemConfiguration& GetOntapConfiguration() const{ return m_ontapConfiguration; }
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }
    inline void SetOntapConfiguration(const OntapFileSystemConfiguration& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = value; }
    inline void SetOntapConfiguration(OntapFileSystemConfiguration&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::move(value); }
    inline FileSystem& WithOntapConfiguration(const OntapFileSystemConfiguration& value) { SetOntapConfiguration(value); return *this;}
    inline FileSystem& WithOntapConfiguration(OntapFileSystemConfiguration&& value) { SetOntapConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre version of the Amazon FSx for Lustre file system, which can be
     * <code>2.10</code>, <code>2.12</code>, or <code>2.15</code>.</p>
     */
    inline const Aws::String& GetFileSystemTypeVersion() const{ return m_fileSystemTypeVersion; }
    inline bool FileSystemTypeVersionHasBeenSet() const { return m_fileSystemTypeVersionHasBeenSet; }
    inline void SetFileSystemTypeVersion(const Aws::String& value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion = value; }
    inline void SetFileSystemTypeVersion(Aws::String&& value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion = std::move(value); }
    inline void SetFileSystemTypeVersion(const char* value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion.assign(value); }
    inline FileSystem& WithFileSystemTypeVersion(const Aws::String& value) { SetFileSystemTypeVersion(value); return *this;}
    inline FileSystem& WithFileSystemTypeVersion(Aws::String&& value) { SetFileSystemTypeVersion(std::move(value)); return *this;}
    inline FileSystem& WithFileSystemTypeVersion(const char* value) { SetFileSystemTypeVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for this Amazon FSx for OpenZFS file system.</p>
     */
    inline const OpenZFSFileSystemConfiguration& GetOpenZFSConfiguration() const{ return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    inline void SetOpenZFSConfiguration(const OpenZFSFileSystemConfiguration& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = value; }
    inline void SetOpenZFSConfiguration(OpenZFSFileSystemConfiguration&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::move(value); }
    inline FileSystem& WithOpenZFSConfiguration(const OpenZFSFileSystemConfiguration& value) { SetOpenZFSConfiguration(value); return *this;}
    inline FileSystem& WithOpenZFSConfiguration(OpenZFSFileSystemConfiguration&& value) { SetOpenZFSConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    FileSystemType m_fileSystemType;
    bool m_fileSystemTypeHasBeenSet = false;

    FileSystemLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    FileSystemFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet = false;

    StorageType m_storageType;
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
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
