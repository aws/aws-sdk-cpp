/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationAssociationMode.h>
#include <aws/ec2/model/ManagedBy.h>

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
 * <p>Describes an association between a flex cost allocation policy and a network
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FlexCostAllocationPolicyAssociationDescription">AWS
 * API Reference</a></p>
 */
class FlexCostAllocationPolicyAssociationDescription {
 public:
  AWS_EC2_API FlexCostAllocationPolicyAssociationDescription() = default;
  AWS_EC2_API FlexCostAllocationPolicyAssociationDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API FlexCostAllocationPolicyAssociationDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the policy association.</p>
   */
  inline const Aws::String& GetFcaPolicyAssociationId() const { return m_fcaPolicyAssociationId; }
  inline bool FcaPolicyAssociationIdHasBeenSet() const { return m_fcaPolicyAssociationIdHasBeenSet; }
  template <typename FcaPolicyAssociationIdT = Aws::String>
  void SetFcaPolicyAssociationId(FcaPolicyAssociationIdT&& value) {
    m_fcaPolicyAssociationIdHasBeenSet = true;
    m_fcaPolicyAssociationId = std::forward<FcaPolicyAssociationIdT>(value);
  }
  template <typename FcaPolicyAssociationIdT = Aws::String>
  FlexCostAllocationPolicyAssociationDescription& WithFcaPolicyAssociationId(FcaPolicyAssociationIdT&& value) {
    SetFcaPolicyAssociationId(std::forward<FcaPolicyAssociationIdT>(value));
    return *this;
  }
  ///@}

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
  FlexCostAllocationPolicyAssociationDescription& WithFcaPolicyId(FcaPolicyIdT&& value) {
    SetFcaPolicyId(std::forward<FcaPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the associated network resource.</p>
   */
  inline const Aws::String& GetNetworkResourceId() const { return m_networkResourceId; }
  inline bool NetworkResourceIdHasBeenSet() const { return m_networkResourceIdHasBeenSet; }
  template <typename NetworkResourceIdT = Aws::String>
  void SetNetworkResourceId(NetworkResourceIdT&& value) {
    m_networkResourceIdHasBeenSet = true;
    m_networkResourceId = std::forward<NetworkResourceIdT>(value);
  }
  template <typename NetworkResourceIdT = Aws::String>
  FlexCostAllocationPolicyAssociationDescription& WithNetworkResourceId(NetworkResourceIdT&& value) {
    SetNetworkResourceId(std::forward<NetworkResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the account that owns the association.</p>
   */
  inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
  inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
  template <typename OwnerAccountT = Aws::String>
  void SetOwnerAccount(OwnerAccountT&& value) {
    m_ownerAccountHasBeenSet = true;
    m_ownerAccount = std::forward<OwnerAccountT>(value);
  }
  template <typename OwnerAccountT = Aws::String>
  FlexCostAllocationPolicyAssociationDescription& WithOwnerAccount(OwnerAccountT&& value) {
    SetOwnerAccount(std::forward<OwnerAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the association was created.</p>
   */
  inline const Aws::Utils::DateTime& GetAssociatedAt() const { return m_associatedAt; }
  inline bool AssociatedAtHasBeenSet() const { return m_associatedAtHasBeenSet; }
  template <typename AssociatedAtT = Aws::Utils::DateTime>
  void SetAssociatedAt(AssociatedAtT&& value) {
    m_associatedAtHasBeenSet = true;
    m_associatedAt = std::forward<AssociatedAtT>(value);
  }
  template <typename AssociatedAtT = Aws::Utils::DateTime>
  FlexCostAllocationPolicyAssociationDescription& WithAssociatedAt(AssociatedAtT&& value) {
    SetAssociatedAt(std::forward<AssociatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the association is expected to apply to network
   * traffic.</p>
   */
  inline const Aws::Utils::DateTime& GetExpectedEffectiveAt() const { return m_expectedEffectiveAt; }
  inline bool ExpectedEffectiveAtHasBeenSet() const { return m_expectedEffectiveAtHasBeenSet; }
  template <typename ExpectedEffectiveAtT = Aws::Utils::DateTime>
  void SetExpectedEffectiveAt(ExpectedEffectiveAtT&& value) {
    m_expectedEffectiveAtHasBeenSet = true;
    m_expectedEffectiveAt = std::forward<ExpectedEffectiveAtT>(value);
  }
  template <typename ExpectedEffectiveAtT = Aws::Utils::DateTime>
  FlexCostAllocationPolicyAssociationDescription& WithExpectedEffectiveAt(ExpectedEffectiveAtT&& value) {
    SetExpectedEffectiveAt(std::forward<ExpectedEffectiveAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode of the association. Valid values:</p> <ul> <li> <p>
   * <code>direct</code> - The policy is associated with specific resources by
   * resource ID.</p> </li> <li> <p> <code>scope</code> - The policy is associated
   * with a scope of resources in an account, Amazon VPC, or subnet.</p> </li> </ul>
   */
  inline FlexCostAllocationAssociationMode GetAssociationMode() const { return m_associationMode; }
  inline bool AssociationModeHasBeenSet() const { return m_associationModeHasBeenSet; }
  inline void SetAssociationMode(FlexCostAllocationAssociationMode value) {
    m_associationModeHasBeenSet = true;
    m_associationMode = value;
  }
  inline FlexCostAllocationPolicyAssociationDescription& WithAssociationMode(FlexCostAllocationAssociationMode value) {
    SetAssociationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that manages the association. Valid values are:</p> <ul> <li> <p>
   * <code>account</code> - The account that owns the association created it.</p>
   * </li> <li> <p> <code>declarative-policy</code> - An Amazon Web Services
   * Organizations declarative policy created the association. You can't remove the
   * association.</p> </li> </ul>
   */
  inline ManagedBy GetManagedBy() const { return m_managedBy; }
  inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
  inline void SetManagedBy(ManagedBy value) {
    m_managedByHasBeenSet = true;
    m_managedBy = value;
  }
  inline FlexCostAllocationPolicyAssociationDescription& WithManagedBy(ManagedBy value) {
    SetManagedBy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fcaPolicyAssociationId;

  Aws::String m_fcaPolicyId;

  Aws::String m_networkResourceId;

  Aws::String m_ownerAccount;

  Aws::Utils::DateTime m_associatedAt{};

  Aws::Utils::DateTime m_expectedEffectiveAt{};

  FlexCostAllocationAssociationMode m_associationMode{FlexCostAllocationAssociationMode::NOT_SET};

  ManagedBy m_managedBy{ManagedBy::NOT_SET};
  bool m_fcaPolicyAssociationIdHasBeenSet = false;
  bool m_fcaPolicyIdHasBeenSet = false;
  bool m_networkResourceIdHasBeenSet = false;
  bool m_ownerAccountHasBeenSet = false;
  bool m_associatedAtHasBeenSet = false;
  bool m_expectedEffectiveAtHasBeenSet = false;
  bool m_associationModeHasBeenSet = false;
  bool m_managedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
