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
    AWS_EC2_API TransitGatewayRouteTableAnnouncement();
    AWS_EC2_API TransitGatewayRouteTableAnnouncement(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayRouteTableAnnouncement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableAnnouncementId() const{ return m_transitGatewayRouteTableAnnouncementId; }
    inline bool TransitGatewayRouteTableAnnouncementIdHasBeenSet() const { return m_transitGatewayRouteTableAnnouncementIdHasBeenSet; }
    inline void SetTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = value; }
    inline void SetTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = std::move(value); }
    inline void SetTransitGatewayRouteTableAnnouncementId(const char* value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId.assign(value); }
    inline TransitGatewayRouteTableAnnouncement& WithTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { SetTransitGatewayRouteTableAnnouncementId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithTransitGatewayRouteTableAnnouncementId(const char* value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }
    inline TransitGatewayRouteTableAnnouncement& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the core network for the transit gateway route table
     * announcement.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }
    inline TransitGatewayRouteTableAnnouncement& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the peer transit gateway.</p>
     */
    inline const Aws::String& GetPeerTransitGatewayId() const{ return m_peerTransitGatewayId; }
    inline bool PeerTransitGatewayIdHasBeenSet() const { return m_peerTransitGatewayIdHasBeenSet; }
    inline void SetPeerTransitGatewayId(const Aws::String& value) { m_peerTransitGatewayIdHasBeenSet = true; m_peerTransitGatewayId = value; }
    inline void SetPeerTransitGatewayId(Aws::String&& value) { m_peerTransitGatewayIdHasBeenSet = true; m_peerTransitGatewayId = std::move(value); }
    inline void SetPeerTransitGatewayId(const char* value) { m_peerTransitGatewayIdHasBeenSet = true; m_peerTransitGatewayId.assign(value); }
    inline TransitGatewayRouteTableAnnouncement& WithPeerTransitGatewayId(const Aws::String& value) { SetPeerTransitGatewayId(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithPeerTransitGatewayId(Aws::String&& value) { SetPeerTransitGatewayId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithPeerTransitGatewayId(const char* value) { SetPeerTransitGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the core network ID for the peer.</p>
     */
    inline const Aws::String& GetPeerCoreNetworkId() const{ return m_peerCoreNetworkId; }
    inline bool PeerCoreNetworkIdHasBeenSet() const { return m_peerCoreNetworkIdHasBeenSet; }
    inline void SetPeerCoreNetworkId(const Aws::String& value) { m_peerCoreNetworkIdHasBeenSet = true; m_peerCoreNetworkId = value; }
    inline void SetPeerCoreNetworkId(Aws::String&& value) { m_peerCoreNetworkIdHasBeenSet = true; m_peerCoreNetworkId = std::move(value); }
    inline void SetPeerCoreNetworkId(const char* value) { m_peerCoreNetworkIdHasBeenSet = true; m_peerCoreNetworkId.assign(value); }
    inline TransitGatewayRouteTableAnnouncement& WithPeerCoreNetworkId(const Aws::String& value) { SetPeerCoreNetworkId(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithPeerCoreNetworkId(Aws::String&& value) { SetPeerCoreNetworkId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithPeerCoreNetworkId(const char* value) { SetPeerCoreNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline const Aws::String& GetPeeringAttachmentId() const{ return m_peeringAttachmentId; }
    inline bool PeeringAttachmentIdHasBeenSet() const { return m_peeringAttachmentIdHasBeenSet; }
    inline void SetPeeringAttachmentId(const Aws::String& value) { m_peeringAttachmentIdHasBeenSet = true; m_peeringAttachmentId = value; }
    inline void SetPeeringAttachmentId(Aws::String&& value) { m_peeringAttachmentIdHasBeenSet = true; m_peeringAttachmentId = std::move(value); }
    inline void SetPeeringAttachmentId(const char* value) { m_peeringAttachmentIdHasBeenSet = true; m_peeringAttachmentId.assign(value); }
    inline TransitGatewayRouteTableAnnouncement& WithPeeringAttachmentId(const Aws::String& value) { SetPeeringAttachmentId(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithPeeringAttachmentId(Aws::String&& value) { SetPeeringAttachmentId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithPeeringAttachmentId(const char* value) { SetPeeringAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction for the route table announcement.</p>
     */
    inline const TransitGatewayRouteTableAnnouncementDirection& GetAnnouncementDirection() const{ return m_announcementDirection; }
    inline bool AnnouncementDirectionHasBeenSet() const { return m_announcementDirectionHasBeenSet; }
    inline void SetAnnouncementDirection(const TransitGatewayRouteTableAnnouncementDirection& value) { m_announcementDirectionHasBeenSet = true; m_announcementDirection = value; }
    inline void SetAnnouncementDirection(TransitGatewayRouteTableAnnouncementDirection&& value) { m_announcementDirectionHasBeenSet = true; m_announcementDirection = std::move(value); }
    inline TransitGatewayRouteTableAnnouncement& WithAnnouncementDirection(const TransitGatewayRouteTableAnnouncementDirection& value) { SetAnnouncementDirection(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithAnnouncementDirection(TransitGatewayRouteTableAnnouncementDirection&& value) { SetAnnouncementDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }
    inline TransitGatewayRouteTableAnnouncement& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the transit gateway announcement.</p>
     */
    inline const TransitGatewayRouteTableAnnouncementState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayRouteTableAnnouncementState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayRouteTableAnnouncementState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TransitGatewayRouteTableAnnouncement& WithState(const TransitGatewayRouteTableAnnouncementState& value) { SetState(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithState(TransitGatewayRouteTableAnnouncementState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the transit gateway route table announcement was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TransitGatewayRouteTableAnnouncement& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pairs associated with the route table announcement.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TransitGatewayRouteTableAnnouncement& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TransitGatewayRouteTableAnnouncement& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TransitGatewayRouteTableAnnouncement& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TransitGatewayRouteTableAnnouncement& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    TransitGatewayRouteTableAnnouncementDirection m_announcementDirection;
    bool m_announcementDirectionHasBeenSet = false;

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    TransitGatewayRouteTableAnnouncementState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
