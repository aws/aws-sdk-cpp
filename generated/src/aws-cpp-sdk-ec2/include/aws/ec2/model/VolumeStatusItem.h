/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeStatusInfo.h>
#include <aws/ec2/model/InitializationStatusDetails.h>
#include <aws/ec2/model/VolumeStatusAction.h>
#include <aws/ec2/model/VolumeStatusEvent.h>
#include <aws/ec2/model/VolumeStatusAttachmentStatus.h>
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
   * <p>Describes the volume status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeStatusItem">AWS
   * API Reference</a></p>
   */
  class VolumeStatusItem
  {
  public:
    AWS_EC2_API VolumeStatusItem() = default;
    AWS_EC2_API VolumeStatusItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeStatusItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The details of the operation.</p>
     */
    inline const Aws::Vector<VolumeStatusAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<VolumeStatusAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<VolumeStatusAction>>
    VolumeStatusItem& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = VolumeStatusAction>
    VolumeStatusItem& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the volume.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    VolumeStatusItem& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    VolumeStatusItem& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of events associated with the volume.</p>
     */
    inline const Aws::Vector<VolumeStatusEvent>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<VolumeStatusEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<VolumeStatusEvent>>
    VolumeStatusItem& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = VolumeStatusEvent>
    VolumeStatusItem& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The volume ID.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    VolumeStatusItem& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume status.</p>
     */
    inline const VolumeStatusInfo& GetVolumeStatus() const { return m_volumeStatus; }
    inline bool VolumeStatusHasBeenSet() const { return m_volumeStatusHasBeenSet; }
    template<typename VolumeStatusT = VolumeStatusInfo>
    void SetVolumeStatus(VolumeStatusT&& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = std::forward<VolumeStatusT>(value); }
    template<typename VolumeStatusT = VolumeStatusInfo>
    VolumeStatusItem& WithVolumeStatus(VolumeStatusT&& value) { SetVolumeStatus(std::forward<VolumeStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the instances to which the volume is attached.</p>
     */
    inline const Aws::Vector<VolumeStatusAttachmentStatus>& GetAttachmentStatuses() const { return m_attachmentStatuses; }
    inline bool AttachmentStatusesHasBeenSet() const { return m_attachmentStatusesHasBeenSet; }
    template<typename AttachmentStatusesT = Aws::Vector<VolumeStatusAttachmentStatus>>
    void SetAttachmentStatuses(AttachmentStatusesT&& value) { m_attachmentStatusesHasBeenSet = true; m_attachmentStatuses = std::forward<AttachmentStatusesT>(value); }
    template<typename AttachmentStatusesT = Aws::Vector<VolumeStatusAttachmentStatus>>
    VolumeStatusItem& WithAttachmentStatuses(AttachmentStatusesT&& value) { SetAttachmentStatuses(std::forward<AttachmentStatusesT>(value)); return *this;}
    template<typename AttachmentStatusesT = VolumeStatusAttachmentStatus>
    VolumeStatusItem& AddAttachmentStatuses(AttachmentStatusesT&& value) { m_attachmentStatusesHasBeenSet = true; m_attachmentStatuses.emplace_back(std::forward<AttachmentStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the volume initialization. It can take up to 5 minutes for
     * the volume initialization information to be updated.</p> <p>Only available for
     * volumes created from snapshots. Not available for empty volumes created without
     * a snapshot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/initalize-volume.html">
     * Initialize Amazon EBS volumes</a>.</p>
     */
    inline const InitializationStatusDetails& GetInitializationStatusDetails() const { return m_initializationStatusDetails; }
    inline bool InitializationStatusDetailsHasBeenSet() const { return m_initializationStatusDetailsHasBeenSet; }
    template<typename InitializationStatusDetailsT = InitializationStatusDetails>
    void SetInitializationStatusDetails(InitializationStatusDetailsT&& value) { m_initializationStatusDetailsHasBeenSet = true; m_initializationStatusDetails = std::forward<InitializationStatusDetailsT>(value); }
    template<typename InitializationStatusDetailsT = InitializationStatusDetails>
    VolumeStatusItem& WithInitializationStatusDetails(InitializationStatusDetailsT&& value) { SetInitializationStatusDetails(std::forward<InitializationStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    VolumeStatusItem& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VolumeStatusAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::Vector<VolumeStatusEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    VolumeStatusInfo m_volumeStatus;
    bool m_volumeStatusHasBeenSet = false;

    Aws::Vector<VolumeStatusAttachmentStatus> m_attachmentStatuses;
    bool m_attachmentStatusesHasBeenSet = false;

    InitializationStatusDetails m_initializationStatusDetails;
    bool m_initializationStatusDetailsHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
