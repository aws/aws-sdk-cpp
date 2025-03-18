/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RuleAction.h>
#include <aws/ec2/model/IcmpTypeCode.h>
#include <aws/ec2/model/PortRange.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateNetworkAclEntryRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateNetworkAclEntryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkAclEntry"; }

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
    inline CreateNetworkAclEntryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const { return m_networkAclId; }
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }
    template<typename NetworkAclIdT = Aws::String>
    void SetNetworkAclId(NetworkAclIdT&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::forward<NetworkAclIdT>(value); }
    template<typename NetworkAclIdT = Aws::String>
    CreateNetworkAclEntryRequest& WithNetworkAclId(NetworkAclIdT&& value) { SetNetworkAclId(std::forward<NetworkAclIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule number for the entry (for example, 100). ACL entries are processed
     * in ascending order by rule number.</p> <p>Constraints: Positive integer from 1
     * to 32766. The range 32767 to 65535 is reserved for internal use.</p>
     */
    inline int GetRuleNumber() const { return m_ruleNumber; }
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }
    inline CreateNetworkAclEntryRequest& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol number. A value of "-1" means all protocols. If you specify "-1"
     * or a protocol number other than "6" (TCP), "17" (UDP), or "1" (ICMP), traffic on
     * all ports is allowed, regardless of any ports or ICMP types or codes that you
     * specify. If you specify protocol "58" (ICMPv6) and specify an IPv4 CIDR block,
     * traffic for all ICMP types and codes allowed, regardless of any that you
     * specify. If you specify protocol "58" (ICMPv6) and specify an IPv6 CIDR block,
     * you must specify an ICMP type and code.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    CreateNetworkAclEntryRequest& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline RuleAction GetRuleAction() const { return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(RuleAction value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline CreateNetworkAclEntryRequest& WithRuleAction(RuleAction value) { SetRuleAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is an egress rule (rule is applied to traffic leaving
     * the subnet).</p>
     */
    inline bool GetEgress() const { return m_egress; }
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }
    inline CreateNetworkAclEntryRequest& WithEgress(bool value) { SetEgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation (for example
     * <code>172.16.0.0/24</code>). We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    CreateNetworkAclEntryRequest& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation (for example
     * <code>2001:db8:1234:1a00::/64</code>).</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const { return m_ipv6CidrBlock; }
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }
    template<typename Ipv6CidrBlockT = Aws::String>
    void SetIpv6CidrBlock(Ipv6CidrBlockT&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::forward<Ipv6CidrBlockT>(value); }
    template<typename Ipv6CidrBlockT = Aws::String>
    CreateNetworkAclEntryRequest& WithIpv6CidrBlock(Ipv6CidrBlockT&& value) { SetIpv6CidrBlock(std::forward<Ipv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ICMP protocol: The ICMP or ICMPv6 type and code. Required if specifying
     * protocol 1 (ICMP) or protocol 58 (ICMPv6) with an IPv6 CIDR block.</p>
     */
    inline const IcmpTypeCode& GetIcmpTypeCode() const { return m_icmpTypeCode; }
    inline bool IcmpTypeCodeHasBeenSet() const { return m_icmpTypeCodeHasBeenSet; }
    template<typename IcmpTypeCodeT = IcmpTypeCode>
    void SetIcmpTypeCode(IcmpTypeCodeT&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = std::forward<IcmpTypeCodeT>(value); }
    template<typename IcmpTypeCodeT = IcmpTypeCode>
    CreateNetworkAclEntryRequest& WithIcmpTypeCode(IcmpTypeCodeT&& value) { SetIcmpTypeCode(std::forward<IcmpTypeCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to. Required if
     * specifying protocol 6 (TCP) or 17 (UDP).</p>
     */
    inline const PortRange& GetPortRange() const { return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    template<typename PortRangeT = PortRange>
    void SetPortRange(PortRangeT&& value) { m_portRangeHasBeenSet = true; m_portRange = std::forward<PortRangeT>(value); }
    template<typename PortRangeT = PortRange>
    CreateNetworkAclEntryRequest& WithPortRange(PortRangeT&& value) { SetPortRange(std::forward<PortRangeT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;

    int m_ruleNumber{0};
    bool m_ruleNumberHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    RuleAction m_ruleAction{RuleAction::NOT_SET};
    bool m_ruleActionHasBeenSet = false;

    bool m_egress{false};
    bool m_egressHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    IcmpTypeCode m_icmpTypeCode;
    bool m_icmpTypeCodeHasBeenSet = false;

    PortRange m_portRange;
    bool m_portRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
