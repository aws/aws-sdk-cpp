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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpPermission.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API UpdateSecurityGroupRuleDescriptionsEgressRequest : public EC2Request
  {
  public:
    UpdateSecurityGroupRuleDescriptionsEgressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityGroupRuleDescriptionsEgress"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group. You must specify either the security group ID
     * or the security group name in the request. For security groups in a nondefault
     * VPC, you must specify the security group ID.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name in the request.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name in the request.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name in the request.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name in the request.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name in the request.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name in the request.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name in the request.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name in the request.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The IP permissions for the security group rule.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const{ return m_ipPermissions; }

    /**
     * <p>The IP permissions for the security group rule.</p>
     */
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }

    /**
     * <p>The IP permissions for the security group rule.</p>
     */
    inline void SetIpPermissions(const Aws::Vector<IpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>The IP permissions for the security group rule.</p>
     */
    inline void SetIpPermissions(Aws::Vector<IpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::move(value); }

    /**
     * <p>The IP permissions for the security group rule.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithIpPermissions(const Aws::Vector<IpPermission>& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>The IP permissions for the security group rule.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& WithIpPermissions(Aws::Vector<IpPermission>&& value) { SetIpPermissions(std::move(value)); return *this;}

    /**
     * <p>The IP permissions for the security group rule.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& AddIpPermissions(const IpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

    /**
     * <p>The IP permissions for the security group rule.</p>
     */
    inline UpdateSecurityGroupRuleDescriptionsEgressRequest& AddIpPermissions(IpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::Vector<IpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
