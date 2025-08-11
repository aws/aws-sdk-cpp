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
    AWS_EC2_API InstanceStatus() = default;
    AWS_EC2_API InstanceStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    InstanceStatus& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone of the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    InstanceStatus& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
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
    InstanceStatus& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider that manages the instance.</p>
     */
    inline const OperatorResponse& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = OperatorResponse>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = OperatorResponse>
    InstanceStatus& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any scheduled events associated with the instance.</p>
     */
    inline const Aws::Vector<InstanceStatusEvent>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<InstanceStatusEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<InstanceStatusEvent>>
    InstanceStatus& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = InstanceStatusEvent>
    InstanceStatus& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceStatus& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The intended state of the instance. <a>DescribeInstanceStatus</a> requires
     * that an instance be in the <code>running</code> state.</p>
     */
    inline const InstanceState& GetInstanceState() const { return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    template<typename InstanceStateT = InstanceState>
    void SetInstanceState(InstanceStateT&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::forward<InstanceStateT>(value); }
    template<typename InstanceStateT = InstanceState>
    InstanceStatus& WithInstanceState(InstanceStateT&& value) { SetInstanceState(std::forward<InstanceStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports impaired functionality that stems from issues internal to the
     * instance, such as impaired reachability.</p>
     */
    inline const InstanceStatusSummary& GetInstanceStatus() const { return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    template<typename InstanceStatusT = InstanceStatusSummary>
    void SetInstanceStatus(InstanceStatusT&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::forward<InstanceStatusT>(value); }
    template<typename InstanceStatusT = InstanceStatusSummary>
    InstanceStatus& WithInstanceStatus(InstanceStatusT&& value) { SetInstanceStatus(std::forward<InstanceStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports impaired functionality that stems from issues related to the systems
     * that support an instance, such as hardware failures and network connectivity
     * problems.</p>
     */
    inline const InstanceStatusSummary& GetSystemStatus() const { return m_systemStatus; }
    inline bool SystemStatusHasBeenSet() const { return m_systemStatusHasBeenSet; }
    template<typename SystemStatusT = InstanceStatusSummary>
    void SetSystemStatus(SystemStatusT&& value) { m_systemStatusHasBeenSet = true; m_systemStatus = std::forward<SystemStatusT>(value); }
    template<typename SystemStatusT = InstanceStatusSummary>
    InstanceStatus& WithSystemStatus(SystemStatusT&& value) { SetSystemStatus(std::forward<SystemStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports impaired functionality that stems from an attached Amazon EBS volume
     * that is unreachable and unable to complete I/O operations.</p>
     */
    inline const EbsStatusSummary& GetAttachedEbsStatus() const { return m_attachedEbsStatus; }
    inline bool AttachedEbsStatusHasBeenSet() const { return m_attachedEbsStatusHasBeenSet; }
    template<typename AttachedEbsStatusT = EbsStatusSummary>
    void SetAttachedEbsStatus(AttachedEbsStatusT&& value) { m_attachedEbsStatusHasBeenSet = true; m_attachedEbsStatus = std::forward<AttachedEbsStatusT>(value); }
    template<typename AttachedEbsStatusT = EbsStatusSummary>
    InstanceStatus& WithAttachedEbsStatus(AttachedEbsStatusT&& value) { SetAttachedEbsStatus(std::forward<AttachedEbsStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

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
