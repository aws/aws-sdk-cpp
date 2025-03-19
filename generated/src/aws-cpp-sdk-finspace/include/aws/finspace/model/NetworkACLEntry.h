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
    AWS_FINSPACE_API NetworkACLEntry() = default;
    AWS_FINSPACE_API NetworkACLEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API NetworkACLEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The rule number for the entry. For example <i>100</i>. All the network ACL
     * entries are processed in ascending order by rule number. </p>
     */
    inline int GetRuleNumber() const { return m_ruleNumber; }
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }
    inline NetworkACLEntry& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The protocol number. A value of <i>-1</i> means all the protocols. </p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    NetworkACLEntry& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether to allow or deny the traffic that matches the rule. </p>
     */
    inline RuleAction GetRuleAction() const { return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(RuleAction value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline NetworkACLEntry& WithRuleAction(RuleAction value) { SetRuleAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The range of ports the rule applies to. </p>
     */
    inline const PortRange& GetPortRange() const { return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    template<typename PortRangeT = PortRange>
    void SetPortRange(PortRangeT&& value) { m_portRangeHasBeenSet = true; m_portRange = std::forward<PortRangeT>(value); }
    template<typename PortRangeT = PortRange>
    NetworkACLEntry& WithPortRange(PortRangeT&& value) { SetPortRange(std::forward<PortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines the ICMP protocol that consists of the ICMP type and code. </p>
     */
    inline const IcmpTypeCode& GetIcmpTypeCode() const { return m_icmpTypeCode; }
    inline bool IcmpTypeCodeHasBeenSet() const { return m_icmpTypeCodeHasBeenSet; }
    template<typename IcmpTypeCodeT = IcmpTypeCode>
    void SetIcmpTypeCode(IcmpTypeCodeT&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = std::forward<IcmpTypeCodeT>(value); }
    template<typename IcmpTypeCodeT = IcmpTypeCode>
    NetworkACLEntry& WithIcmpTypeCode(IcmpTypeCodeT&& value) { SetIcmpTypeCode(std::forward<IcmpTypeCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IPv4 network range to allow or deny, in CIDR notation. For example,
     * <code>172.16.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form. For example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>. </p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    NetworkACLEntry& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}
  private:

    int m_ruleNumber{0};
    bool m_ruleNumberHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    RuleAction m_ruleAction{RuleAction::NOT_SET};
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
