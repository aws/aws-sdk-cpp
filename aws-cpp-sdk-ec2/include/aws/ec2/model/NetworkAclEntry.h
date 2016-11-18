﻿/*
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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RuleAction.h>
#include <aws/ec2/model/IcmpTypeCode.h>
#include <aws/ec2/model/PortRange.h>

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
   * <p>Describes an entry in a network ACL.</p>
   */
  class AWS_EC2_API NetworkAclEntry
  {
  public:
    NetworkAclEntry();
    NetworkAclEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkAclEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The rule number for the entry. ACL entries are processed in ascending order
     * by rule number.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }

    /**
     * <p>The rule number for the entry. ACL entries are processed in ascending order
     * by rule number.</p>
     */
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }

    /**
     * <p>The rule number for the entry. ACL entries are processed in ascending order
     * by rule number.</p>
     */
    inline NetworkAclEntry& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}

    /**
     * <p>The protocol. A value of <code>-1</code> means all protocols.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol. A value of <code>-1</code> means all protocols.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol. A value of <code>-1</code> means all protocols.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol. A value of <code>-1</code> means all protocols.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol. A value of <code>-1</code> means all protocols.</p>
     */
    inline NetworkAclEntry& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol. A value of <code>-1</code> means all protocols.</p>
     */
    inline NetworkAclEntry& WithProtocol(Aws::String&& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol. A value of <code>-1</code> means all protocols.</p>
     */
    inline NetworkAclEntry& WithProtocol(const char* value) { SetProtocol(value); return *this;}

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
    inline void SetRuleAction(RuleAction&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline NetworkAclEntry& WithRuleAction(const RuleAction& value) { SetRuleAction(value); return *this;}

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline NetworkAclEntry& WithRuleAction(RuleAction&& value) { SetRuleAction(value); return *this;}

    /**
     * <p>Indicates whether the rule is an egress rule (applied to traffic leaving the
     * subnet).</p>
     */
    inline bool GetEgress() const{ return m_egress; }

    /**
     * <p>Indicates whether the rule is an egress rule (applied to traffic leaving the
     * subnet).</p>
     */
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }

    /**
     * <p>Indicates whether the rule is an egress rule (applied to traffic leaving the
     * subnet).</p>
     */
    inline NetworkAclEntry& WithEgress(bool value) { SetEgress(value); return *this;}

    /**
     * <p>The network range to allow or deny, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The network range to allow or deny, in CIDR notation.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The network range to allow or deny, in CIDR notation.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The network range to allow or deny, in CIDR notation.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The network range to allow or deny, in CIDR notation.</p>
     */
    inline NetworkAclEntry& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The network range to allow or deny, in CIDR notation.</p>
     */
    inline NetworkAclEntry& WithCidrBlock(Aws::String&& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The network range to allow or deny, in CIDR notation.</p>
     */
    inline NetworkAclEntry& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline const IcmpTypeCode& GetIcmpTypeCode() const{ return m_icmpTypeCode; }

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline void SetIcmpTypeCode(const IcmpTypeCode& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = value; }

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline void SetIcmpTypeCode(IcmpTypeCode&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = value; }

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline NetworkAclEntry& WithIcmpTypeCode(const IcmpTypeCode& value) { SetIcmpTypeCode(value); return *this;}

    /**
     * <p>ICMP protocol: The ICMP type and code.</p>
     */
    inline NetworkAclEntry& WithIcmpTypeCode(IcmpTypeCode&& value) { SetIcmpTypeCode(value); return *this;}

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
    inline void SetPortRange(PortRange&& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline NetworkAclEntry& WithPortRange(const PortRange& value) { SetPortRange(value); return *this;}

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
     */
    inline NetworkAclEntry& WithPortRange(PortRange&& value) { SetPortRange(value); return *this;}

  private:
    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet;
    Aws::String m_protocol;
    bool m_protocolHasBeenSet;
    RuleAction m_ruleAction;
    bool m_ruleActionHasBeenSet;
    bool m_egress;
    bool m_egressHasBeenSet;
    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;
    IcmpTypeCode m_icmpTypeCode;
    bool m_icmpTypeCodeHasBeenSet;
    PortRange m_portRange;
    bool m_portRangeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
