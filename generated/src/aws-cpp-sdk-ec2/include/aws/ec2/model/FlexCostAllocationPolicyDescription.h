/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationNetworkResourceType.h>
#include <aws/ec2/model/InstanceFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/ManagedBy.h>
#include <aws/ec2/model/NatFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/PcxFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/Tag.h>

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
 * <p>Describes a flex cost allocation policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FlexCostAllocationPolicyDescription">AWS
 * API Reference</a></p>
 */
class FlexCostAllocationPolicyDescription {
 public:
  AWS_EC2_API FlexCostAllocationPolicyDescription() = default;
  AWS_EC2_API FlexCostAllocationPolicyDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API FlexCostAllocationPolicyDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the policy.</p>
   */
  inline const Aws::String& GetFcaPolicyId() const { return m_fcaPolicyId; }
  inline bool FcaPolicyIdHasBeenSet() const { return m_fcaPolicyIdHasBeenSet; }
  template <typename FcaPolicyIdT = Aws::String>
  void SetFcaPolicyId(FcaPolicyIdT&& value) {
    m_fcaPolicyIdHasBeenSet = true;
    m_fcaPolicyId = std::forward<FcaPolicyIdT>(value);
  }
  template <typename FcaPolicyIdT = Aws::String>
  FlexCostAllocationPolicyDescription& WithFcaPolicyId(FcaPolicyIdT&& value) {
    SetFcaPolicyId(std::forward<FcaPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the policy.</p>
   */
  inline const Aws::String& GetFcaPolicyArn() const { return m_fcaPolicyArn; }
  inline bool FcaPolicyArnHasBeenSet() const { return m_fcaPolicyArnHasBeenSet; }
  template <typename FcaPolicyArnT = Aws::String>
  void SetFcaPolicyArn(FcaPolicyArnT&& value) {
    m_fcaPolicyArnHasBeenSet = true;
    m_fcaPolicyArn = std::forward<FcaPolicyArnT>(value);
  }
  template <typename FcaPolicyArnT = Aws::String>
  FlexCostAllocationPolicyDescription& WithFcaPolicyArn(FcaPolicyArnT&& value) {
    SetFcaPolicyArn(std::forward<FcaPolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of network resource that the policy applies to.</p>
   */
  inline FlexCostAllocationNetworkResourceType GetNetworkResourceType() const { return m_networkResourceType; }
  inline bool NetworkResourceTypeHasBeenSet() const { return m_networkResourceTypeHasBeenSet; }
  inline void SetNetworkResourceType(FlexCostAllocationNetworkResourceType value) {
    m_networkResourceTypeHasBeenSet = true;
    m_networkResourceType = value;
  }
  inline FlexCostAllocationPolicyDescription& WithNetworkResourceType(FlexCostAllocationNetworkResourceType value) {
    SetNetworkResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy document that defines cost allocation for NAT gateways.</p>
   */
  inline const NatFlexCostAllocationPolicyDocument& GetNatFcaPolicyDocument() const { return m_natFcaPolicyDocument; }
  inline bool NatFcaPolicyDocumentHasBeenSet() const { return m_natFcaPolicyDocumentHasBeenSet; }
  template <typename NatFcaPolicyDocumentT = NatFlexCostAllocationPolicyDocument>
  void SetNatFcaPolicyDocument(NatFcaPolicyDocumentT&& value) {
    m_natFcaPolicyDocumentHasBeenSet = true;
    m_natFcaPolicyDocument = std::forward<NatFcaPolicyDocumentT>(value);
  }
  template <typename NatFcaPolicyDocumentT = NatFlexCostAllocationPolicyDocument>
  FlexCostAllocationPolicyDescription& WithNatFcaPolicyDocument(NatFcaPolicyDocumentT&& value) {
    SetNatFcaPolicyDocument(std::forward<NatFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy document that defines cost allocation for EC2 instances.</p>
   */
  inline const InstanceFlexCostAllocationPolicyDocument& GetInstanceFcaPolicyDocument() const { return m_instanceFcaPolicyDocument; }
  inline bool InstanceFcaPolicyDocumentHasBeenSet() const { return m_instanceFcaPolicyDocumentHasBeenSet; }
  template <typename InstanceFcaPolicyDocumentT = InstanceFlexCostAllocationPolicyDocument>
  void SetInstanceFcaPolicyDocument(InstanceFcaPolicyDocumentT&& value) {
    m_instanceFcaPolicyDocumentHasBeenSet = true;
    m_instanceFcaPolicyDocument = std::forward<InstanceFcaPolicyDocumentT>(value);
  }
  template <typename InstanceFcaPolicyDocumentT = InstanceFlexCostAllocationPolicyDocument>
  FlexCostAllocationPolicyDescription& WithInstanceFcaPolicyDocument(InstanceFcaPolicyDocumentT&& value) {
    SetInstanceFcaPolicyDocument(std::forward<InstanceFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy document that defines cost allocation for Amazon VPC peering
   * connections.</p>
   */
  inline const PcxFlexCostAllocationPolicyDocument& GetPcxFcaPolicyDocument() const { return m_pcxFcaPolicyDocument; }
  inline bool PcxFcaPolicyDocumentHasBeenSet() const { return m_pcxFcaPolicyDocumentHasBeenSet; }
  template <typename PcxFcaPolicyDocumentT = PcxFlexCostAllocationPolicyDocument>
  void SetPcxFcaPolicyDocument(PcxFcaPolicyDocumentT&& value) {
    m_pcxFcaPolicyDocumentHasBeenSet = true;
    m_pcxFcaPolicyDocument = std::forward<PcxFcaPolicyDocumentT>(value);
  }
  template <typename PcxFcaPolicyDocumentT = PcxFlexCostAllocationPolicyDocument>
  FlexCostAllocationPolicyDescription& WithPcxFcaPolicyDocument(PcxFcaPolicyDocumentT&& value) {
    SetPcxFcaPolicyDocument(std::forward<PcxFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether showback reporting is enabled for the policy.</p>
   */
  inline bool GetShowBackEnabled() const { return m_showBackEnabled; }
  inline bool ShowBackEnabledHasBeenSet() const { return m_showBackEnabledHasBeenSet; }
  inline void SetShowBackEnabled(bool value) {
    m_showBackEnabledHasBeenSet = true;
    m_showBackEnabled = value;
  }
  inline FlexCostAllocationPolicyDescription& WithShowBackEnabled(bool value) {
    SetShowBackEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the account that owns the policy.</p>
   */
  inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
  inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
  template <typename OwnerAccountT = Aws::String>
  void SetOwnerAccount(OwnerAccountT&& value) {
    m_ownerAccountHasBeenSet = true;
    m_ownerAccount = std::forward<OwnerAccountT>(value);
  }
  template <typename OwnerAccountT = Aws::String>
  FlexCostAllocationPolicyDescription& WithOwnerAccount(OwnerAccountT&& value) {
    SetOwnerAccount(std::forward<OwnerAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the policy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FlexCostAllocationPolicyDescription& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of the latest version of the policy.</p>
   */
  inline int GetLatestVersion() const { return m_latestVersion; }
  inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
  inline void SetLatestVersion(int value) {
    m_latestVersionHasBeenSet = true;
    m_latestVersion = value;
  }
  inline FlexCostAllocationPolicyDescription& WithLatestVersion(int value) {
    SetLatestVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the latest version of the policy is expected to apply
   * to network traffic. The policy configuration in this response is from the latest
   * version.</p>
   */
  inline const Aws::Utils::DateTime& GetVersionExpectedEffectiveAt() const { return m_versionExpectedEffectiveAt; }
  inline bool VersionExpectedEffectiveAtHasBeenSet() const { return m_versionExpectedEffectiveAtHasBeenSet; }
  template <typename VersionExpectedEffectiveAtT = Aws::Utils::DateTime>
  void SetVersionExpectedEffectiveAt(VersionExpectedEffectiveAtT&& value) {
    m_versionExpectedEffectiveAtHasBeenSet = true;
    m_versionExpectedEffectiveAt = std::forward<VersionExpectedEffectiveAtT>(value);
  }
  template <typename VersionExpectedEffectiveAtT = Aws::Utils::DateTime>
  FlexCostAllocationPolicyDescription& WithVersionExpectedEffectiveAt(VersionExpectedEffectiveAtT&& value) {
    SetVersionExpectedEffectiveAt(std::forward<VersionExpectedEffectiveAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the policy was created.</p>
   */
  inline const Aws::Utils::DateTime& GetPolicyCreatedAt() const { return m_policyCreatedAt; }
  inline bool PolicyCreatedAtHasBeenSet() const { return m_policyCreatedAtHasBeenSet; }
  template <typename PolicyCreatedAtT = Aws::Utils::DateTime>
  void SetPolicyCreatedAt(PolicyCreatedAtT&& value) {
    m_policyCreatedAtHasBeenSet = true;
    m_policyCreatedAt = std::forward<PolicyCreatedAtT>(value);
  }
  template <typename PolicyCreatedAtT = Aws::Utils::DateTime>
  FlexCostAllocationPolicyDescription& WithPolicyCreatedAt(PolicyCreatedAtT&& value) {
    SetPolicyCreatedAt(std::forward<PolicyCreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the policy was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  FlexCostAllocationPolicyDescription& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that manages the policy. Valid values are:</p> <ul> <li> <p>
   * <code>account</code> - The account that owns the policy created it.</p> </li>
   * <li> <p> <code>declarative-policy</code> - An Amazon Web Services Organizations
   * declarative policy created the policy. You can't modify or delete the
   * policy.</p> </li> </ul>
   */
  inline ManagedBy GetManagedBy() const { return m_managedBy; }
  inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
  inline void SetManagedBy(ManagedBy value) {
    m_managedByHasBeenSet = true;
    m_managedBy = value;
  }
  inline FlexCostAllocationPolicyDescription& WithManagedBy(ManagedBy value) {
    SetManagedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the policy.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  FlexCostAllocationPolicyDescription& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  FlexCostAllocationPolicyDescription& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fcaPolicyId;

  Aws::String m_fcaPolicyArn;

  FlexCostAllocationNetworkResourceType m_networkResourceType{FlexCostAllocationNetworkResourceType::NOT_SET};

  NatFlexCostAllocationPolicyDocument m_natFcaPolicyDocument;

  InstanceFlexCostAllocationPolicyDocument m_instanceFcaPolicyDocument;

  PcxFlexCostAllocationPolicyDocument m_pcxFcaPolicyDocument;

  bool m_showBackEnabled{false};

  Aws::String m_ownerAccount;

  Aws::String m_description;

  int m_latestVersion{0};

  Aws::Utils::DateTime m_versionExpectedEffectiveAt{};

  Aws::Utils::DateTime m_policyCreatedAt{};

  Aws::Utils::DateTime m_updatedAt{};

  ManagedBy m_managedBy{ManagedBy::NOT_SET};

  Aws::Vector<Tag> m_tags;
  bool m_fcaPolicyIdHasBeenSet = false;
  bool m_fcaPolicyArnHasBeenSet = false;
  bool m_networkResourceTypeHasBeenSet = false;
  bool m_natFcaPolicyDocumentHasBeenSet = false;
  bool m_instanceFcaPolicyDocumentHasBeenSet = false;
  bool m_pcxFcaPolicyDocumentHasBeenSet = false;
  bool m_showBackEnabledHasBeenSet = false;
  bool m_ownerAccountHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_latestVersionHasBeenSet = false;
  bool m_versionExpectedEffectiveAtHasBeenSet = false;
  bool m_policyCreatedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_managedByHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
