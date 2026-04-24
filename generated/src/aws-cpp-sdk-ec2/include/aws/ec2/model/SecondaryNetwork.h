/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SecondaryNetworkIpv4CidrBlockAssociation.h>
#include <aws/ec2/model/SecondaryNetworkState.h>
#include <aws/ec2/model/SecondaryNetworkType.h>
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
 * <p>Describes a secondary network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecondaryNetwork">AWS
 * API Reference</a></p>
 */
class SecondaryNetwork {
 public:
  AWS_EC2_API SecondaryNetwork() = default;
  AWS_EC2_API SecondaryNetwork(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SecondaryNetwork& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

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
  SecondaryNetwork& WithSecondaryNetworkId(SecondaryNetworkIdT&& value) {
    SetSecondaryNetworkId(std::forward<SecondaryNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the secondary network.</p>
   */
  inline const Aws::String& GetSecondaryNetworkArn() const { return m_secondaryNetworkArn; }
  inline bool SecondaryNetworkArnHasBeenSet() const { return m_secondaryNetworkArnHasBeenSet; }
  template <typename SecondaryNetworkArnT = Aws::String>
  void SetSecondaryNetworkArn(SecondaryNetworkArnT&& value) {
    m_secondaryNetworkArnHasBeenSet = true;
    m_secondaryNetworkArn = std::forward<SecondaryNetworkArnT>(value);
  }
  template <typename SecondaryNetworkArnT = Aws::String>
  SecondaryNetwork& WithSecondaryNetworkArn(SecondaryNetworkArnT&& value) {
    SetSecondaryNetworkArn(std::forward<SecondaryNetworkArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the secondary
   * network.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  SecondaryNetwork& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the secondary network.</p>
   */
  inline SecondaryNetworkType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SecondaryNetworkType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SecondaryNetwork& WithType(SecondaryNetworkType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the secondary network.</p>
   */
  inline SecondaryNetworkState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(SecondaryNetworkState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline SecondaryNetwork& WithState(SecondaryNetworkState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the secondary network.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  SecondaryNetwork& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the IPv4 CIDR blocks associated with the secondary
   * network.</p>
   */
  inline const Aws::Vector<SecondaryNetworkIpv4CidrBlockAssociation>& GetIpv4CidrBlockAssociations() const {
    return m_ipv4CidrBlockAssociations;
  }
  inline bool Ipv4CidrBlockAssociationsHasBeenSet() const { return m_ipv4CidrBlockAssociationsHasBeenSet; }
  template <typename Ipv4CidrBlockAssociationsT = Aws::Vector<SecondaryNetworkIpv4CidrBlockAssociation>>
  void SetIpv4CidrBlockAssociations(Ipv4CidrBlockAssociationsT&& value) {
    m_ipv4CidrBlockAssociationsHasBeenSet = true;
    m_ipv4CidrBlockAssociations = std::forward<Ipv4CidrBlockAssociationsT>(value);
  }
  template <typename Ipv4CidrBlockAssociationsT = Aws::Vector<SecondaryNetworkIpv4CidrBlockAssociation>>
  SecondaryNetwork& WithIpv4CidrBlockAssociations(Ipv4CidrBlockAssociationsT&& value) {
    SetIpv4CidrBlockAssociations(std::forward<Ipv4CidrBlockAssociationsT>(value));
    return *this;
  }
  template <typename Ipv4CidrBlockAssociationsT = SecondaryNetworkIpv4CidrBlockAssociation>
  SecondaryNetwork& AddIpv4CidrBlockAssociations(Ipv4CidrBlockAssociationsT&& value) {
    m_ipv4CidrBlockAssociationsHasBeenSet = true;
    m_ipv4CidrBlockAssociations.emplace_back(std::forward<Ipv4CidrBlockAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the secondary network.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  SecondaryNetwork& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  SecondaryNetwork& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secondaryNetworkId;

  Aws::String m_secondaryNetworkArn;

  Aws::String m_ownerId;

  SecondaryNetworkType m_type{SecondaryNetworkType::NOT_SET};

  SecondaryNetworkState m_state{SecondaryNetworkState::NOT_SET};

  Aws::String m_stateReason;

  Aws::Vector<SecondaryNetworkIpv4CidrBlockAssociation> m_ipv4CidrBlockAssociations;

  Aws::Vector<Tag> m_tags;
  bool m_secondaryNetworkIdHasBeenSet = false;
  bool m_secondaryNetworkArnHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_ipv4CidrBlockAssociationsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
