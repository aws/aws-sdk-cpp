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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class RevokeSecurityGroupIngressRequest : public EC2Request
  {
  public:
    AWS_EC2_API RevokeSecurityGroupIngressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeSecurityGroupIngress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The CIDR IP address range. You can't specify this parameter when specifying a
     * source security group.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }
    inline RevokeSecurityGroupIngressRequest& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the start of the port range. If the
     * protocol is ICMP, this is the ICMP type or -1 (all ICMP types).</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline RevokeSecurityGroupIngressRequest& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline RevokeSecurityGroupIngressRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Default VPC] The name of the security group. You must specify either the
     * security group ID or the security group name in the request. For security groups
     * in a nondefault VPC, you must specify the security group ID.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline RevokeSecurityGroupIngressRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sets of IP permissions. You can't specify a source security group and a
     * CIDR IP address range in the same set of permissions.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const{ return m_ipPermissions; }
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }
    inline void SetIpPermissions(const Aws::Vector<IpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }
    inline void SetIpPermissions(Aws::Vector<IpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::move(value); }
    inline RevokeSecurityGroupIngressRequest& WithIpPermissions(const Aws::Vector<IpPermission>& value) { SetIpPermissions(value); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithIpPermissions(Aws::Vector<IpPermission>&& value) { SetIpPermissions(std::move(value)); return *this;}
    inline RevokeSecurityGroupIngressRequest& AddIpPermissions(const IpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }
    inline RevokeSecurityGroupIngressRequest& AddIpPermissions(IpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>)
     * or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). Use <code>-1</code> to specify all.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }
    inline RevokeSecurityGroupIngressRequest& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Default VPC] The name of the source security group. You can't specify this
     * parameter in combination with the following parameters: the CIDR IP address
     * range, the start of the port range, the IP protocol, and the end of the port
     * range. The source security group must be in the same VPC. To revoke a specific
     * rule for an IP protocol and port range, use a set of IP permissions instead.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupName() const{ return m_sourceSecurityGroupName; }
    inline bool SourceSecurityGroupNameHasBeenSet() const { return m_sourceSecurityGroupNameHasBeenSet; }
    inline void SetSourceSecurityGroupName(const Aws::String& value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName = value; }
    inline void SetSourceSecurityGroupName(Aws::String&& value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName = std::move(value); }
    inline void SetSourceSecurityGroupName(const char* value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName.assign(value); }
    inline RevokeSecurityGroupIngressRequest& WithSourceSecurityGroupName(const Aws::String& value) { SetSourceSecurityGroupName(value); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithSourceSecurityGroupName(Aws::String&& value) { SetSourceSecurityGroupName(std::move(value)); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithSourceSecurityGroupName(const char* value) { SetSourceSecurityGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupOwnerId() const{ return m_sourceSecurityGroupOwnerId; }
    inline bool SourceSecurityGroupOwnerIdHasBeenSet() const { return m_sourceSecurityGroupOwnerIdHasBeenSet; }
    inline void SetSourceSecurityGroupOwnerId(const Aws::String& value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId = value; }
    inline void SetSourceSecurityGroupOwnerId(Aws::String&& value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId = std::move(value); }
    inline void SetSourceSecurityGroupOwnerId(const char* value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId.assign(value); }
    inline RevokeSecurityGroupIngressRequest& WithSourceSecurityGroupOwnerId(const Aws::String& value) { SetSourceSecurityGroupOwnerId(value); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithSourceSecurityGroupOwnerId(Aws::String&& value) { SetSourceSecurityGroupOwnerId(std::move(value)); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithSourceSecurityGroupOwnerId(const char* value) { SetSourceSecurityGroupOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the end of the port range. If the
     * protocol is ICMP, this is the ICMP code or -1 (all ICMP codes).</p>
     */
    inline int GetToPort() const{ return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline RevokeSecurityGroupIngressRequest& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security group rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupRuleIds() const{ return m_securityGroupRuleIds; }
    inline bool SecurityGroupRuleIdsHasBeenSet() const { return m_securityGroupRuleIdsHasBeenSet; }
    inline void SetSecurityGroupRuleIds(const Aws::Vector<Aws::String>& value) { m_securityGroupRuleIdsHasBeenSet = true; m_securityGroupRuleIds = value; }
    inline void SetSecurityGroupRuleIds(Aws::Vector<Aws::String>&& value) { m_securityGroupRuleIdsHasBeenSet = true; m_securityGroupRuleIds = std::move(value); }
    inline RevokeSecurityGroupIngressRequest& WithSecurityGroupRuleIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupRuleIds(value); return *this;}
    inline RevokeSecurityGroupIngressRequest& WithSecurityGroupRuleIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupRuleIds(std::move(value)); return *this;}
    inline RevokeSecurityGroupIngressRequest& AddSecurityGroupRuleIds(const Aws::String& value) { m_securityGroupRuleIdsHasBeenSet = true; m_securityGroupRuleIds.push_back(value); return *this; }
    inline RevokeSecurityGroupIngressRequest& AddSecurityGroupRuleIds(Aws::String&& value) { m_securityGroupRuleIdsHasBeenSet = true; m_securityGroupRuleIds.push_back(std::move(value)); return *this; }
    inline RevokeSecurityGroupIngressRequest& AddSecurityGroupRuleIds(const char* value) { m_securityGroupRuleIdsHasBeenSet = true; m_securityGroupRuleIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline RevokeSecurityGroupIngressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet = false;

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Vector<IpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet = false;

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    Aws::String m_sourceSecurityGroupName;
    bool m_sourceSecurityGroupNameHasBeenSet = false;

    Aws::String m_sourceSecurityGroupOwnerId;
    bool m_sourceSecurityGroupOwnerIdHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupRuleIds;
    bool m_securityGroupRuleIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
