/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SecondaryNetworkType.h>
#include <aws/ec2/model/SecondarySubnetIpv4CidrBlockAssociation.h>
#include <aws/ec2/model/SecondarySubnetState.h>
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
 * <p>Describes a secondary subnet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecondarySubnet">AWS
 * API Reference</a></p>
 */
class SecondarySubnet {
 public:
  AWS_EC2_API SecondarySubnet() = default;
  AWS_EC2_API SecondarySubnet(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SecondarySubnet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the secondary subnet.</p>
   */
  inline const Aws::String& GetSecondarySubnetId() const { return m_secondarySubnetId; }
  inline bool SecondarySubnetIdHasBeenSet() const { return m_secondarySubnetIdHasBeenSet; }
  template <typename SecondarySubnetIdT = Aws::String>
  void SetSecondarySubnetId(SecondarySubnetIdT&& value) {
    m_secondarySubnetIdHasBeenSet = true;
    m_secondarySubnetId = std::forward<SecondarySubnetIdT>(value);
  }
  template <typename SecondarySubnetIdT = Aws::String>
  SecondarySubnet& WithSecondarySubnetId(SecondarySubnetIdT&& value) {
    SetSecondarySubnetId(std::forward<SecondarySubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the secondary subnet.</p>
   */
  inline const Aws::String& GetSecondarySubnetArn() const { return m_secondarySubnetArn; }
  inline bool SecondarySubnetArnHasBeenSet() const { return m_secondarySubnetArnHasBeenSet; }
  template <typename SecondarySubnetArnT = Aws::String>
  void SetSecondarySubnetArn(SecondarySubnetArnT&& value) {
    m_secondarySubnetArnHasBeenSet = true;
    m_secondarySubnetArn = std::forward<SecondarySubnetArnT>(value);
  }
  template <typename SecondarySubnetArnT = Aws::String>
  SecondarySubnet& WithSecondarySubnetArn(SecondarySubnetArnT&& value) {
    SetSecondarySubnetArn(std::forward<SecondarySubnetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the secondary network.</p>
   */
  inline const Aws::String& GetSecondaryNetworkId() const { return m_secondaryNetworkId; }
  inline bool SecondaryNetworkIdHasBeenSet() const { return m_secondaryNetworkIdHasBeenSet; }
  template <typename SecondaryNetworkIdT = Aws::String>
  void SetSecondaryNetworkId(SecondaryNetworkIdT&& value) {
    m_secondaryNetworkIdHasBeenSet = true;
    m_secondaryNetworkId = std::forward<SecondaryNetworkIdT>(value);
  }
  template <typename SecondaryNetworkIdT = Aws::String>
  SecondarySubnet& WithSecondaryNetworkId(SecondaryNetworkIdT&& value) {
    SetSecondaryNetworkId(std::forward<SecondaryNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the secondary network.</p>
   */
  inline SecondaryNetworkType GetSecondaryNetworkType() const { return m_secondaryNetworkType; }
  inline bool SecondaryNetworkTypeHasBeenSet() const { return m_secondaryNetworkTypeHasBeenSet; }
  inline void SetSecondaryNetworkType(SecondaryNetworkType value) {
    m_secondaryNetworkTypeHasBeenSet = true;
    m_secondaryNetworkType = value;
  }
  inline SecondarySubnet& WithSecondaryNetworkType(SecondaryNetworkType value) {
    SetSecondaryNetworkType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the secondary subnet.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  SecondarySubnet& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone of the secondary subnet.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  SecondarySubnet& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone of the secondary subnet.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  SecondarySubnet& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the IPv4 CIDR blocks associated with the secondary
   * subnet.</p>
   */
  inline const Aws::Vector<SecondarySubnetIpv4CidrBlockAssociation>& GetIpv4CidrBlockAssociations() const {
    return m_ipv4CidrBlockAssociations;
  }
  inline bool Ipv4CidrBlockAssociationsHasBeenSet() const { return m_ipv4CidrBlockAssociationsHasBeenSet; }
  template <typename Ipv4CidrBlockAssociationsT = Aws::Vector<SecondarySubnetIpv4CidrBlockAssociation>>
  void SetIpv4CidrBlockAssociations(Ipv4CidrBlockAssociationsT&& value) {
    m_ipv4CidrBlockAssociationsHasBeenSet = true;
    m_ipv4CidrBlockAssociations = std::forward<Ipv4CidrBlockAssociationsT>(value);
  }
  template <typename Ipv4CidrBlockAssociationsT = Aws::Vector<SecondarySubnetIpv4CidrBlockAssociation>>
  SecondarySubnet& WithIpv4CidrBlockAssociations(Ipv4CidrBlockAssociationsT&& value) {
    SetIpv4CidrBlockAssociations(std::forward<Ipv4CidrBlockAssociationsT>(value));
    return *this;
  }
  template <typename Ipv4CidrBlockAssociationsT = SecondarySubnetIpv4CidrBlockAssociation>
  SecondarySubnet& AddIpv4CidrBlockAssociations(Ipv4CidrBlockAssociationsT&& value) {
    m_ipv4CidrBlockAssociationsHasBeenSet = true;
    m_ipv4CidrBlockAssociations.emplace_back(std::forward<Ipv4CidrBlockAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the secondary subnet.</p>
   */
  inline SecondarySubnetState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(SecondarySubnetState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline SecondarySubnet& WithState(SecondarySubnetState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the secondary subnet.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  SecondarySubnet& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the secondary subnet.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  SecondarySubnet& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  SecondarySubnet& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secondarySubnetId;

  Aws::String m_secondarySubnetArn;

  Aws::String m_secondaryNetworkId;

  SecondaryNetworkType m_secondaryNetworkType{SecondaryNetworkType::NOT_SET};

  Aws::String m_ownerId;

  Aws::String m_availabilityZoneId;

  Aws::String m_availabilityZone;

  Aws::Vector<SecondarySubnetIpv4CidrBlockAssociation> m_ipv4CidrBlockAssociations;

  SecondarySubnetState m_state{SecondarySubnetState::NOT_SET};

  Aws::String m_stateReason;

  Aws::Vector<Tag> m_tags;
  bool m_secondarySubnetIdHasBeenSet = false;
  bool m_secondarySubnetArnHasBeenSet = false;
  bool m_secondaryNetworkIdHasBeenSet = false;
  bool m_secondaryNetworkTypeHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_ipv4CidrBlockAssociationsHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
