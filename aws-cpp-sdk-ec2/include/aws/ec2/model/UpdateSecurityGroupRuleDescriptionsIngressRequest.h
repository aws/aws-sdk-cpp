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
  class UpdateSecurityGroupRuleDescriptionsIngressRequest : public EC2Request
  {
  public:
    AWS_EC2_API UpdateSecurityGroupRuleDescriptionsIngressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityGroupRuleDescriptionsIngress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You must specify
     * either the security group ID or the security group name in the request. For
     * security groups in a nondefault VPC, you must specify the security group ID.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You must specify
     * either the security group ID or the security group name in the request. For
     * security groups in a nondefault VPC, you must specify the security group ID.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You must specify
     * either the security group ID or the security group name in the request. For
     * security groups in a nondefault VPC, you must specify the security group ID.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You must specify
     * either the security group ID or the security group name in the request. For
     * security groups in a nondefault VPC, you must specify the security group ID.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You must specify
     * either the security group ID or the security group name in the request. For
     * security groups in a nondefault VPC, you must specify the security group ID.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You must specify
     * either the security group ID or the security group name in the request. For
     * security groups in a nondefault VPC, you must specify the security group ID.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You must specify
     * either the security group ID or the security group name in the request. For
     * security groups in a nondefault VPC, you must specify the security group ID.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You must specify
     * either the security group ID or the security group name in the request. For
     * security groups in a nondefault VPC, you must specify the security group ID.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The IP permissions for the security group rule. You must specify either IP
     * permissions or a description.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const{ return m_ipPermissions; }

    /**
     * <p>The IP permissions for the security group rule. You must specify either IP
     * permissions or a description.</p>
     */
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }

    /**
     * <p>The IP permissions for the security group rule. You must specify either IP
     * permissions or a description.</p>
     */
    inline void SetIpPermissions(const Aws::Vector<IpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>The IP permissions for the security group rule. You must specify either IP
     * permissions or a description.</p>
     */
    inline void SetIpPermissions(Aws::Vector<IpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::move(value); }

    /**
     * <p>The IP permissions for the security group rule. You must specify either IP
     * permissions or a description.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithIpPermissions(const Aws::Vector<IpPermission>& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>The IP permissions for the security group rule. You must specify either IP
     * permissions or a description.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithIpPermissions(Aws::Vector<IpPermission>&& value) { SetIpPermissions(std::move(value)); return *this;}

    /**
     * <p>The IP permissions for the security group rule. You must specify either IP
     * permissions or a description.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& AddIpPermissions(const IpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

    /**
     * <p>The IP permissions for the security group rule. You must specify either IP
     * permissions or a description.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& AddIpPermissions(IpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>[VPC only] The description for the ingress security group rules. You must
     * specify either a description or IP permissions.</p>
     */
    inline const Aws::Vector<SecurityGroupRuleDescription>& GetSecurityGroupRuleDescriptions() const{ return m_securityGroupRuleDescriptions; }

    /**
     * <p>[VPC only] The description for the ingress security group rules. You must
     * specify either a description or IP permissions.</p>
     */
    inline bool SecurityGroupRuleDescriptionsHasBeenSet() const { return m_securityGroupRuleDescriptionsHasBeenSet; }

    /**
     * <p>[VPC only] The description for the ingress security group rules. You must
     * specify either a description or IP permissions.</p>
     */
    inline void SetSecurityGroupRuleDescriptions(const Aws::Vector<SecurityGroupRuleDescription>& value) { m_securityGroupRuleDescriptionsHasBeenSet = true; m_securityGroupRuleDescriptions = value; }

    /**
     * <p>[VPC only] The description for the ingress security group rules. You must
     * specify either a description or IP permissions.</p>
     */
    inline void SetSecurityGroupRuleDescriptions(Aws::Vector<SecurityGroupRuleDescription>&& value) { m_securityGroupRuleDescriptionsHasBeenSet = true; m_securityGroupRuleDescriptions = std::move(value); }

    /**
     * <p>[VPC only] The description for the ingress security group rules. You must
     * specify either a description or IP permissions.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithSecurityGroupRuleDescriptions(const Aws::Vector<SecurityGroupRuleDescription>& value) { SetSecurityGroupRuleDescriptions(value); return *this;}

    /**
     * <p>[VPC only] The description for the ingress security group rules. You must
     * specify either a description or IP permissions.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& WithSecurityGroupRuleDescriptions(Aws::Vector<SecurityGroupRuleDescription>&& value) { SetSecurityGroupRuleDescriptions(std::move(value)); return *this;}

    /**
     * <p>[VPC only] The description for the ingress security group rules. You must
     * specify either a description or IP permissions.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& AddSecurityGroupRuleDescriptions(const SecurityGroupRuleDescription& value) { m_securityGroupRuleDescriptionsHasBeenSet = true; m_securityGroupRuleDescriptions.push_back(value); return *this; }

    /**
     * <p>[VPC only] The description for the ingress security group rules. You must
     * specify either a description or IP permissions.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsIngressRequest& AddSecurityGroupRuleDescriptions(SecurityGroupRuleDescription&& value) { m_securityGroupRuleDescriptionsHasBeenSet = true; m_securityGroupRuleDescriptions.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
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
