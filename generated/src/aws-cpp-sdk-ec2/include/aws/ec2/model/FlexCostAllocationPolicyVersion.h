/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationNetworkResourceType.h>
#include <aws/ec2/model/InstanceFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/NatFlexCostAllocationPolicyDocument.h>
#include <aws/ec2/model/PcxFlexCostAllocationPolicyDocument.h>

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
 * <p>Describes a version of a flex cost allocation policy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FlexCostAllocationPolicyVersion">AWS
 * API Reference</a></p>
 */
class FlexCostAllocationPolicyVersion {
 public:
  AWS_EC2_API FlexCostAllocationPolicyVersion() = default;
  AWS_EC2_API FlexCostAllocationPolicyVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API FlexCostAllocationPolicyVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
  FlexCostAllocationPolicyVersion& WithFcaPolicyId(FcaPolicyIdT&& value) {
    SetFcaPolicyId(std::forward<FcaPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number.</p>
   */
  inline int GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(int value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline FlexCostAllocationPolicyVersion& WithVersion(int value) {
    SetVersion(value);
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
  inline FlexCostAllocationPolicyVersion& WithNetworkResourceType(FlexCostAllocationNetworkResourceType value) {
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
  FlexCostAllocationPolicyVersion& WithNatFcaPolicyDocument(NatFcaPolicyDocumentT&& value) {
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
  FlexCostAllocationPolicyVersion& WithInstanceFcaPolicyDocument(InstanceFcaPolicyDocumentT&& value) {
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
  FlexCostAllocationPolicyVersion& WithPcxFcaPolicyDocument(PcxFcaPolicyDocumentT&& value) {
    SetPcxFcaPolicyDocument(std::forward<PcxFcaPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether showback reporting is enabled for this version of the
   * policy.</p>
   */
  inline bool GetShowBackEnabled() const { return m_showBackEnabled; }
  inline bool ShowBackEnabledHasBeenSet() const { return m_showBackEnabledHasBeenSet; }
  inline void SetShowBackEnabled(bool value) {
    m_showBackEnabledHasBeenSet = true;
    m_showBackEnabled = value;
  }
  inline FlexCostAllocationPolicyVersion& WithShowBackEnabled(bool value) {
    SetShowBackEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of this version of the policy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FlexCostAllocationPolicyVersion& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this version of the policy is expected to apply to
   * network traffic.</p>
   */
  inline const Aws::Utils::DateTime& GetExpectedEffectiveAt() const { return m_expectedEffectiveAt; }
  inline bool ExpectedEffectiveAtHasBeenSet() const { return m_expectedEffectiveAtHasBeenSet; }
  template <typename ExpectedEffectiveAtT = Aws::Utils::DateTime>
  void SetExpectedEffectiveAt(ExpectedEffectiveAtT&& value) {
    m_expectedEffectiveAtHasBeenSet = true;
    m_expectedEffectiveAt = std::forward<ExpectedEffectiveAtT>(value);
  }
  template <typename ExpectedEffectiveAtT = Aws::Utils::DateTime>
  FlexCostAllocationPolicyVersion& WithExpectedEffectiveAt(ExpectedEffectiveAtT&& value) {
    SetExpectedEffectiveAt(std::forward<ExpectedEffectiveAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this version of the policy was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  FlexCostAllocationPolicyVersion& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fcaPolicyId;

  int m_version{0};

  FlexCostAllocationNetworkResourceType m_networkResourceType{FlexCostAllocationNetworkResourceType::NOT_SET};

  NatFlexCostAllocationPolicyDocument m_natFcaPolicyDocument;

  InstanceFlexCostAllocationPolicyDocument m_instanceFcaPolicyDocument;

  PcxFlexCostAllocationPolicyDocument m_pcxFcaPolicyDocument;

  bool m_showBackEnabled{false};

  Aws::String m_description;

  Aws::Utils::DateTime m_expectedEffectiveAt{};

  Aws::Utils::DateTime m_createdAt{};
  bool m_fcaPolicyIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_networkResourceTypeHasBeenSet = false;
  bool m_natFcaPolicyDocumentHasBeenSet = false;
  bool m_instanceFcaPolicyDocumentHasBeenSet = false;
  bool m_pcxFcaPolicyDocumentHasBeenSet = false;
  bool m_showBackEnabledHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_expectedEffectiveAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
