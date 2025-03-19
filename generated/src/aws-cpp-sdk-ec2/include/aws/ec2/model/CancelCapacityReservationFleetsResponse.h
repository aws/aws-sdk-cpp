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
    AWS_EC2_API CancelCapacityReservationFleetsResponse() = default;
    AWS_EC2_API CancelCapacityReservationFleetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CancelCapacityReservationFleetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Capacity Reservation Fleets that were successfully
     * cancelled.</p>
     */
    inline const Aws::Vector<CapacityReservationFleetCancellationState>& GetSuccessfulFleetCancellations() const { return m_successfulFleetCancellations; }
    template<typename SuccessfulFleetCancellationsT = Aws::Vector<CapacityReservationFleetCancellationState>>
    void SetSuccessfulFleetCancellations(SuccessfulFleetCancellationsT&& value) { m_successfulFleetCancellationsHasBeenSet = true; m_successfulFleetCancellations = std::forward<SuccessfulFleetCancellationsT>(value); }
    template<typename SuccessfulFleetCancellationsT = Aws::Vector<CapacityReservationFleetCancellationState>>
    CancelCapacityReservationFleetsResponse& WithSuccessfulFleetCancellations(SuccessfulFleetCancellationsT&& value) { SetSuccessfulFleetCancellations(std::forward<SuccessfulFleetCancellationsT>(value)); return *this;}
    template<typename SuccessfulFleetCancellationsT = CapacityReservationFleetCancellationState>
    CancelCapacityReservationFleetsResponse& AddSuccessfulFleetCancellations(SuccessfulFleetCancellationsT&& value) { m_successfulFleetCancellationsHasBeenSet = true; m_successfulFleetCancellations.emplace_back(std::forward<SuccessfulFleetCancellationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation Fleets that could not be
     * cancelled.</p>
     */
    inline const Aws::Vector<FailedCapacityReservationFleetCancellationResponse>& GetFailedFleetCancellations() const { return m_failedFleetCancellations; }
    template<typename FailedFleetCancellationsT = Aws::Vector<FailedCapacityReservationFleetCancellationResponse>>
    void SetFailedFleetCancellations(FailedFleetCancellationsT&& value) { m_failedFleetCancellationsHasBeenSet = true; m_failedFleetCancellations = std::forward<FailedFleetCancellationsT>(value); }
    template<typename FailedFleetCancellationsT = Aws::Vector<FailedCapacityReservationFleetCancellationResponse>>
    CancelCapacityReservationFleetsResponse& WithFailedFleetCancellations(FailedFleetCancellationsT&& value) { SetFailedFleetCancellations(std::forward<FailedFleetCancellationsT>(value)); return *this;}
    template<typename FailedFleetCancellationsT = FailedCapacityReservationFleetCancellationResponse>
    CancelCapacityReservationFleetsResponse& AddFailedFleetCancellations(FailedFleetCancellationsT&& value) { m_failedFleetCancellationsHasBeenSet = true; m_failedFleetCancellations.emplace_back(std::forward<FailedFleetCancellationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CancelCapacityReservationFleetsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityReservationFleetCancellationState> m_successfulFleetCancellations;
    bool m_successfulFleetCancellationsHasBeenSet = false;

    Aws::Vector<FailedCapacityReservationFleetCancellationResponse> m_failedFleetCancellations;
    bool m_failedFleetCancellationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
