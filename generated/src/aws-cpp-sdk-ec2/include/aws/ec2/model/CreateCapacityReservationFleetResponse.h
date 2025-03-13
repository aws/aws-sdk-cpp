/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationFleetState.h>
#include <aws/ec2/model/FleetInstanceMatchCriteria.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/FleetCapacityReservationTenancy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/FleetCapacityReservation.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class CreateCapacityReservationFleetResponse
  {
  public:
    AWS_EC2_API CreateCapacityReservationFleetResponse() = default;
    AWS_EC2_API CreateCapacityReservationFleetResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateCapacityReservationFleetResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const { return m_capacityReservationFleetId; }
    template<typename CapacityReservationFleetIdT = Aws::String>
    void SetCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::forward<CapacityReservationFleetIdT>(value); }
    template<typename CapacityReservationFleetIdT = Aws::String>
    CreateCapacityReservationFleetResponse& WithCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { SetCapacityReservationFleetId(std::forward<CapacityReservationFleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleetState GetState() const { return m_state; }
    inline void SetState(CapacityReservationFleetState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateCapacityReservationFleetResponse& WithState(CapacityReservationFleetState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of capacity units for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline int GetTotalTargetCapacity() const { return m_totalTargetCapacity; }
    inline void SetTotalTargetCapacity(int value) { m_totalTargetCapacityHasBeenSet = true; m_totalTargetCapacity = value; }
    inline CreateCapacityReservationFleetResponse& WithTotalTargetCapacity(int value) { SetTotalTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested capacity units that have been successfully reserved.</p>
     */
    inline double GetTotalFulfilledCapacity() const { return m_totalFulfilledCapacity; }
    inline void SetTotalFulfilledCapacity(double value) { m_totalFulfilledCapacityHasBeenSet = true; m_totalFulfilledCapacity = value; }
    inline CreateCapacityReservationFleetResponse& WithTotalFulfilledCapacity(double value) { SetTotalFulfilledCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance matching criteria for the Capacity Reservation Fleet.</p>
     */
    inline FleetInstanceMatchCriteria GetInstanceMatchCriteria() const { return m_instanceMatchCriteria; }
    inline void SetInstanceMatchCriteria(FleetInstanceMatchCriteria value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = value; }
    inline CreateCapacityReservationFleetResponse& WithInstanceMatchCriteria(FleetInstanceMatchCriteria value) { SetInstanceMatchCriteria(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocation strategy used by the Capacity Reservation Fleet.</p>
     */
    inline const Aws::String& GetAllocationStrategy() const { return m_allocationStrategy; }
    template<typename AllocationStrategyT = Aws::String>
    void SetAllocationStrategy(AllocationStrategyT&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::forward<AllocationStrategyT>(value); }
    template<typename AllocationStrategyT = Aws::String>
    CreateCapacityReservationFleetResponse& WithAllocationStrategy(AllocationStrategyT&& value) { SetAllocationStrategy(std::forward<AllocationStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CreateCapacityReservationFleetResponse& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    CreateCapacityReservationFleetResponse& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the tenancy of Capacity Reservation Fleet.</p>
     */
    inline FleetCapacityReservationTenancy GetTenancy() const { return m_tenancy; }
    inline void SetTenancy(FleetCapacityReservationTenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline CreateCapacityReservationFleetResponse& WithTenancy(FleetCapacityReservationTenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the individual Capacity Reservations in the Capacity
     * Reservation Fleet.</p>
     */
    inline const Aws::Vector<FleetCapacityReservation>& GetFleetCapacityReservations() const { return m_fleetCapacityReservations; }
    template<typename FleetCapacityReservationsT = Aws::Vector<FleetCapacityReservation>>
    void SetFleetCapacityReservations(FleetCapacityReservationsT&& value) { m_fleetCapacityReservationsHasBeenSet = true; m_fleetCapacityReservations = std::forward<FleetCapacityReservationsT>(value); }
    template<typename FleetCapacityReservationsT = Aws::Vector<FleetCapacityReservation>>
    CreateCapacityReservationFleetResponse& WithFleetCapacityReservations(FleetCapacityReservationsT&& value) { SetFleetCapacityReservations(std::forward<FleetCapacityReservationsT>(value)); return *this;}
    template<typename FleetCapacityReservationsT = FleetCapacityReservation>
    CreateCapacityReservationFleetResponse& AddFleetCapacityReservations(FleetCapacityReservationsT&& value) { m_fleetCapacityReservationsHasBeenSet = true; m_fleetCapacityReservations.emplace_back(std::forward<FleetCapacityReservationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCapacityReservationFleetResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCapacityReservationFleetResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateCapacityReservationFleetResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;

    CapacityReservationFleetState m_state{CapacityReservationFleetState::NOT_SET};
    bool m_stateHasBeenSet = false;

    int m_totalTargetCapacity{0};
    bool m_totalTargetCapacityHasBeenSet = false;

    double m_totalFulfilledCapacity{0.0};
    bool m_totalFulfilledCapacityHasBeenSet = false;

    FleetInstanceMatchCriteria m_instanceMatchCriteria{FleetInstanceMatchCriteria::NOT_SET};
    bool m_instanceMatchCriteriaHasBeenSet = false;

    Aws::String m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    FleetCapacityReservationTenancy m_tenancy{FleetCapacityReservationTenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    Aws::Vector<FleetCapacityReservation> m_fleetCapacityReservations;
    bool m_fleetCapacityReservationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
