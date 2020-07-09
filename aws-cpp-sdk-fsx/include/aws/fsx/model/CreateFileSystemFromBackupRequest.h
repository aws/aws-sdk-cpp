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
  class AWS_FSX_API CreateFileSystemFromBackupRequest : public FSxRequest
  {
  public:
    CreateFileSystemFromBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystemFromBackup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    
    inline CreateFileSystemFromBackupRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    
    inline CreateFileSystemFromBackupRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    
    inline CreateFileSystemFromBackupRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment
     * types and Lustre file systems, provide exactly one subnet ID. The file server is
     * launched in that subnet's Availability Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment
     * types and Lustre file systems, provide exactly one subnet ID. The file server is
     * launched in that subnet's Availability Zone.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment
     * types and Lustre file systems, provide exactly one subnet ID. The file server is
     * launched in that subnet's Availability Zone.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment
     * types and Lustre file systems, provide exactly one subnet ID. The file server is
     * launched in that subnet's Availability Zone.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment
     * types and Lustre file systems, provide exactly one subnet ID. The file server is
     * launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment
     * types and Lustre file systems, provide exactly one subnet ID. The file server is
     * launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment
     * types and Lustre file systems, provide exactly one subnet ID. The file server is
     * launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment
     * types and Lustre file systems, provide exactly one subnet ID. The file server is
     * launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment
     * types and Lustre file systems, provide exactly one subnet ID. The file server is
     * launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later DescribeFileSystem
     * requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later DescribeFileSystem
     * requests.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later DescribeFileSystem
     * requests.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later DescribeFileSystem
     * requests.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later DescribeFileSystem
     * requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later DescribeFileSystem
     * requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later DescribeFileSystem
     * requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later DescribeFileSystem
     * requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later DescribeFileSystem
     * requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline const CreateFileSystemWindowsConfiguration& GetWindowsConfiguration() const{ return m_windowsConfiguration; }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline void SetWindowsConfiguration(const CreateFileSystemWindowsConfiguration& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = value; }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline void SetWindowsConfiguration(CreateFileSystemWindowsConfiguration&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::move(value); }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithWindowsConfiguration(const CreateFileSystemWindowsConfiguration& value) { SetWindowsConfiguration(value); return *this;}

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithWindowsConfiguration(CreateFileSystemWindowsConfiguration&& value) { SetWindowsConfiguration(std::move(value)); return *this;}


    
    inline const CreateFileSystemLustreConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }

    
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }

    
    inline void SetLustreConfiguration(const CreateFileSystemLustreConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }

    
    inline void SetLustreConfiguration(CreateFileSystemLustreConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }

    
    inline CreateFileSystemFromBackupRequest& WithLustreConfiguration(const CreateFileSystemLustreConfiguration& value) { SetLustreConfiguration(value); return *this;}

    
    inline CreateFileSystemFromBackupRequest& WithLustreConfiguration(CreateFileSystemLustreConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}


    /**
     * <p>Sets the storage type for the Windows file system you're creating from a
     * backup. Valid values are <code>SSD</code> and <code>HDD</code>.</p> <ul> <li>
     * <p>Set to <code>SSD</code> to use solid state drive storage. Supported on all
     * Windows deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard
     * disk drive storage. Supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. </p>  <p>HDD and SSD storage types
     * have different minimum storage capacity requirements. A restored file system's
     * storage capacity is tied to the file system that was backed up. You can create a
     * file system that uses HDD storage from a backup of a file system that used SSD
     * storage only if the original SSD file system had a storage capacity of at least
     * 2000 GiB. </p> 
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Sets the storage type for the Windows file system you're creating from a
     * backup. Valid values are <code>SSD</code> and <code>HDD</code>.</p> <ul> <li>
     * <p>Set to <code>SSD</code> to use solid state drive storage. Supported on all
     * Windows deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard
     * disk drive storage. Supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. </p>  <p>HDD and SSD storage types
     * have different minimum storage capacity requirements. A restored file system's
     * storage capacity is tied to the file system that was backed up. You can create a
     * file system that uses HDD storage from a backup of a file system that used SSD
     * storage only if the original SSD file system had a storage capacity of at least
     * 2000 GiB. </p> 
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Sets the storage type for the Windows file system you're creating from a
     * backup. Valid values are <code>SSD</code> and <code>HDD</code>.</p> <ul> <li>
     * <p>Set to <code>SSD</code> to use solid state drive storage. Supported on all
     * Windows deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard
     * disk drive storage. Supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. </p>  <p>HDD and SSD storage types
     * have different minimum storage capacity requirements. A restored file system's
     * storage capacity is tied to the file system that was backed up. You can create a
     * file system that uses HDD storage from a backup of a file system that used SSD
     * storage only if the original SSD file system had a storage capacity of at least
     * 2000 GiB. </p> 
     */
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Sets the storage type for the Windows file system you're creating from a
     * backup. Valid values are <code>SSD</code> and <code>HDD</code>.</p> <ul> <li>
     * <p>Set to <code>SSD</code> to use solid state drive storage. Supported on all
     * Windows deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard
     * disk drive storage. Supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. </p>  <p>HDD and SSD storage types
     * have different minimum storage capacity requirements. A restored file system's
     * storage capacity is tied to the file system that was backed up. You can create a
     * file system that uses HDD storage from a backup of a file system that used SSD
     * storage only if the original SSD file system had a storage capacity of at least
     * 2000 GiB. </p> 
     */
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Sets the storage type for the Windows file system you're creating from a
     * backup. Valid values are <code>SSD</code> and <code>HDD</code>.</p> <ul> <li>
     * <p>Set to <code>SSD</code> to use solid state drive storage. Supported on all
     * Windows deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard
     * disk drive storage. Supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. </p>  <p>HDD and SSD storage types
     * have different minimum storage capacity requirements. A restored file system's
     * storage capacity is tied to the file system that was backed up. You can create a
     * file system that uses HDD storage from a backup of a file system that used SSD
     * storage only if the original SSD file system had a storage capacity of at least
     * 2000 GiB. </p> 
     */
    inline CreateFileSystemFromBackupRequest& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>Sets the storage type for the Windows file system you're creating from a
     * backup. Valid values are <code>SSD</code> and <code>HDD</code>.</p> <ul> <li>
     * <p>Set to <code>SSD</code> to use solid state drive storage. Supported on all
     * Windows deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard
     * disk drive storage. Supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. </p>  <p>HDD and SSD storage types
     * have different minimum storage capacity requirements. A restored file system's
     * storage capacity is tied to the file system that was backed up. You can create a
     * file system that uses HDD storage from a backup of a file system that used SSD
     * storage only if the original SSD file system had a storage capacity of at least
     * 2000 GiB. </p> 
     */
    inline CreateFileSystemFromBackupRequest& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    CreateFileSystemWindowsConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet;

    CreateFileSystemLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet;

    StorageType m_storageType;
    bool m_storageTypeHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
