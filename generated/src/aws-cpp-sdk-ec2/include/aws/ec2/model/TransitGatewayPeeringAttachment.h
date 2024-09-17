/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PeeringTgwInfo.h>
#include <aws/ec2/model/TransitGatewayPeeringAttachmentOptions.h>
#include <aws/ec2/model/PeeringAttachmentStatus.h>
#include <aws/ec2/model/TransitGatewayAttachmentState.h>
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
   * <p>Describes the transit gateway peering attachment.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPeeringAttachment">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPeeringAttachment
  {
  public:
    AWS_EC2_API TransitGatewayPeeringAttachment();
    AWS_EC2_API TransitGatewayPeeringAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPeeringAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }
    inline TransitGatewayPeeringAttachment& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}
    inline TransitGatewayPeeringAttachment& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline TransitGatewayPeeringAttachment& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the accepter transit gateway attachment.</p>
     */
    inline const Aws::String& GetAccepterTransitGatewayAttachmentId() const{ return m_accepterTransitGatewayAttachmentId; }
    inline bool AccepterTransitGatewayAttachmentIdHasBeenSet() const { return m_accepterTransitGatewayAttachmentIdHasBeenSet; }
    inline void SetAccepterTransitGatewayAttachmentId(const Aws::String& value) { m_accepterTransitGatewayAttachmentIdHasBeenSet = true; m_accepterTransitGatewayAttachmentId = value; }
    inline void SetAccepterTransitGatewayAttachmentId(Aws::String&& value) { m_accepterTransitGatewayAttachmentIdHasBeenSet = true; m_accepterTransitGatewayAttachmentId = std::move(value); }
    inline void SetAccepterTransitGatewayAttachmentId(const char* value) { m_accepterTransitGatewayAttachmentIdHasBeenSet = true; m_accepterTransitGatewayAttachmentId.assign(value); }
    inline TransitGatewayPeeringAttachment& WithAccepterTransitGatewayAttachmentId(const Aws::String& value) { SetAccepterTransitGatewayAttachmentId(value); return *this;}
    inline TransitGatewayPeeringAttachment& WithAccepterTransitGatewayAttachmentId(Aws::String&& value) { SetAccepterTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline TransitGatewayPeeringAttachment& WithAccepterTransitGatewayAttachmentId(const char* value) { SetAccepterTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the requester transit gateway.</p>
     */
    inline const PeeringTgwInfo& GetRequesterTgwInfo() const{ return m_requesterTgwInfo; }
    inline bool RequesterTgwInfoHasBeenSet() const { return m_requesterTgwInfoHasBeenSet; }
    inline void SetRequesterTgwInfo(const PeeringTgwInfo& value) { m_requesterTgwInfoHasBeenSet = true; m_requesterTgwInfo = value; }
    inline void SetRequesterTgwInfo(PeeringTgwInfo&& value) { m_requesterTgwInfoHasBeenSet = true; m_requesterTgwInfo = std::move(value); }
    inline TransitGatewayPeeringAttachment& WithRequesterTgwInfo(const PeeringTgwInfo& value) { SetRequesterTgwInfo(value); return *this;}
    inline TransitGatewayPeeringAttachment& WithRequesterTgwInfo(PeeringTgwInfo&& value) { SetRequesterTgwInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the accepter transit gateway.</p>
     */
    inline const PeeringTgwInfo& GetAccepterTgwInfo() const{ return m_accepterTgwInfo; }
    inline bool AccepterTgwInfoHasBeenSet() const { return m_accepterTgwInfoHasBeenSet; }
    inline void SetAccepterTgwInfo(const PeeringTgwInfo& value) { m_accepterTgwInfoHasBeenSet = true; m_accepterTgwInfo = value; }
    inline void SetAccepterTgwInfo(PeeringTgwInfo&& value) { m_accepterTgwInfoHasBeenSet = true; m_accepterTgwInfo = std::move(value); }
    inline TransitGatewayPeeringAttachment& WithAccepterTgwInfo(const PeeringTgwInfo& value) { SetAccepterTgwInfo(value); return *this;}
    inline TransitGatewayPeeringAttachment& WithAccepterTgwInfo(PeeringTgwInfo&& value) { SetAccepterTgwInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the transit gateway peering attachment.</p>
     */
    inline const TransitGatewayPeeringAttachmentOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const TransitGatewayPeeringAttachmentOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(TransitGatewayPeeringAttachmentOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline TransitGatewayPeeringAttachment& WithOptions(const TransitGatewayPeeringAttachmentOptions& value) { SetOptions(value); return *this;}
    inline TransitGatewayPeeringAttachment& WithOptions(TransitGatewayPeeringAttachmentOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the transit gateway peering attachment.</p>
     */
    inline const PeeringAttachmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PeeringAttachmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PeeringAttachmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TransitGatewayPeeringAttachment& WithStatus(const PeeringAttachmentStatus& value) { SetStatus(value); return *this;}
    inline TransitGatewayPeeringAttachment& WithStatus(PeeringAttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the transit gateway peering attachment. Note that the
     * <code>initiating</code> state has been deprecated.</p>
     */
    inline const TransitGatewayAttachmentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayAttachmentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayAttachmentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TransitGatewayPeeringAttachment& WithState(const TransitGatewayAttachmentState& value) { SetState(value); return *this;}
    inline TransitGatewayPeeringAttachment& WithState(TransitGatewayAttachmentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the transit gateway peering attachment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TransitGatewayPeeringAttachment& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TransitGatewayPeeringAttachment& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the transit gateway peering attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TransitGatewayPeeringAttachment& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TransitGatewayPeeringAttachment& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TransitGatewayPeeringAttachment& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TransitGatewayPeeringAttachment& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_accepterTransitGatewayAttachmentId;
    bool m_accepterTransitGatewayAttachmentIdHasBeenSet = false;

    PeeringTgwInfo m_requesterTgwInfo;
    bool m_requesterTgwInfoHasBeenSet = false;

    PeeringTgwInfo m_accepterTgwInfo;
    bool m_accepterTgwInfoHasBeenSet = false;

    TransitGatewayPeeringAttachmentOptions m_options;
    bool m_optionsHasBeenSet = false;

    PeeringAttachmentStatus m_status;
    bool m_statusHasBeenSet = false;

    TransitGatewayAttachmentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
