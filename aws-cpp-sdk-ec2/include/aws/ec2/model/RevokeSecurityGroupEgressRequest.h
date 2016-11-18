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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpPermission.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RevokeSecurityGroupEgress.</p>
   */
  class AWS_EC2_API RevokeSecurityGroupEgressRequest : public EC2Request
  {
  public:
    RevokeSecurityGroupEgressRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithGroupId(Aws::String&& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}

    /**
     * <p>The name of a destination security group. To revoke outbound access to a
     * destination security group, we recommend that you use a set of IP permissions
     * instead.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupName() const{ return m_sourceSecurityGroupName; }

    /**
     * <p>The name of a destination security group. To revoke outbound access to a
     * destination security group, we recommend that you use a set of IP permissions
     * instead.</p>
     */
    inline void SetSourceSecurityGroupName(const Aws::String& value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName = value; }

    /**
     * <p>The name of a destination security group. To revoke outbound access to a
     * destination security group, we recommend that you use a set of IP permissions
     * instead.</p>
     */
    inline void SetSourceSecurityGroupName(Aws::String&& value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName = value; }

    /**
     * <p>The name of a destination security group. To revoke outbound access to a
     * destination security group, we recommend that you use a set of IP permissions
     * instead.</p>
     */
    inline void SetSourceSecurityGroupName(const char* value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName.assign(value); }

    /**
     * <p>The name of a destination security group. To revoke outbound access to a
     * destination security group, we recommend that you use a set of IP permissions
     * instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithSourceSecurityGroupName(const Aws::String& value) { SetSourceSecurityGroupName(value); return *this;}

    /**
     * <p>The name of a destination security group. To revoke outbound access to a
     * destination security group, we recommend that you use a set of IP permissions
     * instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithSourceSecurityGroupName(Aws::String&& value) { SetSourceSecurityGroupName(value); return *this;}

    /**
     * <p>The name of a destination security group. To revoke outbound access to a
     * destination security group, we recommend that you use a set of IP permissions
     * instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithSourceSecurityGroupName(const char* value) { SetSourceSecurityGroupName(value); return *this;}

    /**
     * <p>The AWS account number for a destination security group. To revoke outbound
     * access to a destination security group, we recommend that you use a set of IP
     * permissions instead.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupOwnerId() const{ return m_sourceSecurityGroupOwnerId; }

    /**
     * <p>The AWS account number for a destination security group. To revoke outbound
     * access to a destination security group, we recommend that you use a set of IP
     * permissions instead.</p>
     */
    inline void SetSourceSecurityGroupOwnerId(const Aws::String& value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId = value; }

    /**
     * <p>The AWS account number for a destination security group. To revoke outbound
     * access to a destination security group, we recommend that you use a set of IP
     * permissions instead.</p>
     */
    inline void SetSourceSecurityGroupOwnerId(Aws::String&& value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId = value; }

    /**
     * <p>The AWS account number for a destination security group. To revoke outbound
     * access to a destination security group, we recommend that you use a set of IP
     * permissions instead.</p>
     */
    inline void SetSourceSecurityGroupOwnerId(const char* value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId.assign(value); }

    /**
     * <p>The AWS account number for a destination security group. To revoke outbound
     * access to a destination security group, we recommend that you use a set of IP
     * permissions instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithSourceSecurityGroupOwnerId(const Aws::String& value) { SetSourceSecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The AWS account number for a destination security group. To revoke outbound
     * access to a destination security group, we recommend that you use a set of IP
     * permissions instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithSourceSecurityGroupOwnerId(Aws::String&& value) { SetSourceSecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The AWS account number for a destination security group. To revoke outbound
     * access to a destination security group, we recommend that you use a set of IP
     * permissions instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithSourceSecurityGroupOwnerId(const char* value) { SetSourceSecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The IP protocol name or number. We recommend that you specify the protocol in
     * a set of IP permissions instead.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }

    /**
     * <p>The IP protocol name or number. We recommend that you specify the protocol in
     * a set of IP permissions instead.</p>
     */
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }

    /**
     * <p>The IP protocol name or number. We recommend that you specify the protocol in
     * a set of IP permissions instead.</p>
     */
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }

    /**
     * <p>The IP protocol name or number. We recommend that you specify the protocol in
     * a set of IP permissions instead.</p>
     */
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }

    /**
     * <p>The IP protocol name or number. We recommend that you specify the protocol in
     * a set of IP permissions instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}

    /**
     * <p>The IP protocol name or number. We recommend that you specify the protocol in
     * a set of IP permissions instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithIpProtocol(Aws::String&& value) { SetIpProtocol(value); return *this;}

    /**
     * <p>The IP protocol name or number. We recommend that you specify the protocol in
     * a set of IP permissions instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}

    /**
     * <p>The start of port range for the TCP and UDP protocols, or an ICMP type
     * number. We recommend that you specify the port range in a set of IP permissions
     * instead.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The start of port range for the TCP and UDP protocols, or an ICMP type
     * number. We recommend that you specify the port range in a set of IP permissions
     * instead.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The start of port range for the TCP and UDP protocols, or an ICMP type
     * number. We recommend that you specify the port range in a set of IP permissions
     * instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithFromPort(int value) { SetFromPort(value); return *this;}

    /**
     * <p>The end of port range for the TCP and UDP protocols, or an ICMP type number.
     * We recommend that you specify the port range in a set of IP permissions
     * instead.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The end of port range for the TCP and UDP protocols, or an ICMP type number.
     * We recommend that you specify the port range in a set of IP permissions
     * instead.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The end of port range for the TCP and UDP protocols, or an ICMP type number.
     * We recommend that you specify the port range in a set of IP permissions
     * instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithToPort(int value) { SetToPort(value); return *this;}

    /**
     * <p>The CIDR IP address range. We recommend that you specify the CIDR range in a
     * set of IP permissions instead.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>The CIDR IP address range. We recommend that you specify the CIDR range in a
     * set of IP permissions instead.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>The CIDR IP address range. We recommend that you specify the CIDR range in a
     * set of IP permissions instead.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>The CIDR IP address range. We recommend that you specify the CIDR range in a
     * set of IP permissions instead.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>The CIDR IP address range. We recommend that you specify the CIDR range in a
     * set of IP permissions instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>The CIDR IP address range. We recommend that you specify the CIDR range in a
     * set of IP permissions instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithCidrIp(Aws::String&& value) { SetCidrIp(value); return *this;}

    /**
     * <p>The CIDR IP address range. We recommend that you specify the CIDR range in a
     * set of IP permissions instead.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}

    /**
     * <p>A set of IP permissions. You can't specify a destination security group and a
     * CIDR IP address range.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const{ return m_ipPermissions; }

    /**
     * <p>A set of IP permissions. You can't specify a destination security group and a
     * CIDR IP address range.</p>
     */
    inline void SetIpPermissions(const Aws::Vector<IpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>A set of IP permissions. You can't specify a destination security group and a
     * CIDR IP address range.</p>
     */
    inline void SetIpPermissions(Aws::Vector<IpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>A set of IP permissions. You can't specify a destination security group and a
     * CIDR IP address range.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithIpPermissions(const Aws::Vector<IpPermission>& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>A set of IP permissions. You can't specify a destination security group and a
     * CIDR IP address range.</p>
     */
    inline RevokeSecurityGroupEgressRequest& WithIpPermissions(Aws::Vector<IpPermission>&& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>A set of IP permissions. You can't specify a destination security group and a
     * CIDR IP address range.</p>
     */
    inline RevokeSecurityGroupEgressRequest& AddIpPermissions(const IpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

    /**
     * <p>A set of IP permissions. You can't specify a destination security group and a
     * CIDR IP address range.</p>
     */
    inline RevokeSecurityGroupEgressRequest& AddIpPermissions(IpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;
    Aws::String m_sourceSecurityGroupName;
    bool m_sourceSecurityGroupNameHasBeenSet;
    Aws::String m_sourceSecurityGroupOwnerId;
    bool m_sourceSecurityGroupOwnerIdHasBeenSet;
    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet;
    int m_fromPort;
    bool m_fromPortHasBeenSet;
    int m_toPort;
    bool m_toPortHasBeenSet;
    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet;
    Aws::Vector<IpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
