/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/PortRange.h>

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
 * <p>Describes an entry in a transit gateway policy table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AnalysisTransitGatewayPolicyTableEntry">AWS
 * API Reference</a></p>
 */
class AnalysisTransitGatewayPolicyTableEntry {
 public:
  AWS_EC2_API AnalysisTransitGatewayPolicyTableEntry() = default;
  AWS_EC2_API AnalysisTransitGatewayPolicyTableEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API AnalysisTransitGatewayPolicyTableEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The rule number for the policy table entry. Entries are evaluated in
   * ascending order of rule number.</p>
   */
  inline int GetRuleNumber() const { return m_ruleNumber; }
  inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
  inline void SetRuleNumber(int value) {
    m_ruleNumberHasBeenSet = true;
    m_ruleNumber = value;
  }
  inline AnalysisTransitGatewayPolicyTableEntry& WithRuleNumber(int value) {
    SetRuleNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol number. A value of <code>-1</code> means that the entry matches
   * all protocols.</p>
   */
  inline const Aws::String& GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  template <typename ProtocolT = Aws::String>
  void SetProtocol(ProtocolT&& value) {
    m_protocolHasBeenSet = true;
    m_protocol = std::forward<ProtocolT>(value);
  }
  template <typename ProtocolT = Aws::String>
  AnalysisTransitGatewayPolicyTableEntry& WithProtocol(ProtocolT&& value) {
    SetProtocol(std::forward<ProtocolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source CIDR block. If this value is not present, the entry matches any
   * source address.</p>
   */
  inline const Aws::String& GetSourceCidr() const { return m_sourceCidr; }
  inline bool SourceCidrHasBeenSet() const { return m_sourceCidrHasBeenSet; }
  template <typename SourceCidrT = Aws::String>
  void SetSourceCidr(SourceCidrT&& value) {
    m_sourceCidrHasBeenSet = true;
    m_sourceCidr = std::forward<SourceCidrT>(value);
  }
  template <typename SourceCidrT = Aws::String>
  AnalysisTransitGatewayPolicyTableEntry& WithSourceCidr(SourceCidrT&& value) {
    SetSourceCidr(std::forward<SourceCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination CIDR block. If this value is not present, the entry matches
   * any destination address.</p>
   */
  inline const Aws::String& GetDestinationCidr() const { return m_destinationCidr; }
  inline bool DestinationCidrHasBeenSet() const { return m_destinationCidrHasBeenSet; }
  template <typename DestinationCidrT = Aws::String>
  void SetDestinationCidr(DestinationCidrT&& value) {
    m_destinationCidrHasBeenSet = true;
    m_destinationCidr = std::forward<DestinationCidrT>(value);
  }
  template <typename DestinationCidrT = Aws::String>
  AnalysisTransitGatewayPolicyTableEntry& WithDestinationCidr(DestinationCidrT&& value) {
    SetDestinationCidr(std::forward<DestinationCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source port range. If this value is not present, the entry matches any
   * source port.</p>
   */
  inline const PortRange& GetSourcePortRange() const { return m_sourcePortRange; }
  inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
  template <typename SourcePortRangeT = PortRange>
  void SetSourcePortRange(SourcePortRangeT&& value) {
    m_sourcePortRangeHasBeenSet = true;
    m_sourcePortRange = std::forward<SourcePortRangeT>(value);
  }
  template <typename SourcePortRangeT = PortRange>
  AnalysisTransitGatewayPolicyTableEntry& WithSourcePortRange(SourcePortRangeT&& value) {
    SetSourcePortRange(std::forward<SourcePortRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination port range. If this value is not present, the entry matches
   * any destination port.</p>
   */
  inline const PortRange& GetDestinationPortRange() const { return m_destinationPortRange; }
  inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
  template <typename DestinationPortRangeT = PortRange>
  void SetDestinationPortRange(DestinationPortRangeT&& value) {
    m_destinationPortRangeHasBeenSet = true;
    m_destinationPortRange = std::forward<DestinationPortRangeT>(value);
  }
  template <typename DestinationPortRangeT = PortRange>
  AnalysisTransitGatewayPolicyTableEntry& WithDestinationPortRange(DestinationPortRangeT&& value) {
    SetDestinationPortRange(std::forward<DestinationPortRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the transit gateway route table to which the entry routes matching
   * traffic.</p>
   */
  inline const Aws::String& GetTargetRouteTableId() const { return m_targetRouteTableId; }
  inline bool TargetRouteTableIdHasBeenSet() const { return m_targetRouteTableIdHasBeenSet; }
  template <typename TargetRouteTableIdT = Aws::String>
  void SetTargetRouteTableId(TargetRouteTableIdT&& value) {
    m_targetRouteTableIdHasBeenSet = true;
    m_targetRouteTableId = std::forward<TargetRouteTableIdT>(value);
  }
  template <typename TargetRouteTableIdT = Aws::String>
  AnalysisTransitGatewayPolicyTableEntry& WithTargetRouteTableId(TargetRouteTableIdT&& value) {
    SetTargetRouteTableId(std::forward<TargetRouteTableIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_ruleNumber{0};

  Aws::String m_protocol;

  Aws::String m_sourceCidr;

  Aws::String m_destinationCidr;

  PortRange m_sourcePortRange;

  PortRange m_destinationPortRange;

  Aws::String m_targetRouteTableId;
  bool m_ruleNumberHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_sourceCidrHasBeenSet = false;
  bool m_destinationCidrHasBeenSet = false;
  bool m_sourcePortRangeHasBeenSet = false;
  bool m_destinationPortRangeHasBeenSet = false;
  bool m_targetRouteTableIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
