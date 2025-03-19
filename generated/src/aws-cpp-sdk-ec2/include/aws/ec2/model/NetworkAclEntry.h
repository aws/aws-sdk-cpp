/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IcmpTypeCode.h>
#include <aws/ec2/model/PortRange.h>
#include <aws/ec2/model/RuleAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an entry in a network ACL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkAclEntry">AWS
   * API Reference</a></p>
   */
  class NetworkAclEntry
  {
  public:
    AWS_EC2_API NetworkAclEntry() = default;
    AWS_EC2_API NetworkAclEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkAclEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    NetworkAclEntry& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule is an egress rule (applied to traffic leaving the
     * subnet).</p>
     */
    inline bool GetEgress() const { return m_egress; }
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }
    inline NetworkAclEntry& WithEgress(bool value) { SetEgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline const IcmpTypeCode& GetIcmpTypeCode() const { return m_icmpTypeCode; }
    inline bool IcmpTypeCodeHasBeenSet() const { return m_icmpTypeCodeHasBeenSet; }
    template<typename IcmpTypeCodeT = IcmpTypeCode>
    void SetIcmpTypeCode(IcmpTypeCodeT&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = std::forward<IcmpTypeCodeT>(value); }
    template<typename IcmpTypeCodeT = IcmpTypeCode>
    NetworkAclEntry& WithIcmpTypeCode(IcmpTypeCodeT&& value) { SetIcmpTypeCode(std::forward<IcmpTypeCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const { return m_ipv6CidrBlock; }
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }
    template<typename Ipv6CidrBlockT = Aws::String>
    void SetIpv6CidrBlock(Ipv6CidrBlockT&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::forward<Ipv6CidrBlockT>(value); }
    template<typename Ipv6CidrBlockT = Aws::String>
    NetworkAclEntry& WithIpv6CidrBlock(Ipv6CidrBlockT&& value) { SetIpv6CidrBlock(std::forward<Ipv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline const PortRange& GetPortRange() const { return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    template<typename PortRangeT = PortRange>
    void SetPortRange(PortRangeT&& value) { m_portRangeHasBeenSet = true; m_portRange = std::forward<PortRangeT>(value); }
    template<typename PortRangeT = PortRange>
    NetworkAclEntry& WithPortRange(PortRangeT&& value) { SetPortRange(std::forward<PortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol number. A value of "-1" means all protocols.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    NetworkAclEntry& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline RuleAction GetRuleAction() const { return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(RuleAction value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline NetworkAclEntry& WithRuleAction(RuleAction value) { SetRuleAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule number for the entry. ACL entries are processed in ascending order
     * by rule number.</p>
     */
    inline int GetRuleNumber() const { return m_ruleNumber; }
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }
    inline NetworkAclEntry& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    bool m_egress{false};
    bool m_egressHasBeenSet = false;

    IcmpTypeCode m_icmpTypeCode;
    bool m_icmpTypeCodeHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    PortRange m_portRange;
    bool m_portRangeHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    RuleAction m_ruleAction{RuleAction::NOT_SET};
    bool m_ruleActionHasBeenSet = false;

    int m_ruleNumber{0};
    bool m_ruleNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
