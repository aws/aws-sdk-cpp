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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceState.h>
#include <aws/ec2/model/InstanceStatusSummary.h>
#include <aws/ec2/model/InstanceStatusEvent.h>
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
   * <p>Describes the status of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceStatus">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceStatus
  {
  public:
    InstanceStatus();
    InstanceStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline InstanceStatus& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline InstanceStatus& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline InstanceStatus& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Any scheduled events associated with the instance.</p>
     */
    inline const Aws::Vector<InstanceStatusEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>Any scheduled events associated with the instance.</p>
     */
    inline void SetEvents(const Aws::Vector<InstanceStatusEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>Any scheduled events associated with the instance.</p>
     */
    inline void SetEvents(Aws::Vector<InstanceStatusEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>Any scheduled events associated with the instance.</p>
     */
    inline InstanceStatus& WithEvents(const Aws::Vector<InstanceStatusEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>Any scheduled events associated with the instance.</p>
     */
    inline InstanceStatus& WithEvents(Aws::Vector<InstanceStatusEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>Any scheduled events associated with the instance.</p>
     */
    inline InstanceStatus& AddEvents(const InstanceStatusEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>Any scheduled events associated with the instance.</p>
     */
    inline InstanceStatus& AddEvents(InstanceStatusEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceStatus& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceStatus& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceStatus& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The intended state of the instance. <a>DescribeInstanceStatus</a> requires
     * that an instance be in the <code>running</code> state.</p>
     */
    inline const InstanceState& GetInstanceState() const{ return m_instanceState; }

    /**
     * <p>The intended state of the instance. <a>DescribeInstanceStatus</a> requires
     * that an instance be in the <code>running</code> state.</p>
     */
    inline void SetInstanceState(const InstanceState& value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }

    /**
     * <p>The intended state of the instance. <a>DescribeInstanceStatus</a> requires
     * that an instance be in the <code>running</code> state.</p>
     */
    inline void SetInstanceState(InstanceState&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::move(value); }

    /**
     * <p>The intended state of the instance. <a>DescribeInstanceStatus</a> requires
     * that an instance be in the <code>running</code> state.</p>
     */
    inline InstanceStatus& WithInstanceState(const InstanceState& value) { SetInstanceState(value); return *this;}

    /**
     * <p>The intended state of the instance. <a>DescribeInstanceStatus</a> requires
     * that an instance be in the <code>running</code> state.</p>
     */
    inline InstanceStatus& WithInstanceState(InstanceState&& value) { SetInstanceState(std::move(value)); return *this;}


    /**
     * <p>Reports impaired functionality that stems from issues internal to the
     * instance, such as impaired reachability.</p>
     */
    inline const InstanceStatusSummary& GetInstanceStatus() const{ return m_instanceStatus; }

    /**
     * <p>Reports impaired functionality that stems from issues internal to the
     * instance, such as impaired reachability.</p>
     */
    inline void SetInstanceStatus(const InstanceStatusSummary& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }

    /**
     * <p>Reports impaired functionality that stems from issues internal to the
     * instance, such as impaired reachability.</p>
     */
    inline void SetInstanceStatus(InstanceStatusSummary&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::move(value); }

    /**
     * <p>Reports impaired functionality that stems from issues internal to the
     * instance, such as impaired reachability.</p>
     */
    inline InstanceStatus& WithInstanceStatus(const InstanceStatusSummary& value) { SetInstanceStatus(value); return *this;}

    /**
     * <p>Reports impaired functionality that stems from issues internal to the
     * instance, such as impaired reachability.</p>
     */
    inline InstanceStatus& WithInstanceStatus(InstanceStatusSummary&& value) { SetInstanceStatus(std::move(value)); return *this;}


    /**
     * <p>Reports impaired functionality that stems from issues related to the systems
     * that support an instance, such as hardware failures and network connectivity
     * problems.</p>
     */
    inline const InstanceStatusSummary& GetSystemStatus() const{ return m_systemStatus; }

    /**
     * <p>Reports impaired functionality that stems from issues related to the systems
     * that support an instance, such as hardware failures and network connectivity
     * problems.</p>
     */
    inline void SetSystemStatus(const InstanceStatusSummary& value) { m_systemStatusHasBeenSet = true; m_systemStatus = value; }

    /**
     * <p>Reports impaired functionality that stems from issues related to the systems
     * that support an instance, such as hardware failures and network connectivity
     * problems.</p>
     */
    inline void SetSystemStatus(InstanceStatusSummary&& value) { m_systemStatusHasBeenSet = true; m_systemStatus = std::move(value); }

    /**
     * <p>Reports impaired functionality that stems from issues related to the systems
     * that support an instance, such as hardware failures and network connectivity
     * problems.</p>
     */
    inline InstanceStatus& WithSystemStatus(const InstanceStatusSummary& value) { SetSystemStatus(value); return *this;}

    /**
     * <p>Reports impaired functionality that stems from issues related to the systems
     * that support an instance, such as hardware failures and network connectivity
     * problems.</p>
     */
    inline InstanceStatus& WithSystemStatus(InstanceStatusSummary&& value) { SetSystemStatus(std::move(value)); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::Vector<InstanceStatusEvent> m_events;
    bool m_eventsHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    InstanceState m_instanceState;
    bool m_instanceStateHasBeenSet;

    InstanceStatusSummary m_instanceStatus;
    bool m_instanceStatusHasBeenSet;

    InstanceStatusSummary m_systemStatus;
    bool m_systemStatusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
