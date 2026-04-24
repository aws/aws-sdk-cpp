/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayAttachmentResourceType.h>
#include <aws/ec2/model/TransitGatewayMeteringPayerType.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateTransitGatewayMeteringPolicyEntryRequest : public EC2Request {
 public:
  AWS_EC2_API CreateTransitGatewayMeteringPolicyEntryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayMeteringPolicyEntry"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the transit gateway metering policy to add the entry to.</p>
   */
  inline const Aws::String& GetTransitGatewayMeteringPolicyId() const { return m_transitGatewayMeteringPolicyId; }
  inline bool TransitGatewayMeteringPolicyIdHasBeenSet() const { return m_transitGatewayMeteringPolicyIdHasBeenSet; }
  template <typename TransitGatewayMeteringPolicyIdT = Aws::String>
  void SetTransitGatewayMeteringPolicyId(TransitGatewayMeteringPolicyIdT&& value) {
    m_transitGatewayMeteringPolicyIdHasBeenSet = true;
    m_transitGatewayMeteringPolicyId = std::forward<TransitGatewayMeteringPolicyIdT>(value);
  }
  template <typename TransitGatewayMeteringPolicyIdT = Aws::String>
  CreateTransitGatewayMeteringPolicyEntryRequest& WithTransitGatewayMeteringPolicyId(TransitGatewayMeteringPolicyIdT&& value) {
    SetTransitGatewayMeteringPolicyId(std::forward<TransitGatewayMeteringPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule number for the metering policy entry. Rules are processed in order
   * from lowest to highest number.</p>
   */
  inline int GetPolicyRuleNumber() const { return m_policyRuleNumber; }
  inline bool PolicyRuleNumberHasBeenSet() const { return m_policyRuleNumberHasBeenSet; }
  inline void SetPolicyRuleNumber(int value) {
    m_policyRuleNumberHasBeenSet = true;
    m_policyRuleNumber = value;
  }
  inline CreateTransitGatewayMeteringPolicyEntryRequest& WithPolicyRuleNumber(int value) {
    SetPolicyRuleNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the source transit gateway attachment for traffic matching.</p>
   */
  inline const Aws::String& GetSourceTransitGatewayAttachmentId() const { return m_sourceTransitGatewayAttachmentId; }
  inline bool SourceTransitGatewayAttachmentIdHasBeenSet() const { return m_sourceTransitGatewayAttachmentIdHasBeenSet; }
  template <typename SourceTransitGatewayAttachmentIdT = Aws::String>
  void SetSourceTransitGatewayAttachmentId(SourceTransitGatewayAttachmentIdT&& value) {
    m_sourceTransitGatewayAttachmentIdHasBeenSet = true;
    m_sourceTransitGatewayAttachmentId = std::forward<SourceTransitGatewayAttachmentIdT>(value);
  }
  template <typename SourceTransitGatewayAttachmentIdT = Aws::String>
  CreateTransitGatewayMeteringPolicyEntryRequest& WithSourceTransitGatewayAttachmentId(SourceTransitGatewayAttachmentIdT&& value) {
    SetSourceTransitGatewayAttachmentId(std::forward<SourceTransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the source transit gateway attachment for traffic matching. Note
   * that the <code>tgw-peering</code> resource type has been deprecated. To
   * configure metering policies for Connect, use the transport attachment type.</p>
   */
  inline TransitGatewayAttachmentResourceType GetSourceTransitGatewayAttachmentType() const { return m_sourceTransitGatewayAttachmentType; }
  inline bool SourceTransitGatewayAttachmentTypeHasBeenSet() const { return m_sourceTransitGatewayAttachmentTypeHasBeenSet; }
  inline void SetSourceTransitGatewayAttachmentType(TransitGatewayAttachmentResourceType value) {
    m_sourceTransitGatewayAttachmentTypeHasBeenSet = true;
    m_sourceTransitGatewayAttachmentType = value;
  }
  inline CreateTransitGatewayMeteringPolicyEntryRequest& WithSourceTransitGatewayAttachmentType(
      TransitGatewayAttachmentResourceType value) {
    SetSourceTransitGatewayAttachmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source CIDR block for traffic matching.</p>
   */
  inline const Aws::String& GetSourceCidrBlock() const { return m_sourceCidrBlock; }
  inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }
  template <typename SourceCidrBlockT = Aws::String>
  void SetSourceCidrBlock(SourceCidrBlockT&& value) {
    m_sourceCidrBlockHasBeenSet = true;
    m_sourceCidrBlock = std::forward<SourceCidrBlockT>(value);
  }
  template <typename SourceCidrBlockT = Aws::String>
  CreateTransitGatewayMeteringPolicyEntryRequest& WithSourceCidrBlock(SourceCidrBlockT&& value) {
    SetSourceCidrBlock(std::forward<SourceCidrBlockT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source port range for traffic matching.</p>
   */
  inline const Aws::String& GetSourcePortRange() const { return m_sourcePortRange; }
  inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
  template <typename SourcePortRangeT = Aws::String>
  void SetSourcePortRange(SourcePortRangeT&& value) {
    m_sourcePortRangeHasBeenSet = true;
    m_sourcePortRange = std::forward<SourcePortRangeT>(value);
  }
  template <typename SourcePortRangeT = Aws::String>
  CreateTransitGatewayMeteringPolicyEntryRequest& WithSourcePortRange(SourcePortRangeT&& value) {
    SetSourcePortRange(std::forward<SourcePortRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the destination transit gateway attachment for traffic
   * matching.</p>
   */
  inline const Aws::String& GetDestinationTransitGatewayAttachmentId() const { return m_destinationTransitGatewayAttachmentId; }
  inline bool DestinationTransitGatewayAttachmentIdHasBeenSet() const { return m_destinationTransitGatewayAttachmentIdHasBeenSet; }
  template <typename DestinationTransitGatewayAttachmentIdT = Aws::String>
  void SetDestinationTransitGatewayAttachmentId(DestinationTransitGatewayAttachmentIdT&& value) {
    m_destinationTransitGatewayAttachmentIdHasBeenSet = true;
    m_destinationTransitGatewayAttachmentId = std::forward<DestinationTransitGatewayAttachmentIdT>(value);
  }
  template <typename DestinationTransitGatewayAttachmentIdT = Aws::String>
  CreateTransitGatewayMeteringPolicyEntryRequest& WithDestinationTransitGatewayAttachmentId(
      DestinationTransitGatewayAttachmentIdT&& value) {
    SetDestinationTransitGatewayAttachmentId(std::forward<DestinationTransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the destination transit gateway attachment for traffic matching.
   * Note that the <code>tgw-peering</code> resource type has been deprecated. To
   * configure metering policies for Connect, use the transport attachment type.</p>
   */
  inline TransitGatewayAttachmentResourceType GetDestinationTransitGatewayAttachmentType() const {
    return m_destinationTransitGatewayAttachmentType;
  }
  inline bool DestinationTransitGatewayAttachmentTypeHasBeenSet() const { return m_destinationTransitGatewayAttachmentTypeHasBeenSet; }
  inline void SetDestinationTransitGatewayAttachmentType(TransitGatewayAttachmentResourceType value) {
    m_destinationTransitGatewayAttachmentTypeHasBeenSet = true;
    m_destinationTransitGatewayAttachmentType = value;
  }
  inline CreateTransitGatewayMeteringPolicyEntryRequest& WithDestinationTransitGatewayAttachmentType(
      TransitGatewayAttachmentResourceType value) {
    SetDestinationTransitGatewayAttachmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination CIDR block for traffic matching.</p>
   */
  inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
  inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
  template <typename DestinationCidrBlockT = Aws::String>
  void SetDestinationCidrBlock(DestinationCidrBlockT&& value) {
    m_destinationCidrBlockHasBeenSet = true;
    m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value);
  }
  template <typename DestinationCidrBlockT = Aws::String>
  CreateTransitGatewayMeteringPolicyEntryRequest& WithDestinationCidrBlock(DestinationCidrBlockT&& value) {
    SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination port range for traffic matching.</p>
   */
  inline const Aws::String& GetDestinationPortRange() const { return m_destinationPortRange; }
  inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
  template <typename DestinationPortRangeT = Aws::String>
  void SetDestinationPortRange(DestinationPortRangeT&& value) {
    m_destinationPortRangeHasBeenSet = true;
    m_destinationPortRange = std::forward<DestinationPortRangeT>(value);
  }
  template <typename DestinationPortRangeT = Aws::String>
  CreateTransitGatewayMeteringPolicyEntryRequest& WithDestinationPortRange(DestinationPortRangeT&& value) {
    SetDestinationPortRange(std::forward<DestinationPortRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol for traffic matching (1, 6, 17, etc.).</p>
   */
  inline const Aws::String& GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  template <typename ProtocolT = Aws::String>
  void SetProtocol(ProtocolT&& value) {
    m_protocolHasBeenSet = true;
    m_protocol = std::forward<ProtocolT>(value);
  }
  template <typename ProtocolT = Aws::String>
  CreateTransitGatewayMeteringPolicyEntryRequest& WithProtocol(ProtocolT&& value) {
    SetProtocol(std::forward<ProtocolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID to which the metered traffic should be
   * attributed.</p>
   */
  inline TransitGatewayMeteringPayerType GetMeteredAccount() const { return m_meteredAccount; }
  inline bool MeteredAccountHasBeenSet() const { return m_meteredAccountHasBeenSet; }
  inline void SetMeteredAccount(TransitGatewayMeteringPayerType value) {
    m_meteredAccountHasBeenSet = true;
    m_meteredAccount = value;
  }
  inline CreateTransitGatewayMeteringPolicyEntryRequest& WithMeteredAccount(TransitGatewayMeteringPayerType value) {
    SetMeteredAccount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreateTransitGatewayMeteringPolicyEntryRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayMeteringPolicyId;

  int m_policyRuleNumber{0};

  Aws::String m_sourceTransitGatewayAttachmentId;

  TransitGatewayAttachmentResourceType m_sourceTransitGatewayAttachmentType{TransitGatewayAttachmentResourceType::NOT_SET};

  Aws::String m_sourceCidrBlock;

  Aws::String m_sourcePortRange;

  Aws::String m_destinationTransitGatewayAttachmentId;

  TransitGatewayAttachmentResourceType m_destinationTransitGatewayAttachmentType{TransitGatewayAttachmentResourceType::NOT_SET};

  Aws::String m_destinationCidrBlock;

  Aws::String m_destinationPortRange;

  Aws::String m_protocol;

  TransitGatewayMeteringPayerType m_meteredAccount{TransitGatewayMeteringPayerType::NOT_SET};

  bool m_dryRun{false};
  bool m_transitGatewayMeteringPolicyIdHasBeenSet = false;
  bool m_policyRuleNumberHasBeenSet = false;
  bool m_sourceTransitGatewayAttachmentIdHasBeenSet = false;
  bool m_sourceTransitGatewayAttachmentTypeHasBeenSet = false;
  bool m_sourceCidrBlockHasBeenSet = false;
  bool m_sourcePortRangeHasBeenSet = false;
  bool m_destinationTransitGatewayAttachmentIdHasBeenSet = false;
  bool m_destinationTransitGatewayAttachmentTypeHasBeenSet = false;
  bool m_destinationCidrBlockHasBeenSet = false;
  bool m_destinationPortRangeHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_meteredAccountHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
