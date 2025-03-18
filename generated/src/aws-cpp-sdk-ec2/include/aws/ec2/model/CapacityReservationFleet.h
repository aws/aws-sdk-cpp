/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationFleetState.h>
#include <aws/ec2/model/FleetCapacityReservationTenancy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/FleetInstanceMatchCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FleetCapacityReservation.h>
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
   * <p>Information about a Capacity Reservation Fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationFleet">AWS
   * API Reference</a></p>
   */
  class CapacityReservationFleet
  {
  public:
    AWS_EC2_API CapacityReservationFleet() = default;
    AWS_EC2_API CapacityReservationFleet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationFleet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const { return m_capacityReservationFleetId; }
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }
    template<typename CapacityReservationFleetIdT = Aws::String>
    void SetCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::forward<CapacityReservationFleetIdT>(value); }
    template<typename CapacityReservationFleetIdT = Aws::String>
    CapacityReservationFleet& WithCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { SetCapacityReservationFleetId(std::forward<CapacityReservationFleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Capacity Reservation Fleet.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetArn() const { return m_capacityReservationFleetArn; }
    inline bool CapacityReservationFleetArnHasBeenSet() const { return m_capacityReservationFleetArnHasBeenSet; }
    template<typename CapacityReservationFleetArnT = Aws::String>
    void SetCapacityReservationFleetArn(CapacityReservationFleetArnT&& value) { m_capacityReservationFleetArnHasBeenSet = true; m_capacityReservationFleetArn = std::forward<CapacityReservationFleetArnT>(value); }
    template<typename CapacityReservationFleetArnT = Aws::String>
    CapacityReservationFleet& WithCapacityReservationFleetArn(CapacityReservationFleetArnT&& value) { SetCapacityReservationFleetArn(std::forward<CapacityReservationFleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Capacity Reservation Fleet. Possible states include:</p>
     * <ul> <li> <p> <code>submitted</code> - The Capacity Reservation Fleet request
     * has been submitted and Amazon Elastic Compute Cloud is preparing to create the
     * Capacity Reservations.</p> </li> <li> <p> <code>modifying</code> - The Capacity
     * Reservation Fleet is being modified. The Fleet remains in this state until the
     * modification is complete.</p> </li> <li> <p> <code>active</code> - The Capacity
     * Reservation Fleet has fulfilled its total target capacity and it is attempting
     * to maintain this capacity. The Fleet remains in this state until it is modified
     * or deleted.</p> </li> <li> <p> <code>partially_fulfilled</code> - The Capacity
     * Reservation Fleet has partially fulfilled its total target capacity. There is
     * insufficient Amazon EC2 to fulfill the total target capacity. The Fleet is
     * attempting to asynchronously fulfill its total target capacity.</p> </li> <li>
     * <p> <code>expiring</code> - The Capacity Reservation Fleet has reach its end
     * date and it is in the process of expiring. One or more of its Capacity
     * reservations might still be active.</p> </li> <li> <p> <code>expired</code> -
     * The Capacity Reservation Fleet has reach its end date. The Fleet and its
     * Capacity Reservations are expired. The Fleet can't create new Capacity
     * Reservations.</p> </li> <li> <p> <code>cancelling</code> - The Capacity
     * Reservation Fleet is in the process of being cancelled. One or more of its
     * Capacity reservations might still be active.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation Fleet has been manually
     * cancelled. The Fleet and its Capacity Reservations are cancelled and the Fleet
     * can't create new Capacity Reservations.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation Fleet failed to reserve capacity for the specified
     * instance types.</p> </li> </ul>
     */
    inline CapacityReservationFleetState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CapacityReservationFleetState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CapacityReservationFleet& WithState(CapacityReservationFleetState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of capacity units for which the Capacity Reservation Fleet
     * reserves capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline int GetTotalTargetCapacity() const { return m_totalTargetCapacity; }
    inline bool TotalTargetCapacityHasBeenSet() const { return m_totalTargetCapacityHasBeenSet; }
    inline void SetTotalTargetCapacity(int value) { m_totalTargetCapacityHasBeenSet = true; m_totalTargetCapacity = value; }
    inline CapacityReservationFleet& WithTotalTargetCapacity(int value) { SetTotalTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity units that have been fulfilled.</p>
     */
    inline double GetTotalFulfilledCapacity() const { return m_totalFulfilledCapacity; }
    inline bool TotalFulfilledCapacityHasBeenSet() const { return m_totalFulfilledCapacityHasBeenSet; }
    inline void SetTotalFulfilledCapacity(double value) { m_totalFulfilledCapacityHasBeenSet = true; m_totalFulfilledCapacity = value; }
    inline CapacityReservationFleet& WithTotalFulfilledCapacity(double value) { SetTotalFulfilledCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the Capacity Reservation Fleet. Tenancies include:</p> <ul>
     * <li> <p> <code>default</code> - The Capacity Reservation Fleet is created on
     * hardware that is shared with other Amazon Web Services accounts.</p> </li> <li>
     * <p> <code>dedicated</code> - The Capacity Reservation Fleet is created on
     * single-tenant hardware that is dedicated to a single Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline FleetCapacityReservationTenancy GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(FleetCapacityReservationTenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline CapacityReservationFleet& WithTenancy(FleetCapacityReservationTenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    CapacityReservationFleet& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CapacityReservationFleet& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation Fleet
     * accepts. All Capacity Reservations in the Fleet inherit this instance matching
     * criteria.</p> <p>Currently, Capacity Reservation Fleets support
     * <code>open</code> instance matching criteria only. This means that instances
     * that have matching attributes (instance type, platform, and Availability Zone)
     * run in the Capacity Reservations automatically. Instances do not need to
     * explicitly target a Capacity Reservation Fleet to use its reserved capacity.</p>
     */
    inline FleetInstanceMatchCriteria GetInstanceMatchCriteria() const { return m_instanceMatchCriteria; }
    inline bool InstanceMatchCriteriaHasBeenSet() const { return m_instanceMatchCriteriaHasBeenSet; }
    inline void SetInstanceMatchCriteria(FleetInstanceMatchCriteria value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = value; }
    inline CapacityReservationFleet& WithInstanceMatchCriteria(FleetInstanceMatchCriteria value) { SetInstanceMatchCriteria(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. For more information, see For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">Allocation
     * strategy</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetAllocationStrategy() const { return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    template<typename AllocationStrategyT = Aws::String>
    void SetAllocationStrategy(AllocationStrategyT&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::forward<AllocationStrategyT>(value); }
    template<typename AllocationStrategyT = Aws::String>
    CapacityReservationFleet& WithAllocationStrategy(AllocationStrategyT&& value) { SetAllocationStrategy(std::forward<AllocationStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline const Aws::Vector<FleetCapacityReservation>& GetInstanceTypeSpecifications() const { return m_instanceTypeSpecifications; }
    inline bool InstanceTypeSpecificationsHasBeenSet() const { return m_instanceTypeSpecificationsHasBeenSet; }
    template<typename InstanceTypeSpecificationsT = Aws::Vector<FleetCapacityReservation>>
    void SetInstanceTypeSpecifications(InstanceTypeSpecificationsT&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = std::forward<InstanceTypeSpecificationsT>(value); }
    template<typename InstanceTypeSpecificationsT = Aws::Vector<FleetCapacityReservation>>
    CapacityReservationFleet& WithInstanceTypeSpecifications(InstanceTypeSpecificationsT&& value) { SetInstanceTypeSpecifications(std::forward<InstanceTypeSpecificationsT>(value)); return *this;}
    template<typename InstanceTypeSpecificationsT = FleetCapacityReservation>
    CapacityReservationFleet& AddInstanceTypeSpecifications(InstanceTypeSpecificationsT&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.emplace_back(std::forward<InstanceTypeSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CapacityReservationFleet& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CapacityReservationFleet& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;

    Aws::String m_capacityReservationFleetArn;
    bool m_capacityReservationFleetArnHasBeenSet = false;

    CapacityReservationFleetState m_state{CapacityReservationFleetState::NOT_SET};
    bool m_stateHasBeenSet = false;

    int m_totalTargetCapacity{0};
    bool m_totalTargetCapacityHasBeenSet = false;

    double m_totalFulfilledCapacity{0.0};
    bool m_totalFulfilledCapacityHasBeenSet = false;

    FleetCapacityReservationTenancy m_tenancy{FleetCapacityReservationTenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    FleetInstanceMatchCriteria m_instanceMatchCriteria{FleetInstanceMatchCriteria::NOT_SET};
    bool m_instanceMatchCriteriaHasBeenSet = false;

    Aws::String m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;

    Aws::Vector<FleetCapacityReservation> m_instanceTypeSpecifications;
    bool m_instanceTypeSpecificationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
