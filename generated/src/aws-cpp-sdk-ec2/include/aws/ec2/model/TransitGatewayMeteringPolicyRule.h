/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayAttachmentResourceType.h>

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
 * <p>Describes the traffic matching criteria for a transit gateway metering policy
 * rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMeteringPolicyRule">AWS
 * API Reference</a></p>
 */
class TransitGatewayMeteringPolicyRule {
 public:
  AWS_EC2_API TransitGatewayMeteringPolicyRule() = default;
  AWS_EC2_API TransitGatewayMeteringPolicyRule(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayMeteringPolicyRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the source transit gateway attachment.</p>
   */
  inline const Aws::String& GetSourceTransitGatewayAttachmentId() const { return m_sourceTransitGatewayAttachmentId; }
  inline bool SourceTransitGatewayAttachmentIdHasBeenSet() const { return m_sourceTransitGatewayAttachmentIdHasBeenSet; }
  template <typename SourceTransitGatewayAttachmentIdT = Aws::String>
  void SetSourceTransitGatewayAttachmentId(SourceTransitGatewayAttachmentIdT&& value) {
    m_sourceTransitGatewayAttachmentIdHasBeenSet = true;
    m_sourceTransitGatewayAttachmentId = std::forward<SourceTransitGatewayAttachmentIdT>(value);
  }
  template <typename SourceTransitGatewayAttachmentIdT = Aws::String>
  TransitGatewayMeteringPolicyRule& WithSourceTransitGatewayAttachmentId(SourceTransitGatewayAttachmentIdT&& value) {
    SetSourceTransitGatewayAttachmentId(std::forward<SourceTransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the source transit gateway attachment. Note that the
   * <code>tgw-peering</code> resource type has been deprecated. To configure
   * metering policies for Connect, use the transport attachment type.</p>
   */
  inline TransitGatewayAttachmentResourceType GetSourceTransitGatewayAttachmentType() const { return m_sourceTransitGatewayAttachmentType; }
  inline bool SourceTransitGatewayAttachmentTypeHasBeenSet() const { return m_sourceTransitGatewayAttachmentTypeHasBeenSet; }
  inline void SetSourceTransitGatewayAttachmentType(TransitGatewayAttachmentResourceType value) {
    m_sourceTransitGatewayAttachmentTypeHasBeenSet = true;
    m_sourceTransitGatewayAttachmentType = value;
  }
  inline TransitGatewayMeteringPolicyRule& WithSourceTransitGatewayAttachmentType(TransitGatewayAttachmentResourceType value) {
    SetSourceTransitGatewayAttachmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source CIDR block for the rule.</p>
   */
  inline const Aws::String& GetSourceCidrBlock() const { return m_sourceCidrBlock; }
  inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }
  template <typename SourceCidrBlockT = Aws::String>
  void SetSourceCidrBlock(SourceCidrBlockT&& value) {
    m_sourceCidrBlockHasBeenSet = true;
    m_sourceCidrBlock = std::forward<SourceCidrBlockT>(value);
  }
  template <typename SourceCidrBlockT = Aws::String>
  TransitGatewayMeteringPolicyRule& WithSourceCidrBlock(SourceCidrBlockT&& value) {
    SetSourceCidrBlock(std::forward<SourceCidrBlockT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source port range for the rule.</p>
   */
  inline const Aws::String& GetSourcePortRange() const { return m_sourcePortRange; }
  inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
  template <typename SourcePortRangeT = Aws::String>
  void SetSourcePortRange(SourcePortRangeT&& value) {
    m_sourcePortRangeHasBeenSet = true;
    m_sourcePortRange = std::forward<SourcePortRangeT>(value);
  }
  template <typename SourcePortRangeT = Aws::String>
  TransitGatewayMeteringPolicyRule& WithSourcePortRange(SourcePortRangeT&& value) {
    SetSourcePortRange(std::forward<SourcePortRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the destination transit gateway attachment.</p>
   */
  inline const Aws::String& GetDestinationTransitGatewayAttachmentId() const { return m_destinationTransitGatewayAttachmentId; }
  inline bool DestinationTransitGatewayAttachmentIdHasBeenSet() const { return m_destinationTransitGatewayAttachmentIdHasBeenSet; }
  template <typename DestinationTransitGatewayAttachmentIdT = Aws::String>
  void SetDestinationTransitGatewayAttachmentId(DestinationTransitGatewayAttachmentIdT&& value) {
    m_destinationTransitGatewayAttachmentIdHasBeenSet = true;
    m_destinationTransitGatewayAttachmentId = std::forward<DestinationTransitGatewayAttachmentIdT>(value);
  }
  template <typename DestinationTransitGatewayAttachmentIdT = Aws::String>
  TransitGatewayMeteringPolicyRule& WithDestinationTransitGatewayAttachmentId(DestinationTransitGatewayAttachmentIdT&& value) {
    SetDestinationTransitGatewayAttachmentId(std::forward<DestinationTransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the destination transit gateway attachment. Note that the
   * <code>tgw-peering</code> resource type has been deprecated. To configure
   * metering policies for Connect, use the transport attachment type.</p>
   */
  inline TransitGatewayAttachmentResourceType GetDestinationTransitGatewayAttachmentType() const {
    return m_destinationTransitGatewayAttachmentType;
  }
  inline bool DestinationTransitGatewayAttachmentTypeHasBeenSet() const { return m_destinationTransitGatewayAttachmentTypeHasBeenSet; }
  inline void SetDestinationTransitGatewayAttachmentType(TransitGatewayAttachmentResourceType value) {
    m_destinationTransitGatewayAttachmentTypeHasBeenSet = true;
    m_destinationTransitGatewayAttachmentType = value;
  }
  inline TransitGatewayMeteringPolicyRule& WithDestinationTransitGatewayAttachmentType(TransitGatewayAttachmentResourceType value) {
    SetDestinationTransitGatewayAttachmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination CIDR block for the rule.</p>
   */
  inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
  inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
  template <typename DestinationCidrBlockT = Aws::String>
  void SetDestinationCidrBlock(DestinationCidrBlockT&& value) {
    m_destinationCidrBlockHasBeenSet = true;
    m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value);
  }
  template <typename DestinationCidrBlockT = Aws::String>
  TransitGatewayMeteringPolicyRule& WithDestinationCidrBlock(DestinationCidrBlockT&& value) {
    SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination port range for the rule.</p>
   */
  inline const Aws::String& GetDestinationPortRange() const { return m_destinationPortRange; }
  inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
  template <typename DestinationPortRangeT = Aws::String>
  void SetDestinationPortRange(DestinationPortRangeT&& value) {
    m_destinationPortRangeHasBeenSet = true;
    m_destinationPortRange = std::forward<DestinationPortRangeT>(value);
  }
  template <typename DestinationPortRangeT = Aws::String>
  TransitGatewayMeteringPolicyRule& WithDestinationPortRange(DestinationPortRangeT&& value) {
    SetDestinationPortRange(std::forward<DestinationPortRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol for the rule (1, 6, 17, etc.).</p>
   */
  inline const Aws::String& GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  template <typename ProtocolT = Aws::String>
  void SetProtocol(ProtocolT&& value) {
    m_protocolHasBeenSet = true;
    m_protocol = std::forward<ProtocolT>(value);
  }
  template <typename ProtocolT = Aws::String>
  TransitGatewayMeteringPolicyRule& WithProtocol(ProtocolT&& value) {
    SetProtocol(std::forward<ProtocolT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceTransitGatewayAttachmentId;

  TransitGatewayAttachmentResourceType m_sourceTransitGatewayAttachmentType{TransitGatewayAttachmentResourceType::NOT_SET};

  Aws::String m_sourceCidrBlock;

  Aws::String m_sourcePortRange;

  Aws::String m_destinationTransitGatewayAttachmentId;

  TransitGatewayAttachmentResourceType m_destinationTransitGatewayAttachmentType{TransitGatewayAttachmentResourceType::NOT_SET};

  Aws::String m_destinationCidrBlock;

  Aws::String m_destinationPortRange;

  Aws::String m_protocol;
  bool m_sourceTransitGatewayAttachmentIdHasBeenSet = false;
  bool m_sourceTransitGatewayAttachmentTypeHasBeenSet = false;
  bool m_sourceCidrBlockHasBeenSet = false;
  bool m_sourcePortRangeHasBeenSet = false;
  bool m_destinationTransitGatewayAttachmentIdHasBeenSet = false;
  bool m_destinationTransitGatewayAttachmentTypeHasBeenSet = false;
  bool m_destinationCidrBlockHasBeenSet = false;
  bool m_destinationPortRangeHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
