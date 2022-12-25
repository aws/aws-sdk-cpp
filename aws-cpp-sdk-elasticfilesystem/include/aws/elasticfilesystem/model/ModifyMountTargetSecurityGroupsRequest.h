/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/ModifyMountTargetSecurityGroupsRequest">AWS
   * API Reference</a></p>
   */
  class ModifyMountTargetSecurityGroupsRequest : public EFSRequest
  {
  public:
    AWS_EFS_API ModifyMountTargetSecurityGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyMountTargetSecurityGroups"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the mount target whose security groups you want to modify.</p>
     */
    inline const Aws::String& GetMountTargetId() const{ return m_mountTargetId; }

    /**
     * <p>The ID of the mount target whose security groups you want to modify.</p>
     */
    inline bool MountTargetIdHasBeenSet() const { return m_mountTargetIdHasBeenSet; }

    /**
     * <p>The ID of the mount target whose security groups you want to modify.</p>
     */
    inline void SetMountTargetId(const Aws::String& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = value; }

    /**
     * <p>The ID of the mount target whose security groups you want to modify.</p>
     */
    inline void SetMountTargetId(Aws::String&& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = std::move(value); }

    /**
     * <p>The ID of the mount target whose security groups you want to modify.</p>
     */
    inline void SetMountTargetId(const char* value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId.assign(value); }

    /**
     * <p>The ID of the mount target whose security groups you want to modify.</p>
     */
    inline ModifyMountTargetSecurityGroupsRequest& WithMountTargetId(const Aws::String& value) { SetMountTargetId(value); return *this;}

    /**
     * <p>The ID of the mount target whose security groups you want to modify.</p>
     */
    inline ModifyMountTargetSecurityGroupsRequest& WithMountTargetId(Aws::String&& value) { SetMountTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the mount target whose security groups you want to modify.</p>
     */
    inline ModifyMountTargetSecurityGroupsRequest& WithMountTargetId(const char* value) { SetMountTargetId(value); return *this;}


    /**
     * <p>An array of up to five VPC security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>An array of up to five VPC security group IDs.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>An array of up to five VPC security group IDs.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>An array of up to five VPC security group IDs.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>An array of up to five VPC security group IDs.</p>
     */
    inline ModifyMountTargetSecurityGroupsRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>An array of up to five VPC security group IDs.</p>
     */
    inline ModifyMountTargetSecurityGroupsRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>An array of up to five VPC security group IDs.</p>
     */
    inline ModifyMountTargetSecurityGroupsRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>An array of up to five VPC security group IDs.</p>
     */
    inline ModifyMountTargetSecurityGroupsRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of up to five VPC security group IDs.</p>
     */
    inline ModifyMountTargetSecurityGroupsRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

  private:

    Aws::String m_mountTargetId;
    bool m_mountTargetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
