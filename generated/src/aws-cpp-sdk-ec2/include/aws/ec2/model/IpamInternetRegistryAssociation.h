/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamInternetRegistryAssociationState.h>
#include <aws/ec2/model/Rir.h>
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
 * <p>Contains information about an association between an IPAM and a Regional
 * Internet Registry (RIR) for delegated RPKI management.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamInternetRegistryAssociation">AWS
 * API Reference</a></p>
 */
class IpamInternetRegistryAssociation {
 public:
  AWS_EC2_API IpamInternetRegistryAssociation() = default;
  AWS_EC2_API IpamInternetRegistryAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamInternetRegistryAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the internet registry
   * association.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  IpamInternetRegistryAssociation& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the internet registry association.</p>
   */
  inline const Aws::String& GetIpamInternetRegistryAssociationId() const { return m_ipamInternetRegistryAssociationId; }
  inline bool IpamInternetRegistryAssociationIdHasBeenSet() const { return m_ipamInternetRegistryAssociationIdHasBeenSet; }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  void SetIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    m_ipamInternetRegistryAssociationIdHasBeenSet = true;
    m_ipamInternetRegistryAssociationId = std::forward<IpamInternetRegistryAssociationIdT>(value);
  }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  IpamInternetRegistryAssociation& WithIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    SetIpamInternetRegistryAssociationId(std::forward<IpamInternetRegistryAssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the internet registry association.</p>
   */
  inline const Aws::String& GetIpamInternetRegistryAssociationArn() const { return m_ipamInternetRegistryAssociationArn; }
  inline bool IpamInternetRegistryAssociationArnHasBeenSet() const { return m_ipamInternetRegistryAssociationArnHasBeenSet; }
  template <typename IpamInternetRegistryAssociationArnT = Aws::String>
  void SetIpamInternetRegistryAssociationArn(IpamInternetRegistryAssociationArnT&& value) {
    m_ipamInternetRegistryAssociationArnHasBeenSet = true;
    m_ipamInternetRegistryAssociationArn = std::forward<IpamInternetRegistryAssociationArnT>(value);
  }
  template <typename IpamInternetRegistryAssociationArnT = Aws::String>
  IpamInternetRegistryAssociation& WithIpamInternetRegistryAssociationArn(IpamInternetRegistryAssociationArnT&& value) {
    SetIpamInternetRegistryAssociationArn(std::forward<IpamInternetRegistryAssociationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the associated IPAM.</p>
   */
  inline const Aws::String& GetIpamId() const { return m_ipamId; }
  inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
  template <typename IpamIdT = Aws::String>
  void SetIpamId(IpamIdT&& value) {
    m_ipamIdHasBeenSet = true;
    m_ipamId = std::forward<IpamIdT>(value);
  }
  template <typename IpamIdT = Aws::String>
  IpamInternetRegistryAssociation& WithIpamId(IpamIdT&& value) {
    SetIpamId(std::forward<IpamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region of the IPAM.</p>
   */
  inline const Aws::String& GetIpamRegion() const { return m_ipamRegion; }
  inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
  template <typename IpamRegionT = Aws::String>
  void SetIpamRegion(IpamRegionT&& value) {
    m_ipamRegionHasBeenSet = true;
    m_ipamRegion = std::forward<IpamRegionT>(value);
  }
  template <typename IpamRegionT = Aws::String>
  IpamInternetRegistryAssociation& WithIpamRegion(IpamRegionT&& value) {
    SetIpamRegion(std::forward<IpamRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Regional Internet Registry. Possible values:</p> <ul> <li> <p>
   * <code>ripe</code> - RIPE NCC (Europe, the Middle East, and Central Asia).</p>
   * </li> <li> <p> <code>apnic</code> - APNIC (Asia Pacific).</p> </li> <li> <p>
   * <code>arin</code> - ARIN (North America).</p> </li> <li> <p> <code>lacnic</code>
   * - LACNIC (Latin America and the Caribbean).</p> </li> </ul>
   */
  inline Rir GetRir() const { return m_rir; }
  inline bool RirHasBeenSet() const { return m_rirHasBeenSet; }
  inline void SetRir(Rir value) {
    m_rirHasBeenSet = true;
    m_rir = value;
  }
  inline IpamInternetRegistryAssociation& WithRir(Rir value) {
    SetRir(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organization handle at the internet registry.</p>
   */
  inline const Aws::String& GetOrganizationHandle() const { return m_organizationHandle; }
  inline bool OrganizationHandleHasBeenSet() const { return m_organizationHandleHasBeenSet; }
  template <typename OrganizationHandleT = Aws::String>
  void SetOrganizationHandle(OrganizationHandleT&& value) {
    m_organizationHandleHasBeenSet = true;
    m_organizationHandle = std::forward<OrganizationHandleT>(value);
  }
  template <typename OrganizationHandleT = Aws::String>
  IpamInternetRegistryAssociation& WithOrganizationHandle(OrganizationHandleT&& value) {
    SetOrganizationHandle(std::forward<OrganizationHandleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the internet registry association.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  IpamInternetRegistryAssociation& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the internet registry association. Valid values:
   * <code>pending-activation</code> | <code>pending-enable</code> |
   * <code>create-in-progress</code> | <code>create-failed</code> |
   * <code>enable-in-progress</code> | <code>enable-complete</code> |
   * <code>enable-failed</code> | <code>delete-in-progress</code> |
   * <code>delete-complete</code> | <code>delete-failed</code>.</p>
   */
  inline IpamInternetRegistryAssociationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(IpamInternetRegistryAssociationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline IpamInternetRegistryAssociation& WithState(IpamInternetRegistryAssociationState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the current state of the internet registry association,
   * including additional details such as the reason for a failure.</p>
   */
  inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
  inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
  template <typename StateMessageT = Aws::String>
  void SetStateMessage(StateMessageT&& value) {
    m_stateMessageHasBeenSet = true;
    m_stateMessage = std::forward<StateMessageT>(value);
  }
  template <typename StateMessageT = Aws::String>
  IpamInternetRegistryAssociation& WithStateMessage(StateMessageT&& value) {
    SetStateMessage(std::forward<StateMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The XML content for the child request to be submitted to the internet
   * registry to complete the BPKI setup.</p>
   */
  inline const Aws::String& GetChildRequestXml() const { return m_childRequestXml; }
  inline bool ChildRequestXmlHasBeenSet() const { return m_childRequestXmlHasBeenSet; }
  template <typename ChildRequestXmlT = Aws::String>
  void SetChildRequestXml(ChildRequestXmlT&& value) {
    m_childRequestXmlHasBeenSet = true;
    m_childRequestXml = std::forward<ChildRequestXmlT>(value);
  }
  template <typename ChildRequestXmlT = Aws::String>
  IpamInternetRegistryAssociation& WithChildRequestXml(ChildRequestXmlT&& value) {
    SetChildRequestXml(std::forward<ChildRequestXmlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the internet registry association.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  IpamInternetRegistryAssociation& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  IpamInternetRegistryAssociation& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ownerId;

  Aws::String m_ipamInternetRegistryAssociationId;

  Aws::String m_ipamInternetRegistryAssociationArn;

  Aws::String m_ipamId;

  Aws::String m_ipamRegion;

  Rir m_rir{Rir::NOT_SET};

  Aws::String m_organizationHandle;

  Aws::String m_description;

  IpamInternetRegistryAssociationState m_state{IpamInternetRegistryAssociationState::NOT_SET};

  Aws::String m_stateMessage;

  Aws::String m_childRequestXml;

  Aws::Vector<Tag> m_tags;
  bool m_ownerIdHasBeenSet = false;
  bool m_ipamInternetRegistryAssociationIdHasBeenSet = false;
  bool m_ipamInternetRegistryAssociationArnHasBeenSet = false;
  bool m_ipamIdHasBeenSet = false;
  bool m_ipamRegionHasBeenSet = false;
  bool m_rirHasBeenSet = false;
  bool m_organizationHandleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateMessageHasBeenSet = false;
  bool m_childRequestXmlHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
