/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationNetworkResourceType.h>
#include <aws/ec2/model/InstanceFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/NatFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/PcxFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateNetworkingFlexCostAllocationPolicyRequest : public EC2Request {
 public:
  AWS_EC2_API CreateNetworkingFlexCostAllocationPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkingFlexCostAllocationPolicy"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The type of network resource that the policy applies to. This parameter is
   * required. Valid values are <code>natgw</code> (NAT gateway), <code>pcx</code>
   * (Amazon VPC peering connection), and <code>ec2</code> (EC2 instance).</p>
   * <p>Specify the policy document that matches the resource type:
   * <code>NatFcaPolicyDocument</code> for <code>natgw</code>,
   * <code>InstanceFcaPolicyDocument</code> for <code>ec2</code>, or
   * <code>PcxFcaPolicyDocument</code> for <code>pcx</code>. Don't specify a policy
   * document for a different resource type.</p>
   */
  inline FlexCostAllocationNetworkResourceType GetNetworkResourceType() const { return m_networkResourceType; }
  inline bool NetworkResourceTypeHasBeenSet() const { return m_networkResourceTypeHasBeenSet; }
  inline void SetNetworkResourceType(FlexCostAllocationNetworkResourceType value) {
    m_networkResourceTypeHasBeenSet = true;
    m_networkResourceType = value;
  }
  inline CreateNetworkingFlexCostAllocationPolicyRequest& WithNetworkResourceType(FlexCostAllocationNetworkResourceType value) {
    SetNetworkResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy document that defines cost allocation for NAT gateways. Provide
   * this document when <code>NetworkResourceType</code> is <code>natgw</code>.</p>
   */
  inline const NatFlexCostAllocationPolicyDocument& GetNatFcaPolicyDocument() const { return m_natFcaPolicyDocument; }
  inline bool NatFcaPolicyDocumentHasBeenSet() const { return m_natFcaPolicyDocumentHasBeenSet; }
  template <typename NatFcaPolicyDocumentT = NatFlexCostAllocationPolicyDocument>
  void SetNatFcaPolicyDocument(NatFcaPolicyDocumentT&& value) {
    m_natFcaPolicyDocumentHasBeenSet = true;
    m_natFcaPolicyDocument = std::forward<NatFcaPolicyDocumentT>(value);
  }
  template <typename NatFcaPolicyDocumentT = NatFlexCostAllocationPolicyDocument>
  CreateNetworkingFlexCostAllocationPolicyRequest& WithNatFcaPolicyDocument(NatFcaPolicyDocumentT&& value) {
    SetNatFcaPolicyDocument(std::forward<NatFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy document that defines cost allocation for EC2 instances. Provide
   * this document when <code>NetworkResourceType</code> is <code>ec2</code>.</p>
   */
  inline const InstanceFlexCostAllocationPolicyDocument& GetInstanceFcaPolicyDocument() const { return m_instanceFcaPolicyDocument; }
  inline bool InstanceFcaPolicyDocumentHasBeenSet() const { return m_instanceFcaPolicyDocumentHasBeenSet; }
  template <typename InstanceFcaPolicyDocumentT = InstanceFlexCostAllocationPolicyDocument>
  void SetInstanceFcaPolicyDocument(InstanceFcaPolicyDocumentT&& value) {
    m_instanceFcaPolicyDocumentHasBeenSet = true;
    m_instanceFcaPolicyDocument = std::forward<InstanceFcaPolicyDocumentT>(value);
  }
  template <typename InstanceFcaPolicyDocumentT = InstanceFlexCostAllocationPolicyDocument>
  CreateNetworkingFlexCostAllocationPolicyRequest& WithInstanceFcaPolicyDocument(InstanceFcaPolicyDocumentT&& value) {
    SetInstanceFcaPolicyDocument(std::forward<InstanceFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy document that defines cost allocation for Amazon VPC peering
   * connections. Provide this document when <code>NetworkResourceType</code> is
   * <code>pcx</code>.</p>
   */
  inline const PcxFlexCostAllocationPolicyDocument& GetPcxFcaPolicyDocument() const { return m_pcxFcaPolicyDocument; }
  inline bool PcxFcaPolicyDocumentHasBeenSet() const { return m_pcxFcaPolicyDocumentHasBeenSet; }
  template <typename PcxFcaPolicyDocumentT = PcxFlexCostAllocationPolicyDocument>
  void SetPcxFcaPolicyDocument(PcxFcaPolicyDocumentT&& value) {
    m_pcxFcaPolicyDocumentHasBeenSet = true;
    m_pcxFcaPolicyDocument = std::forward<PcxFcaPolicyDocumentT>(value);
  }
  template <typename PcxFcaPolicyDocumentT = PcxFlexCostAllocationPolicyDocument>
  CreateNetworkingFlexCostAllocationPolicyRequest& WithPcxFcaPolicyDocument(PcxFcaPolicyDocumentT&& value) {
    SetPcxFcaPolicyDocument(std::forward<PcxFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether showback reporting is enabled for the policy.</p>
   * <p>Default: <code>true</code> </p>
   */
  inline bool GetShowBackEnabled() const { return m_showBackEnabled; }
  inline bool ShowBackEnabledHasBeenSet() const { return m_showBackEnabledHasBeenSet; }
  inline void SetShowBackEnabled(bool value) {
    m_showBackEnabledHasBeenSet = true;
    m_showBackEnabled = value;
  }
  inline CreateNetworkingFlexCostAllocationPolicyRequest& WithShowBackEnabled(bool value) {
    SetShowBackEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the policy. The description can be up to 1024 characters
   * long.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateNetworkingFlexCostAllocationPolicyRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the policy.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateNetworkingFlexCostAllocationPolicyRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateNetworkingFlexCostAllocationPolicyRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. For more information, see <a
   * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateNetworkingFlexCostAllocationPolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  inline CreateNetworkingFlexCostAllocationPolicyRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  FlexCostAllocationNetworkResourceType m_networkResourceType{FlexCostAllocationNetworkResourceType::NOT_SET};

  NatFlexCostAllocationPolicyDocument m_natFcaPolicyDocument;

  InstanceFlexCostAllocationPolicyDocument m_instanceFcaPolicyDocument;

  PcxFlexCostAllocationPolicyDocument m_pcxFcaPolicyDocument;

  bool m_showBackEnabled{false};

  Aws::String m_description;

  Aws::Vector<TagSpecification> m_tagSpecifications;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_dryRun{false};
  bool m_networkResourceTypeHasBeenSet = false;
  bool m_natFcaPolicyDocumentHasBeenSet = false;
  bool m_instanceFcaPolicyDocumentHasBeenSet = false;
  bool m_pcxFcaPolicyDocumentHasBeenSet = false;
  bool m_showBackEnabledHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
