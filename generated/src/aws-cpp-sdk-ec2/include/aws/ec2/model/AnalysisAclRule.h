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


    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline AnalysisAclRule& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline AnalysisAclRule& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline AnalysisAclRule& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule is an outbound rule.</p>
     */
    inline bool GetEgress() const{ return m_egress; }
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }
    inline AnalysisAclRule& WithEgress(bool value) { SetEgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of ports.</p>
     */
    inline const PortRange& GetPortRange() const{ return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    inline void SetPortRange(const PortRange& value) { m_portRangeHasBeenSet = true; m_portRange = value; }
    inline void SetPortRange(PortRange&& value) { m_portRangeHasBeenSet = true; m_portRange = std::move(value); }
    inline AnalysisAclRule& WithPortRange(const PortRange& value) { SetPortRange(value); return *this;}
    inline AnalysisAclRule& WithPortRange(PortRange&& value) { SetPortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline AnalysisAclRule& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline AnalysisAclRule& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline AnalysisAclRule& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to allow or deny traffic that matches the rule.</p>
     */
    inline const Aws::String& GetRuleAction() const{ return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(const Aws::String& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline void SetRuleAction(Aws::String&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }
    inline void SetRuleAction(const char* value) { m_ruleActionHasBeenSet = true; m_ruleAction.assign(value); }
    inline AnalysisAclRule& WithRuleAction(const Aws::String& value) { SetRuleAction(value); return *this;}
    inline AnalysisAclRule& WithRuleAction(Aws::String&& value) { SetRuleAction(std::move(value)); return *this;}
    inline AnalysisAclRule& WithRuleAction(const char* value) { SetRuleAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule number.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }
    inline AnalysisAclRule& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}
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
