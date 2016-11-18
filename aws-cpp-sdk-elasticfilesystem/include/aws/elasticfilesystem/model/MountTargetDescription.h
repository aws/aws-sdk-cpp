/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/LifeCycleState.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EFS
{
namespace Model
{

  /**
   * <p>Provides a description of a mount target.</p>
   */
  class AWS_EFS_API MountTargetDescription
  {
  public:
    MountTargetDescription();
    MountTargetDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    MountTargetDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

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
    inline MountTargetDescription& WithOwnerId(Aws::String&& value) { SetOwnerId(value); return *this;}

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
    inline void SetMountTargetId(const Aws::String& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = value; }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline void SetMountTargetId(Aws::String&& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = value; }

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
    inline MountTargetDescription& WithMountTargetId(Aws::String&& value) { SetMountTargetId(value); return *this;}

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline MountTargetDescription& WithMountTargetId(const char* value) { SetMountTargetId(value); return *this;}

    /**
     * <p>ID of the file system for which the mount target is intended.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>ID of the file system for which the mount target is intended.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system for which the mount target is intended.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system for which the mount target is intended.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>ID of the file system for which the mount target is intended.</p>
     */
    inline MountTargetDescription& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system for which the mount target is intended.</p>
     */
    inline MountTargetDescription& WithFileSystemId(Aws::String&& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system for which the mount target is intended.</p>
     */
    inline MountTargetDescription& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the mount target's subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>ID of the mount target's subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>ID of the mount target's subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>ID of the mount target's subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>ID of the mount target's subnet.</p>
     */
    inline MountTargetDescription& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>ID of the mount target's subnet.</p>
     */
    inline MountTargetDescription& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>ID of the mount target's subnet.</p>
     */
    inline MountTargetDescription& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = value; }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = value; }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline MountTargetDescription& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline MountTargetDescription& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>Address at which the file system may be mounted via the mount target.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>Address at which the file system may be mounted via the mount target.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Address at which the file system may be mounted via the mount target.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Address at which the file system may be mounted via the mount target.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>Address at which the file system may be mounted via the mount target.</p>
     */
    inline MountTargetDescription& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Address at which the file system may be mounted via the mount target.</p>
     */
    inline MountTargetDescription& WithIpAddress(Aws::String&& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Address at which the file system may be mounted via the mount target.</p>
     */
    inline MountTargetDescription& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

    /**
     * <p>ID of the network interface that Amazon EFS created when it created the mount
     * target.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>ID of the network interface that Amazon EFS created when it created the mount
     * target.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>ID of the network interface that Amazon EFS created when it created the mount
     * target.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>ID of the network interface that Amazon EFS created when it created the mount
     * target.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>ID of the network interface that Amazon EFS created when it created the mount
     * target.</p>
     */
    inline MountTargetDescription& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>ID of the network interface that Amazon EFS created when it created the mount
     * target.</p>
     */
    inline MountTargetDescription& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>ID of the network interface that Amazon EFS created when it created the mount
     * target.</p>
     */
    inline MountTargetDescription& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

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
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
