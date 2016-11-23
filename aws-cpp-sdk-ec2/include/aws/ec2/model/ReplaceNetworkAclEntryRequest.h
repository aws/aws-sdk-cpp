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
#include <aws/ec2/model/RuleAction.h>
#include <aws/ec2/model/IcmpTypeCode.h>
#include <aws/ec2/model/PortRange.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ReplaceNetworkAclEntry.</p>
   */
  class AWS_EC2_API ReplaceNetworkAclEntryRequest : public EC2Request
  {
  public:
    ReplaceNetworkAclEntryRequest();
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
    inline ReplaceNetworkAclEntryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const{ return m_networkAclId; }

    /**
     * <p>The ID of the ACL.</p>
     */
    inline void SetNetworkAclId(const Aws::String& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }

    /**
     * <p>The ID of the ACL.</p>
     */
    inline void SetNetworkAclId(Aws::String&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }

    /**
     * <p>The ID of the ACL.</p>
     */
    inline void SetNetworkAclId(const char* value) { m_networkAclIdHasBeenSet = true; m_networkAclId.assign(value); }

    /**
     * <p>The ID of the ACL.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithNetworkAclId(const Aws::String& value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The ID of the ACL.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithNetworkAclId(Aws::String&& value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The ID of the ACL.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithNetworkAclId(const char* value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The rule number of the entry to replace.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }

    /**
     * <p>The rule number of the entry to replace.</p>
     */
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }

    /**
     * <p>The rule number of the entry to replace.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}

    /**
     * <p>The IP protocol. You can specify <code>all</code> or <code>-1</code> to mean
     * all protocols.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The IP protocol. You can specify <code>all</code> or <code>-1</code> to mean
     * all protocols.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The IP protocol. You can specify <code>all</code> or <code>-1</code> to mean
     * all protocols.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The IP protocol. You can specify <code>all</code> or <code>-1</code> to mean
     * all protocols.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The IP protocol. You can specify <code>all</code> or <code>-1</code> to mean
     * all protocols.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The IP protocol. You can specify <code>all</code> or <code>-1</code> to mean
     * all protocols.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithProtocol(Aws::String&& value) { SetProtocol(value); return *this;}

    /**
     * <p>The IP protocol. You can specify <code>all</code> or <code>-1</code> to mean
     * all protocols.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithProtocol(const char* value) { SetProtocol(value); return *this;}

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
    inline ReplaceNetworkAclEntryRequest& WithRuleAction(const RuleAction& value) { SetRuleAction(value); return *this;}

    /**
     * <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithRuleAction(RuleAction&& value) { SetRuleAction(value); return *this;}

    /**
     * <p>Indicates whether to replace the egress rule.</p> <p>Default: If no value is
     * specified, we replace the ingress rule.</p>
     */
    inline bool GetEgress() const{ return m_egress; }

    /**
     * <p>Indicates whether to replace the egress rule.</p> <p>Default: If no value is
     * specified, we replace the ingress rule.</p>
     */
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }

    /**
     * <p>Indicates whether to replace the egress rule.</p> <p>Default: If no value is
     * specified, we replace the ingress rule.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithEgress(bool value) { SetEgress(value); return *this;}

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
    inline ReplaceNetworkAclEntryRequest& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The network range to allow or deny, in CIDR notation.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithCidrBlock(Aws::String&& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The network range to allow or deny, in CIDR notation.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}

    /**
     * <p>ICMP protocol: The ICMP type and code. Required if specifying 1 (ICMP) for
     * the protocol.</p>
     */
    inline const IcmpTypeCode& GetIcmpTypeCode() const{ return m_icmpTypeCode; }

    /**
     * <p>ICMP protocol: The ICMP type and code. Required if specifying 1 (ICMP) for
     * the protocol.</p>
     */
    inline void SetIcmpTypeCode(const IcmpTypeCode& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = value; }

    /**
     * <p>ICMP protocol: The ICMP type and code. Required if specifying 1 (ICMP) for
     * the protocol.</p>
     */
    inline void SetIcmpTypeCode(IcmpTypeCode&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = value; }

    /**
     * <p>ICMP protocol: The ICMP type and code. Required if specifying 1 (ICMP) for
     * the protocol.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithIcmpTypeCode(const IcmpTypeCode& value) { SetIcmpTypeCode(value); return *this;}

    /**
     * <p>ICMP protocol: The ICMP type and code. Required if specifying 1 (ICMP) for
     * the protocol.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithIcmpTypeCode(IcmpTypeCode&& value) { SetIcmpTypeCode(value); return *this;}

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to. Required if
     * specifying 6 (TCP) or 17 (UDP) for the protocol.</p>
     */
    inline const PortRange& GetPortRange() const{ return m_portRange; }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to. Required if
     * specifying 6 (TCP) or 17 (UDP) for the protocol.</p>
     */
    inline void SetPortRange(const PortRange& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to. Required if
     * specifying 6 (TCP) or 17 (UDP) for the protocol.</p>
     */
    inline void SetPortRange(PortRange&& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to. Required if
     * specifying 6 (TCP) or 17 (UDP) for the protocol.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithPortRange(const PortRange& value) { SetPortRange(value); return *this;}

    /**
     * <p>TCP or UDP protocols: The range of ports the rule applies to. Required if
     * specifying 6 (TCP) or 17 (UDP) for the protocol.</p>
     */
    inline ReplaceNetworkAclEntryRequest& WithPortRange(PortRange&& value) { SetPortRange(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet;
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
