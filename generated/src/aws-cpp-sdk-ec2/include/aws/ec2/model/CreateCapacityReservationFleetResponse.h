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
    AWS_EC2_API CreateCapacityReservationFleetResponse();
    AWS_EC2_API CreateCapacityReservationFleetResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateCapacityReservationFleetResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const{ return m_capacityReservationFleetId; }

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetId(const Aws::String& value) { m_capacityReservationFleetId = value; }

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetId(Aws::String&& value) { m_capacityReservationFleetId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetId(const char* value) { m_capacityReservationFleetId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithCapacityReservationFleetId(const Aws::String& value) { SetCapacityReservationFleetId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithCapacityReservationFleetId(Aws::String&& value) { SetCapacityReservationFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithCapacityReservationFleetId(const char* value) { SetCapacityReservationFleetId(value); return *this;}


    /**
     * <p>The status of the Capacity Reservation Fleet.</p>
     */
    inline const CapacityReservationFleetState& GetState() const{ return m_state; }

    /**
     * <p>The status of the Capacity Reservation Fleet.</p>
     */
    inline void SetState(const CapacityReservationFleetState& value) { m_state = value; }

    /**
     * <p>The status of the Capacity Reservation Fleet.</p>
     */
    inline void SetState(CapacityReservationFleetState&& value) { m_state = std::move(value); }

    /**
     * <p>The status of the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithState(const CapacityReservationFleetState& value) { SetState(value); return *this;}

    /**
     * <p>The status of the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithState(CapacityReservationFleetState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The total number of capacity units for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline int GetTotalTargetCapacity() const{ return m_totalTargetCapacity; }

    /**
     * <p>The total number of capacity units for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline void SetTotalTargetCapacity(int value) { m_totalTargetCapacity = value; }

    /**
     * <p>The total number of capacity units for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithTotalTargetCapacity(int value) { SetTotalTargetCapacity(value); return *this;}


    /**
     * <p>The requested capacity units that have been successfully reserved.</p>
     */
    inline double GetTotalFulfilledCapacity() const{ return m_totalFulfilledCapacity; }

    /**
     * <p>The requested capacity units that have been successfully reserved.</p>
     */
    inline void SetTotalFulfilledCapacity(double value) { m_totalFulfilledCapacity = value; }

    /**
     * <p>The requested capacity units that have been successfully reserved.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithTotalFulfilledCapacity(double value) { SetTotalFulfilledCapacity(value); return *this;}


    /**
     * <p>The instance matching criteria for the Capacity Reservation Fleet.</p>
     */
    inline const FleetInstanceMatchCriteria& GetInstanceMatchCriteria() const{ return m_instanceMatchCriteria; }

    /**
     * <p>The instance matching criteria for the Capacity Reservation Fleet.</p>
     */
    inline void SetInstanceMatchCriteria(const FleetInstanceMatchCriteria& value) { m_instanceMatchCriteria = value; }

    /**
     * <p>The instance matching criteria for the Capacity Reservation Fleet.</p>
     */
    inline void SetInstanceMatchCriteria(FleetInstanceMatchCriteria&& value) { m_instanceMatchCriteria = std::move(value); }

    /**
     * <p>The instance matching criteria for the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithInstanceMatchCriteria(const FleetInstanceMatchCriteria& value) { SetInstanceMatchCriteria(value); return *this;}

    /**
     * <p>The instance matching criteria for the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithInstanceMatchCriteria(FleetInstanceMatchCriteria&& value) { SetInstanceMatchCriteria(std::move(value)); return *this;}


    /**
     * <p>The allocation strategy used by the Capacity Reservation Fleet.</p>
     */
    inline const Aws::String& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p>The allocation strategy used by the Capacity Reservation Fleet.</p>
     */
    inline void SetAllocationStrategy(const Aws::String& value) { m_allocationStrategy = value; }

    /**
     * <p>The allocation strategy used by the Capacity Reservation Fleet.</p>
     */
    inline void SetAllocationStrategy(Aws::String&& value) { m_allocationStrategy = std::move(value); }

    /**
     * <p>The allocation strategy used by the Capacity Reservation Fleet.</p>
     */
    inline void SetAllocationStrategy(const char* value) { m_allocationStrategy.assign(value); }

    /**
     * <p>The allocation strategy used by the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithAllocationStrategy(const Aws::String& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p>The allocation strategy used by the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithAllocationStrategy(Aws::String&& value) { SetAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>The allocation strategy used by the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithAllocationStrategy(const char* value) { SetAllocationStrategy(value); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>Indicates the tenancy of Capacity Reservation Fleet.</p>
     */
    inline const FleetCapacityReservationTenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>Indicates the tenancy of Capacity Reservation Fleet.</p>
     */
    inline void SetTenancy(const FleetCapacityReservationTenancy& value) { m_tenancy = value; }

    /**
     * <p>Indicates the tenancy of Capacity Reservation Fleet.</p>
     */
    inline void SetTenancy(FleetCapacityReservationTenancy&& value) { m_tenancy = std::move(value); }

    /**
     * <p>Indicates the tenancy of Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithTenancy(const FleetCapacityReservationTenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>Indicates the tenancy of Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithTenancy(FleetCapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>Information about the individual Capacity Reservations in the Capacity
     * Reservation Fleet.</p>
     */
    inline const Aws::Vector<FleetCapacityReservation>& GetFleetCapacityReservations() const{ return m_fleetCapacityReservations; }

    /**
     * <p>Information about the individual Capacity Reservations in the Capacity
     * Reservation Fleet.</p>
     */
    inline void SetFleetCapacityReservations(const Aws::Vector<FleetCapacityReservation>& value) { m_fleetCapacityReservations = value; }

    /**
     * <p>Information about the individual Capacity Reservations in the Capacity
     * Reservation Fleet.</p>
     */
    inline void SetFleetCapacityReservations(Aws::Vector<FleetCapacityReservation>&& value) { m_fleetCapacityReservations = std::move(value); }

    /**
     * <p>Information about the individual Capacity Reservations in the Capacity
     * Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithFleetCapacityReservations(const Aws::Vector<FleetCapacityReservation>& value) { SetFleetCapacityReservations(value); return *this;}

    /**
     * <p>Information about the individual Capacity Reservations in the Capacity
     * Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithFleetCapacityReservations(Aws::Vector<FleetCapacityReservation>&& value) { SetFleetCapacityReservations(std::move(value)); return *this;}

    /**
     * <p>Information about the individual Capacity Reservations in the Capacity
     * Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& AddFleetCapacityReservations(const FleetCapacityReservation& value) { m_fleetCapacityReservations.push_back(value); return *this; }

    /**
     * <p>Information about the individual Capacity Reservations in the Capacity
     * Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& AddFleetCapacityReservations(FleetCapacityReservation&& value) { m_fleetCapacityReservations.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline CreateCapacityReservationFleetResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateCapacityReservationFleetResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateCapacityReservationFleetResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_capacityReservationFleetId;

    CapacityReservationFleetState m_state;

    int m_totalTargetCapacity;

    double m_totalFulfilledCapacity;

    FleetInstanceMatchCriteria m_instanceMatchCriteria;

    Aws::String m_allocationStrategy;

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_endDate;

    FleetCapacityReservationTenancy m_tenancy;

    Aws::Vector<FleetCapacityReservation> m_fleetCapacityReservations;

    Aws::Vector<Tag> m_tags;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
