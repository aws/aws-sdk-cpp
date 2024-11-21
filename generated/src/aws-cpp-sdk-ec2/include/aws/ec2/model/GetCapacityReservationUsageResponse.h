/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceUsage.h>
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
  class GetCapacityReservationUsageResponse
  {
  public:
    AWS_EC2_API GetCapacityReservationUsageResponse();
    AWS_EC2_API GetCapacityReservationUsageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetCapacityReservationUsageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetCapacityReservationUsageResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCapacityReservationUsageResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCapacityReservationUsageResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationId = value; }
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationId = std::move(value); }
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationId.assign(value); }
    inline GetCapacityReservationUsageResponse& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}
    inline GetCapacityReservationUsageResponse& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}
    inline GetCapacityReservationUsageResponse& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceType.assign(value); }
    inline GetCapacityReservationUsageResponse& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline GetCapacityReservationUsageResponse& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline GetCapacityReservationUsageResponse& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCount = value; }
    inline GetCapacityReservationUsageResponse& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline int GetAvailableInstanceCount() const{ return m_availableInstanceCount; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCount = value; }
    inline GetCapacityReservationUsageResponse& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * capacity is available for use.</p> </li> <li> <p> <code>expired</code> - The
     * Capacity Reservation expired automatically at the date and time specified in
     * your reservation request. The reserved capacity is no longer available for your
     * use.</p> </li> <li> <p> <code>cancelled</code> - The Capacity Reservation was
     * canceled. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>pending</code> - The Capacity Reservation request was successful
     * but the capacity provisioning is still pending.</p> </li> <li> <p>
     * <code>failed</code> - The Capacity Reservation request has failed. A request can
     * fail due to request parameters that are not valid, capacity constraints, or
     * instance limit constraints. You can view a failed request for 60 minutes.</p>
     * </li> <li> <p> <code>scheduled</code> - (<i>Future-dated Capacity Reservations
     * only</i>) The future-dated Capacity Reservation request was approved and the
     * Capacity Reservation is scheduled for delivery on the requested start date.</p>
     * </li> <li> <p> <code>assessing</code> - (<i>Future-dated Capacity Reservations
     * only</i>) Amazon EC2 is assessing your request for a future-dated Capacity
     * Reservation.</p> </li> <li> <p> <code>delayed</code> - (<i>Future-dated Capacity
     * Reservations only</i>) Amazon EC2 encountered a delay in provisioning the
     * requested future-dated Capacity Reservation. Amazon EC2 is unable to deliver the
     * requested capacity by the requested start date and time.</p> </li> <li> <p>
     * <code>unsupported</code> - (<i>Future-dated Capacity Reservations only</i>)
     * Amazon EC2 can't support the future-dated Capacity Reservation request due to
     * capacity constraints. You can view unsupported requests for 30 days. The
     * Capacity Reservation will not be delivered.</p> </li> </ul>
     */
    inline const CapacityReservationState& GetState() const{ return m_state; }
    inline void SetState(const CapacityReservationState& value) { m_state = value; }
    inline void SetState(CapacityReservationState&& value) { m_state = std::move(value); }
    inline GetCapacityReservationUsageResponse& WithState(const CapacityReservationState& value) { SetState(value); return *this;}
    inline GetCapacityReservationUsageResponse& WithState(CapacityReservationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation usage.</p>
     */
    inline const Aws::Vector<InstanceUsage>& GetInstanceUsages() const{ return m_instanceUsages; }
    inline void SetInstanceUsages(const Aws::Vector<InstanceUsage>& value) { m_instanceUsages = value; }
    inline void SetInstanceUsages(Aws::Vector<InstanceUsage>&& value) { m_instanceUsages = std::move(value); }
    inline GetCapacityReservationUsageResponse& WithInstanceUsages(const Aws::Vector<InstanceUsage>& value) { SetInstanceUsages(value); return *this;}
    inline GetCapacityReservationUsageResponse& WithInstanceUsages(Aws::Vector<InstanceUsage>&& value) { SetInstanceUsages(std::move(value)); return *this;}
    inline GetCapacityReservationUsageResponse& AddInstanceUsages(const InstanceUsage& value) { m_instanceUsages.push_back(value); return *this; }
    inline GetCapacityReservationUsageResponse& AddInstanceUsages(InstanceUsage&& value) { m_instanceUsages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetCapacityReservationUsageResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetCapacityReservationUsageResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::String m_capacityReservationId;

    Aws::String m_instanceType;

    int m_totalInstanceCount;

    int m_availableInstanceCount;

    CapacityReservationState m_state;

    Aws::Vector<InstanceUsage> m_instanceUsages;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
