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
    AWS_EC2_API GetCapacityReservationUsageResponse() = default;
    AWS_EC2_API GetCapacityReservationUsageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetCapacityReservationUsageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCapacityReservationUsageResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
    template<typename CapacityReservationIdT = Aws::String>
    void SetCapacityReservationId(CapacityReservationIdT&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::forward<CapacityReservationIdT>(value); }
    template<typename CapacityReservationIdT = Aws::String>
    GetCapacityReservationUsageResponse& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    GetCapacityReservationUsageResponse& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline GetCapacityReservationUsageResponse& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline int GetAvailableInstanceCount() const { return m_availableInstanceCount; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
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
     * </li> <li> <p> <code>scheduled</code> - (<i>Future-dated Capacity
     * Reservations</i>) The future-dated Capacity Reservation request was approved and
     * the Capacity Reservation is scheduled for delivery on the requested start
     * date.</p> </li> <li> <p> <code>payment-pending</code> - (<i>Capacity Blocks</i>)
     * The upfront payment has not been processed yet.</p> </li> <li> <p>
     * <code>payment-failed</code> - (<i>Capacity Blocks</i>) The upfront payment was
     * not processed in the 12-hour time frame. Your Capacity Block was released.</p>
     * </li> <li> <p> <code>assessing</code> - (<i>Future-dated Capacity
     * Reservations</i>) Amazon EC2 is assessing your request for a future-dated
     * Capacity Reservation.</p> </li> <li> <p> <code>delayed</code> - (<i>Future-dated
     * Capacity Reservations</i>) Amazon EC2 encountered a delay in provisioning the
     * requested future-dated Capacity Reservation. Amazon EC2 is unable to deliver the
     * requested capacity by the requested start date and time.</p> </li> <li> <p>
     * <code>unsupported</code> - (<i>Future-dated Capacity Reservations</i>) Amazon
     * EC2 can't support the future-dated Capacity Reservation request due to capacity
     * constraints. You can view unsupported requests for 30 days. The Capacity
     * Reservation will not be delivered.</p> </li> </ul>
     */
    inline CapacityReservationState GetState() const { return m_state; }
    inline void SetState(CapacityReservationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetCapacityReservationUsageResponse& WithState(CapacityReservationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation usage.</p>
     */
    inline const Aws::Vector<InstanceUsage>& GetInstanceUsages() const { return m_instanceUsages; }
    template<typename InstanceUsagesT = Aws::Vector<InstanceUsage>>
    void SetInstanceUsages(InstanceUsagesT&& value) { m_instanceUsagesHasBeenSet = true; m_instanceUsages = std::forward<InstanceUsagesT>(value); }
    template<typename InstanceUsagesT = Aws::Vector<InstanceUsage>>
    GetCapacityReservationUsageResponse& WithInstanceUsages(InstanceUsagesT&& value) { SetInstanceUsages(std::forward<InstanceUsagesT>(value)); return *this;}
    template<typename InstanceUsagesT = InstanceUsage>
    GetCapacityReservationUsageResponse& AddInstanceUsages(InstanceUsagesT&& value) { m_instanceUsagesHasBeenSet = true; m_instanceUsages.emplace_back(std::forward<InstanceUsagesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetCapacityReservationUsageResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_totalInstanceCount{0};
    bool m_totalInstanceCountHasBeenSet = false;

    int m_availableInstanceCount{0};
    bool m_availableInstanceCountHasBeenSet = false;

    CapacityReservationState m_state{CapacityReservationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<InstanceUsage> m_instanceUsages;
    bool m_instanceUsagesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
