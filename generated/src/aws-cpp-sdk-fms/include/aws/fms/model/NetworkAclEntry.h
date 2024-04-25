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
    AWS_FMS_API NetworkAclEntry();
    AWS_FMS_API NetworkAclEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkAclEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline const NetworkAclIcmpTypeCode& GetIcmpTypeCode() const{ return m_icmpTypeCode; }

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline bool IcmpTypeCodeHasBeenSet() const { return m_icmpTypeCodeHasBeenSet; }

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline void SetIcmpTypeCode(const NetworkAclIcmpTypeCode& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = value; }

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline void SetIcmpTypeCode(NetworkAclIcmpTypeCode&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = std::move(value); }

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline NetworkAclEntry& WithIcmpTypeCode(const NetworkAclIcmpTypeCode& value) { SetIcmpTypeCode(value); return *this;}

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline NetworkAclEntry& WithIcmpTypeCode(NetworkAclIcmpTypeCode&& value) { SetIcmpTypeCode(std::move(value)); return *this;}


    /**
     * <p>The protocol number. A value of "-1" means all protocols. </p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol number. A value of "-1" means all protocols. </p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol number. A value of "-1" means all protocols. </p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol number. A value of "-1" means all protocols. </p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol number. A value of "-1" means all protocols. </p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol number. A value of "-1" means all protocols. </p>
     */
    inline NetworkAclEntry& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol number. A value of "-1" means all protocols. </p>
     */
    inline NetworkAclEntry& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol number. A value of "-1" means all protocols. </p>
     */
    inline NetworkAclEntry& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline const NetworkAclPortRange& GetPortRange() const{ return m_portRange; }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline void SetPortRange(const NetworkAclPortRange& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline void SetPortRange(NetworkAclPortRange&& value) { m_portRangeHasBeenSet = true; m_portRange = std::move(value); }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline NetworkAclEntry& WithPortRange(const NetworkAclPortRange& value) { SetPortRange(value); return *this;}

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline NetworkAclEntry& WithPortRange(NetworkAclPortRange&& value) { SetPortRange(std::move(value)); return *this;}


    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
     */
    inline NetworkAclEntry& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
     */
    inline NetworkAclEntry& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
     */
    inline NetworkAclEntry& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
     */
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
     */
    inline NetworkAclEntry& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
     */
    inline NetworkAclEntry& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
     */
    inline NetworkAclEntry& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline const NetworkAclRuleAction& GetRuleAction() const{ return m_ruleAction; }

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline void SetRuleAction(const NetworkAclRuleAction& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline void SetRuleAction(NetworkAclRuleAction&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline NetworkAclEntry& WithRuleAction(const NetworkAclRuleAction& value) { SetRuleAction(value); return *this;}

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline NetworkAclEntry& WithRuleAction(NetworkAclRuleAction&& value) { SetRuleAction(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the rule is an egress, or outbound, rule (applied to
     * traffic leaving the subnet). If it's not an egress rule, then it's an ingress,
     * or inbound, rule.</p>
     */
    inline bool GetEgress() const{ return m_egress; }

    /**
     * <p>Indicates whether the rule is an egress, or outbound, rule (applied to
     * traffic leaving the subnet). If it's not an egress rule, then it's an ingress,
     * or inbound, rule.</p>
     */
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }

    /**
     * <p>Indicates whether the rule is an egress, or outbound, rule (applied to
     * traffic leaving the subnet). If it's not an egress rule, then it's an ingress,
     * or inbound, rule.</p>
     */
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }

    /**
     * <p>Indicates whether the rule is an egress, or outbound, rule (applied to
     * traffic leaving the subnet). If it's not an egress rule, then it's an ingress,
     * or inbound, rule.</p>
     */
    inline NetworkAclEntry& WithEgress(bool value) { SetEgress(value); return *this;}

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

    NetworkAclRuleAction m_ruleAction;
    bool m_ruleActionHasBeenSet = false;

    bool m_egress;
    bool m_egressHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
