/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fsx/model/FileSystemType.h>
#include <aws/fsx/model/FileSystemLifecycle.h>
#include <aws/fsx/model/FileSystemFailureDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/WindowsFileSystemConfiguration.h>
#include <aws/fsx/model/LustreFileSystemConfiguration.h>
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

  /**
   * <p>A description of a specific Amazon FSx file system.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileSystem">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API FileSystem
  {
  public:
    FileSystem();
    FileSystem(Aws::Utils::Json::JsonView jsonValue);
    FileSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an AWS Identity and Access Management (IAM) user, the AWS account to which
     * the IAM user belongs is the owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an AWS Identity and Access Management (IAM) user, the AWS account to which
     * the IAM user belongs is the owner.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an AWS Identity and Access Management (IAM) user, the AWS account to which
     * the IAM user belongs is the owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an AWS Identity and Access Management (IAM) user, the AWS account to which
     * the IAM user belongs is the owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an AWS Identity and Access Management (IAM) user, the AWS account to which
     * the IAM user belongs is the owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an AWS Identity and Access Management (IAM) user, the AWS account to which
     * the IAM user belongs is the owner.</p>
     */
    inline FileSystem& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an AWS Identity and Access Management (IAM) user, the AWS account to which
     * the IAM user belongs is the owner.</p>
     */
    inline FileSystem& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an AWS Identity and Access Management (IAM) user, the AWS account to which
     * the IAM user belongs is the owner.</p>
     */
    inline FileSystem& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z), also known as Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z), also known as Unix time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z), also known as Unix time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z), also known as Unix time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z), also known as Unix time.</p>
     */
    inline FileSystem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z), also known as Unix time.</p>
     */
    inline FileSystem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline FileSystem& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline FileSystem& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The system-generated, unique 17-digit ID of the file system.</p>
     */
    inline FileSystem& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The type of Amazon FSx file system, either <code>LUSTRE</code> or
     * <code>WINDOWS</code>.</p>
     */
    inline const FileSystemType& GetFileSystemType() const{ return m_fileSystemType; }

    /**
     * <p>The type of Amazon FSx file system, either <code>LUSTRE</code> or
     * <code>WINDOWS</code>.</p>
     */
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }

    /**
     * <p>The type of Amazon FSx file system, either <code>LUSTRE</code> or
     * <code>WINDOWS</code>.</p>
     */
    inline void SetFileSystemType(const FileSystemType& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }

    /**
     * <p>The type of Amazon FSx file system, either <code>LUSTRE</code> or
     * <code>WINDOWS</code>.</p>
     */
    inline void SetFileSystemType(FileSystemType&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::move(value); }

    /**
     * <p>The type of Amazon FSx file system, either <code>LUSTRE</code> or
     * <code>WINDOWS</code>.</p>
     */
    inline FileSystem& WithFileSystemType(const FileSystemType& value) { SetFileSystemType(value); return *this;}

    /**
     * <p>The type of Amazon FSx file system, either <code>LUSTRE</code> or
     * <code>WINDOWS</code>.</p>
     */
    inline FileSystem& WithFileSystemType(FileSystemType&& value) { SetFileSystemType(std::move(value)); return *this;}


    /**
     * <p>The lifecycle status of the file system:</p> <ul> <li> <p>
     * <code>AVAILABLE</code> indicates that the file system is reachable and available
     * for use.</p> </li> <li> <p> <code>CREATING</code> indicates that Amazon FSx is
     * in the process of creating the new file system.</p> </li> <li> <p>
     * <code>DELETING</code> indicates that Amazon FSx is in the process of deleting
     * the file system.</p> </li> <li> <p> <code>FAILED</code> indicates that Amazon
     * FSx was not able to create the file system.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> indicates that the file system is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>UPDATING</code> indicates that the
     * file system is undergoing a customer initiated update.</p> </li> </ul>
     */
    inline const FileSystemLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle status of the file system:</p> <ul> <li> <p>
     * <code>AVAILABLE</code> indicates that the file system is reachable and available
     * for use.</p> </li> <li> <p> <code>CREATING</code> indicates that Amazon FSx is
     * in the process of creating the new file system.</p> </li> <li> <p>
     * <code>DELETING</code> indicates that Amazon FSx is in the process of deleting
     * the file system.</p> </li> <li> <p> <code>FAILED</code> indicates that Amazon
     * FSx was not able to create the file system.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> indicates that the file system is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>UPDATING</code> indicates that the
     * file system is undergoing a customer initiated update.</p> </li> </ul>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle status of the file system:</p> <ul> <li> <p>
     * <code>AVAILABLE</code> indicates that the file system is reachable and available
     * for use.</p> </li> <li> <p> <code>CREATING</code> indicates that Amazon FSx is
     * in the process of creating the new file system.</p> </li> <li> <p>
     * <code>DELETING</code> indicates that Amazon FSx is in the process of deleting
     * the file system.</p> </li> <li> <p> <code>FAILED</code> indicates that Amazon
     * FSx was not able to create the file system.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> indicates that the file system is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>UPDATING</code> indicates that the
     * file system is undergoing a customer initiated update.</p> </li> </ul>
     */
    inline void SetLifecycle(const FileSystemLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle status of the file system:</p> <ul> <li> <p>
     * <code>AVAILABLE</code> indicates that the file system is reachable and available
     * for use.</p> </li> <li> <p> <code>CREATING</code> indicates that Amazon FSx is
     * in the process of creating the new file system.</p> </li> <li> <p>
     * <code>DELETING</code> indicates that Amazon FSx is in the process of deleting
     * the file system.</p> </li> <li> <p> <code>FAILED</code> indicates that Amazon
     * FSx was not able to create the file system.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> indicates that the file system is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>UPDATING</code> indicates that the
     * file system is undergoing a customer initiated update.</p> </li> </ul>
     */
    inline void SetLifecycle(FileSystemLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle status of the file system:</p> <ul> <li> <p>
     * <code>AVAILABLE</code> indicates that the file system is reachable and available
     * for use.</p> </li> <li> <p> <code>CREATING</code> indicates that Amazon FSx is
     * in the process of creating the new file system.</p> </li> <li> <p>
     * <code>DELETING</code> indicates that Amazon FSx is in the process of deleting
     * the file system.</p> </li> <li> <p> <code>FAILED</code> indicates that Amazon
     * FSx was not able to create the file system.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> indicates that the file system is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>UPDATING</code> indicates that the
     * file system is undergoing a customer initiated update.</p> </li> </ul>
     */
    inline FileSystem& WithLifecycle(const FileSystemLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle status of the file system:</p> <ul> <li> <p>
     * <code>AVAILABLE</code> indicates that the file system is reachable and available
     * for use.</p> </li> <li> <p> <code>CREATING</code> indicates that Amazon FSx is
     * in the process of creating the new file system.</p> </li> <li> <p>
     * <code>DELETING</code> indicates that Amazon FSx is in the process of deleting
     * the file system.</p> </li> <li> <p> <code>FAILED</code> indicates that Amazon
     * FSx was not able to create the file system.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> indicates that the file system is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>UPDATING</code> indicates that the
     * file system is undergoing a customer initiated update.</p> </li> </ul>
     */
    inline FileSystem& WithLifecycle(FileSystemLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    
    inline const FileSystemFailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    
    inline void SetFailureDetails(const FileSystemFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    
    inline void SetFailureDetails(FileSystemFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    
    inline FileSystem& WithFailureDetails(const FileSystemFailureDetails& value) { SetFailureDetails(value); return *this;}

    
    inline FileSystem& WithFailureDetails(FileSystemFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>The storage capacity of the file system in gigabytes (GB).</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>The storage capacity of the file system in gigabytes (GB).</p>
     */
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }

    /**
     * <p>The storage capacity of the file system in gigabytes (GB).</p>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }

    /**
     * <p>The storage capacity of the file system in gigabytes (GB).</p>
     */
    inline FileSystem& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}


    /**
     * <p>The ID of the primary VPC for the file system.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the primary VPC for the file system.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the primary VPC for the file system.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the primary VPC for the file system.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the primary VPC for the file system.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the primary VPC for the file system.</p>
     */
    inline FileSystem& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the primary VPC for the file system.</p>
     */
    inline FileSystem& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the primary VPC for the file system.</p>
     */
    inline FileSystem& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The ID of the subnet to contain the endpoint for the file system. One and
     * only one is supported. The file system is launched in the Availability Zone
     * associated with this subnet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The ID of the subnet to contain the endpoint for the file system. One and
     * only one is supported. The file system is launched in the Availability Zone
     * associated with this subnet.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The ID of the subnet to contain the endpoint for the file system. One and
     * only one is supported. The file system is launched in the Availability Zone
     * associated with this subnet.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The ID of the subnet to contain the endpoint for the file system. One and
     * only one is supported. The file system is launched in the Availability Zone
     * associated with this subnet.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The ID of the subnet to contain the endpoint for the file system. One and
     * only one is supported. The file system is launched in the Availability Zone
     * associated with this subnet.</p>
     */
    inline FileSystem& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The ID of the subnet to contain the endpoint for the file system. One and
     * only one is supported. The file system is launched in the Availability Zone
     * associated with this subnet.</p>
     */
    inline FileSystem& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet to contain the endpoint for the file system. One and
     * only one is supported. The file system is launched in the Availability Zone
     * associated with this subnet.</p>
     */
    inline FileSystem& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The ID of the subnet to contain the endpoint for the file system. One and
     * only one is supported. The file system is launched in the Availability Zone
     * associated with this subnet.</p>
     */
    inline FileSystem& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the subnet to contain the endpoint for the file system. One and
     * only one is supported. The file system is launched in the Availability Zone
     * associated with this subnet.</p>
     */
    inline FileSystem& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The IDs of the elastic network interface from which a specific file system is
     * accessible. The elastic network interface is automatically created in the same
     * VPC that the Amazon FSx file system was created in. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }

    /**
     * <p>The IDs of the elastic network interface from which a specific file system is
     * accessible. The elastic network interface is automatically created in the same
     * VPC that the Amazon FSx file system was created in. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }

    /**
     * <p>The IDs of the elastic network interface from which a specific file system is
     * accessible. The elastic network interface is automatically created in the same
     * VPC that the Amazon FSx file system was created in. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }

    /**
     * <p>The IDs of the elastic network interface from which a specific file system is
     * accessible. The elastic network interface is automatically created in the same
     * VPC that the Amazon FSx file system was created in. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }

    /**
     * <p>The IDs of the elastic network interface from which a specific file system is
     * accessible. The elastic network interface is automatically created in the same
     * VPC that the Amazon FSx file system was created in. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline FileSystem& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}

    /**
     * <p>The IDs of the elastic network interface from which a specific file system is
     * accessible. The elastic network interface is automatically created in the same
     * VPC that the Amazon FSx file system was created in. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline FileSystem& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the elastic network interface from which a specific file system is
     * accessible. The elastic network interface is automatically created in the same
     * VPC that the Amazon FSx file system was created in. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline FileSystem& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the elastic network interface from which a specific file system is
     * accessible. The elastic network interface is automatically created in the same
     * VPC that the Amazon FSx file system was created in. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline FileSystem& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the elastic network interface from which a specific file system is
     * accessible. The elastic network interface is automatically created in the same
     * VPC that the Amazon FSx file system was created in. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
     * Network Interfaces</a> in the <i>Amazon EC2 User Guide.</i> </p> <p>For an
     * Amazon FSx for Windows File Server file system, you can have one network
     * interface ID. For an Amazon FSx for Lustre file system, you can have more than
     * one.</p>
     */
    inline FileSystem& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }


    /**
     * <p>The DNS name for the file system.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    /**
     * <p>The DNS name for the file system.</p>
     */
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }

    /**
     * <p>The DNS name for the file system.</p>
     */
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }

    /**
     * <p>The DNS name for the file system.</p>
     */
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }

    /**
     * <p>The DNS name for the file system.</p>
     */
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }

    /**
     * <p>The DNS name for the file system.</p>
     */
    inline FileSystem& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>The DNS name for the file system.</p>
     */
    inline FileSystem& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    /**
     * <p>The DNS name for the file system.</p>
     */
    inline FileSystem& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key used to encrypt the
     * file system's data for an Amazon FSx for Windows File Server file system.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key used to encrypt the
     * file system's data for an Amazon FSx for Windows File Server file system.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key used to encrypt the
     * file system's data for an Amazon FSx for Windows File Server file system.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key used to encrypt the
     * file system's data for an Amazon FSx for Windows File Server file system.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key used to encrypt the
     * file system's data for an Amazon FSx for Windows File Server file system.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key used to encrypt the
     * file system's data for an Amazon FSx for Windows File Server file system.</p>
     */
    inline FileSystem& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key used to encrypt the
     * file system's data for an Amazon FSx for Windows File Server file system.</p>
     */
    inline FileSystem& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key used to encrypt the
     * file system's data for an Amazon FSx for Windows File Server file system.</p>
     */
    inline FileSystem& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the file system resource.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the file system resource.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the file system resource.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the file system resource.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the file system resource.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the file system resource.</p>
     */
    inline FileSystem& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the file system resource.</p>
     */
    inline FileSystem& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the file system resource.</p>
     */
    inline FileSystem& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
     * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
     * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
     * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
     * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
     * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline FileSystem& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
     * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline FileSystem& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
     * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline FileSystem& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to associate with the file system. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
     * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline FileSystem& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline const WindowsFileSystemConfiguration& GetWindowsConfiguration() const{ return m_windowsConfiguration; }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline void SetWindowsConfiguration(const WindowsFileSystemConfiguration& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = value; }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline void SetWindowsConfiguration(WindowsFileSystemConfiguration&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::move(value); }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline FileSystem& WithWindowsConfiguration(const WindowsFileSystemConfiguration& value) { SetWindowsConfiguration(value); return *this;}

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline FileSystem& WithWindowsConfiguration(WindowsFileSystemConfiguration&& value) { SetWindowsConfiguration(std::move(value)); return *this;}


    
    inline const LustreFileSystemConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }

    
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }

    
    inline void SetLustreConfiguration(const LustreFileSystemConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }

    
    inline void SetLustreConfiguration(LustreFileSystemConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }

    
    inline FileSystem& WithLustreConfiguration(const LustreFileSystemConfiguration& value) { SetLustreConfiguration(value); return *this;}

    
    inline FileSystem& WithLustreConfiguration(LustreFileSystemConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    FileSystemType m_fileSystemType;
    bool m_fileSystemTypeHasBeenSet;

    FileSystemLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;

    FileSystemFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    WindowsFileSystemConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet;

    LustreFileSystemConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
