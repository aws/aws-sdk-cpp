/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/LifeCycleState.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Provides a description of a mount target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/MountTargetDescription">AWS
   * API Reference</a></p>
   */
  class AWS_EFS_API MountTargetDescription
  {
  public:
    MountTargetDescription();
    MountTargetDescription(Aws::Utils::Json::JsonView jsonValue);
    MountTargetDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline MountTargetDescription& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline MountTargetDescription& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline MountTargetDescription& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline const Aws::String& GetMountTargetId() const{ return m_mountTargetId; }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline bool MountTargetIdHasBeenSet() const { return m_mountTargetIdHasBeenSet; }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline void SetMountTargetId(const Aws::String& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = value; }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline void SetMountTargetId(Aws::String&& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = std::move(value); }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline void SetMountTargetId(const char* value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId.assign(value); }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline MountTargetDescription& WithMountTargetId(const Aws::String& value) { SetMountTargetId(value); return *this;}

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline MountTargetDescription& WithMountTargetId(Aws::String&& value) { SetMountTargetId(std::move(value)); return *this;}

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline MountTargetDescription& WithMountTargetId(const char* value) { SetMountTargetId(value); return *this;}


    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline MountTargetDescription& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline MountTargetDescription& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline MountTargetDescription& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline MountTargetDescription& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline MountTargetDescription& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline MountTargetDescription& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline bool LifeCycleStateHasBeenSet() const { return m_lifeCycleStateHasBeenSet; }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = value; }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = std::move(value); }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline MountTargetDescription& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline MountTargetDescription& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}


    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline MountTargetDescription& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline MountTargetDescription& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline MountTargetDescription& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline MountTargetDescription& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline MountTargetDescription& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline MountTargetDescription& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The unique and consistent identifier of the Availability Zone that the mount
     * target resides in. For example, <code>use1-az1</code> is an AZ ID for the
     * us-east-1 Region and it has the same location in every AWS account.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The unique and consistent identifier of the Availability Zone that the mount
     * target resides in. For example, <code>use1-az1</code> is an AZ ID for the
     * us-east-1 Region and it has the same location in every AWS account.</p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p>The unique and consistent identifier of the Availability Zone that the mount
     * target resides in. For example, <code>use1-az1</code> is an AZ ID for the
     * us-east-1 Region and it has the same location in every AWS account.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p>The unique and consistent identifier of the Availability Zone that the mount
     * target resides in. For example, <code>use1-az1</code> is an AZ ID for the
     * us-east-1 Region and it has the same location in every AWS account.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p>The unique and consistent identifier of the Availability Zone that the mount
     * target resides in. For example, <code>use1-az1</code> is an AZ ID for the
     * us-east-1 Region and it has the same location in every AWS account.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p>The unique and consistent identifier of the Availability Zone that the mount
     * target resides in. For example, <code>use1-az1</code> is an AZ ID for the
     * us-east-1 Region and it has the same location in every AWS account.</p>
     */
    inline MountTargetDescription& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The unique and consistent identifier of the Availability Zone that the mount
     * target resides in. For example, <code>use1-az1</code> is an AZ ID for the
     * us-east-1 Region and it has the same location in every AWS account.</p>
     */
    inline MountTargetDescription& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The unique and consistent identifier of the Availability Zone that the mount
     * target resides in. For example, <code>use1-az1</code> is an AZ ID for the
     * us-east-1 Region and it has the same location in every AWS account.</p>
     */
    inline MountTargetDescription& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The name of the Availability Zone in which the mount target is located.
     * Availability Zones are independently mapped to names for each AWS account. For
     * example, the Availability Zone <code>us-east-1a</code> for your AWS account
     * might not be the same location as <code>us-east-1a</code> for another AWS
     * account.</p>
     */
    inline const Aws::String& GetAvailabilityZoneName() const{ return m_availabilityZoneName; }

    /**
     * <p>The name of the Availability Zone in which the mount target is located.
     * Availability Zones are independently mapped to names for each AWS account. For
     * example, the Availability Zone <code>us-east-1a</code> for your AWS account
     * might not be the same location as <code>us-east-1a</code> for another AWS
     * account.</p>
     */
    inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }

    /**
     * <p>The name of the Availability Zone in which the mount target is located.
     * Availability Zones are independently mapped to names for each AWS account. For
     * example, the Availability Zone <code>us-east-1a</code> for your AWS account
     * might not be the same location as <code>us-east-1a</code> for another AWS
     * account.</p>
     */
    inline void SetAvailabilityZoneName(const Aws::String& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = value; }

    /**
     * <p>The name of the Availability Zone in which the mount target is located.
     * Availability Zones are independently mapped to names for each AWS account. For
     * example, the Availability Zone <code>us-east-1a</code> for your AWS account
     * might not be the same location as <code>us-east-1a</code> for another AWS
     * account.</p>
     */
    inline void SetAvailabilityZoneName(Aws::String&& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = std::move(value); }

    /**
     * <p>The name of the Availability Zone in which the mount target is located.
     * Availability Zones are independently mapped to names for each AWS account. For
     * example, the Availability Zone <code>us-east-1a</code> for your AWS account
     * might not be the same location as <code>us-east-1a</code> for another AWS
     * account.</p>
     */
    inline void SetAvailabilityZoneName(const char* value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName.assign(value); }

    /**
     * <p>The name of the Availability Zone in which the mount target is located.
     * Availability Zones are independently mapped to names for each AWS account. For
     * example, the Availability Zone <code>us-east-1a</code> for your AWS account
     * might not be the same location as <code>us-east-1a</code> for another AWS
     * account.</p>
     */
    inline MountTargetDescription& WithAvailabilityZoneName(const Aws::String& value) { SetAvailabilityZoneName(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the mount target is located.
     * Availability Zones are independently mapped to names for each AWS account. For
     * example, the Availability Zone <code>us-east-1a</code> for your AWS account
     * might not be the same location as <code>us-east-1a</code> for another AWS
     * account.</p>
     */
    inline MountTargetDescription& WithAvailabilityZoneName(Aws::String&& value) { SetAvailabilityZoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone in which the mount target is located.
     * Availability Zones are independently mapped to names for each AWS account. For
     * example, the Availability Zone <code>us-east-1a</code> for your AWS account
     * might not be the same location as <code>us-east-1a</code> for another AWS
     * account.</p>
     */
    inline MountTargetDescription& WithAvailabilityZoneName(const char* value) { SetAvailabilityZoneName(value); return *this;}


    /**
     * <p>The virtual private cloud (VPC) ID that the mount target is configured
     * in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The virtual private cloud (VPC) ID that the mount target is configured
     * in.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) ID that the mount target is configured
     * in.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The virtual private cloud (VPC) ID that the mount target is configured
     * in.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) ID that the mount target is configured
     * in.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The virtual private cloud (VPC) ID that the mount target is configured
     * in.</p>
     */
    inline MountTargetDescription& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) ID that the mount target is configured
     * in.</p>
     */
    inline MountTargetDescription& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The virtual private cloud (VPC) ID that the mount target is configured
     * in.</p>
     */
    inline MountTargetDescription& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_mountTargetId;
    bool m_mountTargetIdHasBeenSet;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    LifeCycleState m_lifeCycleState;
    bool m_lifeCycleStateHasBeenSet;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet;

    Aws::String m_availabilityZoneName;
    bool m_availabilityZoneNameHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
