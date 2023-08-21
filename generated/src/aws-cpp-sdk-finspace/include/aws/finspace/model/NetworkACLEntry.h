/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/RuleAction.h>
#include <aws/finspace/model/PortRange.h>
#include <aws/finspace/model/IcmpTypeCode.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p> The network access control list (ACL) is an optional layer of security for
   * your VPC that acts as a firewall for controlling traffic in and out of one or
   * more subnets. The entry is a set of numbered ingress and egress rules that
   * determine whether a packet should be allowed in or out of a subnet associated
   * with the ACL. We process the entries in the ACL according to the rule numbers,
   * in ascending order. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/NetworkACLEntry">AWS
   * API Reference</a></p>
   */
  class NetworkACLEntry
  {
  public:
    AWS_FINSPACE_API NetworkACLEntry();
    AWS_FINSPACE_API NetworkACLEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API NetworkACLEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The rule number for the entry. For example <i>100</i>. All the network ACL
     * entries are processed in ascending order by rule number. </p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }

    /**
     * <p> The rule number for the entry. For example <i>100</i>. All the network ACL
     * entries are processed in ascending order by rule number. </p>
     */
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }

    /**
     * <p> The rule number for the entry. For example <i>100</i>. All the network ACL
     * entries are processed in ascending order by rule number. </p>
     */
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }

    /**
     * <p> The rule number for the entry. For example <i>100</i>. All the network ACL
     * entries are processed in ascending order by rule number. </p>
     */
    inline NetworkACLEntry& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}


    /**
     * <p> The protocol number. A value of <i>-1</i> means all the protocols. </p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p> The protocol number. A value of <i>-1</i> means all the protocols. </p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p> The protocol number. A value of <i>-1</i> means all the protocols. </p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p> The protocol number. A value of <i>-1</i> means all the protocols. </p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p> The protocol number. A value of <i>-1</i> means all the protocols. </p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p> The protocol number. A value of <i>-1</i> means all the protocols. </p>
     */
    inline NetworkACLEntry& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p> The protocol number. A value of <i>-1</i> means all the protocols. </p>
     */
    inline NetworkACLEntry& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p> The protocol number. A value of <i>-1</i> means all the protocols. </p>
     */
    inline NetworkACLEntry& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p> Indicates whether to allow or deny the traffic that matches the rule. </p>
     */
    inline const RuleAction& GetRuleAction() const{ return m_ruleAction; }

    /**
     * <p> Indicates whether to allow or deny the traffic that matches the rule. </p>
     */
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }

    /**
     * <p> Indicates whether to allow or deny the traffic that matches the rule. </p>
     */
    inline void SetRuleAction(const RuleAction& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }

    /**
     * <p> Indicates whether to allow or deny the traffic that matches the rule. </p>
     */
    inline void SetRuleAction(RuleAction&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }

    /**
     * <p> Indicates whether to allow or deny the traffic that matches the rule. </p>
     */
    inline NetworkACLEntry& WithRuleAction(const RuleAction& value) { SetRuleAction(value); return *this;}

    /**
     * <p> Indicates whether to allow or deny the traffic that matches the rule. </p>
     */
    inline NetworkACLEntry& WithRuleAction(RuleAction&& value) { SetRuleAction(std::move(value)); return *this;}


    /**
     * <p> The range of ports the rule applies to. </p>
     */
    inline const PortRange& GetPortRange() const{ return m_portRange; }

    /**
     * <p> The range of ports the rule applies to. </p>
     */
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }

    /**
     * <p> The range of ports the rule applies to. </p>
     */
    inline void SetPortRange(const PortRange& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p> The range of ports the rule applies to. </p>
     */
    inline void SetPortRange(PortRange&& value) { m_portRangeHasBeenSet = true; m_portRange = std::move(value); }

    /**
     * <p> The range of ports the rule applies to. </p>
     */
    inline NetworkACLEntry& WithPortRange(const PortRange& value) { SetPortRange(value); return *this;}

    /**
     * <p> The range of ports the rule applies to. </p>
     */
    inline NetworkACLEntry& WithPortRange(PortRange&& value) { SetPortRange(std::move(value)); return *this;}


    /**
     * <p> Defines the ICMP protocol that consists of the ICMP type and code. </p>
     */
    inline const IcmpTypeCode& GetIcmpTypeCode() const{ return m_icmpTypeCode; }

    /**
     * <p> Defines the ICMP protocol that consists of the ICMP type and code. </p>
     */
    inline bool IcmpTypeCodeHasBeenSet() const { return m_icmpTypeCodeHasBeenSet; }

    /**
     * <p> Defines the ICMP protocol that consists of the ICMP type and code. </p>
     */
    inline void SetIcmpTypeCode(const IcmpTypeCode& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = value; }

    /**
     * <p> Defines the ICMP protocol that consists of the ICMP type and code. </p>
     */
    inline void SetIcmpTypeCode(IcmpTypeCode&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = std::move(value); }

    /**
     * <p> Defines the ICMP protocol that consists of the ICMP type and code. </p>
     */
    inline NetworkACLEntry& WithIcmpTypeCode(const IcmpTypeCode& value) { SetIcmpTypeCode(value); return *this;}

    /**
     * <p> Defines the ICMP protocol that consists of the ICMP type and code. </p>
     */
    inline NetworkACLEntry& WithIcmpTypeCode(IcmpTypeCode&& value) { SetIcmpTypeCode(std::move(value)); return *this;}


    /**
     * <p> The IPv4 network range to allow or deny, in CIDR notation. For example,
     * <code>172.16.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form. For example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>. </p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p> The IPv4 network range to allow or deny, in CIDR notation. For example,
     * <code>172.16.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form. For example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>. </p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p> The IPv4 network range to allow or deny, in CIDR notation. For example,
     * <code>172.16.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form. For example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>. </p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p> The IPv4 network range to allow or deny, in CIDR notation. For example,
     * <code>172.16.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form. For example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>. </p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p> The IPv4 network range to allow or deny, in CIDR notation. For example,
     * <code>172.16.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form. For example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>. </p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p> The IPv4 network range to allow or deny, in CIDR notation. For example,
     * <code>172.16.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form. For example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>. </p>
     */
    inline NetworkACLEntry& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p> The IPv4 network range to allow or deny, in CIDR notation. For example,
     * <code>172.16.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form. For example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>. </p>
     */
    inline NetworkACLEntry& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p> The IPv4 network range to allow or deny, in CIDR notation. For example,
     * <code>172.16.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form. For example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>. </p>
     */
    inline NetworkACLEntry& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}

  private:

    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    RuleAction m_ruleAction;
    bool m_ruleActionHasBeenSet = false;

    PortRange m_portRange;
    bool m_portRangeHasBeenSet = false;

    IcmpTypeCode m_icmpTypeCode;
    bool m_icmpTypeCodeHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
