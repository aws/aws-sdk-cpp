/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpPermission.h>
#include <aws/ec2/model/SecurityGroupRuleDescription.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class UpdateSecurityGroupRuleDescriptionsEgressRequest : public EC2Request
  {
  public:
    AWS_EC2_API UpdateSecurityGroupRuleDescriptionsEgressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityGroupRuleDescriptionsEgress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    UpdateSecurityGroupRuleDescriptionsEgressRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    UpdateSecurityGroupRuleDescriptionsEgressRequest& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP permissions for the security group rule. You must specify either the
     * IP permissions or the description.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const { return m_ipPermissions; }
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }
    template<typename IpPermissionsT = Aws::Vector<IpPermission>>
    void SetIpPermissions(IpPermissionsT&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::forward<IpPermissionsT>(value); }
    template<typename IpPermissionsT = Aws::Vector<IpPermission>>
    UpdateSecurityGroupRuleDescriptionsEgressRequest& WithIpPermissions(IpPermissionsT&& value) { SetIpPermissions(std::forward<IpPermissionsT>(value)); return *this;}
    template<typename IpPermissionsT = IpPermission>
    UpdateSecurityGroupRuleDescriptionsEgressRequest& AddIpPermissions(IpPermissionsT&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.emplace_back(std::forward<IpPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description for the egress security group rules. You must specify either
     * the description or the IP permissions.</p>
     */
    inline const Aws::Vector<SecurityGroupRuleDescription>& GetSecurityGroupRuleDescriptions() const { return m_securityGroupRuleDescriptions; }
    inline bool SecurityGroupRuleDescriptionsHasBeenSet() const { return m_securityGroupRuleDescriptionsHasBeenSet; }
    template<typename SecurityGroupRuleDescriptionsT = Aws::Vector<SecurityGroupRuleDescription>>
    void SetSecurityGroupRuleDescriptions(SecurityGroupRuleDescriptionsT&& value) { m_securityGroupRuleDescriptionsHasBeenSet = true; m_securityGroupRuleDescriptions = std::forward<SecurityGroupRuleDescriptionsT>(value); }
    template<typename SecurityGroupRuleDescriptionsT = Aws::Vector<SecurityGroupRuleDescription>>
    UpdateSecurityGroupRuleDescriptionsEgressRequest& WithSecurityGroupRuleDescriptions(SecurityGroupRuleDescriptionsT&& value) { SetSecurityGroupRuleDescriptions(std::forward<SecurityGroupRuleDescriptionsT>(value)); return *this;}
    template<typename SecurityGroupRuleDescriptionsT = SecurityGroupRuleDescription>
    UpdateSecurityGroupRuleDescriptionsEgressRequest& AddSecurityGroupRuleDescriptions(SecurityGroupRuleDescriptionsT&& value) { m_securityGroupRuleDescriptionsHasBeenSet = true; m_securityGroupRuleDescriptions.emplace_back(std::forward<SecurityGroupRuleDescriptionsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Vector<IpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet = false;

    Aws::Vector<SecurityGroupRuleDescription> m_securityGroupRuleDescriptions;
    bool m_securityGroupRuleDescriptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
