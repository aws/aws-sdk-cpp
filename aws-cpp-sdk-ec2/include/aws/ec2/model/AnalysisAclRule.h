/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PortRange.h>
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
   * <p>Describes a network access control (ACL) rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AnalysisAclRule">AWS
   * API Reference</a></p>
   */
  class AnalysisAclRule
  {
  public:
    AWS_EC2_API AnalysisAclRule();
    AWS_EC2_API AnalysisAclRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AnalysisAclRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline AnalysisAclRule& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline AnalysisAclRule& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline AnalysisAclRule& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>Indicates whether the rule is an outbound rule.</p>
     */
    inline bool GetEgress() const{ return m_egress; }

    /**
     * <p>Indicates whether the rule is an outbound rule.</p>
     */
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }

    /**
     * <p>Indicates whether the rule is an outbound rule.</p>
     */
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }

    /**
     * <p>Indicates whether the rule is an outbound rule.</p>
     */
    inline AnalysisAclRule& WithEgress(bool value) { SetEgress(value); return *this;}


    /**
     * <p>The range of ports.</p>
     */
    inline const PortRange& GetPortRange() const{ return m_portRange; }

    /**
     * <p>The range of ports.</p>
     */
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }

    /**
     * <p>The range of ports.</p>
     */
    inline void SetPortRange(const PortRange& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p>The range of ports.</p>
     */
    inline void SetPortRange(PortRange&& value) { m_portRangeHasBeenSet = true; m_portRange = std::move(value); }

    /**
     * <p>The range of ports.</p>
     */
    inline AnalysisAclRule& WithPortRange(const PortRange& value) { SetPortRange(value); return *this;}

    /**
     * <p>The range of ports.</p>
     */
    inline AnalysisAclRule& WithPortRange(PortRange&& value) { SetPortRange(std::move(value)); return *this;}


    /**
     * <p>The protocol.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol.</p>
     */
    inline AnalysisAclRule& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol.</p>
     */
    inline AnalysisAclRule& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol.</p>
     */
    inline AnalysisAclRule& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>Indicates whether to allow or deny traffic that matches the rule.</p>
     */
    inline const Aws::String& GetRuleAction() const{ return m_ruleAction; }

    /**
     * <p>Indicates whether to allow or deny traffic that matches the rule.</p>
     */
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }

    /**
     * <p>Indicates whether to allow or deny traffic that matches the rule.</p>
     */
    inline void SetRuleAction(const Aws::String& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }

    /**
     * <p>Indicates whether to allow or deny traffic that matches the rule.</p>
     */
    inline void SetRuleAction(Aws::String&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }

    /**
     * <p>Indicates whether to allow or deny traffic that matches the rule.</p>
     */
    inline void SetRuleAction(const char* value) { m_ruleActionHasBeenSet = true; m_ruleAction.assign(value); }

    /**
     * <p>Indicates whether to allow or deny traffic that matches the rule.</p>
     */
    inline AnalysisAclRule& WithRuleAction(const Aws::String& value) { SetRuleAction(value); return *this;}

    /**
     * <p>Indicates whether to allow or deny traffic that matches the rule.</p>
     */
    inline AnalysisAclRule& WithRuleAction(Aws::String&& value) { SetRuleAction(std::move(value)); return *this;}

    /**
     * <p>Indicates whether to allow or deny traffic that matches the rule.</p>
     */
    inline AnalysisAclRule& WithRuleAction(const char* value) { SetRuleAction(value); return *this;}


    /**
     * <p>The rule number.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }

    /**
     * <p>The rule number.</p>
     */
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }

    /**
     * <p>The rule number.</p>
     */
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }

    /**
     * <p>The rule number.</p>
     */
    inline AnalysisAclRule& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    bool m_egress;
    bool m_egressHasBeenSet = false;

    PortRange m_portRange;
    bool m_portRangeHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_ruleAction;
    bool m_ruleActionHasBeenSet = false;

    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
