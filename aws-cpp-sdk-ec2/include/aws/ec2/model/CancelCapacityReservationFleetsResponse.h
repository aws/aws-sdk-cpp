/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityReservationFleetCancellationState.h>
#include <aws/ec2/model/FailedCapacityReservationFleetCancellationResponse.h>
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
  class CancelCapacityReservationFleetsResponse
  {
  public:
    AWS_EC2_API CancelCapacityReservationFleetsResponse();
    AWS_EC2_API CancelCapacityReservationFleetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CancelCapacityReservationFleetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Capacity Reservation Fleets that were successfully
     * cancelled.</p>
     */
    inline const Aws::Vector<CapacityReservationFleetCancellationState>& GetSuccessfulFleetCancellations() const{ return m_successfulFleetCancellations; }

    /**
     * <p>Information about the Capacity Reservation Fleets that were successfully
     * cancelled.</p>
     */
    inline void SetSuccessfulFleetCancellations(const Aws::Vector<CapacityReservationFleetCancellationState>& value) { m_successfulFleetCancellations = value; }

    /**
     * <p>Information about the Capacity Reservation Fleets that were successfully
     * cancelled.</p>
     */
    inline void SetSuccessfulFleetCancellations(Aws::Vector<CapacityReservationFleetCancellationState>&& value) { m_successfulFleetCancellations = std::move(value); }

    /**
     * <p>Information about the Capacity Reservation Fleets that were successfully
     * cancelled.</p>
     */
    inline CancelCapacityReservationFleetsResponse& WithSuccessfulFleetCancellations(const Aws::Vector<CapacityReservationFleetCancellationState>& value) { SetSuccessfulFleetCancellations(value); return *this;}

    /**
     * <p>Information about the Capacity Reservation Fleets that were successfully
     * cancelled.</p>
     */
    inline CancelCapacityReservationFleetsResponse& WithSuccessfulFleetCancellations(Aws::Vector<CapacityReservationFleetCancellationState>&& value) { SetSuccessfulFleetCancellations(std::move(value)); return *this;}

    /**
     * <p>Information about the Capacity Reservation Fleets that were successfully
     * cancelled.</p>
     */
    inline CancelCapacityReservationFleetsResponse& AddSuccessfulFleetCancellations(const CapacityReservationFleetCancellationState& value) { m_successfulFleetCancellations.push_back(value); return *this; }

    /**
     * <p>Information about the Capacity Reservation Fleets that were successfully
     * cancelled.</p>
     */
    inline CancelCapacityReservationFleetsResponse& AddSuccessfulFleetCancellations(CapacityReservationFleetCancellationState&& value) { m_successfulFleetCancellations.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the Capacity Reservation Fleets that could not be
     * cancelled.</p>
     */
    inline const Aws::Vector<FailedCapacityReservationFleetCancellationResponse>& GetFailedFleetCancellations() const{ return m_failedFleetCancellations; }

    /**
     * <p>Information about the Capacity Reservation Fleets that could not be
     * cancelled.</p>
     */
    inline void SetFailedFleetCancellations(const Aws::Vector<FailedCapacityReservationFleetCancellationResponse>& value) { m_failedFleetCancellations = value; }

    /**
     * <p>Information about the Capacity Reservation Fleets that could not be
     * cancelled.</p>
     */
    inline void SetFailedFleetCancellations(Aws::Vector<FailedCapacityReservationFleetCancellationResponse>&& value) { m_failedFleetCancellations = std::move(value); }

    /**
     * <p>Information about the Capacity Reservation Fleets that could not be
     * cancelled.</p>
     */
    inline CancelCapacityReservationFleetsResponse& WithFailedFleetCancellations(const Aws::Vector<FailedCapacityReservationFleetCancellationResponse>& value) { SetFailedFleetCancellations(value); return *this;}

    /**
     * <p>Information about the Capacity Reservation Fleets that could not be
     * cancelled.</p>
     */
    inline CancelCapacityReservationFleetsResponse& WithFailedFleetCancellations(Aws::Vector<FailedCapacityReservationFleetCancellationResponse>&& value) { SetFailedFleetCancellations(std::move(value)); return *this;}

    /**
     * <p>Information about the Capacity Reservation Fleets that could not be
     * cancelled.</p>
     */
    inline CancelCapacityReservationFleetsResponse& AddFailedFleetCancellations(const FailedCapacityReservationFleetCancellationResponse& value) { m_failedFleetCancellations.push_back(value); return *this; }

    /**
     * <p>Information about the Capacity Reservation Fleets that could not be
     * cancelled.</p>
     */
    inline CancelCapacityReservationFleetsResponse& AddFailedFleetCancellations(FailedCapacityReservationFleetCancellationResponse&& value) { m_failedFleetCancellations.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CancelCapacityReservationFleetsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CancelCapacityReservationFleetsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<CapacityReservationFleetCancellationState> m_successfulFleetCancellations;

    Aws::Vector<FailedCapacityReservationFleetCancellationResponse> m_failedFleetCancellations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
