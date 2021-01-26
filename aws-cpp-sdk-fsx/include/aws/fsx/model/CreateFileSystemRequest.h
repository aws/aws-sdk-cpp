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
  class AWS_FSX_API CreateFileSystemRequest : public FSxRequest
  {
  public:
    CreateFileSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystem"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateFileSystemRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateFileSystemRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent creation. This string is automatically filled on your behalf when you
     * use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateFileSystemRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The type of Amazon FSx file system to create, either <code>WINDOWS</code> or
     * <code>LUSTRE</code>.</p>
     */
    inline const FileSystemType& GetFileSystemType() const{ return m_fileSystemType; }

    /**
     * <p>The type of Amazon FSx file system to create, either <code>WINDOWS</code> or
     * <code>LUSTRE</code>.</p>
     */
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }

    /**
     * <p>The type of Amazon FSx file system to create, either <code>WINDOWS</code> or
     * <code>LUSTRE</code>.</p>
     */
    inline void SetFileSystemType(const FileSystemType& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }

    /**
     * <p>The type of Amazon FSx file system to create, either <code>WINDOWS</code> or
     * <code>LUSTRE</code>.</p>
     */
    inline void SetFileSystemType(FileSystemType&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::move(value); }

    /**
     * <p>The type of Amazon FSx file system to create, either <code>WINDOWS</code> or
     * <code>LUSTRE</code>.</p>
     */
    inline CreateFileSystemRequest& WithFileSystemType(const FileSystemType& value) { SetFileSystemType(value); return *this;}

    /**
     * <p>The type of Amazon FSx file system to create, either <code>WINDOWS</code> or
     * <code>LUSTRE</code>.</p>
     */
    inline CreateFileSystemRequest& WithFileSystemType(FileSystemType&& value) { SetFileSystemType(std::move(value)); return *this;}


    /**
     * <p>Sets the storage capacity of the file system that you're creating.</p> <p>For
     * Lustre file systems:</p> <ul> <li> <p>For <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1 SSD</code> deployment types, valid values are 1200 GiB, 2400
     * GiB, and increments of 2400 GiB.</p> </li> <li> <p>For <code>PERSISTENT
     * HDD</code> file systems, valid values are increments of 6000 GiB for 12 MB/s/TiB
     * file systems and increments of 1800 GiB for 40 MB/s/TiB file systems.</p> </li>
     * <li> <p>For <code>SCRATCH_1</code> deployment type, valid values are 1200 GiB,
     * 2400 GiB, and increments of 3600 GiB.</p> </li> </ul> <p>For Windows file
     * systems:</p> <ul> <li> <p>If <code>StorageType=SSD</code>, valid values are 32
     * GiB - 65,536 GiB (64 TiB).</p> </li> <li> <p>If <code>StorageType=HDD</code>,
     * valid values are 2000 GiB - 65,536 GiB (64 TiB).</p> </li> </ul>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>Sets the storage capacity of the file system that you're creating.</p> <p>For
     * Lustre file systems:</p> <ul> <li> <p>For <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1 SSD</code> deployment types, valid values are 1200 GiB, 2400
     * GiB, and increments of 2400 GiB.</p> </li> <li> <p>For <code>PERSISTENT
     * HDD</code> file systems, valid values are increments of 6000 GiB for 12 MB/s/TiB
     * file systems and increments of 1800 GiB for 40 MB/s/TiB file systems.</p> </li>
     * <li> <p>For <code>SCRATCH_1</code> deployment type, valid values are 1200 GiB,
     * 2400 GiB, and increments of 3600 GiB.</p> </li> </ul> <p>For Windows file
     * systems:</p> <ul> <li> <p>If <code>StorageType=SSD</code>, valid values are 32
     * GiB - 65,536 GiB (64 TiB).</p> </li> <li> <p>If <code>StorageType=HDD</code>,
     * valid values are 2000 GiB - 65,536 GiB (64 TiB).</p> </li> </ul>
     */
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }

    /**
     * <p>Sets the storage capacity of the file system that you're creating.</p> <p>For
     * Lustre file systems:</p> <ul> <li> <p>For <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1 SSD</code> deployment types, valid values are 1200 GiB, 2400
     * GiB, and increments of 2400 GiB.</p> </li> <li> <p>For <code>PERSISTENT
     * HDD</code> file systems, valid values are increments of 6000 GiB for 12 MB/s/TiB
     * file systems and increments of 1800 GiB for 40 MB/s/TiB file systems.</p> </li>
     * <li> <p>For <code>SCRATCH_1</code> deployment type, valid values are 1200 GiB,
     * 2400 GiB, and increments of 3600 GiB.</p> </li> </ul> <p>For Windows file
     * systems:</p> <ul> <li> <p>If <code>StorageType=SSD</code>, valid values are 32
     * GiB - 65,536 GiB (64 TiB).</p> </li> <li> <p>If <code>StorageType=HDD</code>,
     * valid values are 2000 GiB - 65,536 GiB (64 TiB).</p> </li> </ul>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }

    /**
     * <p>Sets the storage capacity of the file system that you're creating.</p> <p>For
     * Lustre file systems:</p> <ul> <li> <p>For <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1 SSD</code> deployment types, valid values are 1200 GiB, 2400
     * GiB, and increments of 2400 GiB.</p> </li> <li> <p>For <code>PERSISTENT
     * HDD</code> file systems, valid values are increments of 6000 GiB for 12 MB/s/TiB
     * file systems and increments of 1800 GiB for 40 MB/s/TiB file systems.</p> </li>
     * <li> <p>For <code>SCRATCH_1</code> deployment type, valid values are 1200 GiB,
     * 2400 GiB, and increments of 3600 GiB.</p> </li> </ul> <p>For Windows file
     * systems:</p> <ul> <li> <p>If <code>StorageType=SSD</code>, valid values are 32
     * GiB - 65,536 GiB (64 TiB).</p> </li> <li> <p>If <code>StorageType=HDD</code>,
     * valid values are 2000 GiB - 65,536 GiB (64 TiB).</p> </li> </ul>
     */
    inline CreateFileSystemRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}


    /**
     * <p>Sets the storage type for the file system you're creating. Valid values are
     * <code>SSD</code> and <code>HDD</code>.</p> <ul> <li> <p>Set to <code>SSD</code>
     * to use solid state drive storage. SSD is supported on all Windows and Lustre
     * deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard disk
     * drive storage. HDD is supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types, and on
     * <code>PERSISTENT</code> Lustre file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/optimize-fsx-costs.html#storage-type-options">
     * Storage Type Options</a> in the <i>Amazon FSx for Windows User Guide</i> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/what-is.html#storage-options">Multiple
     * Storage Options</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Sets the storage type for the file system you're creating. Valid values are
     * <code>SSD</code> and <code>HDD</code>.</p> <ul> <li> <p>Set to <code>SSD</code>
     * to use solid state drive storage. SSD is supported on all Windows and Lustre
     * deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard disk
     * drive storage. HDD is supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types, and on
     * <code>PERSISTENT</code> Lustre file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/optimize-fsx-costs.html#storage-type-options">
     * Storage Type Options</a> in the <i>Amazon FSx for Windows User Guide</i> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/what-is.html#storage-options">Multiple
     * Storage Options</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Sets the storage type for the file system you're creating. Valid values are
     * <code>SSD</code> and <code>HDD</code>.</p> <ul> <li> <p>Set to <code>SSD</code>
     * to use solid state drive storage. SSD is supported on all Windows and Lustre
     * deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard disk
     * drive storage. HDD is supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types, and on
     * <code>PERSISTENT</code> Lustre file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/optimize-fsx-costs.html#storage-type-options">
     * Storage Type Options</a> in the <i>Amazon FSx for Windows User Guide</i> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/what-is.html#storage-options">Multiple
     * Storage Options</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     */
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Sets the storage type for the file system you're creating. Valid values are
     * <code>SSD</code> and <code>HDD</code>.</p> <ul> <li> <p>Set to <code>SSD</code>
     * to use solid state drive storage. SSD is supported on all Windows and Lustre
     * deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard disk
     * drive storage. HDD is supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types, and on
     * <code>PERSISTENT</code> Lustre file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/optimize-fsx-costs.html#storage-type-options">
     * Storage Type Options</a> in the <i>Amazon FSx for Windows User Guide</i> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/what-is.html#storage-options">Multiple
     * Storage Options</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     */
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Sets the storage type for the file system you're creating. Valid values are
     * <code>SSD</code> and <code>HDD</code>.</p> <ul> <li> <p>Set to <code>SSD</code>
     * to use solid state drive storage. SSD is supported on all Windows and Lustre
     * deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard disk
     * drive storage. HDD is supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types, and on
     * <code>PERSISTENT</code> Lustre file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/optimize-fsx-costs.html#storage-type-options">
     * Storage Type Options</a> in the <i>Amazon FSx for Windows User Guide</i> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/what-is.html#storage-options">Multiple
     * Storage Options</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     */
    inline CreateFileSystemRequest& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>Sets the storage type for the file system you're creating. Valid values are
     * <code>SSD</code> and <code>HDD</code>.</p> <ul> <li> <p>Set to <code>SSD</code>
     * to use solid state drive storage. SSD is supported on all Windows and Lustre
     * deployment types.</p> </li> <li> <p>Set to <code>HDD</code> to use hard disk
     * drive storage. HDD is supported on <code>SINGLE_AZ_2</code> and
     * <code>MULTI_AZ_1</code> Windows file system deployment types, and on
     * <code>PERSISTENT</code> Lustre file system deployment types. </p> </li> </ul>
     * <p> Default value is <code>SSD</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/optimize-fsx-costs.html#storage-type-options">
     * Storage Type Options</a> in the <i>Amazon FSx for Windows User Guide</i> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/what-is.html#storage-options">Multiple
     * Storage Options</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     */
    inline CreateFileSystemRequest& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}


    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types and Lustre file systems, provide exactly one subnet ID. The
     * file server is launched in that subnet's Availability Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types and Lustre file systems, provide exactly one subnet ID. The
     * file server is launched in that subnet's Availability Zone.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types and Lustre file systems, provide exactly one subnet ID. The
     * file server is launched in that subnet's Availability Zone.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types and Lustre file systems, provide exactly one subnet ID. The
     * file server is launched in that subnet's Availability Zone.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types and Lustre file systems, provide exactly one subnet ID. The
     * file server is launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types and Lustre file systems, provide exactly one subnet ID. The
     * file server is launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types and Lustre file systems, provide exactly one subnet ID. The
     * file server is launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types and Lustre file systems, provide exactly one subnet ID. The
     * file server is launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the IDs of the subnets that the file system will be accessible
     * from. For Windows <code>MULTI_AZ_1</code> file system deployment types, provide
     * exactly two subnet IDs, one for the preferred file server and one for the
     * standby file server. You specify one of these subnets as the preferred subnet
     * using the <code>WindowsConfiguration &gt; PreferredSubnetID</code> property.</p>
     * <p>For Windows <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> file system
     * deployment types and Lustre file systems, provide exactly one subnet ID. The
     * file server is launched in that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>
     */
    inline CreateFileSystemRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>
     */
    inline CreateFileSystemRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>
     */
    inline CreateFileSystemRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>
     */
    inline CreateFileSystemRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for file system access. This list isn't returned in later
     * requests to describe the file system.</p>
     */
    inline CreateFileSystemRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The tags to apply to the file system being created. The key value of the
     * <code>Name</code> tag appears in the console as the file system name.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the file system being created. The key value of the
     * <code>Name</code> tag appears in the console as the file system name.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the file system being created. The key value of the
     * <code>Name</code> tag appears in the console as the file system name.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the file system being created. The key value of the
     * <code>Name</code> tag appears in the console as the file system name.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the file system being created. The key value of the
     * <code>Name</code> tag appears in the console as the file system name.</p>
     */
    inline CreateFileSystemRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the file system being created. The key value of the
     * <code>Name</code> tag appears in the console as the file system name.</p>
     */
    inline CreateFileSystemRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the file system being created. The key value of the
     * <code>Name</code> tag appears in the console as the file system name.</p>
     */
    inline CreateFileSystemRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the file system being created. The key value of the
     * <code>Name</code> tag appears in the console as the file system name.</p>
     */
    inline CreateFileSystemRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    
    inline CreateFileSystemRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    
    inline CreateFileSystemRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    
    inline CreateFileSystemRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Microsoft Windows configuration for the file system being created. </p>
     */
    inline const CreateFileSystemWindowsConfiguration& GetWindowsConfiguration() const{ return m_windowsConfiguration; }

    /**
     * <p>The Microsoft Windows configuration for the file system being created. </p>
     */
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }

    /**
     * <p>The Microsoft Windows configuration for the file system being created. </p>
     */
    inline void SetWindowsConfiguration(const CreateFileSystemWindowsConfiguration& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = value; }

    /**
     * <p>The Microsoft Windows configuration for the file system being created. </p>
     */
    inline void SetWindowsConfiguration(CreateFileSystemWindowsConfiguration&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::move(value); }

    /**
     * <p>The Microsoft Windows configuration for the file system being created. </p>
     */
    inline CreateFileSystemRequest& WithWindowsConfiguration(const CreateFileSystemWindowsConfiguration& value) { SetWindowsConfiguration(value); return *this;}

    /**
     * <p>The Microsoft Windows configuration for the file system being created. </p>
     */
    inline CreateFileSystemRequest& WithWindowsConfiguration(CreateFileSystemWindowsConfiguration&& value) { SetWindowsConfiguration(std::move(value)); return *this;}


    
    inline const CreateFileSystemLustreConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }

    
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }

    
    inline void SetLustreConfiguration(const CreateFileSystemLustreConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }

    
    inline void SetLustreConfiguration(CreateFileSystemLustreConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }

    
    inline CreateFileSystemRequest& WithLustreConfiguration(const CreateFileSystemLustreConfiguration& value) { SetLustreConfiguration(value); return *this;}

    
    inline CreateFileSystemRequest& WithLustreConfiguration(CreateFileSystemLustreConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    FileSystemType m_fileSystemType;
    bool m_fileSystemTypeHasBeenSet;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet;

    StorageType m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    CreateFileSystemWindowsConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet;

    CreateFileSystemLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
