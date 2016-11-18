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
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_EFS_API CreateMountTargetRequest : public EFSRequest
  {
  public:
    CreateMountTargetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>ID of the file system for which to create the mount target.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>ID of the file system for which to create the mount target.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system for which to create the mount target.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system for which to create the mount target.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>ID of the file system for which to create the mount target.</p>
     */
    inline CreateMountTargetRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system for which to create the mount target.</p>
     */
    inline CreateMountTargetRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system for which to create the mount target.</p>
     */
    inline CreateMountTargetRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the subnet to add the mount target in.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>ID of the subnet to add the mount target in.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>ID of the subnet to add the mount target in.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>ID of the subnet to add the mount target in.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>ID of the subnet to add the mount target in.</p>
     */
    inline CreateMountTargetRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>ID of the subnet to add the mount target in.</p>
     */
    inline CreateMountTargetRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>ID of the subnet to add the mount target in.</p>
     */
    inline CreateMountTargetRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>Valid IPv4 address within the address range of the specified subnet.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>Valid IPv4 address within the address range of the specified subnet.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Valid IPv4 address within the address range of the specified subnet.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Valid IPv4 address within the address range of the specified subnet.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>Valid IPv4 address within the address range of the specified subnet.</p>
     */
    inline CreateMountTargetRequest& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Valid IPv4 address within the address range of the specified subnet.</p>
     */
    inline CreateMountTargetRequest& WithIpAddress(Aws::String&& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Valid IPv4 address within the address range of the specified subnet.</p>
     */
    inline CreateMountTargetRequest& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

    /**
     * <p>Up to five VPC security group IDs, of the form <code>sg-xxxxxxxx</code>.
     * These must be for the same VPC as subnet specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>Up to five VPC security group IDs, of the form <code>sg-xxxxxxxx</code>.
     * These must be for the same VPC as subnet specified.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>Up to five VPC security group IDs, of the form <code>sg-xxxxxxxx</code>.
     * These must be for the same VPC as subnet specified.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>Up to five VPC security group IDs, of the form <code>sg-xxxxxxxx</code>.
     * These must be for the same VPC as subnet specified.</p>
     */
    inline CreateMountTargetRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>Up to five VPC security group IDs, of the form <code>sg-xxxxxxxx</code>.
     * These must be for the same VPC as subnet specified.</p>
     */
    inline CreateMountTargetRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>Up to five VPC security group IDs, of the form <code>sg-xxxxxxxx</code>.
     * These must be for the same VPC as subnet specified.</p>
     */
    inline CreateMountTargetRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>Up to five VPC security group IDs, of the form <code>sg-xxxxxxxx</code>.
     * These must be for the same VPC as subnet specified.</p>
     */
    inline CreateMountTargetRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>Up to five VPC security group IDs, of the form <code>sg-xxxxxxxx</code>.
     * These must be for the same VPC as subnet specified.</p>
     */
    inline CreateMountTargetRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

  private:
    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;
    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
