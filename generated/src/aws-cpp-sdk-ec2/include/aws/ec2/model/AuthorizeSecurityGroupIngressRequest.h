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
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AuthorizeSecurityGroupIngressRequest : public EC2Request
  {
  public:
    AWS_EC2_API AuthorizeSecurityGroupIngressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeSecurityGroupIngress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR format.</p>  <p> Amazon Web Services <a
     * href="https://en.wikipedia.org/wiki/Canonicalization">canonicalizes</a> IPv4 and
     * IPv6 CIDRs. For example, if you specify 100.68.0.18/18 for the CIDR block,
     * Amazon Web Services canonicalizes the CIDR block to 100.68.0.0/18. Any
     * subsequent DescribeSecurityGroups and DescribeSecurityGroupRules calls will
     * return the canonicalized form of the CIDR block. Additionally, if you attempt to
     * add another rule with the non-canonical form of the CIDR (such as
     * 100.68.0.18/18) and there is already a rule for the canonicalized form of the
     * CIDR block (such as 100.68.0.0/18), the API throws an duplicate rule error.</p>
     *  <p>To specify an IPv6 address range, use IP permissions instead.</p>
     * <p>To specify multiple rules and descriptions for the rules, use IP permissions
     * instead.</p>
     */
    inline const Aws::String& GetCidrIp() const { return m_cidrIp; }
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }
    template<typename CidrIpT = Aws::String>
    void SetCidrIp(CidrIpT&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::forward<CidrIpT>(value); }
    template<typename CidrIpT = Aws::String>
    AuthorizeSecurityGroupIngressRequest& WithCidrIp(CidrIpT&& value) { SetCidrIp(std::forward<CidrIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the start of the port range. If the
     * protocol is ICMP, this is the ICMP type or -1 (all ICMP types).</p> <p>To
     * specify multiple rules and descriptions for the rules, use IP permissions
     * instead.</p>
     */
    inline int GetFromPort() const { return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline AuthorizeSecurityGroupIngressRequest& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    AuthorizeSecurityGroupIngressRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Default VPC] The name of the security group. For security groups for a
     * default VPC you can specify either the ID or the name of the security group. For
     * security groups for a nondefault VPC, you must specify the ID of the security
     * group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    AuthorizeSecurityGroupIngressRequest& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions for the security group rules.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const { return m_ipPermissions; }
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }
    template<typename IpPermissionsT = Aws::Vector<IpPermission>>
    void SetIpPermissions(IpPermissionsT&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::forward<IpPermissionsT>(value); }
    template<typename IpPermissionsT = Aws::Vector<IpPermission>>
    AuthorizeSecurityGroupIngressRequest& WithIpPermissions(IpPermissionsT&& value) { SetIpPermissions(std::forward<IpPermissionsT>(value)); return *this;}
    template<typename IpPermissionsT = IpPermission>
    AuthorizeSecurityGroupIngressRequest& AddIpPermissions(IpPermissionsT&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.emplace_back(std::forward<IpPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>)
     * or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). To specify all protocols, use <code>-1</code>.</p> <p>To specify
     * <code>icmpv6</code>, use IP permissions instead.</p> <p>If you specify a
     * protocol other than one of the supported values, traffic is allowed on all
     * ports, regardless of any ports that you specify.</p> <p>To specify multiple
     * rules and descriptions for the rules, use IP permissions instead.</p>
     */
    inline const Aws::String& GetIpProtocol() const { return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    template<typename IpProtocolT = Aws::String>
    void SetIpProtocol(IpProtocolT&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::forward<IpProtocolT>(value); }
    template<typename IpProtocolT = Aws::String>
    AuthorizeSecurityGroupIngressRequest& WithIpProtocol(IpProtocolT&& value) { SetIpProtocol(std::forward<IpProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Default VPC] The name of the source security group.</p> <p>The rule grants
     * full ICMP, UDP, and TCP access. To create a rule with a specific protocol and
     * port range, specify a set of IP permissions instead.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupName() const { return m_sourceSecurityGroupName; }
    inline bool SourceSecurityGroupNameHasBeenSet() const { return m_sourceSecurityGroupNameHasBeenSet; }
    template<typename SourceSecurityGroupNameT = Aws::String>
    void SetSourceSecurityGroupName(SourceSecurityGroupNameT&& value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName = std::forward<SourceSecurityGroupNameT>(value); }
    template<typename SourceSecurityGroupNameT = Aws::String>
    AuthorizeSecurityGroupIngressRequest& WithSourceSecurityGroupName(SourceSecurityGroupNameT&& value) { SetSourceSecurityGroupName(std::forward<SourceSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the source security group, if the
     * source security group is in a different account.</p> <p>The rule grants full
     * ICMP, UDP, and TCP access. To create a rule with a specific protocol and port
     * range, use IP permissions instead.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupOwnerId() const { return m_sourceSecurityGroupOwnerId; }
    inline bool SourceSecurityGroupOwnerIdHasBeenSet() const { return m_sourceSecurityGroupOwnerIdHasBeenSet; }
    template<typename SourceSecurityGroupOwnerIdT = Aws::String>
    void SetSourceSecurityGroupOwnerId(SourceSecurityGroupOwnerIdT&& value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId = std::forward<SourceSecurityGroupOwnerIdT>(value); }
    template<typename SourceSecurityGroupOwnerIdT = Aws::String>
    AuthorizeSecurityGroupIngressRequest& WithSourceSecurityGroupOwnerId(SourceSecurityGroupOwnerIdT&& value) { SetSourceSecurityGroupOwnerId(std::forward<SourceSecurityGroupOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the end of the port range. If the
     * protocol is ICMP, this is the ICMP code or -1 (all ICMP codes). If the start
     * port is -1 (all ICMP types), then the end port must be -1 (all ICMP codes).</p>
     * <p>To specify multiple rules and descriptions for the rules, use IP permissions
     * instead.</p>
     */
    inline int GetToPort() const { return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline AuthorizeSecurityGroupIngressRequest& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    AuthorizeSecurityGroupIngressRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    AuthorizeSecurityGroupIngressRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

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
    inline AuthorizeSecurityGroupIngressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet = false;

    int m_fromPort{0};
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

    int m_toPort{0};
    bool m_toPortHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
