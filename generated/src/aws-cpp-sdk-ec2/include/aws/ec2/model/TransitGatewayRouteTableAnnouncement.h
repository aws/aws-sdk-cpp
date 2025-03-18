/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayRouteTableAnnouncementDirection.h>
#include <aws/ec2/model/TransitGatewayRouteTableAnnouncementState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a transit gateway route table announcement.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayRouteTableAnnouncement">AWS
   * API Reference</a></p>
   */
  class TransitGatewayRouteTableAnnouncement
  {
  public:
    AWS_EC2_API TransitGatewayRouteTableAnnouncement() = default;
    AWS_EC2_API TransitGatewayRouteTableAnnouncement(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayRouteTableAnnouncement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableAnnouncementId() const { return m_transitGatewayRouteTableAnnouncementId; }
    inline bool TransitGatewayRouteTableAnnouncementIdHasBeenSet() const { return m_transitGatewayRouteTableAnnouncementIdHasBeenSet; }
    template<typename TransitGatewayRouteTableAnnouncementIdT = Aws::String>
    void SetTransitGatewayRouteTableAnnouncementId(TransitGatewayRouteTableAnnouncementIdT&& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = std::forward<TransitGatewayRouteTableAnnouncementIdT>(value); }
    template<typename TransitGatewayRouteTableAnnouncementIdT = Aws::String>
    TransitGatewayRouteTableAnnouncement& WithTransitGatewayRouteTableAnnouncementId(TransitGatewayRouteTableAnnouncementIdT&& value) { SetTransitGatewayRouteTableAnnouncementId(std::forward<TransitGatewayRouteTableAnnouncementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    TransitGatewayRouteTableAnnouncement& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the core network for the transit gateway route table
     * announcement.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    template<typename CoreNetworkIdT = Aws::String>
    void SetCoreNetworkId(CoreNetworkIdT&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::forward<CoreNetworkIdT>(value); }
    template<typename CoreNetworkIdT = Aws::String>
    TransitGatewayRouteTableAnnouncement& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the peer transit gateway.</p>
     */
    inline const Aws::String& GetPeerTransitGatewayId() const { return m_peerTransitGatewayId; }
    inline bool PeerTransitGatewayIdHasBeenSet() const { return m_peerTransitGatewayIdHasBeenSet; }
    template<typename PeerTransitGatewayIdT = Aws::String>
    void SetPeerTransitGatewayId(PeerTransitGatewayIdT&& value) { m_peerTransitGatewayIdHasBeenSet = true; m_peerTransitGatewayId = std::forward<PeerTransitGatewayIdT>(value); }
    template<typename PeerTransitGatewayIdT = Aws::String>
    TransitGatewayRouteTableAnnouncement& WithPeerTransitGatewayId(PeerTransitGatewayIdT&& value) { SetPeerTransitGatewayId(std::forward<PeerTransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the core network ID for the peer.</p>
     */
    inline const Aws::String& GetPeerCoreNetworkId() const { return m_peerCoreNetworkId; }
    inline bool PeerCoreNetworkIdHasBeenSet() const { return m_peerCoreNetworkIdHasBeenSet; }
    template<typename PeerCoreNetworkIdT = Aws::String>
    void SetPeerCoreNetworkId(PeerCoreNetworkIdT&& value) { m_peerCoreNetworkIdHasBeenSet = true; m_peerCoreNetworkId = std::forward<PeerCoreNetworkIdT>(value); }
    template<typename PeerCoreNetworkIdT = Aws::String>
    TransitGatewayRouteTableAnnouncement& WithPeerCoreNetworkId(PeerCoreNetworkIdT&& value) { SetPeerCoreNetworkId(std::forward<PeerCoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline const Aws::String& GetPeeringAttachmentId() const { return m_peeringAttachmentId; }
    inline bool PeeringAttachmentIdHasBeenSet() const { return m_peeringAttachmentIdHasBeenSet; }
    template<typename PeeringAttachmentIdT = Aws::String>
    void SetPeeringAttachmentId(PeeringAttachmentIdT&& value) { m_peeringAttachmentIdHasBeenSet = true; m_peeringAttachmentId = std::forward<PeeringAttachmentIdT>(value); }
    template<typename PeeringAttachmentIdT = Aws::String>
    TransitGatewayRouteTableAnnouncement& WithPeeringAttachmentId(PeeringAttachmentIdT&& value) { SetPeeringAttachmentId(std::forward<PeeringAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction for the route table announcement.</p>
     */
    inline TransitGatewayRouteTableAnnouncementDirection GetAnnouncementDirection() const { return m_announcementDirection; }
    inline bool AnnouncementDirectionHasBeenSet() const { return m_announcementDirectionHasBeenSet; }
    inline void SetAnnouncementDirection(TransitGatewayRouteTableAnnouncementDirection value) { m_announcementDirectionHasBeenSet = true; m_announcementDirection = value; }
    inline TransitGatewayRouteTableAnnouncement& WithAnnouncementDirection(TransitGatewayRouteTableAnnouncementDirection value) { SetAnnouncementDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const { return m_transitGatewayRouteTableId; }
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }
    template<typename TransitGatewayRouteTableIdT = Aws::String>
    void SetTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::forward<TransitGatewayRouteTableIdT>(value); }
    template<typename TransitGatewayRouteTableIdT = Aws::String>
    TransitGatewayRouteTableAnnouncement& WithTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) { SetTransitGatewayRouteTableId(std::forward<TransitGatewayRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the transit gateway announcement.</p>
     */
    inline TransitGatewayRouteTableAnnouncementState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayRouteTableAnnouncementState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayRouteTableAnnouncement& WithState(TransitGatewayRouteTableAnnouncementState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the transit gateway route table announcement was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TransitGatewayRouteTableAnnouncement& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pairs associated with the route table announcement.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TransitGatewayRouteTableAnnouncement& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TransitGatewayRouteTableAnnouncement& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayRouteTableAnnouncementId;
    bool m_transitGatewayRouteTableAnnouncementIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_peerTransitGatewayId;
    bool m_peerTransitGatewayIdHasBeenSet = false;

    Aws::String m_peerCoreNetworkId;
    bool m_peerCoreNetworkIdHasBeenSet = false;

    Aws::String m_peeringAttachmentId;
    bool m_peeringAttachmentIdHasBeenSet = false;

    TransitGatewayRouteTableAnnouncementDirection m_announcementDirection{TransitGatewayRouteTableAnnouncementDirection::NOT_SET};
    bool m_announcementDirectionHasBeenSet = false;

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    TransitGatewayRouteTableAnnouncementState m_state{TransitGatewayRouteTableAnnouncementState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
