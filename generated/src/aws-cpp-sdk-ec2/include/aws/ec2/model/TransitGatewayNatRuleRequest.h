/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

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
 * <p>Describes a NAT gateway rule to apply to a transit gateway attachment. A NAT
 * gateway rule translates source addresses in the <code>MatchSourceCidr</code>
 * range to the corresponding addresses in the <code>NatCidr</code>
 * range.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayNatRuleRequest">AWS
 * API Reference</a></p>
 */
class TransitGatewayNatRuleRequest {
 public:
  AWS_EC2_API TransitGatewayNatRuleRequest() = default;
  AWS_EC2_API TransitGatewayNatRuleRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayNatRuleRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The rule number. Valid values are 1 to 32766. Each rule number must be unique
   * within the request.</p>
   */
  inline int GetRuleNumber() const { return m_ruleNumber; }
  inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
  inline void SetRuleNumber(int value) {
    m_ruleNumberHasBeenSet = true;
    m_ruleNumber = value;
  }
  inline TransitGatewayNatRuleRequest& WithRuleNumber(int value) {
    SetRuleNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR block of the source addresses to translate. The CIDR block
   * can't overlap the multicast range (<code>224.0.0.0/4</code>) or the link-local
   * range (<code>169.254.0.0/16</code>).</p>
   */
  inline const Aws::String& GetMatchSourceCidr() const { return m_matchSourceCidr; }
  inline bool MatchSourceCidrHasBeenSet() const { return m_matchSourceCidrHasBeenSet; }
  template <typename MatchSourceCidrT = Aws::String>
  void SetMatchSourceCidr(MatchSourceCidrT&& value) {
    m_matchSourceCidrHasBeenSet = true;
    m_matchSourceCidr = std::forward<MatchSourceCidrT>(value);
  }
  template <typename MatchSourceCidrT = Aws::String>
  TransitGatewayNatRuleRequest& WithMatchSourceCidr(MatchSourceCidrT&& value) {
    SetMatchSourceCidr(std::forward<MatchSourceCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR block to translate the source addresses to. The CIDR block must
   * be in a private (RFC 1918) or shared address space (RFC 6598) range, and must
   * have the same prefix length as <code>MatchSourceCidr</code>. The CIDR blocks in
   * the rules for an attachment can't overlap each other.</p>
   */
  inline const Aws::String& GetNatCidr() const { return m_natCidr; }
  inline bool NatCidrHasBeenSet() const { return m_natCidrHasBeenSet; }
  template <typename NatCidrT = Aws::String>
  void SetNatCidr(NatCidrT&& value) {
    m_natCidrHasBeenSet = true;
    m_natCidr = std::forward<NatCidrT>(value);
  }
  template <typename NatCidrT = Aws::String>
  TransitGatewayNatRuleRequest& WithNatCidr(NatCidrT&& value) {
    SetNatCidr(std::forward<NatCidrT>(value));
    return *this;
  }
  ///@}
 private:
  int m_ruleNumber{0};

  Aws::String m_matchSourceCidr;

  Aws::String m_natCidr;
  bool m_ruleNumberHasBeenSet = false;
  bool m_matchSourceCidrHasBeenSet = false;
  bool m_natCidrHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
