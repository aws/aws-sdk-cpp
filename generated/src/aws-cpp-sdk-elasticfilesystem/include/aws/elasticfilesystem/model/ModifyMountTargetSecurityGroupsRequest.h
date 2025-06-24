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
    AWS_EFS_API ModifyMountTargetSecurityGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyMountTargetSecurityGroups"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the mount target whose security groups you want to modify.</p>
     */
    inline const Aws::String& GetMountTargetId() const { return m_mountTargetId; }
    inline bool MountTargetIdHasBeenSet() const { return m_mountTargetIdHasBeenSet; }
    template<typename MountTargetIdT = Aws::String>
    void SetMountTargetId(MountTargetIdT&& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = std::forward<MountTargetIdT>(value); }
    template<typename MountTargetIdT = Aws::String>
    ModifyMountTargetSecurityGroupsRequest& WithMountTargetId(MountTargetIdT&& value) { SetMountTargetId(std::forward<MountTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of VPC security group IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    ModifyMountTargetSecurityGroupsRequest& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    ModifyMountTargetSecurityGroupsRequest& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_mountTargetId;
    bool m_mountTargetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
