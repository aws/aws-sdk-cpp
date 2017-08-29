/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeStatusInfo.h>
#include <aws/ec2/model/VolumeStatusAction.h>
#include <aws/ec2/model/VolumeStatusEvent.h>
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
  class AWS_EC2_API VolumeStatusItem
  {
  public:
    VolumeStatusItem();
    VolumeStatusItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    VolumeStatusItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The details of the operation.</p>
     */
    inline const Aws::Vector<VolumeStatusAction>& GetActions() const{ return m_actions; }

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
     * <p>A list of events associated with the volume.</p>
     */
    inline const Aws::Vector<VolumeStatusEvent>& GetEvents() const{ return m_events; }

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

  private:

    Aws::Vector<VolumeStatusAction> m_actions;
    bool m_actionsHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::Vector<VolumeStatusEvent> m_events;
    bool m_eventsHasBeenSet;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    VolumeStatusInfo m_volumeStatus;
    bool m_volumeStatusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
