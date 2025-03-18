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
    AWS_EC2_API TransitGatewayPeeringAttachment() = default;
    AWS_EC2_API TransitGatewayPeeringAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPeeringAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    TransitGatewayPeeringAttachment& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the accepter transit gateway attachment.</p>
     */
    inline const Aws::String& GetAccepterTransitGatewayAttachmentId() const { return m_accepterTransitGatewayAttachmentId; }
    inline bool AccepterTransitGatewayAttachmentIdHasBeenSet() const { return m_accepterTransitGatewayAttachmentIdHasBeenSet; }
    template<typename AccepterTransitGatewayAttachmentIdT = Aws::String>
    void SetAccepterTransitGatewayAttachmentId(AccepterTransitGatewayAttachmentIdT&& value) { m_accepterTransitGatewayAttachmentIdHasBeenSet = true; m_accepterTransitGatewayAttachmentId = std::forward<AccepterTransitGatewayAttachmentIdT>(value); }
    template<typename AccepterTransitGatewayAttachmentIdT = Aws::String>
    TransitGatewayPeeringAttachment& WithAccepterTransitGatewayAttachmentId(AccepterTransitGatewayAttachmentIdT&& value) { SetAccepterTransitGatewayAttachmentId(std::forward<AccepterTransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the requester transit gateway.</p>
     */
    inline const PeeringTgwInfo& GetRequesterTgwInfo() const { return m_requesterTgwInfo; }
    inline bool RequesterTgwInfoHasBeenSet() const { return m_requesterTgwInfoHasBeenSet; }
    template<typename RequesterTgwInfoT = PeeringTgwInfo>
    void SetRequesterTgwInfo(RequesterTgwInfoT&& value) { m_requesterTgwInfoHasBeenSet = true; m_requesterTgwInfo = std::forward<RequesterTgwInfoT>(value); }
    template<typename RequesterTgwInfoT = PeeringTgwInfo>
    TransitGatewayPeeringAttachment& WithRequesterTgwInfo(RequesterTgwInfoT&& value) { SetRequesterTgwInfo(std::forward<RequesterTgwInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the accepter transit gateway.</p>
     */
    inline const PeeringTgwInfo& GetAccepterTgwInfo() const { return m_accepterTgwInfo; }
    inline bool AccepterTgwInfoHasBeenSet() const { return m_accepterTgwInfoHasBeenSet; }
    template<typename AccepterTgwInfoT = PeeringTgwInfo>
    void SetAccepterTgwInfo(AccepterTgwInfoT&& value) { m_accepterTgwInfoHasBeenSet = true; m_accepterTgwInfo = std::forward<AccepterTgwInfoT>(value); }
    template<typename AccepterTgwInfoT = PeeringTgwInfo>
    TransitGatewayPeeringAttachment& WithAccepterTgwInfo(AccepterTgwInfoT&& value) { SetAccepterTgwInfo(std::forward<AccepterTgwInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the transit gateway peering attachment.</p>
     */
    inline const TransitGatewayPeeringAttachmentOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = TransitGatewayPeeringAttachmentOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = TransitGatewayPeeringAttachmentOptions>
    TransitGatewayPeeringAttachment& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the transit gateway peering attachment.</p>
     */
    inline const PeeringAttachmentStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = PeeringAttachmentStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = PeeringAttachmentStatus>
    TransitGatewayPeeringAttachment& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the transit gateway peering attachment. Note that the
     * <code>initiating</code> state has been deprecated.</p>
     */
    inline TransitGatewayAttachmentState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayAttachmentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayPeeringAttachment& WithState(TransitGatewayAttachmentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the transit gateway peering attachment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TransitGatewayPeeringAttachment& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the transit gateway peering attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TransitGatewayPeeringAttachment& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TransitGatewayPeeringAttachment& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    TransitGatewayAttachmentState m_state{TransitGatewayAttachmentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
