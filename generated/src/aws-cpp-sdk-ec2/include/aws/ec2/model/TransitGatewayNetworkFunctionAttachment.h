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
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/TransitGatewayAttachmentState.h>

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
 * <p>Contains information about a transit gateway network function attachment,
 * including the attachment ID, the transit gateway, the endpoint service, the
 * Availability Zones, and the state of the attachment.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayNetworkFunctionAttachment">AWS
 * API Reference</a></p>
 */
class TransitGatewayNetworkFunctionAttachment {
 public:
  AWS_EC2_API TransitGatewayNetworkFunctionAttachment() = default;
  AWS_EC2_API TransitGatewayNetworkFunctionAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayNetworkFunctionAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the attachment.</p>
   */
  inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
  inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    m_transitGatewayAttachmentIdHasBeenSet = true;
    m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value);
  }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  TransitGatewayNetworkFunctionAttachment& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the transit gateway.</p>
   */
  inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
  inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
  template <typename TransitGatewayIdT = Aws::String>
  void SetTransitGatewayId(TransitGatewayIdT&& value) {
    m_transitGatewayIdHasBeenSet = true;
    m_transitGatewayId = std::forward<TransitGatewayIdT>(value);
  }
  template <typename TransitGatewayIdT = Aws::String>
  TransitGatewayNetworkFunctionAttachment& WithTransitGatewayId(TransitGatewayIdT&& value) {
    SetTransitGatewayId(std::forward<TransitGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
   */
  inline const Aws::String& GetTransitGatewayOwnerId() const { return m_transitGatewayOwnerId; }
  inline bool TransitGatewayOwnerIdHasBeenSet() const { return m_transitGatewayOwnerIdHasBeenSet; }
  template <typename TransitGatewayOwnerIdT = Aws::String>
  void SetTransitGatewayOwnerId(TransitGatewayOwnerIdT&& value) {
    m_transitGatewayOwnerIdHasBeenSet = true;
    m_transitGatewayOwnerId = std::forward<TransitGatewayOwnerIdT>(value);
  }
  template <typename TransitGatewayOwnerIdT = Aws::String>
  TransitGatewayNetworkFunctionAttachment& WithTransitGatewayOwnerId(TransitGatewayOwnerIdT&& value) {
    SetTransitGatewayOwnerId(std::forward<TransitGatewayOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the attachment.</p>
   */
  inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
  inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
  template <typename ResourceOwnerIdT = Aws::String>
  void SetResourceOwnerId(ResourceOwnerIdT&& value) {
    m_resourceOwnerIdHasBeenSet = true;
    m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value);
  }
  template <typename ResourceOwnerIdT = Aws::String>
  TransitGatewayNetworkFunctionAttachment& WithResourceOwnerId(ResourceOwnerIdT&& value) {
    SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Gateway Load Balancer endpoint service.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  TransitGatewayNetworkFunctionAttachment& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the Availability Zones for the attachment.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  TransitGatewayNetworkFunctionAttachment& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  TransitGatewayNetworkFunctionAttachment& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the Availability Zones for the attachment.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const { return m_availabilityZoneIds; }
  inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }
  template <typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  void SetAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    m_availabilityZoneIdsHasBeenSet = true;
    m_availabilityZoneIds = std::forward<AvailabilityZoneIdsT>(value);
  }
  template <typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  TransitGatewayNetworkFunctionAttachment& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value));
    return *this;
  }
  template <typename AvailabilityZoneIdsT = Aws::String>
  TransitGatewayNetworkFunctionAttachment& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    m_availabilityZoneIdsHasBeenSet = true;
    m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the attachment.</p>
   */
  inline TransitGatewayAttachmentState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(TransitGatewayAttachmentState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline TransitGatewayNetworkFunctionAttachment& WithState(TransitGatewayAttachmentState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the attachment was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  TransitGatewayNetworkFunctionAttachment& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags for the attachment.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  TransitGatewayNetworkFunctionAttachment& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  TransitGatewayNetworkFunctionAttachment& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayAttachmentId;

  Aws::String m_transitGatewayId;

  Aws::String m_transitGatewayOwnerId;

  Aws::String m_resourceOwnerId;

  Aws::String m_resourceId;

  Aws::Vector<Aws::String> m_availabilityZones;

  Aws::Vector<Aws::String> m_availabilityZoneIds;

  TransitGatewayAttachmentState m_state{TransitGatewayAttachmentState::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Vector<Tag> m_tags;
  bool m_transitGatewayAttachmentIdHasBeenSet = false;
  bool m_transitGatewayIdHasBeenSet = false;
  bool m_transitGatewayOwnerIdHasBeenSet = false;
  bool m_resourceOwnerIdHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_availabilityZoneIdsHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
