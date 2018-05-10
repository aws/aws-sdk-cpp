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
#include <aws/ec2/model/IcmpTypeCode.h>
#include <aws/ec2/model/PortRange.h>
#include <aws/ec2/model/RuleAction.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateNetworkAclEntry.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkAclEntryRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateNetworkAclEntryRequest : public EC2Request
  {
  public:
    CreateNetworkAclEntryRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkAclEntry"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation (for example
     * <code>172.16.0.0/24</code>).</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation (for example
     * <code>172.16.0.0/24</code>).</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation (for example
     * <code>172.16.0.0/24</code>).</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation (for example
     * <code>172.16.0.0/24</code>).</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation (for example
     * <code>172.16.0.0/24</code>).</p>
     */
    inline CreateNetworkAclEntryRequest& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation (for example
     * <code>172.16.0.0/24</code>).</p>
     */
    inline CreateNetworkAclEntryRequest& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 network range to allow or deny, in CIDR notation (for example
     * <code>172.16.0.0/24</code>).</p>
     */
    inline CreateNetworkAclEntryRequest& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


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
    inline CreateNetworkAclEntryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Indicates whether this is an egress rule (rule is applied to traffic leaving
     * the subnet).</p>
     */
    inline bool GetEgress() const{ return m_egress; }

    /**
     * <p>Indicates whether this is an egress rule (rule is applied to traffic leaving
     * the subnet).</p>
     */
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }

    /**
     * <p>Indicates whether this is an egress rule (rule is applied to traffic leaving
     * the subnet).</p>
     */
    inline CreateNetworkAclEntryRequest& WithEgress(bool value) { SetEgress(value); return *this;}


    /**
     * <p>ICMP protocol: The ICMP or ICMPv6 type and code. Required if specifying the
     * ICMP protocol, or protocol 58 (ICMPv6) with an IPv6 CIDR block.</p>
     */
    inline const IcmpTypeCode& GetIcmpTypeCode() const{ return m_icmpTypeCode; }

    /**
     * <p>ICMP protocol: The ICMP or ICMPv6 type and code. Required if specifying the
     * ICMP protocol, or protocol 58 (ICMPv6) with an IPv6 CIDR block.</p>
     */
    inline void SetIcmpTypeCode(const IcmpTypeCode& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = value; }

    /**
     * <p>ICMP protocol: The ICMP or ICMPv6 type and code. Required if specifying the
     * ICMP protocol, or protocol 58 (ICMPv6) with an IPv6 CIDR block.</p>
     */
    inline void SetIcmpTypeCode(IcmpTypeCode&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = std::move(value); }

    /**
     * <p>ICMP protocol: The ICMP or ICMPv6 type and code. Required if specifying the
     * ICMP protocol, or protocol 58 (ICMPv6) with an IPv6 CIDR block.</p>
     */
    inline CreateNetworkAclEntryRequest& WithIcmpTypeCode(const IcmpTypeCode& value) { SetIcmpTypeCode(value); return *this;}

    /**
     * <p>ICMP protocol: The ICMP or ICMPv6 type and code. Required if specifying the
     * ICMP protocol, or protocol 58 (ICMPv6) with an IPv6 CIDR block.</p>
     */
    inline CreateNetworkAclEntryRequest& WithIcmpTypeCode(IcmpTypeCode&& value) { SetIcmpTypeCode(std::move(value)); return *this;}


    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation (for example
     * <code>2001:db8:1234:1a00::/64</code>).</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation (for example
     * <code>2001:db8:1234:1a00::/64</code>).</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation (for example
     * <code>2001:db8:1234:1a00::/64</code>).</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation (for example
     * <code>2001:db8:1234:1a00::/64</code>).</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation (for example
     * <code>2001:db8:1234:1a00::/64</code>).</p>
     */
    inline CreateNetworkAclEntryRequest& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation (for example
     * <code>2001:db8:1234:1a00::/64</code>).</p>
     */
    inline CreateNetworkAclEntryRequest& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 network range to allow or deny, in CIDR notation (for example
     * <code>2001:db8:1234:1a00::/64</code>).</p>
     */
    inline CreateNetworkAclEntryRequest& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>The ID of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const{ return m_networkAclId; }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(const Aws::String& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(Aws::String&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::move(value); }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(const char* value) { m_networkAclIdHasBeenSet = true; m_networkAclId.assign(value); }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline CreateNetworkAclEntryRequest& WithNetworkAclId(const Aws::String& value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline CreateNetworkAclEntryRequest& WithNetworkAclId(Aws::String&& value) { SetNetworkAclId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline CreateNetworkAclEntryRequest& WithNetworkAclId(const char* value) { SetNetworkAclId(value); return *this;}


    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline const PortRange& GetPortRange() const{ return m_portRange; }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline void SetPortRange(const PortRange& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline void SetPortRange(PortRange&& value) { m_portRangeHasBeenSet = true; m_portRange = std::move(value); }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline CreateNetworkAclEntryRequest& WithPortRange(const PortRange& value) { SetPortRange(value); return *this;}

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline CreateNetworkAclEntryRequest& WithPortRange(PortRange&& value) { SetPortRange(std::move(value)); return *this;}


    /**
     * <p>The protocol. A value of <code>-1</code> or <code>all</code> means all
     * protocols. If you specify <code>all</code>, <code>-1</code>, or a protocol
     * number other than <code>6</code> (tcp), <code>17</code> (udp), or <code>1</code>
     * (icmp), traffic on all ports is allowed, regardless of any ports or ICMP types
     * or codes you specify. If you specify protocol <code>58</code> (ICMPv6) and
     * specify an IPv4 CIDR block, traffic for all ICMP types and codes allowed,
     * regardless of any that you specify. If you specify protocol <code>58</code>
     * (ICMPv6) and specify an IPv6 CIDR block, you must specify an ICMP type and
     * code.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol. A value of <code>-1</code> or <code>all</code> means all
     * protocols. If you specify <code>all</code>, <code>-1</code>, or a protocol
     * number other than <code>6</code> (tcp), <code>17</code> (udp), or <code>1</code>
     * (icmp), traffic on all ports is allowed, regardless of any ports or ICMP types
     * or codes you specify. If you specify protocol <code>58</code> (ICMPv6) and
     * specify an IPv4 CIDR block, traffic for all ICMP types and codes allowed,
     * regardless of any that you specify. If you specify protocol <code>58</code>
     * (ICMPv6) and specify an IPv6 CIDR block, you must specify an ICMP type and
     * code.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol. A value of <code>-1</code> or <code>all</code> means all
     * protocols. If you specify <code>all</code>, <code>-1</code>, or a protocol
     * number other than <code>6</code> (tcp), <code>17</code> (udp), or <code>1</code>
     * (icmp), traffic on all ports is allowed, regardless of any ports or ICMP types
     * or codes you specify. If you specify protocol <code>58</code> (ICMPv6) and
     * specify an IPv4 CIDR block, traffic for all ICMP types and codes allowed,
     * regardless of any that you specify. If you specify protocol <code>58</code>
     * (ICMPv6) and specify an IPv6 CIDR block, you must specify an ICMP type and
     * code.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol. A value of <code>-1</code> or <code>all</code> means all
     * protocols. If you specify <code>all</code>, <code>-1</code>, or a protocol
     * number other than <code>6</code> (tcp), <code>17</code> (udp), or <code>1</code>
     * (icmp), traffic on all ports is allowed, regardless of any ports or ICMP types
     * or codes you specify. If you specify protocol <code>58</code> (ICMPv6) and
     * specify an IPv4 CIDR block, traffic for all ICMP types and codes allowed,
     * regardless of any that you specify. If you specify protocol <code>58</code>
     * (ICMPv6) and specify an IPv6 CIDR block, you must specify an ICMP type and
     * code.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol. A value of <code>-1</code> or <code>all</code> means all
     * protocols. If you specify <code>all</code>, <code>-1</code>, or a protocol
     * number other than <code>6</code> (tcp), <code>17</code> (udp), or <code>1</code>
     * (icmp), traffic on all ports is allowed, regardless of any ports or ICMP types
     * or codes you specify. If you specify protocol <code>58</code> (ICMPv6) and
     * specify an IPv4 CIDR block, traffic for all ICMP types and codes allowed,
     * regardless of any that you specify. If you specify protocol <code>58</code>
     * (ICMPv6) and specify an IPv6 CIDR block, you must specify an ICMP type and
     * code.</p>
     */
    inline CreateNetworkAclEntryRequest& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol. A value of <code>-1</code> or <code>all</code> means all
     * protocols. If you specify <code>all</code>, <code>-1</code>, or a protocol
     * number other than <code>6</code> (tcp), <code>17</code> (udp), or <code>1</code>
     * (icmp), traffic on all ports is allowed, regardless of any ports or ICMP types
     * or codes you specify. If you specify protocol <code>58</code> (ICMPv6) and
     * specify an IPv4 CIDR block, traffic for all ICMP types and codes allowed,
     * regardless of any that you specify. If you specify protocol <code>58</code>
     * (ICMPv6) and specify an IPv6 CIDR block, you must specify an ICMP type and
     * code.</p>
     */
    inline CreateNetworkAclEntryRequest& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol. A value of <code>-1</code> or <code>all</code> means all
     * protocols. If you specify <code>all</code>, <code>-1</code>, or a protocol
     * number other than <code>6</code> (tcp), <code>17</code> (udp), or <code>1</code>
     * (icmp), traffic on all ports is allowed, regardless of any ports or ICMP types
     * or codes you specify. If you specify protocol <code>58</code> (ICMPv6) and
     * specify an IPv4 CIDR block, traffic for all ICMP types and codes allowed,
     * regardless of any that you specify. If you specify protocol <code>58</code>
     * (ICMPv6) and specify an IPv6 CIDR block, you must specify an ICMP type and
     * code.</p>
     */
    inline CreateNetworkAclEntryRequest& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline const RuleAction& GetRuleAction() const{ return m_ruleAction; }

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline void SetRuleAction(const RuleAction& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline void SetRuleAction(RuleAction&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline CreateNetworkAclEntryRequest& WithRuleAction(const RuleAction& value) { SetRuleAction(value); return *this;}

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline CreateNetworkAclEntryRequest& WithRuleAction(RuleAction&& value) { SetRuleAction(std::move(value)); return *this;}


    /**
     * <p>The rule number for the entry (for example, 100). ACL entries are processed
     * in ascending order by rule number.</p> <p>Constraints: Positive integer from 1
     * to 32766. The range 32767 to 65535 is reserved for internal use.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }

    /**
     * <p>The rule number for the entry (for example, 100). ACL entries are processed
     * in ascending order by rule number.</p> <p>Constraints: Positive integer from 1
     * to 32766. The range 32767 to 65535 is reserved for internal use.</p>
     */
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }

    /**
     * <p>The rule number for the entry (for example, 100). ACL entries are processed
     * in ascending order by rule number.</p> <p>Constraints: Positive integer from 1
     * to 32766. The range 32767 to 65535 is reserved for internal use.</p>
     */
    inline CreateNetworkAclEntryRequest& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}

  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    bool m_egress;
    bool m_egressHasBeenSet;

    IcmpTypeCode m_icmpTypeCode;
    bool m_icmpTypeCodeHasBeenSet;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet;

    PortRange m_portRange;
    bool m_portRangeHasBeenSet;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet;

    RuleAction m_ruleAction;
    bool m_ruleActionHasBeenSet;

    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
