/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/NetworkAclIcmpTypeCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/NetworkAclPortRange.h>
#include <aws/fms/model/NetworkAclRuleAction.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Describes a rule in a network ACL.</p> <p>Each network ACL has a set of
   * numbered ingress rules and a separate set of numbered egress rules. When
   * determining whether a packet should be allowed in or out of a subnet associated
   * with the network ACL, Amazon Web Services processes the entries in the network
   * ACL according to the rule numbers, in ascending order. </p> <p>When you manage
   * an individual network ACL, you explicitly specify the rule numbers. When you
   * specify the network ACL rules in a Firewall Manager policy, you provide the
   * rules to run first, in the order that you want them to run, and the rules to run
   * last, in the order that you want them to run. Firewall Manager assigns the rule
   * numbers for you when you save the network ACL policy
   * specification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkAclEntry">AWS
   * API Reference</a></p>
   */
  class NetworkAclEntry
  {
  public:
    AWS_FMS_API NetworkAclEntry() = default;
    AWS_FMS_API NetworkAclEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkAclEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline const NetworkAclIcmpTypeCode& GetIcmpTypeCode() const { return m_icmpTypeCode; }
    inline bool IcmpTypeCodeHasBeenSet() const { return m_icmpTypeCodeHasBeenSet; }
    template<typename IcmpTypeCodeT = NetworkAclIcmpTypeCode>
    void SetIcmpTypeCode(IcmpTypeCodeT&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = std::forward<IcmpTypeCodeT>(value); }
    template<typename IcmpTypeCodeT = NetworkAclIcmpTypeCode>
    NetworkAclEntry& WithIcmpTypeCode(IcmpTypeCodeT&& value) { SetIcmpTypeCode(std::forward<IcmpTypeCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol number. A value of "-1" means all protocols. </p>
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
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline const NetworkAclPortRange& GetPortRange() const { return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    template<typename PortRangeT = NetworkAclPortRange>
    void SetPortRange(PortRangeT&& value) { m_portRangeHasBeenSet = true; m_portRange = std::forward<PortRangeT>(value); }
    template<typename PortRangeT = NetworkAclPortRange>
    NetworkAclEntry& WithPortRange(PortRangeT&& value) { SetPortRange(std::forward<PortRangeT>(value)); return *this;}
    ///@}

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
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline NetworkAclRuleAction GetRuleAction() const { return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(NetworkAclRuleAction value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline NetworkAclEntry& WithRuleAction(NetworkAclRuleAction value) { SetRuleAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule is an egress, or outbound, rule (applied to
     * traffic leaving the subnet). If it's not an egress rule, then it's an ingress,
     * or inbound, rule.</p>
     */
    inline bool GetEgress() const { return m_egress; }
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }
    inline NetworkAclEntry& WithEgress(bool value) { SetEgress(value); return *this;}
    ///@}
  private:

    NetworkAclIcmpTypeCode m_icmpTypeCode;
    bool m_icmpTypeCodeHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    NetworkAclPortRange m_portRange;
    bool m_portRangeHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    NetworkAclRuleAction m_ruleAction{NetworkAclRuleAction::NOT_SET};
    bool m_ruleActionHasBeenSet = false;

    bool m_egress{false};
    bool m_egressHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
