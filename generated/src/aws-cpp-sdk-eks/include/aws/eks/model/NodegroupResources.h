/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AutoScalingGroup.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the resources associated with the node group, such as
   * Auto Scaling groups and security groups for remote access.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodegroupResources">AWS
   * API Reference</a></p>
   */
  class NodegroupResources
  {
  public:
    AWS_EKS_API NodegroupResources() = default;
    AWS_EKS_API NodegroupResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API NodegroupResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Auto Scaling groups associated with the node group.</p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetAutoScalingGroups() const { return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    template<typename AutoScalingGroupsT = Aws::Vector<AutoScalingGroup>>
    void SetAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::forward<AutoScalingGroupsT>(value); }
    template<typename AutoScalingGroupsT = Aws::Vector<AutoScalingGroup>>
    NodegroupResources& WithAutoScalingGroups(AutoScalingGroupsT&& value) { SetAutoScalingGroups(std::forward<AutoScalingGroupsT>(value)); return *this;}
    template<typename AutoScalingGroupsT = AutoScalingGroup>
    NodegroupResources& AddAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.emplace_back(std::forward<AutoScalingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The remote access security group associated with the node group. This
     * security group controls SSH access to the nodes.</p>
     */
    inline const Aws::String& GetRemoteAccessSecurityGroup() const { return m_remoteAccessSecurityGroup; }
    inline bool RemoteAccessSecurityGroupHasBeenSet() const { return m_remoteAccessSecurityGroupHasBeenSet; }
    template<typename RemoteAccessSecurityGroupT = Aws::String>
    void SetRemoteAccessSecurityGroup(RemoteAccessSecurityGroupT&& value) { m_remoteAccessSecurityGroupHasBeenSet = true; m_remoteAccessSecurityGroup = std::forward<RemoteAccessSecurityGroupT>(value); }
    template<typename RemoteAccessSecurityGroupT = Aws::String>
    NodegroupResources& WithRemoteAccessSecurityGroup(RemoteAccessSecurityGroupT&& value) { SetRemoteAccessSecurityGroup(std::forward<RemoteAccessSecurityGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutoScalingGroup> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet = false;

    Aws::String m_remoteAccessSecurityGroup;
    bool m_remoteAccessSecurityGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
