/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayNatRuleState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Contains information about a NAT gateway rule for a transit gateway
 * attachment, including the rule number, the source CIDR block, the translated
 * CIDR block, and the state of the rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayNatRule">AWS
 * API Reference</a></p>
 */
class TransitGatewayNatRule {
 public:
  AWS_EC2_API TransitGatewayNatRule() = default;
  AWS_EC2_API TransitGatewayNatRule(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayNatRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The rule number.</p>
   */
  inline int GetRuleNumber() const { return m_ruleNumber; }
  inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
  inline void SetRuleNumber(int value) {
    m_ruleNumberHasBeenSet = true;
    m_ruleNumber = value;
  }
  inline TransitGatewayNatRule& WithRuleNumber(int value) {
    SetRuleNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR block of the source addresses to translate.</p>
   */
  inline const Aws::String& GetMatchSourceCidr() const { return m_matchSourceCidr; }
  inline bool MatchSourceCidrHasBeenSet() const { return m_matchSourceCidrHasBeenSet; }
  template <typename MatchSourceCidrT = Aws::String>
  void SetMatchSourceCidr(MatchSourceCidrT&& value) {
    m_matchSourceCidrHasBeenSet = true;
    m_matchSourceCidr = std::forward<MatchSourceCidrT>(value);
  }
  template <typename MatchSourceCidrT = Aws::String>
  TransitGatewayNatRule& WithMatchSourceCidr(MatchSourceCidrT&& value) {
    SetMatchSourceCidr(std::forward<MatchSourceCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR block that the transit gateway translates the source addresses
   * to.</p>
   */
  inline const Aws::String& GetNatCidr() const { return m_natCidr; }
  inline bool NatCidrHasBeenSet() const { return m_natCidrHasBeenSet; }
  template <typename NatCidrT = Aws::String>
  void SetNatCidr(NatCidrT&& value) {
    m_natCidrHasBeenSet = true;
    m_natCidr = std::forward<NatCidrT>(value);
  }
  template <typename NatCidrT = Aws::String>
  TransitGatewayNatRule& WithNatCidr(NatCidrT&& value) {
    SetNatCidr(std::forward<NatCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the NAT gateway rule. The possible values are:</p> <ul> <li> <p>
   * <code>pending</code> - The transit gateway is applying a change to the rule.</p>
   * </li> <li> <p> <code>activated</code> - The rule is in effect because NAT
   * gateway support is enabled for the attachment.</p> </li> <li> <p>
   * <code>deactivated</code> - The rule isn't in effect because NAT gateway support
   * is disabled for the attachment.</p> </li> </ul>
   */
  inline TransitGatewayNatRuleState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(TransitGatewayNatRuleState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline TransitGatewayNatRule& WithState(TransitGatewayNatRuleState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  int m_ruleNumber{0};

  Aws::String m_matchSourceCidr;

  Aws::String m_natCidr;

  TransitGatewayNatRuleState m_state{TransitGatewayNatRuleState::NOT_SET};
  bool m_ruleNumberHasBeenSet = false;
  bool m_matchSourceCidrHasBeenSet = false;
  bool m_natCidrHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
