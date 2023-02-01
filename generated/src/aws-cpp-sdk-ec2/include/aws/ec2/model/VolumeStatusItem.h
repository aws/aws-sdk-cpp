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
    AWS_EC2_API VolumeStatusItem();
    AWS_EC2_API VolumeStatusItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeStatusItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The details of the operation.</p>
     */
    inline const Aws::Vector<VolumeStatusAction>& GetActions() const{ return m_actions; }

    /**
     * <p>The details of the operation.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The details of the operation.</p>
     */
    inline void SetActions(const Aws::Vector<VolumeStatusAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The details of the operation.</p>
     */
    inline void SetActions(Aws::Vector<VolumeStatusAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The details of the operation.</p>
     */
    inline VolumeStatusItem& WithActions(const Aws::Vector<VolumeStatusAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The details of the operation.</p>
     */
    inline VolumeStatusItem& WithActions(Aws::Vector<VolumeStatusAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The details of the operation.</p>
     */
    inline VolumeStatusItem& AddActions(const VolumeStatusAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The details of the operation.</p>
     */
    inline VolumeStatusItem& AddActions(VolumeStatusAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The Availability Zone of the volume.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the volume.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone of the volume.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the volume.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of the volume.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the volume.</p>
     */
    inline VolumeStatusItem& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the volume.</p>
     */
    inline VolumeStatusItem& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of the volume.</p>
     */
    inline VolumeStatusItem& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline VolumeStatusItem& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline VolumeStatusItem& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline VolumeStatusItem& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>A list of events associated with the volume.</p>
     */
    inline const Aws::Vector<VolumeStatusEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>A list of events associated with the volume.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>A list of events associated with the volume.</p>
     */
    inline void SetEvents(const Aws::Vector<VolumeStatusEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>A list of events associated with the volume.</p>
     */
    inline void SetEvents(Aws::Vector<VolumeStatusEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>A list of events associated with the volume.</p>
     */
    inline VolumeStatusItem& WithEvents(const Aws::Vector<VolumeStatusEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>A list of events associated with the volume.</p>
     */
    inline VolumeStatusItem& WithEvents(Aws::Vector<VolumeStatusEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>A list of events associated with the volume.</p>
     */
    inline VolumeStatusItem& AddEvents(const VolumeStatusEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>A list of events associated with the volume.</p>
     */
    inline VolumeStatusItem& AddEvents(VolumeStatusEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>The volume ID.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The volume ID.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The volume ID.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The volume ID.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The volume ID.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The volume ID.</p>
     */
    inline VolumeStatusItem& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The volume ID.</p>
     */
    inline VolumeStatusItem& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The volume ID.</p>
     */
    inline VolumeStatusItem& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The volume status.</p>
     */
    inline const VolumeStatusInfo& GetVolumeStatus() const{ return m_volumeStatus; }

    /**
     * <p>The volume status.</p>
     */
    inline bool VolumeStatusHasBeenSet() const { return m_volumeStatusHasBeenSet; }

    /**
     * <p>The volume status.</p>
     */
    inline void SetVolumeStatus(const VolumeStatusInfo& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = value; }

    /**
     * <p>The volume status.</p>
     */
    inline void SetVolumeStatus(VolumeStatusInfo&& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = std::move(value); }

    /**
     * <p>The volume status.</p>
     */
    inline VolumeStatusItem& WithVolumeStatus(const VolumeStatusInfo& value) { SetVolumeStatus(value); return *this;}

    /**
     * <p>The volume status.</p>
     */
    inline VolumeStatusItem& WithVolumeStatus(VolumeStatusInfo&& value) { SetVolumeStatus(std::move(value)); return *this;}


    /**
     * <p>Information about the instances to which the volume is attached.</p>
     */
    inline const Aws::Vector<VolumeStatusAttachmentStatus>& GetAttachmentStatuses() const{ return m_attachmentStatuses; }

    /**
     * <p>Information about the instances to which the volume is attached.</p>
     */
    inline bool AttachmentStatusesHasBeenSet() const { return m_attachmentStatusesHasBeenSet; }

    /**
     * <p>Information about the instances to which the volume is attached.</p>
     */
    inline void SetAttachmentStatuses(const Aws::Vector<VolumeStatusAttachmentStatus>& value) { m_attachmentStatusesHasBeenSet = true; m_attachmentStatuses = value; }

    /**
     * <p>Information about the instances to which the volume is attached.</p>
     */
    inline void SetAttachmentStatuses(Aws::Vector<VolumeStatusAttachmentStatus>&& value) { m_attachmentStatusesHasBeenSet = true; m_attachmentStatuses = std::move(value); }

    /**
     * <p>Information about the instances to which the volume is attached.</p>
     */
    inline VolumeStatusItem& WithAttachmentStatuses(const Aws::Vector<VolumeStatusAttachmentStatus>& value) { SetAttachmentStatuses(value); return *this;}

    /**
     * <p>Information about the instances to which the volume is attached.</p>
     */
    inline VolumeStatusItem& WithAttachmentStatuses(Aws::Vector<VolumeStatusAttachmentStatus>&& value) { SetAttachmentStatuses(std::move(value)); return *this;}

    /**
     * <p>Information about the instances to which the volume is attached.</p>
     */
    inline VolumeStatusItem& AddAttachmentStatuses(const VolumeStatusAttachmentStatus& value) { m_attachmentStatusesHasBeenSet = true; m_attachmentStatuses.push_back(value); return *this; }

    /**
     * <p>Information about the instances to which the volume is attached.</p>
     */
    inline VolumeStatusItem& AddAttachmentStatuses(VolumeStatusAttachmentStatus&& value) { m_attachmentStatusesHasBeenSet = true; m_attachmentStatuses.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
