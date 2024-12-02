/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/OperatorResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceState.h>
#include <aws/ec2/model/InstanceStatusSummary.h>
#include <aws/ec2/model/EbsStatusSummary.h>
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
  class InstanceStatus
  {
  public:
    AWS_EC2_API InstanceStatus();
    AWS_EC2_API InstanceStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline InstanceStatus& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline InstanceStatus& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline InstanceStatus& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline InstanceStatus& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline InstanceStatus& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline InstanceStatus& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider that manages the instance.</p>
     */
    inline const OperatorResponse& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorResponse& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorResponse&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline InstanceStatus& WithOperator(const OperatorResponse& value) { SetOperator(value); return *this;}
    inline InstanceStatus& WithOperator(OperatorResponse&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any scheduled events associated with the instance.</p>
     */
    inline const Aws::Vector<InstanceStatusEvent>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Vector<InstanceStatusEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Vector<InstanceStatusEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline InstanceStatus& WithEvents(const Aws::Vector<InstanceStatusEvent>& value) { SetEvents(value); return *this;}
    inline InstanceStatus& WithEvents(Aws::Vector<InstanceStatusEvent>&& value) { SetEvents(std::move(value)); return *this;}
    inline InstanceStatus& AddEvents(const InstanceStatusEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    inline InstanceStatus& AddEvents(InstanceStatusEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceStatus& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceStatus& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceStatus& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The intended state of the instance. <a>DescribeInstanceStatus</a> requires
     * that an instance be in the <code>running</code> state.</p>
     */
    inline const InstanceState& GetInstanceState() const{ return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    inline void SetInstanceState(const InstanceState& value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }
    inline void SetInstanceState(InstanceState&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::move(value); }
    inline InstanceStatus& WithInstanceState(const InstanceState& value) { SetInstanceState(value); return *this;}
    inline InstanceStatus& WithInstanceState(InstanceState&& value) { SetInstanceState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports impaired functionality that stems from issues internal to the
     * instance, such as impaired reachability.</p>
     */
    inline const InstanceStatusSummary& GetInstanceStatus() const{ return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    inline void SetInstanceStatus(const InstanceStatusSummary& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }
    inline void SetInstanceStatus(InstanceStatusSummary&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::move(value); }
    inline InstanceStatus& WithInstanceStatus(const InstanceStatusSummary& value) { SetInstanceStatus(value); return *this;}
    inline InstanceStatus& WithInstanceStatus(InstanceStatusSummary&& value) { SetInstanceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports impaired functionality that stems from issues related to the systems
     * that support an instance, such as hardware failures and network connectivity
     * problems.</p>
     */
    inline const InstanceStatusSummary& GetSystemStatus() const{ return m_systemStatus; }
    inline bool SystemStatusHasBeenSet() const { return m_systemStatusHasBeenSet; }
    inline void SetSystemStatus(const InstanceStatusSummary& value) { m_systemStatusHasBeenSet = true; m_systemStatus = value; }
    inline void SetSystemStatus(InstanceStatusSummary&& value) { m_systemStatusHasBeenSet = true; m_systemStatus = std::move(value); }
    inline InstanceStatus& WithSystemStatus(const InstanceStatusSummary& value) { SetSystemStatus(value); return *this;}
    inline InstanceStatus& WithSystemStatus(InstanceStatusSummary&& value) { SetSystemStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports impaired functionality that stems from an attached Amazon EBS volume
     * that is unreachable and unable to complete I/O operations.</p>
     */
    inline const EbsStatusSummary& GetAttachedEbsStatus() const{ return m_attachedEbsStatus; }
    inline bool AttachedEbsStatusHasBeenSet() const { return m_attachedEbsStatusHasBeenSet; }
    inline void SetAttachedEbsStatus(const EbsStatusSummary& value) { m_attachedEbsStatusHasBeenSet = true; m_attachedEbsStatus = value; }
    inline void SetAttachedEbsStatus(EbsStatusSummary&& value) { m_attachedEbsStatusHasBeenSet = true; m_attachedEbsStatus = std::move(value); }
    inline InstanceStatus& WithAttachedEbsStatus(const EbsStatusSummary& value) { SetAttachedEbsStatus(value); return *this;}
    inline InstanceStatus& WithAttachedEbsStatus(EbsStatusSummary&& value) { SetAttachedEbsStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<InstanceStatusEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceState m_instanceState;
    bool m_instanceStateHasBeenSet = false;

    InstanceStatusSummary m_instanceStatus;
    bool m_instanceStatusHasBeenSet = false;

    InstanceStatusSummary m_systemStatus;
    bool m_systemStatusHasBeenSet = false;

    EbsStatusSummary m_attachedEbsStatus;
    bool m_attachedEbsStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
